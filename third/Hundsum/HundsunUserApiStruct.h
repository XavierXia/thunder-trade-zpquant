#if !defined(HUNDSUNUSERAPISTRUCT_H)
#define HUNDSUNUSERAPISTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define PackerVersion 0x20
#define PANICHEARTBEATTIME (20*1000)

#define FuncSvrbankHisBktransferQry     339204  ///��ʷת����ˮ��ѯ
#define FuncClientEntrustwayQry         331153  ///�ͻ�ί�з�ʽ��ѯ
#define FuncBankaccQry                  332296  ///�����˻���ѯ
#define FuncBankTransfer                332200  ///����ת��
#define FuncBanktransferQry             332250  ///����ʽ��˻�ת����־��ѯ
#define FuncFundamtQry                  332253  ///��������ѯ
#define FuncUfxbankTransfer             332297  ///����ת��
#define FuncUfxbankBkbalanceQry         332298  ///��������ѯ
#define FuncClientBankacctQry           331157  ///�ͻ������˻���ѯ
#define FuncClientFundFastQry           332254  ///�ͻ��ʽ���ٲ�ѯ
#define FuncClientAllQry                331150  ///�ͻ���Ϣ��ѯ
#define FuncClientLogin                 331100  ///�ͻ���¼
#define FuncClientPwdMod                331101  ///�ͻ��������
#define FuncForquoteinsert              338218  ///��Ȩѯ��
#define FuncQuoteinsert                 338219  ///��Ȩ����
#define FuncQuoteaction                 338220  ///���۳���
#define FuncQuoteQry                    338310  ///��ѯ�ͻ�������Ϣ
#define FuncForquoteQry                 338311  ///��ѯѯ����Ϣ
#define FuncOptioninstrtradecostQry     338312  ///��ѯ��Ȩ���׳ɱ�
#define FuncExecorderinsert             338205  ///��Ȩ��Ȩ����
#define FuncExecorderaction             338206  ///��Ȩ��Ȩ��������
#define FuncExpireinvestorpositionQry   338309  ///����ִ�гֲֲ�ѯ
#define FuncArginstrumentQry            330853  ///��ϴ����ѯ
#define FuncArgquoteQry                 330854  ///��������ѯ
#define FuncArgorderinsert              338204  ///���ί��ȷ��
#define FuncFutuCombmarginactionInsert  338224  ///�ڻ��н��������ȷ��
#define FuncInstrumentcommissionrateQry 338304  ///UFT���ͻ���ѯ��������
#define FuncInstrumentmarginrateQry     338305  ///UFT��֤�����Բ�ѯ
#define FuncExchangestatusQry           338313  ///������״̬��ѯ
#define FuncExchangeQry                 338314  ///��������ѯ
#define FuncFutuComholeinfoQry          338323  ///�ڻ��н���ϳֲֲ�ѯ
#define FuncFutuComentrustinfoQry       338324  ///�ڻ��н����ί�в�ѯ
#define FuncFutuContracthqQry           330850  ///�ڻ���Լ�����ѯ
#define FuncFutuContractbailQry         330851  ///�ڻ���Լ��֤���ѯ
#define FuncExchangetimeQry             330852  ///ȡ������ʱ���
#define FuncCfmmctradingaccountkeyQry   330855  ///������Ĳ�ѯ��Կ��ȡ
#define FundFutuChkpassword             331124  ///����У��
#define FuncTradingcodeQry              331850  ///�ڻ������˺Ų�ѯ
#define FuncSettlementInfoConfirm       331851  ///�ڻ��ͻ��˵�ȷ��
#define FundFutuBankinfoQry             332213  ///ȡ�ڻ��Ǽ�������Ϣ
#define FuncFutuCheckFutuCode           338200  ///����ڻ���Լ����
#define FuncMaxordervolume              338201  ///�ڻ�������������ȡ
#define FuncOrderinsert                 338202  ///�ڻ�ί��ȷ��
#define FuncFutuCheckCombineFutuCode    338203  ///�����Ϻ�Լ����
#define FuncOrderaction                 338217  ///�ڻ�ί�г���
#define FuncTradingaccountQry           338300  ///�ڻ��ͻ��ʽ��ѯ
#define FuncOrderQry                    338301  ///�ڻ�����ί�в�ѯ
#define FuncTradeQry                    338302  ///�ڻ����ճɽ���ѯ
#define FuncInvestorpositionQry         338303  ///�ڻ��ֲֲ�ѯ
#define FuncFutuFundjourQry             338306  ///�����ʽ���ˮ��ѯ
#define FuncInvestorpositiondetailQry   338307  ///�ֲ���ϸ��ѯ
#define FuncFutuSysinfoQry              338308  ///ȡϵͳ��Ϣ
#define FuncSettlementinfoQry           339851  ///ȡ�ͻ��˵�
#define FuncHisorderQry                 339852  ///�ڻ���ʷί�в�ѯ
#define FuncHistradeQry                 339853  ///�ڻ���ʷ�ɽ���ѯ
#define FuncHistradingaccountQry        339854  ///ȡ�ͻ���ʷ�ʽ�
#define FuncOptOptcodeQry               338000  ///��Ȩ������Ϣ��ѯ
#define FuncOptOptobjectcodeQry         338001  ///��Ȩ�����Ϣ��ѯ
#define FuncOptOptcodeEnter             338002  ///��Ȩ��������ȷ��
#define FuncOptEnTrade                  338010  ///��Ȩ�ɽ���������ȡ
#define FuncOptEntrust                  338011  ///��Ȩί��
#define FuncOptWithdraw                 338012  ///��Ȩ����
#define FuncOptEntrustQry               338020  ///��Ȩί�в�ѯ
#define FuncOptRealtimeQry              338021  ///��Ȩ�ɽ���ѯ
#define FuncOptAssetQry                 338022  ///��Ȩ�ʲ���ѯ
#define FuncOptHoldQry                  338023  ///��Ȩ�ֲֲ�ѯ
#define FuncOptExeassignQry             338024  ///��Ȩ��Ȩָ�ɲ�ѯ
#define FuncAssetOptexedeliverQry       338025  ///��Ȩ��Ȩ������Ϣ��ѯ
#define FuncAssetDebtinfoQry            338026  ///��Ȩ��Ȩָ��Ƿ��Ƿȯ��ѯ
#define FuncOptUnderlyamountPrompt      338027  ///��Ȩ���֤ȯ������ʾ
#define FuncOptOptholdrealPrompt        338028  ///�ͻ���Ȩ�ֲֺ�Լ��Ϣ��ʾ
#define FuncAssetAssetcoverstockQry     338029  ///�ͻ�����֤ȯ�����ѯ
#define FuncOptCoveredQry               338030  ///����֤ȯ�ɻ�ת������ȡ
#define FuncOptCoveredTrans             338031  ///����֤ȯ��ת
#define FuncHisOptentrustQry            339800  ///��ʷ��Ȩί�в�ѯ
#define FuncHisOptbusinessQry           339801  ///��ʷ��Ȩ�ɽ���ѯ
#define FuncHisOptdeliverQry            339803  ///��ʷ��Ȩ������Ϣ��ѯ
#define FuncHisExeassignQry             339804  ///��ʷ��Ȩ��Ȩָ�ɲ�ѯ
#define FuncHisOptexedeliverQry         339805  ///��ʷ��Ȩ��Ȩ������Ϣ��ѯ
#define FuncHisOptstatementQry          339806  ///��ʷ��Ȩ���˵���ѯ
#define FuncOptSettlementinfoQry        339807  ///ȡ�ͻ��˵�
#define FuncOptPriceQry                 395  ///��Ȩ�����ѯ

//������Ϣ
struct CHundsunRspInfoField
{
    int       ErrorNo;                  //�������
    char      ErrorInfo[255];           //������ʾ
};

//�û���Ϣ
struct CHundsunUserInfoField
{
    int       OpBranchNo;               //������֧����
    char      OpEntrustWay;             //ί�з�ʽ
    char      OpStation[255];           //վ���ַ
    int       BranchNo;                 //��֧����
    char      ClientId[18];             //�ͻ����
    char      Password[50];             //����
    char      PasswordType;             //�������
    char      UserToken[512];           //�û�����
    char      FundAccount[18];          //�ʲ��˻�
};

//339204 ��ʷת����ˮ��ѯ����
struct CHundsunReqFuncSvrbankHisBktransferQryField
{
    int       StartDate;                //��ʼ����
    int       EndDate;                  //��������
    char      BankNo[4];                //���д���
    int       ActionIn;                 //��������ֵ
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//339204 ��ʷת����ˮ��ѯӦ��
struct CHundsunRspFuncSvrbankHisBktransferQryField
{
    int       BranchNo;                 //��֧����
    int       InitDate;                 //��������
    int       CurrDate;                 //��ǰ����
    int       EntrustTime;              //ί��ʱ��
    char      BankNo[4];                //���д���
    char      BankName[64];             //��������
    int       EntrustNo;                //ί�б��
    char      BusinessType;             //ҵ������
    char      SourceFlag;               //����
    char      MoneyType[3];             //�������
    double    OccurBalance;             //�������
    char      EntrustStatus;            //ί��״̬
    int       ErrorNo;                  //�������
    char      BankErrorInfo[2000];      //���д�����Ϣ
    char      PositionStr[100];         //��λ��
};

//331153 �ͻ�ί�з�ʽ��ѯ����
struct CHundsunReqFuncClientEntrustwayQryField
{
};

//331153 �ͻ�ί�з�ʽ��ѯӦ��
struct CHundsunRspFuncClientEntrustwayQryField
{
    int       BranchNo;                 //��֧����
    char      EnEntrustWay[64];         //����ί�з�ʽ
    char      EnEntrustWayName[255];    //����ί�з�ʽ����
};

//332296 �����˻���ѯ����
struct CHundsunReqFuncBankaccQryField
{
};

//332296 �����˻���ѯӦ��
struct CHundsunRspFuncBankaccQryField
{
    char      MoneyType[3];             //�������
    char      BankNo[4];                //���д���
    char      BankName[64];             //��������
    char      BankAccount[32];          //�����˺�
};

//332200 ����ת������
struct CHundsunReqFuncBankTransferField
{
    char      MoneyType[3];             //�������
    char      BankNo[4];                //���д���
    char      TransferDirection;        //���׷���
    double    OccurBalance;             //�������
    char      FundPassword[15];         //�ʽ�����
    char      BankPassword[15];         //��������
};

//332200 ����ת��Ӧ��
struct CHundsunRspFuncBankTransferField
{
    int       EntrustNo;                //ί�б��
};

//332250 ����ʽ��˻�ת����־��ѯ����
struct CHundsunReqFuncBanktransferQryField
{
    char      BankNo[4];                //���д���
    int       EntrustNo;                //ί�б��
    int       ActionIn;                 //��������ֵ
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//332250 ����ʽ��˻�ת����־��ѯӦ��
struct CHundsunRspFuncBanktransferQryField
{
    int       BranchNo;                 //��֧����
    char      FundAccount[18];          //�ʲ��˻�
    char      BankNo[4];                //���д���
    char      BankName[64];             //��������
    char      TransName[64];            //ת��������
    int       EntrustNo;                //ί�б��
    char      SourceFlag;               //����
    char      MoneyType[3];             //�������
    double    OccurBalance;             //�������
    double    ClearBalance;             //������
    int       EntrustTime;              //ί��ʱ��
    char      EntrustStatus;            //ί��״̬
    int       ErrorNo;                  //�������
    char      CancelInfo[20];           //�ϵ�ԭ��
    char      BankErrorInfo[2000];      //���д�����Ϣ
    char      Remark[2000];             //��ע
    char      AssetProp;                //�ʲ�����
    char      PositionStr[100];         //��λ��
};

//332253 ��������ѯ����
struct CHundsunReqFuncFundamtQryField
{
    char      FundPassword[15];         //�ʽ�����
    char      BankPassword[15];         //��������
    char      BankNo[4];                //���д���
    char      MoneyType[3];             //�������
};

//332253 ��������ѯӦ��
struct CHundsunRspFuncFundamtQryField
{
    int       SerialNo;                 //��ˮ���
};

//332297 ����ת������
struct CHundsunReqFuncUfxbankTransferField
{
    char      BankNo[4];                //���д���
    char      MoneyType[3];             //�������
    char      TransferDirection;        //���׷���
    double    OccurBalance;             //�������
    char      FundPassword[15];         //�ʽ�����
    char      BankPassword[15];         //��������
};

//332297 ����ת��Ӧ��
struct CHundsunRspFuncUfxbankTransferField
{
    int       ErrorNo;                  //�������
    char      ErrorInfo[20];            //������ʾ
};

//332298 ��������ѯ����
struct CHundsunReqFuncUfxbankBkbalanceQryField
{
    char      MoneyType[3];             //�������
    char      BankNo[4];                //���д���
    char      FundPassword[15];         //�ʽ�����
    char      BankPassword[15];         //��������
};

//332298 ��������ѯӦ��
struct CHundsunRspFuncUfxbankBkbalanceQryField
{
    double    OccurBalance;             //�������
};

//331157 �ͻ������˻���ѯ����
struct CHundsunReqFuncClientBankacctQryField
{
    char      MoneyType[3];             //�������
    char      BankNo[4];                //���д���
};

//331157 �ͻ������˻���ѯӦ��
struct CHundsunRspFuncClientBankacctQryField
{
    int       OpenDate;                 //��������
    char      FundAccount[18];          //�ʲ��˻�
    char      MoneyType[3];             //�������
    char      BankNo[4];                //���д���
    char      BankName[64];             //��������
    char      BankAccount[32];          //�����˺�
    char      BkaccountStatus;          //�����˻�״̬
};

//332254 �ͻ��ʽ���ٲ�ѯ����
struct CHundsunReqFuncClientFundFastQryField
{
    char      MoneyType[3];             //�������
};

//332254 �ͻ��ʽ���ٲ�ѯӦ��
struct CHundsunRspFuncClientFundFastQryField
{
    char      MoneyType[3];             //�������
    double    CurrentBalance;           //��ǰ���
    double    EnableBalance;            //�����ʽ�
    double    FetchBalance;             //��ȡ���
    double    FrozenBalance;            //�����ʽ�
    double    UnfrozenBalance;          //�ⶳ�ʽ�
    double    FundBalance;              //���ʽ����
};

//331150 �ͻ���Ϣ��ѯ����
struct CHundsunReqFuncClientAllQryField
{
    char      QueryMode;                //��ѯģʽ
};

//331150 �ͻ���Ϣ��ѯӦ��
struct CHundsunRspFuncClientAllQryField
{
    int       BranchNo;                 //��֧����
    char      ClientName[14];           //�ͻ�����
    char      ClientStatus;             //�ͻ�״̬
    char      FundCard[32];             //�ʽ𿨺�
    char      IdKind;                   //֤�����
    char      IdNo[32];                 //֤������
    char      IdAddress[120];           //���֤��ַ
    char      Mobiletelephone[32];      //�ֻ�����
    char      Fax[32];                  //�������
    char      Zipcode[6];               //��������
    char      EMail[64];                //��������
    int       OpenDate;                 //��������
    char      Nationality[3];           //��������
    char      Address[120];             //��ϵ��ַ
    char      MailName[64];             //��ϵ��
    char      RiskInfo[64];             //����Ҫ����Ϣ
    char      AccountData[64];          //�����淶��Ϣ
    char      OrganProp;                //������־
    char      OrganName[60];            //��������
    int       ClientGroup;              //�ͻ�����
    char      GroupName[12];            //�������
    char      FullName[64];             //�˻�ȫ��
    char      RiskName[64];             //����Ҫ����Ϣ����
    char      AccountDataName[64];      //�����淶��Ϣ����
    char      Phonecode[20];            //��ϵ�绰
    char      ClientId[18];             //�ͻ����
    char      FundAccount[18];          //�ʲ��˻�
    char      ClientRights[64];         //�ͻ�Ȩ��
    int       CorpClientGroup;          //��˾�ͻ�����
    int       CorpRiskLevel;            //�ͻ����յȼ�
    int       CorpBeginDate;            //�ͻ����ղ�����
    int       CorpEndDate;              //�ͻ����յ�����
    int       AmlRiskLevel;             //��ϴǮ���յȼ�
    int       PaperScore;               //�Ծ�÷�
    char      ClientGender;             //�ͻ��Ա�
    char      InvestAdvice[2000];       //Ͷ�ʽ���
    int       IdBegindate;              //֤����ʼ����
    int       IdEnddate;                //֤����Ч��ֹ����
    char      ProfitFlag;               //ӯ�����㷽ʽ
    char      EnContactType[16];        //�������緽ʽ
    char      ControlPerson[60];        //����������
    char      SecRelationName[60];      //�ڶ���ϵ������
    char      SecRelationPhone[18];     //�ڶ���ϵ����ϵ�绰
    char      SocialralType;            //����ϵ����
};

//331100 �ͻ���¼����
struct CHundsunReqFuncClientLoginField
{
    int       OpBranchNo;               //������֧����
    char      OpEntrustWay;             //ί�з�ʽ
    char      OpStation[255];           //վ���ַ
    int       BranchNo;                 //��֧����
    char      Password[50];             //����
    char      PasswordType;             //�������
    char      InputContent;             //�ͻ���־���
    char      AccountContent[30];       //��������
    char      ContentType[6];           //���кš��г����
    char      AssetProp;                //�ʲ�����
};

//331100 �ͻ���¼Ӧ��
struct CHundsunRspFuncClientLoginField
{
    int       InitDate;                 //��������
    char      SysStatus;                //ϵͳ״̬
    char      CompanyName[64];          //��˾����
    char      ContentType[6];           //���кš��г����
    char      AccountContent[30];       //��������
    int       BranchNo;                 //��֧����
    char      ClientId[18];             //�ͻ����
    char      ClientName[14];           //�ͻ�����
    int       CorpClientGroup;          //��˾�ͻ�����
    int       CorpRiskLevel;            //�ͻ����յȼ�
    int       CorpBeginDate;            //�ͻ����ղ�����
    int       CorpEndDate;              //�ͻ����յ�����
    char      ValidFlag;                //��Ч��־
    int       FundaccountCount;         //�ʲ��˺Ÿ���
    char      FundAccount[18];          //�ʲ��˻�
    char      ClientRights[64];         //�ͻ�Ȩ��
    char      LastOpEntrustWay;         //�ϴε�½ί�з�ʽ
    char      LastOpStation[255];       //�ϴε�½վ��/�绰
    int       SysnodeId;                //ϵͳ�ڵ���
    char      UserToken[512];           //�û�����
    int       ErrorNo;                  //�������
    char      ErrorInfo[20];            //������ʾ
    char      AssetProp;                //�ʲ�����
    char      ProductFlag;              //��Ʒ��־
    char      MessageFlag;              //��Ϣ��־
    char      TabconfirmFlag;           //ǿ���˵�ȷ��
    int       LastDate;                 //�ϴ��������
    int       SessionNo;                //�Ự���
};

//331101 �ͻ������������
struct CHundsunReqFuncClientPwdModField
{
    char      NewPassword[50];          //������
};

//331101 �ͻ��������Ӧ��
struct CHundsunRspFuncClientPwdModField
{
    int       ErrorNo;                  //�������
    char      ErrorInfo[20];            //������ʾ
};

//338218 ��Ȩѯ������
struct CHundsunReqFuncForquoteinsertField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      ForquoteReference[32];    //ѯ��ί������
};

//338218 ��Ȩѯ��Ӧ��
struct CHundsunRspFuncForquoteinsertField
{
    int       EntrustNo;                //ί�б��
    char      ForquoteReference[32];    //ѯ��ί������
    int       SessionNo;                //�Ự���
};

//338219 ��Ȩ��������
struct CHundsunReqFuncQuoteinsertField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      BuyFuturesDirection;      //�򷽿�ƽ����
    char      BuyHedgeType;             //���ױ���־
    double    BuyQuotePrice;            //�򷽱��ۼ۸�
    int       BuyQuoteAmount;           //�򷽱�������
    char      SellFuturesDirection;     //������ƽ����
    char      SellHedgeType;            //�����ױ���־
    double    SellQuotePrice;           //�������ۼ۸�
    int       SellQuoteAmount;          //������������
    char      InquiryId[20];            //ѯ�۱��
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
};

//338219 ��Ȩ����Ӧ��
struct CHundsunRspFuncQuoteinsertField
{
    int       QuoteNo;                  //���۱��
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
};

//338220 ���۳�������
struct CHundsunReqFuncQuoteactionField
{
    int       QuoteNo;                  //���۱��
    char      ConfirmId[20];            //��������
    int       SessionNo;                //�Ự���
    char      QuoteReference[32];       //����ί������
};

//338220 ���۳���Ӧ��
struct CHundsunRspFuncQuoteactionField
{
    int       QuoteNo;                  //���۱��
    char      QuoteReference[32];       //����ί������
    int       SessionNo;                //�Ự���
};

//338310 ��ѯ�ͻ�������Ϣ����
struct CHundsunReqFuncQuoteQryField
{
    char      QueryDirection;           //��ѯ����
    int       QuoteNo;                  //���۱��
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      EnQuoteStatus[10];        //����״̬
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338310 ��ѯ�ͻ�������ϢӦ��
struct CHundsunRspFuncQuoteQryField
{
    char      PositionStr[100];         //��λ��
    int       QuoteNo;                  //���۱��
    int       BranchNo;                 //��֧����
    char      FundAccount[18];          //�ʲ��˻�
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      QuoteStatus;              //����״̬
    char      BuyFuturesDirection;      //�򷽿�ƽ����
    char      BuyHedgeType;             //���ױ���־
    double    BuyQuotePrice;            //�򷽱��ۼ۸�
    int       BuyQuoteAmount;           //�򷽱�������
    char      SellFuturesDirection;     //������ƽ����
    char      SellHedgeType;            //�����ױ���־
    double    SellQuotePrice;           //�������ۼ۸�
    int       SellQuoteAmount;          //������������
    char      QuoteReference[32];       //����ί������
    char      InquiryId[20];            //ѯ�۱��
    char      ErrorMessage[255];        //��ʾ��Ϣ
};

//338311 ��ѯѯ����Ϣ����
struct CHundsunReqFuncForquoteQryField
{
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338311 ��ѯѯ����ϢӦ��
struct CHundsunRspFuncForquoteQryField
{
    char      PositionStr[100];         //��λ��
    int       BranchNo;                 //��֧����
    char      FundAccount[18];          //�ʲ��˻�
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    int       EntrustNo;                //ί�б��
    char      ForquoteReference[32];    //ѯ��ί������
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
};

//338312 ��ѯ��Ȩ���׳ɱ�����
struct CHundsunReqFuncOptioninstrtradecostQryField
{
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      HedgeType;                //Ͷ��/�ױ�����
    double    FutuEntrustPrice;         //ί�м۸�
};

//338312 ��ѯ��Ȩ���׳ɱ�Ӧ��
struct CHundsunRspFuncOptioninstrtradecostQryField
{
    double    HoldMargin;               //�ֱֲ�֤��
    double    PreHoldMargin;            //��ֱ�֤��
    double    FoptBalance;              //Ȩ����
};

//338205 ��Ȩ��Ȩ��������
struct CHundsunReqFuncExecorderinsertField
{
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      ApplyFlag;                //�����־
    int       ApplyAmount;              //��Ȩ����
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
    char      AutoDropFlag;             //�Զ�ƽ�ֱ�־
    char      ApplyReserveFlag;         //��Ȩ�����ڻ�ͷ���־
    char      FutuExchType[4];          //�������
    char      HedgeType;                //Ͷ��/�ױ�����
};

//338205 ��Ȩ��Ȩ����Ӧ��
struct CHundsunRspFuncExecorderinsertField
{
    int       ExerciseNo;               //��Ȩ���
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
};

//338206 ��Ȩ��Ȩ������������
struct CHundsunReqFuncExecorderactionField
{
    int       ExerciseNo;               //��Ȩ���
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
    char      FutuExchType[4];          //�������
    char      ConfirmId[20];            //��������
};

//338206 ��Ȩ��Ȩ��������Ӧ��
struct CHundsunRspFuncExecorderactionField
{
    int       ExerciseNo;               //��Ȩ���
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
};

//338309 ����ִ�гֲֲ�ѯ����
struct CHundsunReqFuncExpireinvestorpositionQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    double    UnderlyingPrice;          //���ָ���۸�
    char      GiveupType;               //����ִ������(1��������2�����Գ�3�����������4����������)
    int       GiveupAmount;             //�������ִ����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338309 ����ִ�гֲֲ�ѯӦ��
struct CHundsunRspFuncExpireinvestorpositionQryField
{
    char      FundAccount[18];          //�ʲ��˻�
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    double    UnderlyingPrice;          //���ָ���۸�
    char      GiveupType;               //����ִ������(1��������2�����Գ�3�����������4����������)
    double    ExercisePrice;            //��Ȩ�۸�
    char      FoptType;                 //��Ȩ��Լ����
    char      ExecuteType;              //ִ�з�ʽ
    int       ExpireDate;               //������
    int       BuyUndropAmount;          //��δƽ����
    int       GiveupAmount;             //�������ִ����
    int       SellUndropAmount;         //��δƽ����
    int       BuyExecableAmount;        //���ִ����
    int       BuyExecAmount;            //��ִ����
    double    BuyExecIncome;            //��ִ��ӯ��
    double    ExchBuyExecFare;          //��ִ�н�����������
    double    BuyExecFare;              //��ִ�пͻ�������
    int       SellExecAmount;           //��ִ����
    int       SellExecIncome;           //��ִ��ӯ��
    int       ExchSellExecFare;         //��ִ�н�����������
    int       SellExecFare;             //��ִ�пͻ�������
    double    DeliverPrice;             //��������
    char      HedgeType;                //Ͷ��/�ױ�����
    char      PositionStr[100];         //��λ��
};

//330853 ��ϴ����ѯ����
struct CHundsunReqFuncArginstrumentQryField
{
    char      FutuExchType[4];          //�������
};

//330853 ��ϴ����ѯӦ��
struct CHundsunRspFuncArginstrumentQryField
{
    char      ArbitCode[30];            //������Լ��
    char      FutuExchType[4];          //�������
};

//330854 ��������ѯ����
struct CHundsunReqFuncArgquoteQryField
{
    char      FutuExchType[4];          //�������
    char      ArbitCode[30];            //������Լ��
};

//330854 ��������ѯӦ��
struct CHundsunRspFuncArgquoteQryField
{
    char      ArbitCode[30];            //������Լ��
    char      FutuExchType[4];          //�������
    double    HighBuyPrice;             //��������
    int       HighBuyAmount;            //������������
    int       TotalBuyAmount;           //ȫ������
    double    LowSellPrice;             //������ۼ۸�
    int       LowSellAmount;            //�����������
    int       TotalSellAmount;          //����������
    double    FutuHighPrice;            //��߼�
    double    FutuLowPrice;             //��ͼ�
    double    UplimitedPrice;           //��ͣ��۸�
    double    DownlimitedPrice;         //��ͣ��۸�
};

//338204 ���ί��ȷ������
struct CHundsunReqFuncArgorderinsertField
{
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      HedgeType;                //Ͷ��/�ױ�����
    double    FutuEntrustPrice;         //ί�м۸�
    int       EntrustAmount;            //ί������
    double    SpringPrice;              //ֹ��۸�
    char      TimeCondition;            //��Ч������
    int       ValidDate;                //��Ч����
    char      VolumeCondition;          //�ɽ�������
    char      WeaveType;                //�������
    char      EntrustProp[3];           //ί������
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      ArbitCode[30];            //������Լ��
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
    int       FexMinVolume;             //��С�ɽ���
};

//338204 ���ί��ȷ��Ӧ��
struct CHundsunRspFuncArgorderinsertField
{
    int       EntrustNo;                //ί�б��
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      HedgeType;                //Ͷ��/�ױ�����
    int       EntrustAmount;            //ί������
    double    FutuEntrustPrice;         //ί�м۸�
    char      EntrustProp[3];           //ί������
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
    char      FuturesAccount[12];       //���ױ���
    char      EntrustType;              //ί�����
    char      TimeCondition;            //��Ч������
    char      VolumeCondition;          //�ɽ�������
    char      WeaveType;                //�������
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      ArbitCode[30];            //������Լ��
    char      EntrustOccasion[32];      //ί�г���
};

//338224 �ڻ��н��������ȷ������
struct CHundsunReqFuncFutuCombmarginactionInsertField
{
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //�������
    char      EntrustBs;                //��������
    char      HedgeType;                //Ͷ��/�ױ�����
    char      Combdirection;            //��϶���
    int       EntrustAmount;            //ί������
    char      ArbitCode[30];            //������Լ��
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
};

//338224 �ڻ��н��������ȷ��Ӧ��
struct CHundsunRspFuncFutuCombmarginactionInsertField
{
    int       EntrustNo;                //ί�б��
    char      EntrustStatus;            //ί��״̬
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
};

//338304 UFT���ͻ���ѯ������������
struct CHundsunReqFuncInstrumentcommissionrateQryField
{
    char      FutufareType;             //�������
    char      FutucodeType[4];          //��Լ�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338304 UFT���ͻ���ѯ��������Ӧ��
struct CHundsunRspFuncInstrumentcommissionrateQryField
{
    char      FutufareType;             //�������
    char      FutucodeType[4];          //��Լ�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    double    OpenDropRatio;            //��ƽ�ֽ�����
    double    DropTodayRatio;           //ƽ��ɽ�������
    double    OpenDropFare;             //��λ������ƽ�������ѽ��
    double    DropTodayFare;            //ƽ��ֵ�λ���������ѽ��
    char      PositionStr[100];         //��λ��
};

//338305 UFT��֤�����Բ�ѯ����
struct CHundsunReqFuncInstrumentmarginrateQryField
{
    char      HedgeType;                //Ͷ��/�ױ�����
    char      FutucodeType[4];          //��Լ�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338305 UFT��֤�����Բ�ѯӦ��
struct CHundsunRspFuncInstrumentmarginrateQryField
{
    char      HedgeType;                //Ͷ��/�ױ�����
    char      FutucodeType[4];          //��Լ�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    double    OpenRatio;                //���ֳɽ�������
    double    OpenMargin;               //���ֵ�λ������֤����
    char      PositionStr[100];         //��λ��
};

//338313 ������״̬��ѯ����
struct CHundsunReqFuncExchangestatusQryField
{
    char      FutuExchType[4];          //�������
};

//338313 ������״̬��ѯӦ��
struct CHundsunRspFuncExchangestatusQryField
{
    char      FutuExchType[4];          //�������
    char      ExchStatus;               //������״̬
    char      ExchangeStatus;           //����״̬
};

//338314 ��������ѯ����
struct CHundsunReqFuncExchangeQryField
{
    char      FutuExchType[4];          //�������
};

//338314 ��������ѯӦ��
struct CHundsunRspFuncExchangeQryField
{
    char      FutuExchType[4];          //�������
    char      ExchangeName[16];         //��������
    char      MoneyType[3];             //�������
    int       InitDate;                 //��������
    char      EntrustKind;              //ί������
    char      ExchangeStatus;           //����״̬
};

//338323 �ڻ��н���ϳֲֲ�ѯ����
struct CHundsunReqFuncFutuComholeinfoQryField
{
    char      FutuExchType[4];          //�������
    char      EntrustBs;                //��������
    char      QueryDirection;           //��ѯ����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338323 �ڻ��н���ϳֲֲ�ѯӦ��
struct CHundsunRspFuncFutuComholeinfoQryField
{
    char      FutuExchType[4];          //�������
    char      PositionStr[100];         //��λ��
    char      EntrustBs;                //��������
    char      FutuCode[30];             //��Լ����
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    int       EnableAmount;             //��������
    double    HoldBalance;              //�ֲֽ��
    double    FrozenBalance;            //�����ʽ�
};

//338324 �ڻ��н����ί�в�ѯ����
struct CHundsunReqFuncFutuComentrustinfoQryField
{
    char      FutuExchType[4];          //�������
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      EnEntrustStatus[10];      //����ί��״̬
    int       EntrustNo;                //ί�б��
    int       BatchNo;                  //ί������
    int       RequestNum;               //��������
    char      QueryDirection;           //��ѯ����
    char      PositionStr[100];         //��λ��
};

//338324 �ڻ��н����ί�в�ѯӦ��
struct CHundsunRspFuncFutuComentrustinfoQryField
{
    int       InitDate;                 //��������
    int       EntrustNo;                //ί�б��
    int       EntrustTime;              //ί��ʱ��
    int       CurrDate;                 //��ǰ����
    int       CurrTime;                 //��ǰʱ��
    char      FundAccount[18];          //�ʲ��˻�
    char      FutuExchType[4];          //�������
    char      MoneyType[3];             //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      ArbitCode[30];            //������Լ��
    char      WeaveType;                //�������
    char      EntrustBs;                //��������
    int       EntrustAmount;            //ί������
    int       AmountPerHand;            //��Լ����
    char      FutuEntrustType;          //ί�����
    char      EntrustStatus;            //ί��״̬
    char      HedgeType;                //Ͷ��/�ױ�����
    double    HoldBalance;              //�ֲֽ��
    char      ErrorMessage[255];        //��ʾ��Ϣ
    double    FrozenBalance;            //�����ʽ�
    char      Combdirection;            //��϶���
    char      PositionStr[100];         //��λ��
};

//330850 �ڻ���Լ�����ѯ����
struct CHundsunReqFuncFutuContracthqQryField
{
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//330850 �ڻ���Լ�����ѯӦ��
struct CHundsunRspFuncFutuContracthqQryField
{
    char      PositionStr[100];         //��λ��
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      FutuName[12];             //Ʒ�ּ��
    char      MoneyType[3];             //�������
    char      NativeCode[30];           //ԭʼ����
    double    UplimitedPrice;           //��ͣ��۸�
    double    DownlimitedPrice;         //��ͣ��۸�
    double    PreSquarePrice;           //���ս����
    double    SquarePrice;              //�����
    double    FutuOpenPrice;            //���̼�
    double    FutuLastPrice;            //���¼۸�
    double    HighBuyPrice;             //��������
    int       HighBuyAmount;            //������������
    int       TotalBuyAmount;           //ȫ������
    double    LowSellPrice;             //������ۼ۸�
    int       LowSellAmount;            //�����������
    int       TotalSellAmount;          //����������
    double    FutuHighPrice;            //��߼�
    double    FutuLowPrice;             //��ͼ�
    double    AveragePrice;             //ƽ����
    double    ChangeDirection;          //����
    int       BusinessAmount;           //�ɽ�����
    int       BearAmount;               //������
    double    BusinessBalance;          //�ɽ����
    double    ArbitBuyPrice;            //�������۸�
    double    ArbitSellPrice;           //��������۸�
    int       ArbitBuyAmount;           //�����������
    int       ArbitSellAmount;          //�����������
    int       AmountPerHand;            //��Լ����
    double    PreClosePrice;            //������
    double    FutuClosePrice;           //�ڻ����̼�
};

//330851 �ڻ���Լ��֤���ѯ����
struct CHundsunReqFuncFutuContractbailQryField
{
    char      UserToken[512];           //�û�����
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//330851 �ڻ���Լ��֤���ѯӦ��
struct CHundsunRspFuncFutuContractbailQryField
{
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      FutuName[12];             //Ʒ�ּ��
    char      FutucodeType[4];          //��Լ�������
    char      MoneyType[3];             //�������
    char      StopFlag;                 //ֹͣ���ױ�־
    int       AmountPerHand;            //��Լ����
    char      FutuReportUnit;           //�걨��λ
    char      PriceUnit;                //�۸�λ
    double    FutuPriceStep;            //��С�۲�
    double    OpenUnit;                 //���ֵ�λ
    double    DropUnit;                 //ƽ�ֵ�λ
    int       MaxMarketAmount;          //�м�ί��ÿ������µ�����
    int       MaxLimitedAmount;         //�޼�ί��ÿ������µ�����
    double    OpenRatio;                //���ֳɽ�������
    double    OpenMargin;               //���ֵ�λ������֤����
    char      FoptExpiry[30];           //��Ȩϵ��
    double    FoptStrikePrice;          //��Ȩִ�м۸�
    double    PreDelta;                 //����ʵ��
    char      FutuProductType;          //��Ʒ���
    char      FoptType;                 //��Ȩ��Լ����
    char      UnderlyingCode[30];       //��ĺ�Լ����
    int       ExpireDate;               //������
    int       StrikeDate;               //ִ������(�Ϻ���Ȩ���ð�Ľ��ִ�з�ʽ,�ɽ�����ָ��T��)
    char      HighSidePreferFlag;       //�Ƿ������Ż�
    double    PreDeltaValue;            //����ʵֵ
    char      PositionStr[100];         //��λ��
};

//330852 ȡ������ʱ�������
struct CHundsunReqFuncExchangetimeQryField
{
};

//330852 ȡ������ʱ���Ӧ��
struct CHundsunRspFuncExchangetimeQryField
{
    char      FutuExchType[4];          //�������
    int       CurrTime;                 //��ǰʱ��
    int       DiffTime;                 //ʱ���
};

//330855 ������Ĳ�ѯ��Կ��ȡ����
struct CHundsunReqFuncCfmmctradingaccountkeyQryField
{
};

//330855 ������Ĳ�ѯ��Կ��ȡӦ��
struct CHundsunRspFuncCfmmctradingaccountkeyQryField
{
    char      CompanyId[10];            //��������
    int       CfmmcKeyNo;               //��Կ���
    char      CfmmcKey[10];             //��Կ
};

//331124 ����У������
struct CHundsunReqFundFutuChkpasswordField
{
};

//331124 ����У��Ӧ��
struct CHundsunRspFundFutuChkpasswordField
{
    char      FundAccount[18];          //�ʲ��˻�
    int       BranchNo;                 //��֧����
};

//331850 �ڻ������˺Ų�ѯ����
struct CHundsunReqFuncTradingcodeQryField
{
};

//331850 �ڻ������˺Ų�ѯӦ��
struct CHundsunRspFuncTradingcodeQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuacctStatus;           //�ڻ��˺�״̬
    char      FutuacctType;             //���ױ�������
    char      FutuacctRestricts[32];    //�ڻ��˺�����
    char      MainFlag;                 //���˱�־
};

//331851 �ڻ��ͻ��˵�ȷ������
struct CHundsunReqFuncSettlementInfoConfirmField
{
};

//331851 �ڻ��ͻ��˵�ȷ��Ӧ��
struct CHundsunRspFuncSettlementInfoConfirmField
{
    char      BillFlag;                 //ȷ�ϱ�־
};

//332213 ȡ�ڻ��Ǽ�������Ϣ����
struct CHundsunReqFundFutuBankinfoQryField
{
    char      MoneyType[3];             //�������
};

//332213 ȡ�ڻ��Ǽ�������ϢӦ��
struct CHundsunRspFundFutuBankinfoQryField
{
    char      BankNo[4];                //���д���
    char      BankName[64];             //��������
    char      BankAccount[32];          //�����˺�
};

//338200 ����ڻ���Լ��������
struct CHundsunReqFuncFutuCheckFutuCodeField
{
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      FuturesAccount[12];       //���ױ���
};

//338200 ����ڻ���Լ����Ӧ��
struct CHundsunRspFuncFutuCheckFutuCodeField
{
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      FuturesAccount[12];       //���ױ���
    double    EnableBalance;            //�����ʽ�
    double    FutuPriceStep;            //��С�۲�
    int       BuyAmount;                //��ֲ���
    int       SaleAmount;               //���ֲ���
    int       RealBuyAmount;            //�ر���������
    double    RealSaleAmount;           //�񿪲������ֲ���
    double    PreSquarePrice;           //���ս����
    double    UplimitedPrice;           //��ͣ��۸�
    double    DownlimitedPrice;         //��ͣ��۸�
    double    FutuLastPrice;            //���¼۸�
    double    BuyHighPrice;             //�����ۼ۸�
    double    SaleLowPrice;             //���������
    char      HedgeType;                //Ͷ��/�ױ�����
};

//338201 �ڻ�������������ȡ����
struct CHundsunReqFuncMaxordervolumeField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      HedgeType;                //Ͷ��/�ױ�����
    double    FutuEntrustPrice;         //ί�м۸�
};

//338201 �ڻ�������������ȡӦ��
struct CHundsunRspFuncMaxordervolumeField
{
    int       EnableAmount;             //��������
    int       MaxEntrustAmount;         //���ί������
};

//338202 �ڻ�ί��ȷ������
struct CHundsunReqFuncOrderinsertField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      HedgeType;                //Ͷ��/�ױ�����
    int       EntrustAmount;            //ί������
    double    FutuEntrustPrice;         //ί�м۸�
    char      EntrustProp[3];           //ί������
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
};

//338202 �ڻ�ί��ȷ��Ӧ��
struct CHundsunRspFuncOrderinsertField
{
    int       EntrustNo;                //ί�б��
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      HedgeType;                //Ͷ��/�ױ�����
    int       EntrustAmount;            //ί������
    double    FutuEntrustPrice;         //ί�м۸�
    char      EntrustProp[3];           //ί������
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
    char      FuturesAccount[12];       //���ױ���
    char      EntrustType;              //ί�����
    char      EntrustOccasion[32];      //ί�г���
};

//338203 �����Ϻ�Լ��������
struct CHundsunReqFuncFutuCheckCombineFutuCodeField
{
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      FuturesDirection;         //��ƽ�ַ���
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      ArbitCode[30];            //������Լ��
};

//338203 �����Ϻ�Լ����Ӧ��
struct CHundsunRspFuncFutuCheckCombineFutuCodeField
{
    char      ArbitCode[30];            //������Լ��
    char      FutuExchType[4];          //�������
    char      Arbicode[30];             //��ϲ���
    int       LegNum;                   //����
    double    FutuPriceStep;            //��С�۲�
    double    HighLimitPrice;           //��������
    double    LowLimitPrice;            //��������
    int       MaxLimitAmount;           //����µ�����
    int       MinLimitAmount;           //��С�µ�����
    double    UplimitedPrice;           //��ͣ��۸�
    double    DownlimitedPrice;         //��ͣ��۸�
};

//338217 �ڻ�ί�г�������
struct CHundsunReqFuncOrderactionField
{
    char      FutuExchType[4];          //�������
    int       EntrustNo;                //ί�б��
    char      ConfirmId[20];            //��������
    int       SessionNo;                //�Ự���
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //ί������
};

//338217 �ڻ�ί�г���Ӧ��
struct CHundsunRspFuncOrderactionField
{
    int       EntrustNo;                //ί�б��
    char      EntrustReference[32];     //ί������
    int       SessionNo;                //�Ự���
    char      FutuExchType[4];          //�������
    char      FutuCode[30];             //��Լ����
    int       WithdrawAmount;           //��������
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
};

//338300 �ڻ��ͻ��ʽ��ѯ����
struct CHundsunReqFuncTradingaccountQryField
{
    char      MoneyType[3];             //�������
};

//338300 �ڻ��ͻ��ʽ��ѯӦ��
struct CHundsunRspFuncTradingaccountQryField
{
    char      MoneyType[3];             //�������
    double    CurrentBalance;           //��ǰ���
    double    EnableBalance;            //�����ʽ�
    double    FetchBalance;             //��ȡ���
    double    FrozenBalance;            //�����ʽ�
    double    PreEntrustBalance;        //���տ���Ԥ������
    double    EntrustBalance;           //ί�н��
    double    HoldIncome;               //�ڻ�����ӯ��
    double    HoldIncomeFloat;          //�ֲָ���ӯ��
    double    BeginEquityBalance;       //�ڳ��ͻ�Ȩ��
    double    EquityBalance;            //�ͻ�Ȩ��
    double    InterestBalance;          //��Ϣ������
    double    DropIncome;               //ƽ�ֶ���ӯ��
    double    DropIncomeFloat;          //ƽ�ָ���ӯ��
    double    BusinessFare;             //�ɽ������ѽ��
    double    HoldMargin;               //�ֱֲ�֤��
    double    ExchHoldMargin;           //�������ֱֲ�֤��
    double    ClientRiskRate;           //�ͻ�������
    double    ExchRiskRate;             //������������
    double    OutPremium;               //֧��Ȩ����
    double    InPremium;                //��ȡȨ����
    double    MarketValue;              //֤ȯ��ֵ
    double    OutImpawnBalance;         //�ʳ����
    double    InImpawnBalance;          //������
    double    ImpawnEnableBalance;      //������Ѻ���
    double    InePreHoldBalance;        //����Ʒ�ֿͻ�Ԥ���ᱣ֤��
    double    IneBailBalance;           //����Ʒ�ֿͻ���֤��
    double    IneFrozenFare;            //����Ʒ�ֶ����ܷ���
    double    InePreFrozenFare;         //����Ʒ��Ԥ���Ὺ�ַ���
    double    IneDropProfit;            //����Ʒ��ƽ�ֶ���ӯ��
    double    IneHoldProfit;            //����Ʒ�ֲֳֶ���ӯ��
};

//338301 �ڻ�����ί�в�ѯ����
struct CHundsunReqFuncOrderQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      EnEntrustStatus[10];      //����ί��״̬
    char      QueryDirection;           //��ѯ����
    int       BatchNo;                  //ί������
    int       EntrustNo;                //ί�б��
    char      EntrustType;              //ί�����
    char      FutuProductType;          //��Ʒ���
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338301 �ڻ�����ί�в�ѯӦ��
struct CHundsunRspFuncOrderQryField
{
    int       BatchNo;                  //ί������
    int       EntrustNo;                //ί�б��
    char      FundAccount[18];          //�ʲ��˻�
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      MoneyType[3];             //�������
    char      FuturesDirection;         //��ƽ�ַ���
    double    FutuEntrustPrice;         //ί�м۸�
    char      EntrustBs;                //��������
    char      HedgeType;                //Ͷ��/�ױ�����
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
    int       ReportTime;               //�걨ʱ��
    int       BusinessAmount;           //�ɽ�����
    int       EntrustAmount;            //ί������
    int       WithdrawAmount;           //��������
    double    CurrEntrustMargin;        //��ǰԤ���ᱣ֤��
    char      EntrustType;              //ί�����
    char      ConfirmId[20];            //��������
    double    CurrEntrustFare;          //��ǰԤ�����ܷ���
    char      ForcecloseReason;         //ǿƽԭ��
    char      ErrorMessage[255];        //��ʾ��Ϣ
    double    BusinessBalance;          //�ɽ����
    char      EntrustProp[3];           //ί������
    char      ArbitCode[30];            //������Լ��
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      WeaveType;                //�������
    double    SpringPrice;              //ֹ��۸�
    char      TimeCondition;            //��Ч������
    int       ValidDate;                //��Ч����
    char      VolumeCondition;          //�ɽ�������
    int       FexMinVolume;             //��С�ɽ���
    char      ReportId[32];             //�걨��ͬ���
    int       SessionNo;                //�Ự���
    char      EntrustReference[32];     //ί������
    char      EntrustOccasion[32];      //ί�г���
    char      FutuProductType;          //��Ʒ���
    char      FoptType;                 //��Ȩ��Լ����
    double    ExercisePrice;            //��Ȩ�۸�
    char      UnderlyingCode[30];       //��ĺ�Լ����
    char      PositionStr[100];         //��λ��
};

//338302 �ڻ����ճɽ���ѯ����
struct CHundsunReqFuncTradeQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      QueryMode;                //��ѯģʽ
    char      QueryDirection;           //��ѯ����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
    char      FutuProductType;          //��Ʒ���
};

//338302 �ڻ����ճɽ���ѯӦ��
struct CHundsunRspFuncTradeQryField
{
    int       EntrustNo;                //ί�б��
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      MoneyType[3];             //�������
    char      FuturesDirection;         //��ƽ�ַ���
    char      EntrustBs;                //��������
    char      HedgeType;                //Ͷ��/�ױ�����
    double    FutuBusinessPrice;        //�ɽ��۸�
    char      EntrustType;              //ί�����
    int       BusinessTime;             //�ɽ�ʱ��
    int       BusinessAmount;           //�ɽ�����
    double    BusinessFare;             //�ɽ������ѽ��
    char      BusinessId[16];           //�ɽ����
    char      PositionStr[100];         //��λ��
    char      ConfirmId[20];            //��������
    int       SessionNo;                //�Ự���
    char      EntrustReference[32];     //ί������
    char      EntrustOccasion[32];      //ί�г���
    char      ArbitCode[30];            //������Լ��
    char      FutuProductType;          //��Ʒ���
    char      FoptType;                 //��Ȩ��Լ����
    double    ExercisePrice;            //��Ȩ�۸�
    char      UnderlyingCode[30];       //��ĺ�Լ����
};

//338303 �ڻ��ֲֲ�ѯ����
struct CHundsunReqFuncInvestorpositionQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      QueryDirection;           //��ѯ����
    char      QueryMode;                //��ѯģʽ
    int       RequestNum;               //��������
    char      HedgeFlag;                //����Ͷ���ױ���־
    char      FutuProductType;          //��Ʒ���
    char      PositionStr[100];         //��λ��
};

//338303 �ڻ��ֲֲ�ѯӦ��
struct CHundsunRspFuncInvestorpositionQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      MoneyType[3];             //�������
    char      EntrustBs;                //��������
    int       BeginAmount;              //�ڳ�����
    int       EnableAmount;             //��������
    int       RealEnableAmount;         //���տ��ֿ�������
    double    HoldIncomeFloat;          //�ֲָ���ӯ��
    double    HoldIncome;               //�ڻ�����ӯ��
    double    HoldMargin;               //�ֱֲ�֤��
    double    AveragePrice;             //ƽ����
    double    FutuLastPrice;            //���¼۸�
    char      HedgeType;                //Ͷ��/�ױ�����
    int       RealAmount;               //�ɽ�����
    double    RealOpenBalance;          //�ر����ֽ��
    double    OldOpenBalance;           //�ϲֲֳֳɽ���
    double    RealCurrentAmount;        //���ֲܳ�
    int       OldCurrentAmount;         //�ϲֲֳ�����
    char      FutuProductType;          //��Ʒ���
    char      PositionStr[100];         //��λ��
    char      FoptType;                 //��Ȩ��Լ����
    double    ExercisePrice;            //��Ȩ�۸�
    char      UnderlyingCode[30];       //��ĺ�Լ����
};

//338306 �����ʽ���ˮ��ѯ����
struct CHundsunReqFuncFutuFundjourQryField
{
    char      MoneyType[3];             //�������
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
};

//338306 �����ʽ���ˮ��ѯӦ��
struct CHundsunRspFuncFutuFundjourQryField
{
    int       BusinessDate;             //�ɽ�����
    int       SerialNo;                 //��ˮ���
    char      BusinessName[16];         //ҵ������
    double    OccurBalance;             //�������
    double    PostBalance;              //���ʽ��
    char      MoneyType[3];             //�������
    char      Remark[2000];             //��ע
    char      PositionStr[100];         //��λ��
};

//338307 �ֲ���ϸ��ѯ����
struct CHundsunReqFuncInvestorpositiondetailQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    int       RequestNum;               //��������
    char      FutuProductType;          //��Ʒ���
    char      PositionStr[100];         //��λ��
};

//338307 �ֲ���ϸ��ѯӦ��
struct CHundsunRspFuncInvestorpositiondetailQryField
{
    int       OpenDate;                 //��������
    int       SerialNo;                 //��ˮ���
    int       BranchNo;                 //��֧����
    char      FundAccount[18];          //�ʲ��˻�
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutucodeType[4];          //��Լ�������
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //��������
    char      HedgeType;                //Ͷ��/�ױ�����
    char      MoneyType[3];             //�������
    int       BeginAmount;              //�ڳ�����
    int       CurrentAmount;            //��ǰ����
    int       BusinessAmount;           //�ɽ�����
    double    FutuOpenPrice;            //���̼�
    double    SquarePrice;              //�����
    double    BeginHoldMargin;          //���ճֱֲ�֤��
    double    HoldMargin;               //�ֱֲ�֤��
    double    BeginExchHoldMargin;      //�ڳ���������֤��
    double    ExchHoldMargin;           //�������ֱֲ�֤��
    double    DropIncome;               //ƽ�ֶ���ӯ��
    double    HoldIncome;               //�ڻ�����ӯ��
    double    HoldIncomeFloat;          //�ֲָ���ӯ��
    double    RealHoldIncome;           //���ճֲ�ӯ��
    double    RealHoldIncomeFloat;      //���ճֲָ���ӯ��
    double    PreDropAmount;            //����Ԥƽ������
    int       DropAmount;               //ƽ������
    double    OldUnfrozenMargin;        //����ƽ�ϲֽⶳ��֤��
    double    RealUnfrozenMargin;       //����ƽ�²ֽⶳ��֤��
    double    RealOpenMargin;           //���տ��ֶ��ᱣ֤��
    double    OldUnfrozenExchMargin;    //����ƽ�ϲֽ������ⶳ��֤��
    double    RealUnfrozenExchMargin;   //����ƽ�½�����Ӧ�ⶳ��֤��
    double    RealExchOpenMargin;       //���տ��ֽ��������ᱣ֤��
    char      ArbitholdId[20];          //�����ֲֺ�
    int       FutulegNo;                //�Ⱥ�
    char      BusinessId[16];           //�ɽ����
    int       AmountPerHand;            //��Լ����
    char      DeliverFlag;              //ȷ�ϱ�־
    double    MarginPerHand;            //ÿ�ֱ�֤��
    double    ExchMarginPerHand;        //������ÿ�ֱ�֤��
    char      FutuProductType;          //��Ʒ���
    char      FoptType;                 //��Ȩ��Լ����
    double    ExercisePrice;            //��Ȩ�۸�
    char      UnderlyingCode[30];       //��ĺ�Լ����
    char      PositionStr[100];         //��λ��
};

//338308 ȡϵͳ��Ϣ����
struct CHundsunReqFuncFutuSysinfoQryField
{
    int       OpBranchNo;               //������֧����
    char      OpEntrustWay;             //ί�з�ʽ
    char      OpStation[255];           //վ���ַ
    int       BranchNo;                 //��֧����
};

//338308 ȡϵͳ��ϢӦ��
struct CHundsunRspFuncFutuSysinfoQryField
{
    char      CurrDatetime[14];         //��ǰ����ʱ��
};

//339851 ȡ�ͻ��˵�����
struct CHundsunReqFuncSettlementinfoQryField
{
    int       BeginDate;                //��ʼ����
    int       EndDate;                  //��������
    char      MoneyType[3];             //�������
    char      TotalType;                //����ģʽ
};

//339851 ȡ�ͻ��˵�Ӧ��
struct CHundsunRspFuncSettlementinfoQryField
{
    char      Content[2000];            //��������
    char      CheckTabData[2000];       //�ʵ���Ϣ
};

//339852 �ڻ���ʷί�в�ѯ����
struct CHundsunReqFuncHisorderQryField
{
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    int       BeginDate;                //��ʼ����
    int       EndDate;                  //��������
    char      EnEntrustStatus[10];      //����ί��״̬
    char      QueryDirection;           //��ѯ����
    int       BatchNo;                  //ί������
    int       EntrustNo;                //ί�б��
    char      EntrustType;              //ί�����
    int       RequestNum;               //��������
    char      PositionStr[100];         //��λ��
    char      FutuProductType;          //��Ʒ���
};

//339852 �ڻ���ʷί�в�ѯӦ��
struct CHundsunRspFuncHisorderQryField
{
    int       InitDate;                 //��������
    int       EntrustNo;                //ί�б��
    char      FundAccount[18];          //�ʲ��˻�
    char      ClientName[14];           //�ͻ�����
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      MoneyType[3];             //�������
    double    FutuEntrustPrice;         //ί�м۸�
    char      FuturesDirection;         //��ƽ�ַ���
    char      EntrustBs;                //��������
    char      HedgeType;                //Ͷ��/�ױ�����
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
    int       ReportTime;               //�걨ʱ��
    int       AmountPerHand;            //��Լ����
    int       BusinessAmount;           //�ɽ�����
    int       EntrustAmount;            //ί������
    int       WithdrawAmount;           //��������
    double    CurrEntrustMargin;        //��ǰԤ���ᱣ֤��
    char      EntrustType;              //ί�����
    char      ConfirmId[20];            //��������
    double    CurrEntrustFare;          //��ǰԤ�����ܷ���
    char      ForcedropReason;          //ǿƽԭ��
    int       BatchNo;                  //ί������
    char      ErrorMessage[255];        //��ʾ��Ϣ
    double    BusinessBalance;          //�ɽ����
    char      EntrustProp[3];           //ί������
    char      ArbitCode[30];            //������Լ��
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      WeaveType;                //�������
    double    SpringPrice;              //ֹ��۸�
    char      TimeCondition;            //��Ч������
    int       ValidDate;                //��Ч����
    char      VolumeCondition;          //�ɽ�������
    char      FutuProductType;          //��Ʒ���
    char      FoptType;                 //��Ȩ��Լ����
    double    ExercisePrice;            //��Ȩ�۸�
    char      UnderlyingCode[30];       //��ĺ�Լ����
    char      PositionStr[100];         //��λ��
};

//339853 �ڻ���ʷ�ɽ���ѯ����
struct CHundsunReqFuncHistradeQryField
{
    int       BeginDate;                //��ʼ����
    int       EndDate;                  //��������
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      QueryDirection;           //��ѯ����
    int       RequestNum;               //��������
    char      FutuProductType;          //��Ʒ���
    char      PositionStr[100];         //��λ��
};

//339853 �ڻ���ʷ�ɽ���ѯӦ��
struct CHundsunRspFuncHistradeQryField
{
    int       InitDate;                 //��������
    int       SerialNo;                 //��ˮ���
    char      FutuExchType[4];          //�������
    char      FuturesAccount[12];       //���ױ���
    char      FutuCode[30];             //��Լ����
    char      MoneyType[3];             //�������
    char      FuturesDirection;         //��ƽ�ַ���
    char      EntrustBs;                //��������
    double    FutuBusinessPrice;        //�ɽ��۸�
    int       AmountPerHand;            //��Լ����
    int       BusinessTime;             //�ɽ�ʱ��
    int       BusinessAmount;           //�ɽ�����
    double    BusinessFare;             //�ɽ������ѽ��
    double    DropIncome;               //ƽ�ֶ���ӯ��
    double    DropIncomeFloat;          //ƽ�ָ���ӯ��
    char      BusinessId[16];           //�ɽ����
    char      FutuProductType;          //��Ʒ���
    char      FoptType;                 //��Ȩ��Լ����
    double    ExercisePrice;            //��Ȩ�۸�
    char      UnderlyingCode[30];       //��ĺ�Լ����
    char      PositionStr[100];         //��λ��
};

//339854 ȡ�ͻ���ʷ�ʽ�����
struct CHundsunReqFuncHistradingaccountQryField
{
    int       QueryDate;                //��ѯ����
    char      MoneyType[3];             //�������
};

//339854 ȡ�ͻ���ʷ�ʽ�Ӧ��
struct CHundsunRspFuncHistradingaccountQryField
{
    char      FundAccount[18];          //�ʲ��˻�
    char      ClientId[18];             //�ͻ����
    char      ClientName[14];           //�ͻ�����
    double    BeginBalance;             //�ڳ����
    double    CurrentBalance;           //��ǰ���
    int       SumIncome;                //ӯ���ܶ�
    int       SumIncomeFloat;           //����ӯ���ܶ�
    double    HoldIncome;               //�ڻ�����ӯ��
    double    HoldIncomeFloat;          //�ֲָ���ӯ��
    double    DropIncome;               //ƽ�ֶ���ӯ��
    double    DropIncomeFloat;          //ƽ�ָ���ӯ��
    double    ClientRiskRate;           //�ͻ�������
    double    ExchRiskRate;             //������������
    double    BeginHoldMargin;          //���ճֱֲ�֤��
    double    HoldMargin;               //�ֱֲ�֤��
    double    BeginExchHoldMargin;      //�ڳ���������֤��
    double    ExchHoldMargin;           //�������ֱֲ�֤��
    double    AdditionalMargin;         //׷�ӱ�֤��
    double    LateFee;                  //���ɽ�
    double    LatefeeRate;              //���ɽ����
    double    PaymentBalance;           //����
    double    TotalHoldBalance;         //�ֲֽܳ��
    double    TotalFare;                //������
    double    InBalance;                //ת����
    double    OutBalance;               //ת�����
    double    EnableBalance;            //�����ʽ�
};

//338000 ��Ȩ������Ϣ��ѯ����
struct CHundsunReqFuncOptOptcodeQryField
{
    char      StockCode[16];            //֤ȯ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptionType;               //��Ȩ����
    int       ExerciseMonth;            //��Ȩ�·�
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338000 ��Ȩ������Ϣ��ѯӦ��
struct CHundsunRspFuncOptOptcodeQryField
{
    char      ExchangeType[4];          //�������
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptcontractId[32];        //��Լ���״���
    char      OptionName[32];           //��Ȩ��Լ���
    char      OptionType;               //��Ȩ����
    char      StockType[4];             //֤ȯ���
    char      StockCode[16];            //֤ȯ����
    char      MoneyType[3];             //�������
    int       AmountPerHand;            //��Լ����
    char      OptionMode;               //��Ȩִ�з�ʽ
    double    OptClosePrice;            //��Լǰ���̼�
    double    ClosePrice;               //������
    double    OptUpPrice;               //���޼�
    double    OptDownPrice;             //���޼�
    double    ExercisePrice;            //��Ȩ�۸�
    double    InitperBalance;           //��λ��֤��
    int       LimitHighAmount;          //�����޼��걨�������
    int       LimitLowAmount;           //�����޼��걨�������
    int       MktHighAmount;            //�����м��걨�������
    int       MktLowAmount;             //�����м��걨�������
    int       BeginDate;                //��ʼ����
    int       EndDate;                  //��������
    int       ExeBeginDate;             //��Ȩ��ʼ����
    int       ExeEndDate;               //��Ȩ��������
    char      OptcodeStatus;            //��Ȩ����״̬
    char      OptUpdatedStatus;         //��Ȩ��Լ������־
    int       OptionVersion;            //��Ȩ��Լ�汾��
    char      OptOpenStatus;            //��Ȩ����״̬
    char      OptionFlag;               //��Ȩ��Լ���Ʊ�־
    char      OptFinalStatus;           //��Ȩ��Լ�ٽ����ڱ�־
    double    OptPriceStep;             //��С�۲Ԫ��
    char      PositionStr[100];         //��λ��
};

//338001 ��Ȩ�����Ϣ��ѯ����
struct CHundsunReqFuncOptOptobjectcodeQryField
{
    char      ExchangeType[4];          //�������
    char      StockCode[16];            //֤ȯ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338001 ��Ȩ�����Ϣ��ѯӦ��
struct CHundsunRspFuncOptOptobjectcodeQryField
{
    char      ExchangeType[4];          //�������
    char      StockCode[16];            //֤ȯ����
    char      StockType[4];             //֤ȯ���
    char      StockName[32];            //֤ȯ����
    int       AmountPerHand;            //��Լ����
    char      UnderlyStatus;            //���״̬
    char      PositionStr[100];         //��λ��
};

//338002 ��Ȩ��������ȷ������
struct CHundsunReqFuncOptOptcodeEnterField
{
    char      ExchangeType[4];          //�������
    char      OptionCode[9];            //��Ȩ��Լ����
};

//338002 ��Ȩ��������ȷ��Ӧ��
struct CHundsunRspFuncOptOptcodeEnterField
{
    char      NoticeInfo[255];          //��ʾ��Ϣ
};

//338010 ��Ȩ�ɽ���������ȡ����
struct CHundsunReqFuncOptEnTradeField
{
    char      AssetProp;                //�ʲ�����
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    double    OptEntrustPrice;          //ί�м۸�
    char      EntrustProp[3];           //ί������
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
};

//338010 ��Ȩ�ɽ���������ȡӦ��
struct CHundsunRspFuncOptEnTradeField
{
    int       EnableAmount;             //��������
};

//338011 ��Ȩί������
struct CHundsunReqFuncOptEntrustField
{
    char      AssetProp;                //�ʲ�����
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    int       EntrustAmount;            //ί������
    double    OptEntrustPrice;          //ί�м۸�
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    char      EntrustProp[3];           //ί������
    int       BatchNo;                  //ί������
};

//338011 ��Ȩί��Ӧ��
struct CHundsunRspFuncOptEntrustField
{
    int       InitDate;                 //��������
    int       EntrustNo;                //ί�б��
    int       ReportNo;                 //������
    int       BatchNo;                  //ί������
    int       EntrustTime;              //ί��ʱ��
};

//338012 ��Ȩ��������
struct CHundsunReqFuncOptWithdrawField
{
    char      AssetProp;                //�ʲ�����
    char      ExchangeType[4];          //�������
    int       EntrustNo;                //ί�б��
};

//338012 ��Ȩ����Ӧ��
struct CHundsunRspFuncOptWithdrawField
{
    int       InitDate;                 //��������
    int       EntrustNo;                //ί�б��
    int       EntrustNoOld;             //ԭί�б��
    int       ReportNoOld;              //ԭ������
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      StockCode[16];            //֤ȯ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      EntrustStatusOld;         //ԭί�е�ί��״̬
};

//338020 ��Ȩί�в�ѯ����
struct CHundsunReqFuncOptEntrustQryField
{
    char      AssetProp;                //�ʲ�����
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      StockCode[16];            //֤ȯ����
    int       ReportNo;                 //������
    char      SortDirection;            //��������ʽ
    char      QueryKind;                //��ѯ����ֵ
    int       LocateEntrustNo;          //ָ��ί�к�
    char      QueryType;                //��ѯ���
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338020 ��Ȩί�в�ѯӦ��
struct CHundsunRspFuncOptEntrustQryField
{
    int       InitDate;                 //��������
    int       BatchNo;                  //ί������
    int       EntrustNo;                //ί�б��
    char      ExchangeType[4];          //�������
    char      FundAccount[18];          //�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptcontractId[32];        //��Լ���״���
    char      StockCode[16];            //֤ȯ����
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    double    OptEntrustPrice;          //ί�м۸�
    int       EntrustAmount;            //ί������
    int       BusinessAmount;           //�ɽ�����
    double    OptBusinessPrice;         //�ɽ��۸�
    int       ReportNo;                 //������
    int       ReportTime;               //�걨ʱ��
    char      EntrustType;              //ί�����
    char      EntrustStatus;            //ί��״̬
    int       EntrustTime;              //ί��ʱ��
    int       EntrustDate;              //ί������
    char      EntrustProp[3];           //ί������
    char      EntrustSrc;               //ί����Դ
    char      TradeName[64];            //��������
    char      OptionName[32];           //��Ȩ��Լ���
    char      CancelInfo[20];           //�ϵ�ԭ��
    int       WithdrawAmount;           //��������
    char      WithdrawFlag;             //���������־
    char      PositionStr[100];         //��λ��
};

//338021 ��Ȩ�ɽ���ѯ����
struct CHundsunReqFuncOptRealtimeQryField
{
    char      AssetProp;                //�ʲ�����
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      StockCode[16];            //֤ȯ����
    int       SerialNo;                 //��ˮ���
    char      SortDirection;            //��������ʽ
    char      QueryDirection;           //��ѯ����
    int       ReportNo;                 //������
    char      QueryMode;                //��ѯģʽ
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338021 ��Ȩ�ɽ���ѯӦ��
struct CHundsunRspFuncOptRealtimeQryField
{
    int       InitDate;                 //��������
    int       SerialNo;                 //��ˮ���
    char      ExchangeType[4];          //�������
    char      FundAccount[18];          //�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptcontractId[32];        //��Լ���״���
    char      StockCode[16];            //֤ȯ����
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    double    OptBusinessPrice;         //�ɽ��۸�
    int       BusinessAmount;           //�ɽ�����
    int       BusinessTime;             //�ɽ�ʱ��
    char      RealType;                 //�ɽ�����
    char      RealStatus;               //�����־
    int       BusinessTimes;            //�ֱʳɽ�����
    int       EntrustNo;                //ί�б��
    double    BusinessBalance;          //�ɽ����
    char      OptionName[32];           //��Ȩ��Լ���
    char      TradeName[64];            //��������
    int       ReportNo;                 //������
    char      EntrustProp[3];           //ί������
    char      BusinessId[16];           //�ɽ����
    char      PositionStr[100];         //��λ��
};

//338022 ��Ȩ�ʲ���ѯ����
struct CHundsunReqFuncOptAssetQryField
{
    char      AssetProp;                //�ʲ�����
    char      MoneyType[3];             //�������
};

//338022 ��Ȩ�ʲ���ѯӦ��
struct CHundsunRspFuncOptAssetQryField
{
    double    TotalAsset;               //���ʲ�
    double    FundAsset;                //�ֽ��ʲ�
    double    CurrentBalance;           //��ǰ���
    double    EnableBalance;            //�����ʽ�
    double    EnableBailBalance;        //���ñ�֤��
    double    UsedBailBalance;          //���ñ�֤��
    double    UsedPurBalance;           //�����޹����
    double    EnablePurBalance;         //�����޹����
    double    PurQuota;                 //�޹����
    double    IncomeBalance;            //ӯ�����
    double    RiskDegree;               //���ն�
    double    RealRiskDegree;           //ʵʱ���ն�
    double    DynaMarketValue;          //��Ȩ�ֲֶ�̬��ֵ
    double    RealUsedBail;             //ʵʱ���ñ�֤��
    char      OptriskType;              //���ռ�����
    double    ShortBalance;             //ȱ���ʽ�
    double    HedgeRiskDegree;          //�Գ���ն�
};

//338023 ��Ȩ�ֲֲ�ѯ����
struct CHundsunReqFuncOptHoldQryField
{
    char      AssetProp;                //�ʲ�����
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338023 ��Ȩ�ֲֲ�ѯӦ��
struct CHundsunRspFuncOptHoldQryField
{
    char      FundAccount[18];          //�ʲ��˻�
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      StockCode[16];            //֤ȯ����
    char      OptcontractId[32];        //��Լ���״���
    char      OptionName[32];           //��Ȩ��Լ���
    char      OptionType;               //��Ȩ����
    int       CurrentAmount;            //��ǰ����
    int       HoldAmount;               //��������
    int       EnableAmount;             //��������
    int       RealOpenAmount;           //�ر���������
    int       RealDropAmount;           //�ر�ƽ������
    int       EntrustDropAmount;        //ί��ƽ������
    double    LastPrice;                //���¼�
    double    OptLastPrice;             //���¼�
    double    OptCostPrice;             //���־���
    double    ExercisePrice;            //��Ȩ�۸�
    double    MarketValue;              //֤ȯ��ֵ
    double    CostBalance;              //�ֲֳɱ�
    double    IncomeBalance;            //ӯ�����
    double    ExerciseIncome;           //��Ȩӯ��
    double    DutyUsedBail;             //�����ռ�ñ�֤��
    int       ExerciseDate;             //��Ȩ����
    int       AmountPerHand;            //��Լ����
    char      PositionStr[100];         //��λ��
};

//338024 ��Ȩ��Ȩָ�ɲ�ѯ����
struct CHundsunReqFuncOptExeassignQryField
{
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338024 ��Ȩ��Ȩָ�ɲ�ѯӦ��
struct CHundsunRspFuncOptExeassignQryField
{
    char      FundAccount[18];          //�ʲ��˻�
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptionName[32];           //��Ȩ��Լ���
    char      OptionType;               //��Ȩ����
    char      StockCode[16];            //֤ȯ����
    double    ExercisePrice;            //��Ȩ�۸�
    int       ExerciseAmount;           //��Ȩ����
    double    ExefrozenBalance;         //��Ȩ�����ʽ�
    int       SettleAmount;             //��������
    double    SettleBalance;            //������
    char      PositionStr[100];         //��λ��
};

//338025 ��Ȩ��Ȩ������Ϣ��ѯ����
struct CHundsunReqFuncAssetOptexedeliverQryField
{
    char      ExchangeType[4];          //�������
    char      StockCode[16];            //֤ȯ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338025 ��Ȩ��Ȩ������Ϣ��ѯӦ��
struct CHundsunRspFuncAssetOptexedeliverQryField
{
    int       InitDate;                 //��������
    int       BranchNo;                 //��֧����
    char      ExchangeType[4];          //�������
    char      ClientId[18];             //�ͻ����
    char      FundAccount[18];          //�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      StockCode[16];            //֤ȯ����
    char      StockType[4];             //֤ȯ���
    int       ClearAmount;              //��������
    int       SettleAmount;             //��������
    int       ShortAmount;              //ȱ������
    int       TreatAmount;              //��������
    int       ReturnAmount;             //��������
    double    ClearBalance;             //������
    double    SettleBalance;            //������
    double    ShortBalance;             //ȱ���ʽ�
    double    ReturnBalance;            //�������
    char      PositionStr[100];         //��λ��
};

//338026 ��Ȩ��Ȩָ��Ƿ��Ƿȯ��ѯ����
struct CHundsunReqFuncAssetDebtinfoQryField
{
    char      StockCode[16];            //֤ȯ����
    char      FundAccountOpt[18];       //��Ȩ�ʲ��˻�
};

//338026 ��Ȩ��Ȩָ��Ƿ��Ƿȯ��ѯӦ��
struct CHundsunRspFuncAssetDebtinfoQryField
{
    int       InitDate;                 //��������
    int       BranchNo;                 //��֧����
    char      ExchangeType[4];          //�������
    char      ClientId[18];             //�ͻ����
    char      FundAccount[18];          //�ʲ��˻�
    char      FundAccountOpt[18];       //��Ȩ�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      DebtType;                 //��ծ����
    char      StockCode[16];            //֤ȯ����
    char      StockType[4];             //֤ȯ���
    double    ShortBalance;             //ȱ���ʽ�
    int       SettleAmount;             //��������
    int       ShortAmount;              //ȱ������
    char      StockName[32];            //֤ȯ����
    double    SettleBalance;            //������
};

//338027 ��Ȩ���֤ȯ������ʾ����
struct CHundsunReqFuncOptUnderlyamountPromptField
{
    char      OptionCode[9];            //��Ȩ��Լ����
    int       EntrustAmount;            //ί������
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      ExchangeType[4];          //�������
    char      FundAccountOpt[18];       //��Ȩ�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
};

//338027 ��Ȩ���֤ȯ������ʾӦ��
struct CHundsunRspFuncOptUnderlyamountPromptField
{
    char      NoticeInfo[255];          //��ʾ��Ϣ
};

//338028 �ͻ���Ȩ�ֲֺ�Լ��Ϣ��ʾ����
struct CHundsunReqFuncOptOptholdrealPromptField
{
    char      AssetProp;                //�ʲ�����
    char      MoneyType[3];             //�������
};

//338028 �ͻ���Ȩ�ֲֺ�Լ��Ϣ��ʾӦ��
struct CHundsunRspFuncOptOptholdrealPromptField
{
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptionName[32];           //��Ȩ��Լ���
    char      NoticeInfo[255];          //��ʾ��Ϣ
};

//338029 �ͻ�����֤ȯ�����ѯ����
struct CHundsunReqFuncAssetAssetcoverstockQryField
{
    char      StockCode[16];            //֤ȯ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//338029 �ͻ�����֤ȯ�����ѯӦ��
struct CHundsunRspFuncAssetAssetcoverstockQryField
{
    int       BranchNo;                 //��֧����
    char      ExchangeType[4];          //�������
    char      ClientId[18];             //�ͻ����
    char      FundAccount[18];          //�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      StockCode[16];            //֤ȯ����
    char      StockType[4];             //֤ȯ���
    int       CoveredLockAmount;        //������������
    int       CoveredShortAmount;       //����ȱ������
    int       CoveredPreshortAmount;    //����Ԥ��ȱ������
    char      PositionStr[100];         //��λ��
};

//338030 ����֤ȯ�ɻ�ת������ȡ����
struct CHundsunReqFuncOptCoveredQryField
{
    char      FundAccountOpt[18];       //��Ȩ�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      StockAccount[11];         //֤ȯ�˺�
    char      SeatNo[6];                //ϯλ���
    char      ExchangeType[4];          //�������
    char      StockCode[16];            //֤ȯ����
    char      LockDirection;            //��������
};

//338030 ����֤ȯ�ɻ�ת������ȡӦ��
struct CHundsunRspFuncOptCoveredQryField
{
    char      ExchangeType[4];          //�������
    char      StockCode[16];            //֤ȯ����
    char      StockName[32];            //֤ȯ����
    char      StockType[4];             //֤ȯ���
    int       EnableAmount;             //��������
};

//338031 ����֤ȯ��ת����
struct CHundsunReqFuncOptCoveredTransField
{
    char      FundAccountOpt[18];       //��Ȩ�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      StockAccount[11];         //֤ȯ�˺�
    char      SeatNo[6];                //ϯλ���
    char      ExchangeType[4];          //�������
    char      StockCode[16];            //֤ȯ����
    int       EntrustAmount;            //ί������
    char      LockDirection;            //��������
};

//338031 ����֤ȯ��תӦ��
struct CHundsunRspFuncOptCoveredTransField
{
    int       InitDate;                 //��������
    int       EntrustNo;                //ί�б��
    int       EntrustTime;              //ί��ʱ��
};

//339800 ��ʷ��Ȩί�в�ѯ����
struct CHundsunReqFuncHisOptentrustQryField
{
    int       StartDate;                //��ʼ����
    int       EndDate;                  //��������
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      StockCode[16];            //֤ȯ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//339800 ��ʷ��Ȩί�в�ѯӦ��
struct CHundsunRspFuncHisOptentrustQryField
{
    int       EntrustNo;                //ί�б��
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptcontractId[32];        //��Լ���״���
    char      StockCode[16];            //֤ȯ����
    char      OptionName[32];           //��Ȩ��Լ���
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    double    OptEntrustPrice;          //ί�м۸�
    int       EntrustAmount;            //ί������
    int       BusinessAmount;           //�ɽ�����
    double    OptBusinessPrice;         //�ɽ��۸�
    int       ReportNo;                 //������
    int       EntrustDate;              //ί������
    int       EntrustTime;              //ί��ʱ��
    int       ReportTime;               //�걨ʱ��
    char      EntrustType;              //ί�����
    char      EntrustSrc;               //ί����Դ
    char      EntrustProp[3];           //ί������
    char      EntrustStatus;            //ί��״̬
    int       ErrorNo;                  //�������
    char      PositionStr[100];         //��λ��
};

//339801 ��ʷ��Ȩ�ɽ���ѯ����
struct CHundsunReqFuncHisOptbusinessQryField
{
    int       StartDate;                //��ʼ����
    int       EndDate;                  //��������
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//339801 ��ʷ��Ȩ�ɽ���ѯӦ��
struct CHundsunRspFuncHisOptbusinessQryField
{
    int       InitDate;                 //��������
    int       SerialNo;                 //��ˮ���
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptcontractId[32];        //��Լ���״���
    char      OptionName[32];           //��Ȩ��Լ���
    char      StockCode[16];            //֤ȯ����
    char      StockName[32];            //֤ȯ����
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    double    OptBusinessPrice;         //�ɽ��۸�
    int       BusinessTime;             //�ɽ�ʱ��
    char      BusinessStatus;           //ҵ��״̬
    int       BusinessTimes;            //�ֱʳɽ�����
    int       EntrustNo;                //ί�б��
    int       ReportNo;                 //������
    int       OccurAmount;              //��������
    double    PostBalance;              //���ʽ��
    double    BusinessBalance;          //�ɽ����
    double    OccurBalance;             //�������
    int       PostAmount;               //��֤ȯ��
    double    Fare0;                    //Ӷ��
    double    Fare1;                    //ӡ��˰
    double    Fare2;                    //������
    double    Fare3;                    //����3
    double    Farex;                    //����x
    char      Remark[2000];             //��ע
    char      PositionStr[100];         //��λ��
};

//339803 ��ʷ��Ȩ������Ϣ��ѯ����
struct CHundsunReqFuncHisOptdeliverQryField
{
    int       StartDate;                //��ʼ����
    int       EndDate;                  //��������
    char      DeliverType;              //�����־
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      MoneyType[3];             //�������
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//339803 ��ʷ��Ȩ������Ϣ��ѯӦ��
struct CHundsunRspFuncHisOptdeliverQryField
{
    int       InitDate;                 //��������
    int       EntrustDate;              //ί������
    int       BusinessFlag;             //ҵ���־
    char      BusinessType;             //ҵ������
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      SeatNo[6];                //ϯλ���
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptcontractId[32];        //��Լ���״���
    char      OptionName[32];           //��Ȩ��Լ���
    char      StockCode[16];            //֤ȯ����
    char      StockName[32];            //֤ȯ����
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    double    OptBusinessPrice;         //�ɽ��۸�
    int       OccurAmount;              //��������
    double    BusinessBalance;          //�ɽ����
    double    OccurBalance;             //�������
    double    PostBalance;              //���ʽ��
    int       PostAmount;               //��֤ȯ��
    int       EntrustNo;                //ί�б��
    char      BusinessId[16];           //�ɽ����
    int       ReportTime;               //�걨ʱ��
    int       BusinessTime;             //�ɽ�ʱ��
    char      BusinessName[16];         //ҵ������
    double    Fare0;                    //Ӷ��
    double    Fare1;                    //ӡ��˰
    double    Fare2;                    //������
    double    Fare3;                    //����3
    double    Farex;                    //����x
    char      Remark[2000];             //��ע
    int       ReportNo;                 //������
    char      PositionStr[100];         //��λ��
};

//339804 ��ʷ��Ȩ��Ȩָ�ɲ�ѯ����
struct CHundsunReqFuncHisExeassignQryField
{
    int       StartDate;                //��ʼ����
    int       EndDate;                  //��������
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//339804 ��ʷ��Ȩ��Ȩָ�ɲ�ѯӦ��
struct CHundsunRspFuncHisExeassignQryField
{
    int       InitDate;                 //��������
    char      FundAccount[18];          //�ʲ��˻�
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptionName[32];           //��Ȩ��Լ���
    char      OptionType;               //��Ȩ����
    char      StockCode[16];            //֤ȯ����
    double    ExercisePrice;            //��Ȩ�۸�
    int       ExerciseAmount;           //��Ȩ����
    double    ExefrozenBalance;         //��Ȩ�����ʽ�
    int       SettleAmount;             //��������
    double    SettleBalance;            //������
    char      PositionStr[100];         //��λ��
};

//339805 ��ʷ��Ȩ��Ȩ������Ϣ��ѯ����
struct CHundsunReqFuncHisOptexedeliverQryField
{
    int       StartDate;                //��ʼ����
    int       EndDate;                  //��������
    char      StockCode[16];            //֤ȯ����
    char      PositionStr[100];         //��λ��
    int       RequestNum;               //��������
};

//339805 ��ʷ��Ȩ��Ȩ������Ϣ��ѯӦ��
struct CHundsunRspFuncHisOptexedeliverQryField
{
    int       InitDate;                 //��������
    int       BranchNo;                 //��֧����
    char      ExchangeType[4];          //�������
    char      ClientId[18];             //�ͻ����
    char      FundAccount[18];          //�ʲ��˻�
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      StockCode[16];            //֤ȯ����
    char      StockType[4];             //֤ȯ���
    int       ClearAmount;              //��������
    int       SettleAmount;             //��������
    int       ShortAmount;              //ȱ������
    int       TreatAmount;              //��������
    int       ReturnAmount;             //��������
    double    ClearBalance;             //������
    double    SettleBalance;            //������
    double    ShortBalance;             //ȱ���ʽ�
    double    ReturnBalance;            //�������
    char      PositionStr[100];         //��λ��
};

//339806 ��ʷ��Ȩ���˵���ѯ����
struct CHundsunReqFuncHisOptstatementQryField
{
    int       BeginDate;                //��ʼ����
    int       EndDate;                  //��������
    char      FundAccount[18];          //�ʲ��˻�
    char      MoneyType[3];             //�������
    char      QueryMode;                //��ѯģʽ
    char      PositionStrLong[100];     //��λ��������
    int       RequestNum;               //��������
};

//339806 ��ʷ��Ȩ���˵���ѯӦ��
struct CHundsunRspFuncHisOptstatementQryField
{
    int       InitDate;                 //��������
    int       BusinessFlag;             //ҵ���־
    char      BusinessType;             //ҵ������
    char      BusinessName[16];         //ҵ������
    char      FundAccount[18];          //�ʲ��˻�
    char      BankNo[4];                //���д���
    char      BankName[64];             //��������
    char      MoneyType[3];             //�������
    double    BusinessBalance;          //�ɽ����
    double    ClearBalance;             //������
    char      ExchangeType[4];          //�������
    char      OptionAccount[13];        //����Ʒ��Լ�˻�
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptionName[32];           //��Ȩ��Լ���
    int       BusinessAmount;           //�ɽ�����
    double    StandardFare0;            //��׼Ӷ��
    double    Fare0;                    //Ӷ��
    double    Fare1;                    //ӡ��˰
    double    Fare2;                    //������
    double    Fare3;                    //����3
    double    Farex;                    //����x
    double    ExchangeFare;             //һ���ܷ���
    double    ExchangeFare0;            //һ�����ַ�
    double    ExchangeFare1;            //һ��ӡ��˰
    double    ExchangeFare2;            //һ��������
    double    ExchangeFare3;            //һ��֤�ܷ�
    double    ExchangeFare4;            //һ�����
    double    ExchangeFare5;            //һ��������
    double    ExchangeFare6;            //������(�����)
    double    ExchangeFarex;            //���ս�
    char      PositionStrLong[100];     //��λ��������
};

//339807 ȡ�ͻ��˵�����
struct CHundsunReqFuncOptSettlementinfoQryField
{
    int       BeginDate;                //��ʼ����
    int       EndDate;                  //��������
    char      MoneyType[3];             //�������
};

//339807 ȡ�ͻ��˵�Ӧ��
struct CHundsunRspFuncOptSettlementinfoQryField
{
    char      CheckTabData[2000];       //�ʵ���Ϣ
};

//395 ��Ȩ�����ѯ����
struct CHundsunReqFuncOptPriceQryField
{
    char      ExchangeType[4];          //�������
    char      OptionCode[9];            //��Ȩ��Լ����
};

//395 ��Ȩ�����ѯӦ��
struct CHundsunRspFuncOptPriceQryField
{
    double    OptLastPrice;             //���¼�
    double    OptOpenPrice;             //���̼�
    double    OptHighPrice;             //��߼�
    double    OptLowPrice;              //��ͼ�
    double    BusinessBalance;          //�ɽ����
    int       BusinessAmount;           //�ɽ�����
    double    OptBuyPrice1;             //�����һ
    double    OptBuyPrice2;             //����۶�
    double    OptBuyPrice3;             //�������
    double    OptBuyPrice4;             //�������
    double    OptBuyPrice5;             //�������
    double    OptSalePrice1;            //������һ
    double    OptSalePrice2;            //�����۶�
    double    OptSalePrice3;            //��������
    double    OptSalePrice4;            //��������
    double    OptSalePrice5;            //��������
    int       BuyAmount1;               //������һ
    int       BuyAmount2;               //��������
    int       BuyAmount3;               //��������
    int       BuyAmount4;               //��������
    int       BuyAmount5;               //��������
    int       SaleAmount1;              //������һ
    int       SaleAmount2;              //��������
    int       SaleAmount3;              //��������
    int       SaleAmount4;              //��������
    int       SaleAmount5;              //��������
};

//33100 ����-�ڻ�������������
struct CHundsunRtnFuncQhSingleHqPushField
{
    char      QuoteType;                //��������(0-������ͨ����1-��������)
    int       QuoteLength;              //�������ݳ��ȣ��ӵ�3�ֶο�ʼ�����һ���ֶμ��㳤�ȣ�
    int       UpdateTime;               //ʱ���(eg:144510500,14��45��10��500����)
    int       QuoteIndex;               //�������
    char      FutuExchType[4];          //�������
    char      CommodityType[6];         //��Ʒ����
    char      FutuCode[30];             //��Լ����
    double    PreSettlementPrice;       //���ս����
    double    PreClosePrice;            //�������̼�
    double    PreOpenInterest;          //���տ�����
    double    PreDelta;                 //������ʵ��
    double    FutuOpenPrice;            //���̼�
    double    FutuLastPrice;            //���¼۸�
    double    BuyHighPrice;             //��������
    double    BuyHighAmount;            //������������
    double    LowSellPrice;             //������ۼ۸�
    double    LowSellAmount;            //�����������
    double    FutuHighPrice;            //��߼�
    double    FutuLowPrice;             //��ͼ�
    double    UplimitedPrice;           //��ͣ��
    double    DownlimitedPrice;         //��ͣ��
    double    AveragePrice;             //����
    double    ChangeDirection;          //����
    double    BusinessAmount;           //�ɽ���
    double    OpenInterest;             //�ܳ���
    double    BusinessBalance;          //�ɽ���
    double    FutuClosePrice;           //�������̼�
    double    SquarePrice;              //�����
    int       CurrDate;                 //��ǰ����(yyyymmdd)
};

//33101 ί�лر�����
struct CHundsunRtnFuncQhEntrustPushField
{
    int       EntrustNo;                //ί�к�
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[3];          //���������F1-֣��F2����-F3�Ϻ�-F4�н�
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //������ʶ(1-���� 2-����)
    char      FuturesDirection;         //��ƽ��ʶ(1-����2-ƽ��4-ƽ��֣�����Ϊ��)
    char      HedgeType;                //�ױ���ʶ(0-Ͷ��1-�ױ�2-����)
    char      FundAccount[18];          //�ʽ��˻�
    char      ReportId[21];             //���ص���
    char      FirmId[21];               //��Ա��
    char      OperatorNo[18];           //����Ա��
    int       ClientGroup;              //�ͻ����
    double    EntrustAmount;            //ί������
    double    TotalBusinessAmount;      //�ɽ�������
    double    WithdrawAmount;           //��������
    double    FutuEntrustPrice;         //ί�м۸�
    char      EntrustStatus;            //ί��״̬
    int       BranchNo;                 //Ӫҵ����
    int       BatchNo;                  //ί������/���۱��
    char      EntrustType;              //ί������
    int       AmountPerHand;            //��Լ����
    char      ForcedropReason;          //ǿƽԭ��
    int       InitDate;                 //��������
    int       EntrustTime;              //��ǰʱ��
    char      ConfirmId[20];            //��������
    char      EntrustOccasion[32];      //ί�г���
    double    FutuEntrustPrice2;        //ί�м۸�
    char      EntrustProp[3];           //�ڻ�ί������(0���޼۵���1���м۵� 2��ֹ�𶨵� 3��ֹӯ���� 4���޼�ֹ�𶨵� 5���޼�ֹӯ���� 6��ֹ�� 7����϶��� A����������ȷ�ϣ�B���ֲ��ױ�ȷ�ϣ�C�����󱨼ۣ�D����ȨȨ����ʹ��E����ȨȨ��������F��˫�߱���)
    char      ArbitCode[30];            //������Լ����
    char      EntrustReference[32];     //ί������
    char      ErrorMessage[32];         //����˵��
    char      PositionStr[32];          //��λ��
    int       SessionNo;                //�Ự���
    char      SecondCode[30];           //�ڶ��Ⱥ�Լ����
    char      WeaveType;                //�������
    double    DeltaEntrustFare;         //ί�з��ñ仯
    double    DeltaEntrustMargin;       //ί�б�֤��仯
    double    DeltaEntrustPremium;      //ί��Ȩ����仯
};

//33101 �ɽ��ر�����
struct CHundsunRtnFuncQhRealPushField
{
    int       EntrustNo;                //ί�к�
    char      FuturesAccount[12];       //���ױ���
    char      FutuExchType[4];          //���������
    int       BusinessNo;               //�ɽ����
    char      FutuCode[30];             //��Լ����
    char      EntrustBs;                //������ʶ(1-���� 2-����)
    char      FuturesDirection;         //��ƽ��ʶ(1-����2-ƽ��3-ƽ���  ����Ϊ��)
    double    FutuBusinessPrice;        //�ɽ��۸�
    double    BusinessAmount;           //�ɽ�����
    char      HedgeType;                //�ױ���ʶ(0-Ͷ��1-�ױ�2-����)
    char      FundAccount[18];          //�ʽ��˻�
    char      ReportId[21];             //���ص���
    char      FirmId[21];               //��Ա��
    char      OperatorNo[18];           //����Ա��
    int       ClientGroup;              //�ͻ����
    double    EntrustAmount;            //ί������
    double    TotalBusinessAmount;      //�ɽ�������
    double    WithdrawAmount;           //��������
    double    FutuEntrustPrice;         //ί�м۸�
    char      EntrustStatus;            //ί��״̬
    int       BranchNo;                 //Ӫҵ����
    int       BatchNo;                  //ί������/���۱��
    char      EntrustType;              //ί������
    int       AmountPerHand;            //��Լ����
    char      ForcedropReason;          //ǿƽԭ��
    int       InitDate;                 //��������
    int       BusinessTime;             //�ɽ�ʱ��
    char      ConfirmId[20];            //��������
    char      EntrustOccasion[32];      //ί�г���
    double    FutuEntrustPrice2;        //ί������(ί������۸�)
    char      EntrustProp[3];           //�ڻ�ί������(0���޼۵���1���м۵� 2��ֹ�𶨵� 3��ֹӯ���� 4���޼�ֹ�𶨵� 5���޼�ֹӯ���� 6��ֹ�� 7����϶��� A����������ȷ�ϣ�B���ֲ��ױ�ȷ�ϣ�C�����󱨼ۣ�D����ȨȨ����ʹ��E����ȨȨ��������F��˫�߱���)
    char      ArbitCode[30];            //������Լ����
    char      EntrustReference[32];     //ί������
    char      PositionStr[32];          //��λ��
    int       SessionNo;                //�Ự���
    double    DeltaEntrustFare;         //ί�з��ñ仯
    double    DeltaBusinessFare;        //�ɽ����ñ仯
    double    DeltaEntrustMargin;       //ί�б�֤��仯
    double    DeltaHoldMargin;          //�ֱֲ�֤��仯
    double    DeltaEntrustPremium;      //ί��Ȩ����仯
    double    DeltaPremium;             //�ɽ�Ȩ����仯
    double    DeltaDropIncome;          //ƽ�ֶ���ӯ��
    double    DeltaDropIncomeFloat;     //ƽ�ָ���ӯ��
};

//33102 ����-�ڻ������������
struct CHundsunRtnFuncQhCombinePushField
{
    char      ArbitCode[30];            //������Լ��
    char      FutuExchType[4];          //�������
    char      FirstCode[30];            //��һ��
    char      SecondCode[30];           //�ڶ���
    char      WeaveType;                //�������1-SPD, 2 -IPS
    double    FutuBuyPrice;             //��������
    double    BuyAmount;                //������������
    double    TotalBuyAmount;           //ȫ������
    double    FutuSellPrice;            //������ۼ۸�
    double    SellAmount;               //�����������
    double    TotalSaleAmount;          //ȫ������
    double    FutuHighPrice;            //��߼�
    double    FutuLowPrice;             //��ͼ�
    double    UplimitedPrice;           //��ͣ��۸�
    double    DownlimitedPrice;         //��ͣ��۸�
};

//33105 ����-�ڻ�������״̬��Ϣ����
struct CHundsunRtnFuncQhExchStatusPushField
{
    char      FutuExchType[4];          //���������F1-֣��F2����-F3�Ϻ�-F4�н�
    char      ExchStatus;               //������״̬��0���ӶϿ�,1����ǰ, 2���ϱ��� 3����ƽ�� 4���۴�� 5 �������� 6��ͣ���� 7���� Xδ֪��
    char      EntradeFlag;              //�Ƿ�ɽ��ף�0���ɽ��ף�1�ɽ��ף�
};

//33300 ����-�ڻ�ѯ��֪ͨ����
struct CHundsunRtnFuncQhInquiryPushField
{
    int       InquiryNo;                //ѯ�۱��
    char      FutuCode[30];             //��Լ����
    int       InitDate;                 //��������
    int       UpdateTime;               //ѯ��ʱ��(eg:144510500,14��45��10��500����)
};

//33301 ����-�ڻ����ۻر�����
struct CHundsunRtnFuncQhQuotePushField
{
    char      FutuExchType[3];          //���������F1-֣��F2����-F3�Ϻ�-F4�н�
    char      FutuCode[30];             //��Լ����
    char      BuyFuturesDirection;      //�򷽿�ƽ��־
    char      BuyHedgeType;             //���ױ���־
    double    BuyQuotePrice;            //�򷽼۸�
    double    BuyQuoteAmount;           //����
    char      SellFuturesDirection;     //������ƽ��־
    char      SellHedgeType;            //�����ױ���־
    double    SellQuotePrice;           //�����۸�
    double    SellQuoteAmount;          //������
    int       QuoteNo;                  //���۱��
    char      FundAccount[18];          //�ʽ��˻�
    char      ReportId[21];             //���ص���
    char      FirmId[21];               //��Ա��
    char      OperatorNo[18];           //����Ա��
    char      QuoteStatus;              //ί��״̬
    int       BranchNo;                 //Ӫҵ����
    int       InitDate;                 //��������
    int       CurrTime;                 //��ǰʱ��
    char      ConfirmId[20];            //��������
    char      BuyConfirmId[20];         //����������
    char      SellConfirmId[20];        //������������
    char      EntrustOccasion[32];      //ί�г���
    char      EntrustReference[32];     //��������
    char      RequestId[32];            //������
    char      PositionStr[32];          //��λ��
};
//33011 ����-������Ȩ�ɽ��ر�����
struct CHundsunRtnFuncOptDealPushField
{
    int       InitDate;                 //��������
    int       BranchNo;                 //��֧����
    char      ClientId[18];             //�ͻ����
    char      FundAccount[18];          //�ʲ��˻�
    char      RealType;                 //�ɽ�����
    char      RealStatus;               //�����־
    char      ExchangeType[4];          //�������
    char      ReportSeat[8];            //�걨ϯλ
    int       ReportNo;                 //������
    char      ReportAccount[11];        //�걨�˺�
    char      StockAccount[11];         //֤ȯ�˺�
    char      OptholdType;              //��Ȩ�ֲ����
    char      OptionCode[8];            //��Ȩ��Լ����
    char      OptionType;               //��Ȩ����
    int       RecordNo;                 //ί�п��¼��
    char      ReportBs;                 //�걨����
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    char      EntrustStatus;            //ί��״̬
    int       EntrustNo;                //ί�б��
    char      BusinessId[16];           //�ɽ����
    double    BusinessAmount;           //�ɽ�����
    double    OptBusinessPrice;         //�ɽ��۸�
    int       BusinessTime;             //�ɽ�ʱ��
    char      ExternCode[8];            //�ⲿ�������
    int       ReportTime;               //�걨ʱ��
    double    EntrustAmount;            //ί������
    int       BatchNo;                  //ί������
    double    OptEntrustPrice;          //ί�м۸�
    char      EntrustType;              //ί�����
};

//33012 ����-������Ȩί�л�д����
struct CHundsunRtnFuncOptEntrustPushField
{
    int       BranchNo;                 //��֧����
    char      FundAccount[18];          //�ʲ��˻�
    int       ReportNo;                 //������
    char      OptionCode[8];            //��Ȩ��Լ����
    char      EntrustBs;                //��������
    char      EntrustOc;                //��ƽ�ַ���
    char      CoveredFlag;              //���ұ�־
    char      EntrustStatus;            //ί��״̬
    int       EntrustNo;                //ί�б��
    double    EntrustAmount;            //ί������
    int       BatchNo;                  //ί������
    double    OptEntrustPrice;          //ί�м۸�
    char      EntrustType;              //ί�����
    int       ErrorNo;                  //�������
    char      ErrorInfo[20];            //������ʾ
};

//33099 ʵʱ������������
struct CHundsunRtnFuncOptHqPushField
{
    char      Opthq[1024];              //������Ϣ���ݣ���������ֶ����ַ�����ʽ��ţ��м���ASCIIֵ1�ָ
    char      HqsrcType;                //����Դ����
    char      ExchangeType[4];          //�������
    char      OptionCode[9];            //��Ȩ��Լ����
    char      OptionName[32];           //��Ȩ��Լ���
    double    ClosePrice;               //������
    double    OpenPrice;                //���̼�
    double    BusinessBalance;          //�ɽ����
    double    HighPrice;                //��߼�
    double    LowPrice;                 //��ͼ�
    double    LastPrice;                //���¼�
    int       BusinessAmount;           //�ɽ�����
    double    OptBuyPrice1;             //�����һ
    double    OptBuyPrice2;             //����۶�
    double    OptBuyPrice3;             //�������
    double    OptBuyPrice4;             //�������
    double    OptBuyPrice5;             //�������
    double    OptSalePrice1;            //������һ
    double    OptSalePrice2;            //�����۶�
    double    OptSalePrice3;            //��������
    double    OptSalePrice4;            //��������
    double    OptSalePrice5;            //��������
    int       BuyAmount1;               //������һ
    int       BuyAmount2;               //��������
    int       BuyAmount3;               //��������
    int       BuyAmount4;               //��������
    int       BuyAmount5;               //��������
    int       SaleAmount1;              //������һ
    int       SaleAmount2;              //��������
    int       SaleAmount3;              //��������
    int       SaleAmount4;              //��������
    int       SaleAmount5;              //��������
    char      ExchangeIndex[32];        //����ָ��
    char      CloseExchangeIndex;       //��������
    double    PreSquarePrice;           //���ս����
    double    SquarePrice;              //�����
    double    AuctionPrice;             //��̬�ο��۸�
    double    AuctionAmount;            //����ƥ������
    double    UndropAmount;             //δƽ������
    char      OptexchStatus;            //��Ȩ����״̬
    char      OptOpenRestriction[64];   //��Ȩʵʱ��������
};

#endif
