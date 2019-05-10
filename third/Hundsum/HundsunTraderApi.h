#if !defined(HUNDSUNTRADERAPI_H)
#define HUNDSUNTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string.h>
#include "HundsunUserApiStruct.h"

#if defined(ISLIB)

#ifdef WIN32
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#endif

#ifdef LINUX
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __attribute__((visibility("default")))
#else
#define TRADER_API_EXPORT
#endif
#endif

#else
#define TRADER_API_EXPORT
#endif

//�ص�����
class CHundsunTraderSpi
{
public:
    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    virtual void OnFrontConnected(){};

    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
    virtual void OnFrontDisconnected(int nReason){};

    ///339204 ��ʷת����ˮ��ѯӦ��
    virtual void OnRspFuncSvrbankHisBktransferQry(CHundsunRspFuncSvrbankHisBktransferQryField *pRspFuncSvrbankHisBktransferQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331153 �ͻ�ί�з�ʽ��ѯӦ��
    virtual void OnRspFuncClientEntrustwayQry(CHundsunRspFuncClientEntrustwayQryField *pRspFuncClientEntrustwayQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332296 �����˻���ѯӦ��
    virtual void OnRspFuncBankaccQry(CHundsunRspFuncBankaccQryField *pRspFuncBankaccQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332200 ����ת��Ӧ��
    virtual void OnRspFuncBankTransfer(CHundsunRspFuncBankTransferField *pRspFuncBankTransfer, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332250 ����ʽ��˻�ת����־��ѯӦ��
    virtual void OnRspFuncBanktransferQry(CHundsunRspFuncBanktransferQryField *pRspFuncBanktransferQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332253 ��������ѯӦ��
    virtual void OnRspFuncFundamtQry(CHundsunRspFuncFundamtQryField *pRspFuncFundamtQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332297 ����ת��Ӧ��
    virtual void OnRspFuncUfxbankTransfer(CHundsunRspFuncUfxbankTransferField *pRspFuncUfxbankTransfer, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332298 ��������ѯӦ��
    virtual void OnRspFuncUfxbankBkbalanceQry(CHundsunRspFuncUfxbankBkbalanceQryField *pRspFuncUfxbankBkbalanceQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331157 �ͻ������˻���ѯӦ��
    virtual void OnRspFuncClientBankacctQry(CHundsunRspFuncClientBankacctQryField *pRspFuncClientBankacctQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332254 �ͻ��ʽ���ٲ�ѯӦ��
    virtual void OnRspFuncClientFundFastQry(CHundsunRspFuncClientFundFastQryField *pRspFuncClientFundFastQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331150 �ͻ���Ϣ��ѯӦ��
    virtual void OnRspFuncClientAllQry(CHundsunRspFuncClientAllQryField *pRspFuncClientAllQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331100 �ͻ���¼Ӧ��
    virtual void OnRspFuncClientLogin(CHundsunRspFuncClientLoginField *pRspFuncClientLogin, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331101 �ͻ��������Ӧ��
    virtual void OnRspFuncClientPwdMod(CHundsunRspFuncClientPwdModField *pRspFuncClientPwdMod, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338218 ��Ȩѯ��Ӧ��
    virtual void OnRspFuncForquoteinsert(CHundsunRspFuncForquoteinsertField *pRspFuncForquoteinsert, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338219 ��Ȩ����Ӧ��
    virtual void OnRspFuncQuoteinsert(CHundsunRspFuncQuoteinsertField *pRspFuncQuoteinsert, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338220 ���۳���Ӧ��
    virtual void OnRspFuncQuoteaction(CHundsunRspFuncQuoteactionField *pRspFuncQuoteaction, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338310 ��ѯ�ͻ�������ϢӦ��
    virtual void OnRspFuncQuoteQry(CHundsunRspFuncQuoteQryField *pRspFuncQuoteQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338311 ��ѯѯ����ϢӦ��
    virtual void OnRspFuncForquoteQry(CHundsunRspFuncForquoteQryField *pRspFuncForquoteQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338312 ��ѯ��Ȩ���׳ɱ�Ӧ��
    virtual void OnRspFuncOptioninstrtradecostQry(CHundsunRspFuncOptioninstrtradecostQryField *pRspFuncOptioninstrtradecostQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338205 ��Ȩ��Ȩ����Ӧ��
    virtual void OnRspFuncExecorderinsert(CHundsunRspFuncExecorderinsertField *pRspFuncExecorderinsert, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338206 ��Ȩ��Ȩ��������Ӧ��
    virtual void OnRspFuncExecorderaction(CHundsunRspFuncExecorderactionField *pRspFuncExecorderaction, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338309 ����ִ�гֲֲ�ѯӦ��
    virtual void OnRspFuncExpireinvestorpositionQry(CHundsunRspFuncExpireinvestorpositionQryField *pRspFuncExpireinvestorpositionQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///330853 ��ϴ����ѯӦ��
    virtual void OnRspFuncArginstrumentQry(CHundsunRspFuncArginstrumentQryField *pRspFuncArginstrumentQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///330854 ��������ѯӦ��
    virtual void OnRspFuncArgquoteQry(CHundsunRspFuncArgquoteQryField *pRspFuncArgquoteQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338204 ���ί��ȷ��Ӧ��
    virtual void OnRspFuncArgorderinsert(CHundsunRspFuncArgorderinsertField *pRspFuncArgorderinsert, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338224 �ڻ��н��������ȷ��Ӧ��
    virtual void OnRspFuncFutuCombmarginactionInsert(CHundsunRspFuncFutuCombmarginactionInsertField *pRspFuncFutuCombmarginactionInsert, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338304 UFT���ͻ���ѯ��������Ӧ��
    virtual void OnRspFuncInstrumentcommissionrateQry(CHundsunRspFuncInstrumentcommissionrateQryField *pRspFuncInstrumentcommissionrateQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338305 UFT��֤�����Բ�ѯӦ��
    virtual void OnRspFuncInstrumentmarginrateQry(CHundsunRspFuncInstrumentmarginrateQryField *pRspFuncInstrumentmarginrateQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338313 ������״̬��ѯӦ��
    virtual void OnRspFuncExchangestatusQry(CHundsunRspFuncExchangestatusQryField *pRspFuncExchangestatusQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338314 ��������ѯӦ��
    virtual void OnRspFuncExchangeQry(CHundsunRspFuncExchangeQryField *pRspFuncExchangeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338323 �ڻ��н���ϳֲֲ�ѯӦ��
    virtual void OnRspFuncFutuComholeinfoQry(CHundsunRspFuncFutuComholeinfoQryField *pRspFuncFutuComholeinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338324 �ڻ��н����ί�в�ѯӦ��
    virtual void OnRspFuncFutuComentrustinfoQry(CHundsunRspFuncFutuComentrustinfoQryField *pRspFuncFutuComentrustinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///330850 �ڻ���Լ�����ѯӦ��
    virtual void OnRspFuncFutuContracthqQry(CHundsunRspFuncFutuContracthqQryField *pRspFuncFutuContracthqQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///330851 �ڻ���Լ��֤���ѯӦ��
    virtual void OnRspFuncFutuContractbailQry(CHundsunRspFuncFutuContractbailQryField *pRspFuncFutuContractbailQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///330852 ȡ������ʱ���Ӧ��
    virtual void OnRspFuncExchangetimeQry(CHundsunRspFuncExchangetimeQryField *pRspFuncExchangetimeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///330855 ������Ĳ�ѯ��Կ��ȡӦ��
    virtual void OnRspFuncCfmmctradingaccountkeyQry(CHundsunRspFuncCfmmctradingaccountkeyQryField *pRspFuncCfmmctradingaccountkeyQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331124 ����У��Ӧ��
    virtual void OnRspFundFutuChkpassword(CHundsunRspFundFutuChkpasswordField *pRspFundFutuChkpassword, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331850 �ڻ������˺Ų�ѯӦ��
    virtual void OnRspFuncTradingcodeQry(CHundsunRspFuncTradingcodeQryField *pRspFuncTradingcodeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///331851 �ڻ��ͻ��˵�ȷ��Ӧ��
    virtual void OnRspFuncSettlementInfoConfirm(CHundsunRspFuncSettlementInfoConfirmField *pRspFuncSettlementInfoConfirm, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///332213 ȡ�ڻ��Ǽ�������ϢӦ��
    virtual void OnRspFundFutuBankinfoQry(CHundsunRspFundFutuBankinfoQryField *pRspFundFutuBankinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338200 ����ڻ���Լ����Ӧ��
    virtual void OnRspFuncFutuCheckFutuCode(CHundsunRspFuncFutuCheckFutuCodeField *pRspFuncFutuCheckFutuCode, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338201 �ڻ�������������ȡӦ��
    virtual void OnRspFuncMaxordervolume(CHundsunRspFuncMaxordervolumeField *pRspFuncMaxordervolume, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338202 �ڻ�ί��ȷ��Ӧ��
    virtual void OnRspFuncOrderinsert(CHundsunRspFuncOrderinsertField *pRspFuncOrderinsert, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338203 �����Ϻ�Լ����Ӧ��
    virtual void OnRspFuncFutuCheckCombineFutuCode(CHundsunRspFuncFutuCheckCombineFutuCodeField *pRspFuncFutuCheckCombineFutuCode, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338217 �ڻ�ί�г���Ӧ��
    virtual void OnRspFuncOrderaction(CHundsunRspFuncOrderactionField *pRspFuncOrderaction, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338300 �ڻ��ͻ��ʽ��ѯӦ��
    virtual void OnRspFuncTradingaccountQry(CHundsunRspFuncTradingaccountQryField *pRspFuncTradingaccountQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338301 �ڻ�����ί�в�ѯӦ��
    virtual void OnRspFuncOrderQry(CHundsunRspFuncOrderQryField *pRspFuncOrderQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338302 �ڻ����ճɽ���ѯӦ��
    virtual void OnRspFuncTradeQry(CHundsunRspFuncTradeQryField *pRspFuncTradeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338303 �ڻ��ֲֲ�ѯӦ��
    virtual void OnRspFuncInvestorpositionQry(CHundsunRspFuncInvestorpositionQryField *pRspFuncInvestorpositionQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338306 �����ʽ���ˮ��ѯӦ��
    virtual void OnRspFuncFutuFundjourQry(CHundsunRspFuncFutuFundjourQryField *pRspFuncFutuFundjourQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338307 �ֲ���ϸ��ѯӦ��
    virtual void OnRspFuncInvestorpositiondetailQry(CHundsunRspFuncInvestorpositiondetailQryField *pRspFuncInvestorpositiondetailQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338308 ȡϵͳ��ϢӦ��
    virtual void OnRspFuncFutuSysinfoQry(CHundsunRspFuncFutuSysinfoQryField *pRspFuncFutuSysinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339851 ȡ�ͻ��˵�Ӧ��
    virtual void OnRspFuncSettlementinfoQry(CHundsunRspFuncSettlementinfoQryField *pRspFuncSettlementinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339852 �ڻ���ʷί�в�ѯӦ��
    virtual void OnRspFuncHisorderQry(CHundsunRspFuncHisorderQryField *pRspFuncHisorderQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339853 �ڻ���ʷ�ɽ���ѯӦ��
    virtual void OnRspFuncHistradeQry(CHundsunRspFuncHistradeQryField *pRspFuncHistradeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339854 ȡ�ͻ���ʷ�ʽ�Ӧ��
    virtual void OnRspFuncHistradingaccountQry(CHundsunRspFuncHistradingaccountQryField *pRspFuncHistradingaccountQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338000 ��Ȩ������Ϣ��ѯӦ��
    virtual void OnRspFuncOptOptcodeQry(CHundsunRspFuncOptOptcodeQryField *pRspFuncOptOptcodeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338001 ��Ȩ�����Ϣ��ѯӦ��
    virtual void OnRspFuncOptOptobjectcodeQry(CHundsunRspFuncOptOptobjectcodeQryField *pRspFuncOptOptobjectcodeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338002 ��Ȩ��������ȷ��Ӧ��
    virtual void OnRspFuncOptOptcodeEnter(CHundsunRspFuncOptOptcodeEnterField *pRspFuncOptOptcodeEnter, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338010 ��Ȩ�ɽ���������ȡӦ��
    virtual void OnRspFuncOptEnTrade(CHundsunRspFuncOptEnTradeField *pRspFuncOptEnTrade, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338011 ��Ȩί��Ӧ��
    virtual void OnRspFuncOptEntrust(CHundsunRspFuncOptEntrustField *pRspFuncOptEntrust, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338012 ��Ȩ����Ӧ��
    virtual void OnRspFuncOptWithdraw(CHundsunRspFuncOptWithdrawField *pRspFuncOptWithdraw, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338020 ��Ȩί�в�ѯӦ��
    virtual void OnRspFuncOptEntrustQry(CHundsunRspFuncOptEntrustQryField *pRspFuncOptEntrustQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338021 ��Ȩ�ɽ���ѯӦ��
    virtual void OnRspFuncOptRealtimeQry(CHundsunRspFuncOptRealtimeQryField *pRspFuncOptRealtimeQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338022 ��Ȩ�ʲ���ѯӦ��
    virtual void OnRspFuncOptAssetQry(CHundsunRspFuncOptAssetQryField *pRspFuncOptAssetQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338023 ��Ȩ�ֲֲ�ѯӦ��
    virtual void OnRspFuncOptHoldQry(CHundsunRspFuncOptHoldQryField *pRspFuncOptHoldQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338024 ��Ȩ��Ȩָ�ɲ�ѯӦ��
    virtual void OnRspFuncOptExeassignQry(CHundsunRspFuncOptExeassignQryField *pRspFuncOptExeassignQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338025 ��Ȩ��Ȩ������Ϣ��ѯӦ��
    virtual void OnRspFuncAssetOptexedeliverQry(CHundsunRspFuncAssetOptexedeliverQryField *pRspFuncAssetOptexedeliverQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338026 ��Ȩ��Ȩָ��Ƿ��Ƿȯ��ѯӦ��
    virtual void OnRspFuncAssetDebtinfoQry(CHundsunRspFuncAssetDebtinfoQryField *pRspFuncAssetDebtinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338027 ��Ȩ���֤ȯ������ʾӦ��
    virtual void OnRspFuncOptUnderlyamountPrompt(CHundsunRspFuncOptUnderlyamountPromptField *pRspFuncOptUnderlyamountPrompt, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338028 �ͻ���Ȩ�ֲֺ�Լ��Ϣ��ʾӦ��
    virtual void OnRspFuncOptOptholdrealPrompt(CHundsunRspFuncOptOptholdrealPromptField *pRspFuncOptOptholdrealPrompt, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338029 �ͻ�����֤ȯ�����ѯӦ��
    virtual void OnRspFuncAssetAssetcoverstockQry(CHundsunRspFuncAssetAssetcoverstockQryField *pRspFuncAssetAssetcoverstockQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338030 ����֤ȯ�ɻ�ת������ȡӦ��
    virtual void OnRspFuncOptCoveredQry(CHundsunRspFuncOptCoveredQryField *pRspFuncOptCoveredQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///338031 ����֤ȯ��תӦ��
    virtual void OnRspFuncOptCoveredTrans(CHundsunRspFuncOptCoveredTransField *pRspFuncOptCoveredTrans, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339800 ��ʷ��Ȩί�в�ѯӦ��
    virtual void OnRspFuncHisOptentrustQry(CHundsunRspFuncHisOptentrustQryField *pRspFuncHisOptentrustQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339801 ��ʷ��Ȩ�ɽ���ѯӦ��
    virtual void OnRspFuncHisOptbusinessQry(CHundsunRspFuncHisOptbusinessQryField *pRspFuncHisOptbusinessQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339803 ��ʷ��Ȩ������Ϣ��ѯӦ��
    virtual void OnRspFuncHisOptdeliverQry(CHundsunRspFuncHisOptdeliverQryField *pRspFuncHisOptdeliverQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339804 ��ʷ��Ȩ��Ȩָ�ɲ�ѯӦ��
    virtual void OnRspFuncHisExeassignQry(CHundsunRspFuncHisExeassignQryField *pRspFuncHisExeassignQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339805 ��ʷ��Ȩ��Ȩ������Ϣ��ѯӦ��
    virtual void OnRspFuncHisOptexedeliverQry(CHundsunRspFuncHisOptexedeliverQryField *pRspFuncHisOptexedeliverQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339806 ��ʷ��Ȩ���˵���ѯӦ��
    virtual void OnRspFuncHisOptstatementQry(CHundsunRspFuncHisOptstatementQryField *pRspFuncHisOptstatementQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///339807 ȡ�ͻ��˵�Ӧ��
    virtual void OnRspFuncOptSettlementinfoQry(CHundsunRspFuncOptSettlementinfoQryField *pRspFuncOptSettlementinfoQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///395 ��Ȩ�����ѯӦ��
    virtual void OnRspFuncOptPriceQry(CHundsunRspFuncOptPriceQryField *pRspFuncOptPriceQry, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    //620001_33101 ����-�ڻ�ί�гɽ��ر�Ӧ��
    virtual void OnRspFuncQhEntrustDealSubscribe(CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    //620002_33101 ����ȡ��-�ڻ�ί�гɽ��ر�Ӧ��
    virtual void OnRspFuncQhEntrustDealCancel(CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    //620003_33101����-�ڻ�ί�лر�Ӧ��
    virtual void OnRtnFuncQhEntrustPush(CHundsunRtnFuncQhEntrustPushField *pFuncQhEntrustPush) {};

    //620003_33101����-�ڻ��ɽ��ر�Ӧ��
    virtual void OnRtnFuncQhRealPush(CHundsunRtnFuncQhRealPushField *pFuncQhRealPush) {};

    //620001_33105 ����-�ڻ�������״̬��ϢӦ��
    virtual void OnRspFuncQhExchStatusSubscribe(CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    //620002_33105 ����ȡ��-�ڻ�������״̬��ϢӦ��
    virtual void OnRspFuncQhExchStatusCancel(CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    //620003_33105 ����-�ڻ�������״̬��ϢӦ��
    virtual void OnRtnFuncQhExchStatusPush(CHundsunRtnFuncQhExchStatusPushField *pFuncQhExchStatusPush) {};

};

///����
class TRADER_API_EXPORT CHundsunTraderApi
{
public:
    ///����TraderApi
    static CHundsunTraderApi *CreateHundsunTraderApi(const char *pszFlowPath = "");

    ///ɾ���ӿڶ�����
    virtual void ReleaseApi() = 0;

    ///��ʼ����
    virtual void Init(const char *pszLicFile, const char *pszPwd = "", const char *pszSslFile = "", const char *pszSslPwd = "") = 0;

    ///�ȴ��ӿ��߳̽�������
    virtual int Join() = 0;

    ///ע��ǰ�û������ַ
    ///@param pszFrontAddress��ǰ�û������ַ��
    ///@param nSubSystemNo����ϵͳ��(���ݾ����ڻ���˾����������һ���ڻ���115)
    ///@param nCompanyID����˾���(�Խ�ITNʱ��Ҫ�����Ծ��������ITNѯ��)
    virtual void RegisterFront(const char *pszFrontAddress, int nSubSystemNo = 0, int nCompanyID = 0) = 0;

    ///ע��ص��ӿ�
    ///@param pSpi �����Իص��ӿ����ʵ��
    virtual void RegisterSpi(CHundsunTraderSpi *pSpi) = 0;

    ///�����û���Ϣ
    virtual CHundsunUserInfoField* GetUserInfo() = 0;

    ///339204 ��ʷת����ˮ��ѯ����
    virtual int ReqFuncSvrbankHisBktransferQry(CHundsunReqFuncSvrbankHisBktransferQryField *pReqFuncSvrbankHisBktransferQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331153 �ͻ�ί�з�ʽ��ѯ����
    virtual int ReqFuncClientEntrustwayQry(CHundsunReqFuncClientEntrustwayQryField *pReqFuncClientEntrustwayQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332296 �����˻���ѯ����
    virtual int ReqFuncBankaccQry(CHundsunReqFuncBankaccQryField *pReqFuncBankaccQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332200 ����ת������
    virtual int ReqFuncBankTransfer(CHundsunReqFuncBankTransferField *pReqFuncBankTransfer, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332250 ����ʽ��˻�ת����־��ѯ����
    virtual int ReqFuncBanktransferQry(CHundsunReqFuncBanktransferQryField *pReqFuncBanktransferQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332253 ��������ѯ����
    virtual int ReqFuncFundamtQry(CHundsunReqFuncFundamtQryField *pReqFuncFundamtQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332297 ����ת������
    virtual int ReqFuncUfxbankTransfer(CHundsunReqFuncUfxbankTransferField *pReqFuncUfxbankTransfer, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332298 ��������ѯ����
    virtual int ReqFuncUfxbankBkbalanceQry(CHundsunReqFuncUfxbankBkbalanceQryField *pReqFuncUfxbankBkbalanceQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331157 �ͻ������˻���ѯ����
    virtual int ReqFuncClientBankacctQry(CHundsunReqFuncClientBankacctQryField *pReqFuncClientBankacctQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332254 �ͻ��ʽ���ٲ�ѯ����
    virtual int ReqFuncClientFundFastQry(CHundsunReqFuncClientFundFastQryField *pReqFuncClientFundFastQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331150 �ͻ���Ϣ��ѯ����
    virtual int ReqFuncClientAllQry(CHundsunReqFuncClientAllQryField *pReqFuncClientAllQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331100 �ͻ���¼����
    virtual int ReqFuncClientLogin(CHundsunReqFuncClientLoginField *pReqFuncClientLogin, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331101 �ͻ������������
    virtual int ReqFuncClientPwdMod(CHundsunReqFuncClientPwdModField *pReqFuncClientPwdMod, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338218 ��Ȩѯ������
    virtual int ReqFuncForquoteinsert(CHundsunReqFuncForquoteinsertField *pReqFuncForquoteinsert, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338219 ��Ȩ��������
    virtual int ReqFuncQuoteinsert(CHundsunReqFuncQuoteinsertField *pReqFuncQuoteinsert, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338220 ���۳�������
    virtual int ReqFuncQuoteaction(CHundsunReqFuncQuoteactionField *pReqFuncQuoteaction, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338310 ��ѯ�ͻ�������Ϣ����
    virtual int ReqFuncQuoteQry(CHundsunReqFuncQuoteQryField *pReqFuncQuoteQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338311 ��ѯѯ����Ϣ����
    virtual int ReqFuncForquoteQry(CHundsunReqFuncForquoteQryField *pReqFuncForquoteQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338312 ��ѯ��Ȩ���׳ɱ�����
    virtual int ReqFuncOptioninstrtradecostQry(CHundsunReqFuncOptioninstrtradecostQryField *pReqFuncOptioninstrtradecostQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338205 ��Ȩ��Ȩ��������
    virtual int ReqFuncExecorderinsert(CHundsunReqFuncExecorderinsertField *pReqFuncExecorderinsert, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338206 ��Ȩ��Ȩ������������
    virtual int ReqFuncExecorderaction(CHundsunReqFuncExecorderactionField *pReqFuncExecorderaction, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338309 ����ִ�гֲֲ�ѯ����
    virtual int ReqFuncExpireinvestorpositionQry(CHundsunReqFuncExpireinvestorpositionQryField *pReqFuncExpireinvestorpositionQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///330853 ��ϴ����ѯ����
    virtual int ReqFuncArginstrumentQry(CHundsunReqFuncArginstrumentQryField *pReqFuncArginstrumentQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///330854 ��������ѯ����
    virtual int ReqFuncArgquoteQry(CHundsunReqFuncArgquoteQryField *pReqFuncArgquoteQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338204 ���ί��ȷ������
    virtual int ReqFuncArgorderinsert(CHundsunReqFuncArgorderinsertField *pReqFuncArgorderinsert, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338224 �ڻ��н��������ȷ������
    virtual int ReqFuncFutuCombmarginactionInsert(CHundsunReqFuncFutuCombmarginactionInsertField *pReqFuncFutuCombmarginactionInsert, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338304 UFT���ͻ���ѯ������������
    virtual int ReqFuncInstrumentcommissionrateQry(CHundsunReqFuncInstrumentcommissionrateQryField *pReqFuncInstrumentcommissionrateQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338305 UFT��֤�����Բ�ѯ����
    virtual int ReqFuncInstrumentmarginrateQry(CHundsunReqFuncInstrumentmarginrateQryField *pReqFuncInstrumentmarginrateQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338313 ������״̬��ѯ����
    virtual int ReqFuncExchangestatusQry(CHundsunReqFuncExchangestatusQryField *pReqFuncExchangestatusQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338314 ��������ѯ����
    virtual int ReqFuncExchangeQry(CHundsunReqFuncExchangeQryField *pReqFuncExchangeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338323 �ڻ��н���ϳֲֲ�ѯ����
    virtual int ReqFuncFutuComholeinfoQry(CHundsunReqFuncFutuComholeinfoQryField *pReqFuncFutuComholeinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338324 �ڻ��н����ί�в�ѯ����
    virtual int ReqFuncFutuComentrustinfoQry(CHundsunReqFuncFutuComentrustinfoQryField *pReqFuncFutuComentrustinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///330850 �ڻ���Լ�����ѯ����
    virtual int ReqFuncFutuContracthqQry(CHundsunReqFuncFutuContracthqQryField *pReqFuncFutuContracthqQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///330851 �ڻ���Լ��֤���ѯ����
    virtual int ReqFuncFutuContractbailQry(CHundsunReqFuncFutuContractbailQryField *pReqFuncFutuContractbailQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///330852 ȡ������ʱ�������
    virtual int ReqFuncExchangetimeQry(CHundsunReqFuncExchangetimeQryField *pReqFuncExchangetimeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///330855 ������Ĳ�ѯ��Կ��ȡ����
    virtual int ReqFuncCfmmctradingaccountkeyQry(CHundsunReqFuncCfmmctradingaccountkeyQryField *pReqFuncCfmmctradingaccountkeyQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331124 ����У������
    virtual int ReqFundFutuChkpassword(CHundsunReqFundFutuChkpasswordField *pReqFundFutuChkpassword, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331850 �ڻ������˺Ų�ѯ����
    virtual int ReqFuncTradingcodeQry(CHundsunReqFuncTradingcodeQryField *pReqFuncTradingcodeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///331851 �ڻ��ͻ��˵�ȷ������
    virtual int ReqFuncSettlementInfoConfirm(CHundsunReqFuncSettlementInfoConfirmField *pReqFuncSettlementInfoConfirm, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///332213 ȡ�ڻ��Ǽ�������Ϣ����
    virtual int ReqFundFutuBankinfoQry(CHundsunReqFundFutuBankinfoQryField *pReqFundFutuBankinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338200 ����ڻ���Լ��������
    virtual int ReqFuncFutuCheckFutuCode(CHundsunReqFuncFutuCheckFutuCodeField *pReqFuncFutuCheckFutuCode, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338201 �ڻ�������������ȡ����
    virtual int ReqFuncMaxordervolume(CHundsunReqFuncMaxordervolumeField *pReqFuncMaxordervolume, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338202 �ڻ�ί��ȷ������
    virtual int ReqFuncOrderinsert(CHundsunReqFuncOrderinsertField *pReqFuncOrderinsert, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338203 �����Ϻ�Լ��������
    virtual int ReqFuncFutuCheckCombineFutuCode(CHundsunReqFuncFutuCheckCombineFutuCodeField *pReqFuncFutuCheckCombineFutuCode, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338217 �ڻ�ί�г�������
    virtual int ReqFuncOrderaction(CHundsunReqFuncOrderactionField *pReqFuncOrderaction, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338300 �ڻ��ͻ��ʽ��ѯ����
    virtual int ReqFuncTradingaccountQry(CHundsunReqFuncTradingaccountQryField *pReqFuncTradingaccountQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338301 �ڻ�����ί�в�ѯ����
    virtual int ReqFuncOrderQry(CHundsunReqFuncOrderQryField *pReqFuncOrderQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338302 �ڻ����ճɽ���ѯ����
    virtual int ReqFuncTradeQry(CHundsunReqFuncTradeQryField *pReqFuncTradeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338303 �ڻ��ֲֲ�ѯ����
    virtual int ReqFuncInvestorpositionQry(CHundsunReqFuncInvestorpositionQryField *pReqFuncInvestorpositionQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338306 �����ʽ���ˮ��ѯ����
    virtual int ReqFuncFutuFundjourQry(CHundsunReqFuncFutuFundjourQryField *pReqFuncFutuFundjourQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338307 �ֲ���ϸ��ѯ����
    virtual int ReqFuncInvestorpositiondetailQry(CHundsunReqFuncInvestorpositiondetailQryField *pReqFuncInvestorpositiondetailQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338308 ȡϵͳ��Ϣ����
    virtual int ReqFuncFutuSysinfoQry(CHundsunReqFuncFutuSysinfoQryField *pReqFuncFutuSysinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339851 ȡ�ͻ��˵�����
    virtual int ReqFuncSettlementinfoQry(CHundsunReqFuncSettlementinfoQryField *pReqFuncSettlementinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339852 �ڻ���ʷί�в�ѯ����
    virtual int ReqFuncHisorderQry(CHundsunReqFuncHisorderQryField *pReqFuncHisorderQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339853 �ڻ���ʷ�ɽ���ѯ����
    virtual int ReqFuncHistradeQry(CHundsunReqFuncHistradeQryField *pReqFuncHistradeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339854 ȡ�ͻ���ʷ�ʽ�����
    virtual int ReqFuncHistradingaccountQry(CHundsunReqFuncHistradingaccountQryField *pReqFuncHistradingaccountQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338000 ��Ȩ������Ϣ��ѯ����
    virtual int ReqFuncOptOptcodeQry(CHundsunReqFuncOptOptcodeQryField *pReqFuncOptOptcodeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338001 ��Ȩ�����Ϣ��ѯ����
    virtual int ReqFuncOptOptobjectcodeQry(CHundsunReqFuncOptOptobjectcodeQryField *pReqFuncOptOptobjectcodeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338002 ��Ȩ��������ȷ������
    virtual int ReqFuncOptOptcodeEnter(CHundsunReqFuncOptOptcodeEnterField *pReqFuncOptOptcodeEnter, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338010 ��Ȩ�ɽ���������ȡ����
    virtual int ReqFuncOptEnTrade(CHundsunReqFuncOptEnTradeField *pReqFuncOptEnTrade, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338011 ��Ȩί������
    virtual int ReqFuncOptEntrust(CHundsunReqFuncOptEntrustField *pReqFuncOptEntrust, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338012 ��Ȩ��������
    virtual int ReqFuncOptWithdraw(CHundsunReqFuncOptWithdrawField *pReqFuncOptWithdraw, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338020 ��Ȩί�в�ѯ����
    virtual int ReqFuncOptEntrustQry(CHundsunReqFuncOptEntrustQryField *pReqFuncOptEntrustQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338021 ��Ȩ�ɽ���ѯ����
    virtual int ReqFuncOptRealtimeQry(CHundsunReqFuncOptRealtimeQryField *pReqFuncOptRealtimeQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338022 ��Ȩ�ʲ���ѯ����
    virtual int ReqFuncOptAssetQry(CHundsunReqFuncOptAssetQryField *pReqFuncOptAssetQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338023 ��Ȩ�ֲֲ�ѯ����
    virtual int ReqFuncOptHoldQry(CHundsunReqFuncOptHoldQryField *pReqFuncOptHoldQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338024 ��Ȩ��Ȩָ�ɲ�ѯ����
    virtual int ReqFuncOptExeassignQry(CHundsunReqFuncOptExeassignQryField *pReqFuncOptExeassignQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338025 ��Ȩ��Ȩ������Ϣ��ѯ����
    virtual int ReqFuncAssetOptexedeliverQry(CHundsunReqFuncAssetOptexedeliverQryField *pReqFuncAssetOptexedeliverQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338026 ��Ȩ��Ȩָ��Ƿ��Ƿȯ��ѯ����
    virtual int ReqFuncAssetDebtinfoQry(CHundsunReqFuncAssetDebtinfoQryField *pReqFuncAssetDebtinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338027 ��Ȩ���֤ȯ������ʾ����
    virtual int ReqFuncOptUnderlyamountPrompt(CHundsunReqFuncOptUnderlyamountPromptField *pReqFuncOptUnderlyamountPrompt, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338028 �ͻ���Ȩ�ֲֺ�Լ��Ϣ��ʾ����
    virtual int ReqFuncOptOptholdrealPrompt(CHundsunReqFuncOptOptholdrealPromptField *pReqFuncOptOptholdrealPrompt, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338029 �ͻ�����֤ȯ�����ѯ����
    virtual int ReqFuncAssetAssetcoverstockQry(CHundsunReqFuncAssetAssetcoverstockQryField *pReqFuncAssetAssetcoverstockQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338030 ����֤ȯ�ɻ�ת������ȡ����
    virtual int ReqFuncOptCoveredQry(CHundsunReqFuncOptCoveredQryField *pReqFuncOptCoveredQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///338031 ����֤ȯ��ת����
    virtual int ReqFuncOptCoveredTrans(CHundsunReqFuncOptCoveredTransField *pReqFuncOptCoveredTrans, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339800 ��ʷ��Ȩί�в�ѯ����
    virtual int ReqFuncHisOptentrustQry(CHundsunReqFuncHisOptentrustQryField *pReqFuncHisOptentrustQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339801 ��ʷ��Ȩ�ɽ���ѯ����
    virtual int ReqFuncHisOptbusinessQry(CHundsunReqFuncHisOptbusinessQryField *pReqFuncHisOptbusinessQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339803 ��ʷ��Ȩ������Ϣ��ѯ����
    virtual int ReqFuncHisOptdeliverQry(CHundsunReqFuncHisOptdeliverQryField *pReqFuncHisOptdeliverQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339804 ��ʷ��Ȩ��Ȩָ�ɲ�ѯ����
    virtual int ReqFuncHisExeassignQry(CHundsunReqFuncHisExeassignQryField *pReqFuncHisExeassignQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339805 ��ʷ��Ȩ��Ȩ������Ϣ��ѯ����
    virtual int ReqFuncHisOptexedeliverQry(CHundsunReqFuncHisOptexedeliverQryField *pReqFuncHisOptexedeliverQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339806 ��ʷ��Ȩ���˵���ѯ����
    virtual int ReqFuncHisOptstatementQry(CHundsunReqFuncHisOptstatementQryField *pReqFuncHisOptstatementQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///339807 ȡ�ͻ��˵�����
    virtual int ReqFuncOptSettlementinfoQry(CHundsunReqFuncOptSettlementinfoQryField *pReqFuncOptSettlementinfoQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///395 ��Ȩ�����ѯ����
    virtual int ReqFuncOptPriceQry(CHundsunReqFuncOptPriceQryField *pReqFuncOptPriceQry, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///620001_33101 ����-�ڻ�ί�гɽ��ر�����
    virtual int ReqFuncQhEntrustDealSubscribe(int nRequestID = 0) = 0;

    ///620002_33101 ����ȡ��-�ڻ�ί�гɽ��ر�����
    virtual int ReqFuncQhEntrustDealCancel(int nRequestID = 0) = 0;

    ///620001_33105 ����-�ڻ�������״̬��Ϣ����
    virtual int ReqFuncQhExchStatusSubscribe(int nRequestID = 0) = 0;

    ///620002_33105 ����ȡ��-�ڻ�������״̬��Ϣ����
    virtual int ReqFuncQhExchStatusCancel(int nRequestID = 0) = 0;

protected:
    ~CHundsunTraderApi(){};
};

#endif
