#ifndef QFCOMPRETRADESYSTEM_ATMMARKETDATAPLUGINS_QUANTTECHSTOCK_MDPLUGIN_QT_STOCK_MDPlugin_H_
#define QFCOMPRETRADESYSTEM_ATMMARKETDATAPLUGINS_QUANTTECHSTOCK_MDPLUGIN_QT_STOCK_MDPlugin_H_
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

#include "SeverityLevel.h"
#include "StockTick.h"

#include "AtmPluginInterface.h"
#include "AtmMarketDataPluginInterface.h"
#include "QuantTechStockQuotationInterface.h"
using namespace boost::posix_time;
using namespace boost::gregorian;
using namespace boost::asio;
using namespace std;

class CQT_STOCK_MDPlugin :
	public MAtmMarketDataPluginInterface,
	public CQuantTechStockQuotationSpi
{
#pragma region ��־����
	boost::log::sources::severity_logger< severity_levels > m_Logger;
#pragma endregion

#pragma region ��ʱ������
	io_service  m_IOservice;
	deadline_timer m_StartAndStopCtrlTimer;
	std::future<bool> m_futTimerThreadFuture;
#pragma endregion

#pragma region �ӿ�����
	std::shared_ptr<MQuantTechStockQuotationInterface> m_pUserApi;
#pragma endregion

#pragma region �˺��̹߳ؼ�����
	unsigned int m_uRequestID = 0;
	bool m_boolIsOnline = false;
#pragma endregion

#pragma region �۲��߹���
	boost::shared_mutex m_mapObserverStructProtector;
	unordered_map<string, pair<CStockTick,list< tuple < MStrategy*, TMarketDataIdType, boost::shared_mutex*, atomic_uint_least64_t *> > > > m_mapInsid2Strategys;
	unordered_map< MStrategy*, list<string> > m_mapStrategy2Insids;
#pragma endregion
	string m_strIP;
	string m_strPort;
public:
	static const string s_strAccountKeyword;
	CQT_STOCK_MDPlugin();
	~CQT_STOCK_MDPlugin();
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
	virtual void OnRspError(const char * errormsg);
	virtual void OnRspSubMarketData(const char * symbol);
	virtual void OnRspUnSubMarketData(const char * symbol);
	virtual void OnRtnDepthMarketData(const CStockTick *);
#pragma endregion
};
#endif

