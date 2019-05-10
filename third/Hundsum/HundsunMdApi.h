#if !defined(HUNDSUNMDAPI_H)
#define HUNDSUNMDAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string.h>
#include "HundsunUserApiStruct.h"

#if defined(ISLIB)

#ifdef WIN32
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __declspec(dllexport)
#else
#define MD_API_EXPORT __declspec(dllimport)
#endif
#endif

#ifdef LINUX
#ifdef LIB_MD_API_EXPORT
#define MD_API_EXPORT __attribute__((visibility("default")))
#else
#define MD_API_EXPORT
#endif
#endif

#else
#define MD_API_EXPORT
#endif

///�ص�����
class CHundsunMdSpi
{
public:
    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    virtual void OnFrontConnected(){};

    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
    virtual void OnFrontDisconnected(int nReason){};

    ///331100 �ͻ���¼Ӧ��
    virtual void OnRspFuncClientLogin(CHundsunRspFuncClientLoginField *pRspFuncClientLogin, CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///620001_33099 ����-ʵʱ����Ӧ��
    virtual void OnRspFuncOptHqSubscribe(CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///620002_33099 ����ȡ��-ʵʱ����Ӧ��
    virtual void OnRspFuncOptHqCancel(CHundsunRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

    ///620003_33099 ʵʱ��������Ӧ��
    virtual void OnRtnFuncOptHqPush(CHundsunRtnFuncOptHqPushField *pFuncOptHqPush) {};

};

///����
class MD_API_EXPORT CHundsunMdApi
{
public:
    ///����MdApi
    static CHundsunMdApi *CreateHundsunMdApi(const char *pszFlowPath = "", bool bSaveLog = false);

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
    virtual void RegisterSpi(CHundsunMdSpi *pSpi) = 0;

    ///�����û���Ϣ
    virtual CHundsunUserInfoField* GetUserInfo() = 0;

    ///331100 �ͻ���¼����
    virtual int ReqFuncClientLogin(CHundsunReqFuncClientLoginField *pReqFuncClientLogin, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///620001_33099 ����-ʵʱ��������
    virtual int ReqFuncOptHqSubscribe(char *ppInstrumentID[], int nCount, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

    ///620002_33099 ����ȡ��-ʵʱ��������
    virtual int ReqFuncOptHqCancel(char *ppInstrumentID[], int nCount, int nRequestID = 0, void** ppRetData = NULL, int* pnItems = NULL, CHundsunRspInfoField *pRspInfo = NULL) = 0;

protected:
    ~CHundsunMdApi(){};
 };

#endif
