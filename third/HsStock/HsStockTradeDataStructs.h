#ifndef _COMMONFILES_HSSTOCK_HSSTOCKTRADEDATASTRUCTS_H_
#define _COMMONFILES_HSSTOCK_HSSTOCKTRADEDATASTRUCTS_H_
struct CHsStockTradeRspInfoField
{
	///�������
	unsigned int ErrorID;
	///������Ϣ
	char ErrorMsg[256];
};

struct CHsStockTradeAddressField
{
	
};

struct CHsStockTradeReqUserLoginField
{
	char m_strAccount[64];
	char m_strPassword[64];
};

struct CHsStockTradeRspUserLoginField
{
	
	char	error_info[20 + 1];
	char	content_type[6 + 1];
	char	account_content[30 + 1];
	char	client_id[18 + 1];
	char	client_name[14 + 1];
	char	client_rights[64 + 1];
	char	bank_no[4 + 1];
	char	exchange_type[4 + 1];
	char	exchange_name[8 + 1];
	char	stock_account[11 + 1];
	char	last_op_station[12 + 1];
	char	last_op_ip[20 + 1];
	char	company_name[64 + 1];
	char	sys_status_name[64 + 1];
	char	remark[255 + 1];
	char	corp_risklevel_name[32 + 1];

	char	money_type;
	char	square_flag;
	char	last_op_entrust_way;
	char	bank_trans_flag;
	char	tabconfirm_flag;
	char	initpasswd_flag;
	char	message_flag;
	char	sys_status;
	char	valid_flag;

	int		error_no;//N4
	int		branch_no;//	N5
	int		fund_account;//	N9
	int		online_time;//	N8
	int		fundaccount_count;//	N2
	int		money_count;//	N2
	int		login_date;//	N8
	int		login_time;//	N8
	int		init_date;//	N8
	int		last_date;//	N8
	int		corp_client_group;//	N5
	int		corp_risk_level;//	N5
	int		corp_end_date;//	N8

	double	enable_balance;//	N16.2
	double	current_balance;//	N16.2

};

struct CHsStockTradeRspQueryMoneyField
{
	char money_type;			//	C1	�������
	double current_balance;		//	N16.2	��ǰ���
	double enable_balance;		//	N16.2	���ý��
	double fetch_balance;		//	N16.2	��ȡ���
	double interest;			//	N16.2	��������Ϣ
	double asset_balance;		//	N16.2	�ʲ���ֵ������������ֵ��
	double fetch_cash;			//	N16.2	��ȡ�ֽ�
	double fund_balance;		//	N16.2	�ʽ� = �ʲ���ֵ - ֤ȯ��ֵ��
	double market_value;		//	N16.2	֤ȯ��ֵ
	double opfund_market_value;	//	N16.2	������ֵ
	double pre_interest;		//	N16.2	Ԥ����Ϣ
};

#define RTN_ORDER_STATE_NO_PARTLY_TRADED '1'
#define RTN_ORDER_STATE_NO_ALL_TRADED '2'
#define RTN_ORDER_STATE_NO_CANCELED '3'
struct CHsStockTradeOrderField
{
	///�������
	unsigned int m_intEntrustNo;
	///����״̬
	char m_chOrderStatus;
	///��ɽ�����
	unsigned int m_uVolumeTraded;
	///ʣ������
	unsigned int m_uVolumeTotal;
};

struct CHsStockTradeTradeField
{
	
};


#define EXCHANGE_TYPE_UNKNOW "0"
#define EXCHANGE_TYPE_SH "1"
#define EXCHANGE_TYPE_SZ "2"
#define EXCHANGE_TYPE_X_A "9"
#define EXCHANGE_TYPE_X_B "A"
#define EXCHANGE_TYPE_SH_B "D"
#define EXCHANGE_TYPE_SZ_B "H"
#define EXCHANGE_TYPE_CZCE "F1"
#define EXCHANGE_TYPE_DCE "F2"
#define EXCHANGE_TYPE_SHFE "F3"
#define EXCHANGE_TYPE_CFFEX "F4"


#define ENTRUST_PROP_DEFAULT '0'

#define ENTRUST_BS_BUY '1'
#define ENTRUST_BS_SELL '2'

struct CHsStockTradeInputOrderField
{
	char m_strStockAccount[11+1];//  C11 �ɶ�����
	int m_intFundAccount;			//	N9	�ʽ��˺ţ���������
	char m_strExchangeType[4+1];	//	C4	������𣬱�������ȷ�����г�����֧�֡�0����ո�
	char m_strStockCode[6 + 1];		//	C6	֤ȯ���룬��������ȷ���Ĺ�Ʊ���룬��֧�����롣
	double m_dbEntrustAmount;		//	N16.2	ί������
	double m_dbEntrustPrice;		//	N9.3	ί�м۸�
	char m_chEntrustProp;			//	C1	ί�����ԣ�Ĭ����'0' - �������Կ���ʽ�����깺��غ�Ȩ֤��Ȩ��ҵ����Ҫ�����ض���ί�����ԣ��Ժ���ͨ�������֡���v3.1����
	char m_chEntrustBs;			//	C1	�������� 1 ���� 2 ����
};

struct CHsStockInputOrderCancelField
{
	
	int m_intEntrust_no;//	N8	ί�б��, ʹ������������־batch_flagΪ��1���������Ϊ���ţ�����Ϊί�б�ţ����Ϊ0�������������־Ϊ��1������ô���������˺������г��ġ�

};

struct CHsStockInputOrderTradeField
{
	char m_strStockAccount[11 + 1];//  C11 �ɶ�����
	char m_strStockCode[6 + 1];		//	C6	֤ȯ���룬��������ȷ���Ĺ�Ʊ���룬��֧�����롣
};

struct CHsStockInputOrderEntrustField
{
	char m_strStockAccount[11 + 1];//  C11 �ɶ�����
	unsigned int m_intEntrust_no;//  N8 ָ��ί�кţ���ָ��ί�кŵ�ί�У���request_numΪ1����ǰ̨���յ�Ӧ���Ҫ��鷵�ص�ί�е�ί�к��Ƿ���Ҫ���ѯ��һ�£���ʱexchange_type��stock_codeҪΪ�մ���
};
#define RSP_BUSINESS_STATUS_TRADED 0
#define RSP_BUSINESS_STATUS_DISABLED 2
#define RSP_BUSINESS_STATUS_CANCELED 4

#define RSP_BUSINESS_TYPE_BUY_SELL 0
#define RSP_BUSINESS_TYPE_CANCEL 2

#define RSP_ENTRUST_BS_BUY 0
#define RSP_ENTRUST_BS_SELL 1
struct CHsStockOutputOrderTradeField
{
	char m_strPosition_str[32+1];		//	C32	��λ��
	int m_intSerial_no;					//	N8	��ˮ�ţ��ݲ�ʹ�ã�
	int m_intDate;						//	N8	����
	char m_strExchange_type[4 + 1];		//	C4	�������
	char m_strStock_account[11+1];		//	C11	֤ȯ�˺�
	char m_strStock_code[6+1];			//	C6	֤ȯ����
	char m_strStock_name[8+1];			//	C8	֤ȯ����
	int m_intEntrust_bs;				//	C1	��������
	char m_strBs_name[60+1];			//	C60	������������
	double m_dbBusiness_price;			//	N9.3	�ɽ��۸�
	double m_dbBusiness_amount;			//	N16.2	�ɽ�����
	int m_intBusiness_time;				//	N8	�ɽ�ʱ��
	char m_chBusiness_status;			//	C1	�ɽ�״̬0�����ɽ�����2�����ϵ���4����ȷ�ϡ�
	char m_strStatus_name[60+1];		//	C60	�ɽ�״̬����
	int m_intBusiness_type;				//	C1	�ɽ����0����������2����������
	char m_strType_name[64+1];			//	C64	�ɽ��������
	int m_intBusiness_times;			//	N5	�ɽ�����
	int m_intEntrust_no;				//	N8	��ͬ��
	int m_intReport_no;					//	N8	�걨��
	double m_dbBusiness_balance;		//	N16.2	�ɽ����
	int m_intBusiness_no;				//	N8	�ɽ����

};
struct CHsStockOutputOrderEntrustField
{
	char m_strPosition_str[32 + 1];			//	C32	��λ��
	int m_intEntrust_no;					//	N8	ί�����
	char m_strExchange_type[4 + 1];			//	C4	�������
	char m_strStock_account[11 + 1];		//	C11	֤ȯ�˺�
	char m_strStock_code[6+1];				//	C6	֤ȯ����
	char m_strStock_name[8+1];				//	C8	֤ȯ����
	char m_chEntrust_bs;					//	C1	��������
	char m_strBs_name[60+1];				//	C60	������������
	double m_dbEntrust_price;				//	N9.3	ί�м۸�
	double m_dbEntrust_amount;				//	N16.2	ί������
	double m_dbBusiness_amount;				//	N16.2	�ɽ�����
	double m_dbBusiness_price;				//	N9.3	�ɽ��۸�
	int m_intReport_no;						//	N8	�걨��
	int m_intReport_time;					//	N8	�걨ʱ��
	char m_chEntrust_type;					//	C1	ί�����
	char m_strType_name[64+1];				//	C64	ί���������
	char m_chEntrust_status;				//	C1	ί��״̬
	char m_strStatus_name[60+1];			//	C60	״̬����
	char m_strCancel_info[20+1];			//	C20	�ϵ�ԭ��
	char m_chEntrust_prop;					//	C1	ί������
	char m_chEntrust_prop_name;				//	C1	ί������
	char m_chEntrust_way;					//	C1	ί�з�ʽ
	char m_strEntrust_way_name[255+1];		//	C255	ί�з�ʽ����
};


#endif
