#ifndef QFCOMPRETRADESYSTEM_ATMMARKETDATAPLUGINS_KR_QUANT_MDPLUGIN_H
#define QFCOMPRETRADESYSTEM_ATMMARKETDATAPLUGINS_KR_QUANT_MDPLUGIN_H
#include <string>
#include <boost/thread.hpp>
#include <thread>                // std::thread
#include <mutex>                // std::mutex, std::unique_lock
#include <condition_variable>    // std::condition_variable
#include <atomic>
#include <boost/asio.hpp>
#include <memory>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <future>
#include <tuple>
#include <boost/log/common.hpp>


#include "mds_api/mds_api.h"
#include "mds_api/parser/mds_protocol_parser.h"
#include "mds_api/parser/json_parser/mds_json_parser.h"
#include "sutil/logger/spk_log.h"

#include "SeverityLevel.h"
#include "FutureTick.h"

#include "AtmPluginInterface.h"
#include "AtmMarketDataPluginInterface.h"
using namespace boost::posix_time;
using namespace boost::gregorian;
using namespace boost::asio;
using namespace std;
class CKrQuantMDPluginImp:
	public MAtmMarketDataPluginInterface
{

//��־����
	boost::log::sources::severity_logger< severity_levels > m_Logger;

//��ʱ������
	io_service  m_IOservice;
	deadline_timer m_StartAndStopCtrlTimer;
	std::future<bool> m_futTimerThreadFuture;

	string m_strUsername;

//�˺��̹߳ؼ�����
	unsigned int m_uRequestID = 0;
	bool m_boolIsOnline = false;

//��¼�ǳ�ͬ��
	std::mutex m_mtxLoginSignal;
	condition_variable m_cvLoginSignalCV;

//�۲��߹���
	boost::shared_mutex m_mapObserverStructProtector;
	unordered_map<string, pair<CFutureTick,list< tuple < MStrategy*, TMarketDataIdType, boost::shared_mutex*> > > > m_mapInsid2Strategys;
	unordered_map< MStrategy*, list<string> > m_mapStrategy2Insids;

	MdsApiClientEnvT    cliEnv;

public:
	static const string s_strAccountKeyword;
	CKrQuantMDPluginImp();
	~CKrQuantMDPluginImp();
	int m_intRefCount = 0;
	virtual bool IsOnline();
	virtual void IncreaseRefCount();
	virtual void DescreaseRefCount();
	virtual int GetRefCount();
	virtual void CheckSymbolValidity(const unordered_map<string, string> &);
	virtual string GetCurrentKeyword();
	virtual string GetProspectiveKeyword(const ptree &);
	virtual void GetState(ptree & out);
	virtual void MDInit(const ptree &);
	virtual void MDUnload();

	virtual void MDAttachStrategy(
		MStrategy *, 
		TMarketDataIdType,
		const unordered_map<string, string> &,
		boost::shared_mutex &);
	virtual void MDDetachStrategy(MStrategy*/*IN*/);

public:
	void MDDestoryAll();
	BOOL MDResubscribeByCodePrefix(MdsApiSessionInfoT *pTcpChannel,
        const char *pCodeListString);
	void OnWaitOnMsg();

private:
	bool Start();
	void Stop();
	void ShowMessage(severity_levels,const char * fmt, ...);
	void TimerHandler();
	void OnError();
};
#endif

