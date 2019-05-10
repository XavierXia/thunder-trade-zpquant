#ifndef _TWS_DATA_STRUCT_DEF_H_
#define _TWS_DATA_STRUCT_DEF_H_

#include "TwsDataTypeDef.h"
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
using namespace boost::posix_time;
using namespace boost::gregorian;
struct CTwsRspUserLoginField
{
	TTwsOrderIdType m_intNextValidId;
	TTwsTimeType m_LongServerTime;
	char m_strManagedAccounts[64];
};

struct CTwsDepthMarketDataField
{
		
	bool	m_boolValid;
	long	m_longConId;
	char	m_strSymbol[64];
	char	m_strSecType[64];
	char	m_strExpiry[64];
	double	m_dbStrike;
	char	m_strRight[64];
	char	m_strMultiplier[64];
	char	m_strExchange[64];
	char	m_strPrimaryExchange[64];
	char	m_strCurrency[64];
	char	m_strLocalSymbol[64];
	char	m_strTradingClass[64];
	bool	m_boolIncludeExpired;
	char	m_strSecIdType[64];
	char	m_strSecId[64];
	ptime	m_datetimeUTCDateTime;
	TTwsPriceType	m_dbLastPrice;
	TTwsVolumeType	m_intVolume;
	TTwsPriceType	m_dbBidPrice1;
	TTwsVolumeType	m_intBidVolume1;
	TTwsPriceType	m_dbAskPrice1;
	TTwsVolumeType	m_intAskVolume1;
		
	TTwsPriceType	m_dbOpenPrice;
	TTwsPriceType	m_dbHighPrice;
	TTwsPriceType	m_dbLowPrice;
	TTwsPriceType	m_dbClosePrice;
	TTwsVolumeType	m_intLastSize;
};

struct CTwsInputOrderField
{
	TTwsOrderIdType m_longOrderId;
	TTwsActionType m_enumAction;//BUY�� SELL�� SSHORT
	TTwsVolumeType m_longTotalQuantity;//����������
	TTwsTimeInForceType m_enumTimeInForceType;//ȷ�϶������͡�ȡ��ǰ��ЧGTC
	TTwsPriceType   m_dbLmtPrice;//�޼ۼ۸������޼۵���ֹ���޼۵�����Զ����� ��������������Ϊ�㡣 ��û���޼ۼ۸����Զ�����ҲΪ�㡣
	TTwsPriceType   m_dbAuxPrice;
	TTwsVolumeType  m_longMinQty;
};

struct CTwsContractField
{
	char			m_strSymbol[32];
	TTwsSecTypeType	m_enumSecType;
	char			m_strExpiry[32];
	double			m_dbStrike;
	char			m_strMultiplier[32];
	char			m_strExchange[32];
	char			m_strPrimaryExchange[32];
	char			m_strCurrency[32];
	char			m_strLocalSymbol[32];
	char			m_strTradingClass[32];
};

struct CTwsOrderField
{
	TTwsClientIDType m_uClientID;
	TTwsOrderIdType m_longOrderId;
	TTwsOrderStatusType m_enumStatus;
	TTwsVolumeType m_longFilledVolume;
	TTwsVolumeType m_longRemainingVolume;
	TTwsPriceType m_dbAvgFillPrice;
	TTwsPriceType m_dbLastFillPrice;
};

struct CTwsTradeField
{
	TTwsClientIDType m_uClientID;
	TTwsOrderIdType m_longOrderId;
	TTwsOrderSideType m_enumSide;
	TTwsVolumeType m_longFilledVolume;
	TTwsPriceType m_dbFilledPrice;
	TTwsPriceType m_dbFilledAvgPrice;
};

struct CTwsAccountValue
{
	TTwsPriceType m_dbCashBalance;//�˻��ֽ����
	TTwsCurrencyType m_enumCurrency;//�����ַ���
	unsigned int m_uDayTradesRemaining;//ʣ���ս��״�
	TTwsPriceType m_dbEquityWithLoanValue;//�������ֵȨ��
	TTwsPriceType m_dbInitMarginReq;//��ǰ��ʼ��֤��Ҫ��
	TTwsPriceType m_dbLongOptionValue;//������Ȩͷ��
	TTwsPriceType m_dbMaintMarginReq;//��ǰά�ֱ�֤��
	TTwsPriceType m_dbNetLiquidation;//������ֵ
	TTwsPriceType m_dbOptionMarketValue;//��Ȩ��ֵ
	TTwsPriceType m_dbShortOptionValue;//������Ȩֵ
	TTwsPriceType m_dbStockMarketValue;//��Ʊ��ֵ
	TTwsPriceType m_dbUnalteredInitMarginReq;//��ҹ��ʼ��֤��Ҫ��
	TTwsPriceType m_dbUnalteredMaintMarginReq;//��ҹά�ֱ�֤��Ҫ��
};
#endif
