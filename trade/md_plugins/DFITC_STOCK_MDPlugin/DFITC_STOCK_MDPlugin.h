#ifndef _QFCOMPRETRADESYSTEM_ATMMARKETDATAPLUGINS_CTP_MDPLUGIN_DFITC_Stock_MDPlugin_H_
#define _QFCOMPRETRADESYSTEM_ATMMARKETDATAPLUGINS_CTP_MDPLUGIN_DFITC_Stock_MDPlugin_H_
#include <string>
#include <boost/log/common.hpp>
#include <boost/thread.hpp>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <boost/asio.hpp>
#include <memory>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <thread>
#include <future>
#include <tuple>
#include "DFITCSECMdApi.h"
#include "SeverityLevel.h"
#include "StockTick.h"
#include "AtmMarketDataPluginInterface.h"
using namespace boost::posix_time;
using namespace boost::gregorian;
using namespace boost::asio;
using namespace std;

class CDFITC_STOCK_MDPlugin :
	public MAtmMarketDataPluginInterface,
	public DFITCSECMdSpi
{
#pragma region ��־����
	boost::log::sources::severity_logger< severity_levels > m_Logger;
#pragma endregion

#pragma region ��ʱ������
	io_service  m_IOservice;
	deadline_timer m_StartAndStopCtrlTimer;
	std::future<bool> m_futTimerThreadFuture;
#pragma endregion

	string m_strServerAddress;
	string m_strAccountID;
	string m_strPassword;

#pragma region �ӿ�����
	std::shared_ptr<DFITCSECMdApi> m_pUserApi;
#pragma endregion

#pragma region �˺��̹߳ؼ�����
	unsigned int m_uRequestID = 0;
	bool m_boolIsOnline = false;
#pragma endregion

#pragma region ��¼�ǳ�ͬ��
	std::mutex m_mtxLoginSignal;
	condition_variable m_cvLoginSignalCV;
	std::mutex m_mtxLogoutSignal;
	condition_variable m_cvLogoutSignalCV;
#pragma endregion

#pragma region �۲��߹���
	boost::shared_mutex m_mapObserverStructProtector;
	unordered_map<string, pair<CStockTick,list< tuple < MStrategy*, TMarketDataIdType, boost::shared_mutex*, atomic_uint_least64_t *> > > > m_mapInsid2Strategys;
	unordered_map< MStrategy*, list<string> > m_mapStrategy2Insids;
#pragma endregion

public:
	static const string s_strTypeword;
	static const string s_strAccountKeyword;
	CDFITC_STOCK_MDPlugin();
	~CDFITC_STOCK_MDPlugin();
	int m_intRefCount = 0;
	atomic_bool m_abIsPending;
	bool IsPedding();
	virtual bool IsOnline();
	virtual void IncreaseRefCount();
	virtual void DescreaseRefCount();
	virtual int GetRefCount();
	virtual void CheckSymbolValidity(const unordered_map<string, string> &);
	virtual string GetCurrentKeyword();
	virtual string GetProspectiveKeyword(const ptree &);
	virtual void GetState(ptree & out);
	virtual void MDInit(const ptree &);
	virtual void MDHotUpdate(const ptree &);
	virtual void MDUnload();
	atomic<bool> m_adbIsPauseed;
	virtual void Pause();
	virtual void Continue();
	virtual void MDAttachStrategy(
		MStrategy *, 
		TMarketDataIdType,
		const unordered_map<string, string> &,
		boost::shared_mutex &,
		atomic_uint_least64_t *);
	virtual void MDDetachStrategy(MStrategy*/*IN*/);
private:
	bool Start();
	void Stop();
	void ShowMessage(severity_levels,const char * fmt, ...);
	void TimerHandler(boost::asio::deadline_timer* timer, const boost::system::error_code& err);
#pragma region CThostFtdcMdSpi
	virtual void OnFrontConnected();
	virtual void OnFrontDisconnected(int nReason);
	virtual void OnRspStockUserLogin(struct DFITCSECRspUserLoginField * pRspUserLogin, struct DFITCSECRspInfoField * pRspInfo);
	virtual void OnRspStockUserLogout(struct DFITCSECRspUserLogoutField * pRspUsrLogout, struct DFITCSECRspInfoField * pRspInfo);
	virtual void OnRspStockSubMarketData(struct DFITCSECSpecificInstrumentField * pSpecificInstrument, struct DFITCSECRspInfoField * pRspInfo);
	virtual void OnRspStockUnSubMarketData(struct DFITCSECSpecificInstrumentField * pSpecificInstrument, struct DFITCSECRspInfoField * pRspInfo);
	virtual void OnRspError(struct DFITCSECRspInfoField *pRspInfo);
	virtual void OnStockMarketData(struct DFITCStockDepthMarketDataField * pMarketDataField);
#pragma endregion
};

#endif