#include "KR_QUANT_MDPlugin.h"
#include <stdarg.h>
#include <thread>
#include "AutoPend.h"

const string CKrQuantMDPluginImp::s_strAccountKeyword="serveraddress;username;";
extern char ProcessName[256];
const char THE_CONFIG_FILE_NAME[100]="/root/thunder-trade-zpquant/third/Kr360Quant/conf/mds_client.conf";
	//读取配置
MdsApiClientEnvT cliEnv = {NULLOBJ_MDSAPI_CLIENT_ENV};

CKrQuantMDPluginImp::CKrQuantMDPluginImp():m_StartAndStopCtrlTimer(m_IOservice),m_abIsPending(false), m_adbIsPauseed(false)
{
}

CKrQuantMDPluginImp::~CKrQuantMDPluginImp()
{
}

bool CKrQuantMDPluginImp::IsPedding()
{
	return m_abIsPending.load();
}

bool CKrQuantMDPluginImp::IsOnline()
{
	return m_boolIsOnline;
}

void CKrQuantMDPluginImp::IncreaseRefCount()
{
	m_intRefCount++;
}

void CKrQuantMDPluginImp::DescreaseRefCount()
{
	m_intRefCount--;
}

int CKrQuantMDPluginImp::GetRefCount()
{
	return m_intRefCount;
}

/*
{"type":"reqdeploynewstrategy","bin":"strategy_simple_strategy","archive":"",
"comment":"","param":{"a":"5","b":"0.200000","c":"2","aa":"5","bb":"0.200000","cc":"2"},
"dataid":{"0":{"symboldefine":{"type":"future","instrumentid":"CF903","exchangeid":"CZCE"},
"marketdatasource":"ctp_md&120842&9999","tradesource":"ctp_td&120842&9999"}}}
*/
void CKrQuantMDPluginImp::CheckSymbolValidity(const unordered_map<string, string> & insConfig)
{
	auto Type = insConfig.find("type");
	if (Type == insConfig.end())
		throw std::runtime_error("Can not find the <type> of the the symbol.");
	if (Type->second != "kr360")
		throw std::runtime_error("kr360 MarketDataSource does not support this symbol.");
	auto InstrumentNode = insConfig.find("instrumentid");
	if (InstrumentNode == insConfig.end())
		throw std::runtime_error("<instrumentid> not found.");
}

string CKrQuantMDPluginImp::GetCurrentKeyword()
{
	return "kr_mds&"+m_strUsername;
}

string CKrQuantMDPluginImp::GetProspectiveKeyword(const ptree & in)
{
	string retKey = "kr_mds&";
	auto temp = in.find("username");
	if (temp != in.not_found())
	{
		retKey += temp->second.data();
	}
	else
		throw std::runtime_error("kr_mds:can not find <username>");

	return retKey;
}

void CKrQuantMDPluginImp::GetState(ptree & out)
{
	if(m_boolIsOnline)
		out.put("online","true");
	else
		out.put("online", "false");
	out.put("username", m_strUsername);
}

void CKrQuantMDPluginImp::MDInit(const ptree & in)
{
	ShowMessage(severity_levels::normal,"... CKrQuantMDPluginImp::MDInit!\n");
	//读取配置
    cliEnv = {NULLOBJ_MDSAPI_CLIENT_ENV};

    Start();

	m_StartAndStopCtrlTimer.expires_from_now(time_duration(0,0,3,0));
	m_StartAndStopCtrlTimer.async_wait(boost::bind(&CKrQuantMDPluginImp::TimerHandler,this));
	m_futTimerThreadFuture=std::async([this] {
		this->m_IOservice.run();
		return true;
	});
}

void CKrQuantMDPluginImp::MDHotUpdate(const ptree & NewConfig)
{
	MDUnload();
	m_IOservice.reset();
	MDInit(NewConfig);
}

void CKrQuantMDPluginImp::TimerHandler()
{
	time_duration tid = second_clock::universal_time().time_of_day();
	ptime nextActiveTime=not_a_date_time;
	if (tid >= time_duration(0, 0, 0, 0) && tid < time_duration(0, 59, 0, 0))
	{
		nextActiveTime = ptime(second_clock::universal_time().date(), time_duration(0, 59, 30, 0));
	}
	else if (tid >= time_duration(0, 59, 0, 0) && tid < time_duration(7, 14, 0, 0))
	{
		if (false == m_boolIsOnline)
			Start();
		nextActiveTime = ptime(second_clock::universal_time().date(), time_duration(7, 16, 30, 0));
	}
	else if (tid >= time_duration(7, 14, 0, 0) && tid < time_duration(12, 59, 0, 0))
	{
		if (true == m_boolIsOnline)
			Stop();
		nextActiveTime = ptime(second_clock::universal_time().date(), time_duration(12, 59, 30, 0));
	}
	else if (tid >= time_duration(12, 59, 0, 0) && tid < time_duration(18, 29, 0, 0))
	{
		if (false == m_boolIsOnline)
			Start();
		nextActiveTime = ptime(second_clock::universal_time().date(), time_duration(18, 31, 0, 0));
	}
	else if (tid >= time_duration(18, 29, 0, 0) && tid < time_duration(23, 59, 59, 0))
	{
		if (true == m_boolIsOnline)
			Stop();
		nextActiveTime = ptime(second_clock::universal_time().date()+days(1), time_duration(0, 0, 30, 0));
	}
	m_StartAndStopCtrlTimer.expires_at(nextActiveTime);
	m_StartAndStopCtrlTimer.async_wait(boost::bind(&CKrQuantMDPluginImp::TimerHandler, this));
	ShowMessage(normal, "%s: Next:%s", GetCurrentKeyword().c_str(), to_simple_string(nextActiveTime).c_str());
}

bool CKrQuantMDPluginImp::Start()
{
	m_uRequestID = 0;
	m_boolIsOnline = false;

    /* 初始化客户端环境 (配置文件参见: mds_client_sample.conf) */
    if (! MdsApi_InitAllByConvention(&cliEnv, THE_CONFIG_FILE_NAME)) 
    {
    	ShowMessage(severity_levels::error, "kr_mds:MdsApi_InitAllByConvention failed.");
        return false;
    }

    ShowMessage(severity_levels::normal,"... MdsApi_InitAllByConvention,初始化客户端环境,成功!\n");

    //test
    OnWaitOnMsg();

	// std::unique_lock<std::mutex> lk(m_mtxLoginSignal);
	// m_cvLoginSignalCV.wait_for(lk,std::chrono::seconds(10));
	// if (m_boolIsOnline)
	// 	return true;
	// else
	// 	return false;

	return true;
}

void CKrQuantMDPluginImp::Stop()
{
	if (m_boolIsOnline)
	{
		boost::shared_lock<boost::shared_mutex> lg(m_mapObserverStructProtector);//Ð´Ëø
		unsigned int InstrumentCount = m_mapInsid2Strategys.size();
		typedef char * NAME;
		char * * ppInstrumentID = new NAME[InstrumentCount];
		auto pos = m_mapInsid2Strategys.begin();
		for (unsigned int i = 0;i < InstrumentCount;++i, ++pos)
		{
			ppInstrumentID[i] = new char[31];//TThostFtdcInstrumentIDType
			strncpy(ppInstrumentID[i], pos->first.c_str(), 31);
		}

		MdsApi_LogoutAll(&cliEnv, TRUE);

		for (auto i = 0;i < InstrumentCount;i++)
			delete[] ppInstrumentID[i];
		delete[] ppInstrumentID;
	}

	ShowMessage(
		severity_levels::normal,
		"%s loginout succeed!",
		GetCurrentKeyword().c_str());
	m_boolIsOnline = false;
}

void CKrQuantMDPluginImp::MDUnload()
{
	
	Stop();
	m_StartAndStopCtrlTimer.cancel();
	m_IOservice.stop();
	m_futTimerThreadFuture.get();
}

void CKrQuantMDPluginImp::Pause()
{
	m_adbIsPauseed.store(true);
}

void CKrQuantMDPluginImp::Continue()
{
	m_adbIsPauseed.store(false);
}

void CKrQuantMDPluginImp::OnError()
{
	if (m_boolIsOnline)
	{
		boost::shared_lock<boost::shared_mutex> lg(m_mapObserverStructProtector);//Ð´Ëø
		unsigned int InstrumentCount = m_mapInsid2Strategys.size();
		typedef char * NAME;
		char * * ppInstrumentID = new NAME[InstrumentCount];
		auto pos = m_mapInsid2Strategys.begin();
		for (unsigned int i = 0;i < InstrumentCount;++i, ++pos)
		{
			ppInstrumentID[i] = new char[31];//TThostFtdcInstrumentIDType
			strncpy(ppInstrumentID[i], pos->first.c_str(), 31);
		}

		MdsApi_DestoryAll(&cliEnv);

		for (auto i = 0;i < InstrumentCount;i++)
			delete[] ppInstrumentID[i];
		delete[] ppInstrumentID;
	}

	ShowMessage(
		severity_levels::normal,
		"%s DestoryAll succeed!",
		GetCurrentKeyword().c_str());
	m_boolIsOnline = false;
}

void CKrQuantMDPluginImp::MDDestoryAll()
{
	
	OnError();
	m_StartAndStopCtrlTimer.cancel();
	m_IOservice.stop();
	m_futTimerThreadFuture.get();
}

void CKrQuantMDPluginImp::ShowMessage(severity_levels lv, const char * fmt, ...)
{
	char buf[512];
	va_list arg;
	va_start(arg, fmt);
	vsnprintf(buf, 512, fmt, arg);
	va_end(arg);
	boost::log::sources::severity_logger< severity_levels > m_Logger;
	BOOST_LOG_SEV(m_Logger, lv) << buf;
}

void CKrQuantMDPluginImp::MDAttachStrategy(MStrategy * strategy,TMarketDataIdType dataid,const unordered_map<string, string> & insConfig,boost::shared_mutex & mtx,atomic_uint_least64_t * updatetime)
{
	ShowMessage(severity_levels::normal,"... CKrQuantMDPluginImp::MDAttachStrategy!\n");

	boost::unique_lock<boost::shared_mutex> lg(m_mapObserverStructProtector);//Ð´Ëø

	auto InstrumentID = insConfig.find("instrumentid")->second;
	auto findres = m_mapInsid2Strategys.find(InstrumentID);
	m_mapStrategy2Insids[strategy].push_back(InstrumentID);
	if (findres != m_mapInsid2Strategys.end())
		findres->second.second.push_back(make_tuple(strategy, dataid, &mtx));
	else
	{
		m_mapInsid2Strategys[InstrumentID].second.push_back(make_tuple(strategy, dataid, &mtx));
		if (m_boolIsOnline&&(m_mapInsid2Strategys[InstrumentID].second.size()==1))
		{
			typedef char * NAME;
			char * * ppInstrumentID = new NAME[1];
			ppInstrumentID[0] = new char[31];//TThostFtdcInstrumentIDType
			strncpy(ppInstrumentID[0], InstrumentID.c_str(), 31);
			// if (0 != m_pUserApi->SubscribeMarketData(ppInstrumentID, 1))
			// 	ShowMessage(
			// 		severity_levels::error,
			// 		"send subscribemarketdata(%s) failed.", 
			// 		InstrumentID.c_str());

			/* 根据证券代码列表重新订阅行情 (根据代码后缀区分所属市场) */
        	if (!MDResubscribeByCodePrefix(&cliEnv.tcpChannel,InstrumentID.c_str())) 
        	{
        		ShowMessage(
					severity_levels::error,
					"send MdsApiSample_ResubscribeByCodePrefix(%s) failed.", 
					InstrumentID.c_str());
            	MDDestoryAll();
       		}

			delete[] ppInstrumentID[0];
			delete[] ppInstrumentID;

			OnWaitOnMsg();
		}
	}
}

void CKrQuantMDPluginImp::MDDetachStrategy(MStrategy * strategy)
{
	boost::unique_lock<boost::shared_mutex> lg(m_mapObserverStructProtector);//Ð´Ëø

	for (auto & ins : m_mapStrategy2Insids[strategy])
	{
		for (auto pos = m_mapInsid2Strategys[ins].second.begin();pos != m_mapInsid2Strategys[ins].second.end();)
		{
			if (get<0>(*pos) == strategy)
				m_mapInsid2Strategys[ins].second.erase(pos++);
			else
				pos++;
		}
		if (m_boolIsOnline && m_mapInsid2Strategys[ins].second.empty())
		{
			typedef char * NAME;
			char * * ppInstrumentID = new NAME[1];
			ppInstrumentID[0] = new char[31];//TThostFtdcInstrumentIDType
			strncpy(ppInstrumentID[0], ins.c_str(), 31);
			// if (0 != m_pUserApi->UnSubscribeMarketData(ppInstrumentID, 1))
			// 	ShowMessage(
			// 		severity_levels::error, 
			// 		"%s: send unsubscribemarketdata(%s) failed.", 
			// 		GetCurrentKeyword().c_str(),
			// 		ins.c_str());

			/* 根据证券代码列表重新订阅行情 (根据代码后缀区分所属市场) */
        	if (!MDResubscribeByCodePrefix(&cliEnv.tcpChannel,"")) 
        	{
        		ShowMessage(
					severity_levels::error,
					"send unsubscribemarketdata(%s) failed.", 
					GetCurrentKeyword().c_str());
            	MDDestoryAll();
       		}

			delete[] ppInstrumentID[0];
			delete[] ppInstrumentID;
			m_mapInsid2Strategys.erase(ins);
		}
	}
	m_mapStrategy2Insids.erase(strategy);

}

/**
 * 通过证券代码列表, 重新订阅行情数据 (根据代码前缀区分所属市场)
 *
 * @param   pTcpChannel         会话信息
 * @param   pCodeListString     证券代码列表字符串 (以空格或逗号/分号/竖线分割的字符串)
 * @return  TRUE 成功; FALSE 失败
 */
BOOL CKrQuantMDPluginImp::MDResubscribeByCodePrefix(MdsApiSessionInfoT *pTcpChannel,
        const char *pCodeListString) {
    /* 上海证券代码前缀 */
    static const char       SSE_CODE_PREFIXES[] = \
            "009, 01, 02, "                 /* 国债 */ \
            "10, 11, 12, 13, 18, 19, "      /* 债券 (企业债、可转债等) */ \
            "20, "                          /* 债券 (回购) */ \
            "5, "                           /* 基金 */ \
            "6, "                           /* A股 */ \
            "#000";                         /* 指数 (@note 与深圳股票代码重合) */

    /* 深圳证券代码前缀 */
    static const char       SZSE_CODE_PREFIXES[] = \
            "00, "                          /* 股票 */ \
            "10, 11, 12, 13, "              /* 债券 */ \
            "15, 16, 17, 18, "              /* 基金 */ \
            "30"                            /* 创业板 */ \
            "39";                           /* 指数 */

    return MdsApi_SubscribeByStringAndPrefixes(pTcpChannel,
            pCodeListString, (char *) NULL,
            SSE_CODE_PREFIXES, SZSE_CODE_PREFIXES,
            MDS_SECURITY_TYPE_STOCK, MDS_SUB_MODE_SET,
            MDS_SUB_DATA_TYPE_L1_SNAPSHOT
                    | MDS_SUB_DATA_TYPE_L2_SNAPSHOT
                    | MDS_SUB_DATA_TYPE_L2_BEST_ORDERS
                    | MDS_SUB_DATA_TYPE_L2_ORDER
                    | MDS_SUB_DATA_TYPE_L2_TRADE);
}

/**
 * 进行消息处理的回调函数
 *
 * @param   pSessionInfo    会话信息
 * @param   pMsgHead        消息头
 * @param   pMsgBody        消息体数据
 * @param   pCallbackParams 外部传入的参数
 * @return  大于等于0，成功；小于0，失败（错误号）
 */

//可以在该函数上做同一行情的分发,让部署的不同策略从此处得到所需要的行情数据
static __inline int32
_MdsApi_OnRtnDepthMarketData(MdsApiSessionInfoT *pSessionInfo,
        SMsgHeadT *pMsgHead, void *pMsgBody, void *pCallbackParams) {
    MdsMktRspMsgBodyT   *pRspMsg = (MdsMktRspMsgBodyT *) pMsgBody;

    ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"... MdsApi_OnRtnDepthMarketData 接收到消息)\n");

    char encodeBuf[8192] = {0};
    char *pStrMsg = (char *) NULL;
    char sendJsonDataStr[4096];

    if (pSessionInfo->protocolType == SMSG_PROTO_BINARY) {
        /* 将行情消息转换为JSON格式的文本数据 */
        pStrMsg = (char *) MdsJsonParser_EncodeRsp(
                pMsgHead, (MdsMktRspMsgBodyT *) pMsgBody,
                encodeBuf, sizeof(encodeBuf),
                pSessionInfo->channel.remoteAddr);
    } else {
        pStrMsg = (char *) pMsgBody;
    }

	const ptime now = microsec_clock::local_time();
	const time_duration td = now.time_of_day();
    
    time_t sendDataCurrentTime = td.total_milliseconds();
    time_t GetLastRecvTime = MdsApi_GetLastRecvTime(pSessionInfo);
    ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"... sendDataCurrentTime:%ld\n",sendDataCurrentTime);

    if (pMsgHead->msgSize > 0) {
        pStrMsg[pMsgHead->msgSize - 1] = '\0';
        sprintf(sendJsonDataStr,
                "{" \
                "\"msgType\":%" __SPK_FMT_HH__ "u, " \
                "\"sendDCT\":%ld, " \
                "\"LastRecvT\":%ld, " \
                "\"mktData\":%s" \
                "}\n",
                pMsgHead->msgId,
                sendDataCurrentTime,
                GetLastRecvTime,
                pStrMsg);
    }
    else
    {
        sprintf(sendJsonDataStr,
                "{" \
                "\"msgType\":%" __SPK_FMT_HH__ "u, " \
                "\"sendDCT\":%ld, " \
                "\"LastRecvT\":%ld, " \
                "\"mktData\":{}" \
                "}",
                pMsgHead->msgId,
                sendDataCurrentTime,
                GetLastRecvTime)
                ;
    } 

    /*
     * 根据消息类型对行情消息进行处理
     */
    switch (pMsgHead->msgId) {
    case MDS_MSGTYPE_L2_TRADE:
        /* 处理Level2逐笔成交消息 */
        // printf("... 接收到Level2逐笔成交消息 (exchId[%" __SPK_FMT_HH__ "u], instrId[%d])\n",
        //         pRspMsg->trade.exchId,
        //         pRspMsg->trade.instrId);
        // ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"... 接收到Level2逐笔成交消息 (exchId[%u], instrId[%d])\n",
		      //          pRspMsg->trade.exchId,
		      //          pRspMsg->trade.instrId);
    	((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"%s\n",sendJsonDataStr);
        break;

    case MDS_MSGTYPE_L2_ORDER:
        /* 处理Level2逐笔委托消息 */
        // printf("... 接收到Level2逐笔委托消息 (exchId[%" __SPK_FMT_HH__ "u], instrId[%d])\n",
        //         pRspMsg->order.exchId,
        //         pRspMsg->order.instrId);
        // ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"... 接收到Level2逐笔委托消息 (exchId[%u], instrId[%d])\n",
		      //           pRspMsg->trade.exchId,
		      //           pRspMsg->trade.instrId);
    	((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"%s\n",sendJsonDataStr);
        break;

    case MDS_MSGTYPE_L2_MARKET_DATA_SNAPSHOT:
    case MDS_MSGTYPE_L2_BEST_ORDERS_SNAPSHOT:
    case MDS_MSGTYPE_L2_MARKET_DATA_INCREMENTAL:
    case MDS_MSGTYPE_L2_BEST_ORDERS_INCREMENTAL:
    case MDS_MSGTYPE_L2_MARKET_OVERVIEW:
    case MDS_MSGTYPE_L2_VIRTUAL_AUCTION_PRICE:
        /* 处理Level2快照行情消息 */
        //ShowMessage(severity_levels::normal,"... 接收到Level2快照行情消息 (exchId[%u], instrId[%d])\n",
        //        pRspMsg->mktDataSnapshot.head.exchId,
         //       pRspMsg->mktDataSnapshot.head.instrId);
    	((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"%s\n",sendJsonDataStr);
        break;

    case MDS_MSGTYPE_MARKET_DATA_SNAPSHOT_FULL_REFRESH:
    case MDS_MSGTYPE_OPTION_SNAPSHOT_FULL_REFRESH:
    case MDS_MSGTYPE_INDEX_SNAPSHOT_FULL_REFRESH:
        /* 处理Level1快照行情消息 */
        //ShowMessage(severity_levels::normal,"... 接收到Level1快照行情消息 (exchId[%u], instrId[%d])\n",
         //       pRspMsg->mktDataSnapshot.head.exchId,
         //       pRspMsg->mktDataSnapshot.head.instrId);
    	((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"%s\n",sendJsonDataStr);
        break;

    case MDS_MSGTYPE_SECURITY_STATUS:
        /* 处理(深圳)证券状态消息 */
        //ShowMessage(severity_levels::normal,"... 接收到(深圳)证券状态消息 (exchId[%u], instrId[%d])\n",
         //       pRspMsg->securityStatus.exchId,
         //       pRspMsg->securityStatus.instrId);
    	((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"%s\n",sendJsonDataStr);
        break;

    case MDS_MSGTYPE_TRADING_SESSION_STATUS:
        /* 处理(上证)市场状态消息 */
        //ShowMessage(severity_levels::normal,"... 接收到(上证)市场状态消息 (exchId[%u], TradingSessionID[%s])\n",
        //        pRspMsg->trdSessionStatus.exchId,
        //        pRspMsg->trdSessionStatus.TradingSessionID);
    	((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"%s\n",sendJsonDataStr);
        break;

    case MDS_MSGTYPE_MARKET_DATA_REQUEST:
        /* 处理行情订阅请求的应答消息 */
        if (pMsgHead->status == 0) {
            ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"... 行情订阅请求应答, 行情订阅成功!\n");
        } else {
            ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::error,"... 行情订阅请求应答, 行情订阅失败! " \
                    "errCode[%02u %02u]\n",
                    pMsgHead->status, pMsgHead->detailStatus);
        }
        break;

    case MDS_MSGTYPE_TEST_REQUEST:
        /* 处理测试请求的应答消息 */
        ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::normal,"... 接收到测试请求的应答消息 (origSendTime[%s], respTime[%s])\n",
                pRspMsg->testRequestRsp.origSendTime,
                pRspMsg->testRequestRsp.respTime);
        break;

    case MDS_MSGTYPE_HEARTBEAT:
        /* 忽略心跳消息 */
        break;

    default:
        ((CKrQuantMDPluginImp *) pCallbackParams) -> ShowMessage(severity_levels::error,"无效的消息类型, 忽略之! msgId[0x%02X], server[%s:%d]",
                pMsgHead->msgId, pSessionInfo->channel.remoteAddr,
                pSessionInfo->channel.remotePort);
        return EFTYPE;
    }

    return 0;
}

void CKrQuantMDPluginImp::OnWaitOnMsg()
{
	ShowMessage(severity_levels::normal,"... CKrQuantMDPluginImp::OnWaitOnMsg!\n");
    //std::function<int32(MdsApiSessionInfoT *,SMsgHeadT *,void *,void *)> MarketDataCallBack = CKrQuantMDPluginImp::MdsApi_OnRtnDepthMarketData;
	//MarketDataCallBack mdcallback = std::bind(&CKrQuantMDPluginImp::MdsApi_OnRtnDepthMarketData,this,_1,_2,_3,_4);
	//auto mdcallback = std::bind(&CKrQuantMDPluginImp::MdsApi_OnRtnDepthMarketData,this,_1,_2,_3,_4);
	
	//MarketDataCallBack = MdsApi_OnRtnDepthMarketData;
	static const int32  THE_TIMEOUT_MS = 1000;
	ShowMessage(severity_levels::normal,"... _MdsApi_OnRtnDepthMarketData,[address:%p]!\n",&_MdsApi_OnRtnDepthMarketData);

    /* 等待行情消息到达, 并通过回调函数对消息进行处理
    110 是 ETIMEDOUT
    MdsApi_WaitOnMsg 返回超时是正常的，表示在指定的时间内没有收到任何网络消息 
	当WaitOnMsg的返回值小于0时，只有 ETIMEDOUT 是正常的，其它小于0的返回值都可以认为是连接异常，需要重建连接
    */

    int ret = MdsApi_WaitOnMsg(&cliEnv.tcpChannel, THE_TIMEOUT_MS,
            _MdsApi_OnRtnDepthMarketData, (void *)this);

    ShowMessage(severity_levels::normal,"... MdsApi_WaitOnMsg,[ret:%d]!\n",ret);

    if (unlikely(ret < 0) && (ret != -110)) {
        if (likely(SPK_IS_NEG_ETIMEDOUT(ret))) {
            /* 执行超时检查 (检查会话是否已超时) */
            ;
        }

        if (SPK_IS_NEG_EPIPE(ret)) {
            /* 连接已断开 */
        }
        MDDestoryAll();
    }

    // while(1)
    // {
    // 	sleep(100);
    // }
}


