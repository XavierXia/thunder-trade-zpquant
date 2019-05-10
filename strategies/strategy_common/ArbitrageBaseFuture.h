#ifndef _QUANTFUNDHFTPROJECT_COMMONFILES_ARBITRAGEBASE_H_
#define _QUANTFUNDHFTPROJECT_COMMONFILES_ARBITRAGEBASE_H_
#include "StrategyDefine.h"
#include "StrategyData.h"
#include "Tick.h"
#include "StockTick.h"
#include <cmath>
#include <list>
#include <string>
#include "Order.h"
#include <fstream>
#include <atomic>
#include "FutureTick.h"
using namespace std;


#define PresupposedPosition_Default 2
#define PresupposedPosition_MinuendLong_SubtrahendShort 1
#define PresupposedPosition_NoPosition 0
#define PresupposedPosition_MinuendShort_SubtrahendLong -1


#define PresupposedPositionTradeDay_Today 0
#define PresupposedPositionTradeDay_Yesterday -1


#define MyLIMITORDER LIMITORDER
#define Subtrahend_Index 0
#define Minuend_Index 1


#define NO_PROBE_ public:TProbeStructType GetProbeStruct(){return CArbitrageBase::GetProbeStruct();};
#define END_PROBE_BIND_ {{ nullptr,nullptr,"",TProbe_Color_Powderblue}}};\
                        public:\
                        TProbeStructType GetProbeStruct(){return CArbitrageBase::GetProbeStruct();};
#define END_PARAMETER_BIND_ { "",0,nullptr,nullptr,nullptr,nullptr}};\
                        public:\
                        CParNode * GetParamStruct(){return CArbitrageBase::GetParamStruct();};
#define NO_PARAMETER_ public:CParNode * GetParamStruct(){return CArbitrageBase::GetParamStruct();};



enum TTradeSignalType {
    TEnumBuyMinuend_SellSubtrahend_Increase,    //���۲�̫�ͣ�Ԥ�⽫���۲������->����۲�        ���Ӳ�λ        �������źź�ϵͳ�������౻������ԼG�����ռ�����ԼF LB1_BuyO
    TEnumSellMinuend_BuySubtrahend_Descrease,    //���۲��Ѿ���������ˮƽ       ->���ռ۲�      ���ٲ�λ        �������źź�ϵͳ�������ձ�������ԼG�����������ԼF LB1_SellC

    TEnumSellMinuend_BuySubtrahend_Increase,    //���۲�̫�ߣ�Ԥ�⽫���۲�ή��->���ռ۲�        ���Ӳ�λ        �������źź�ϵͳ�������ձ�������ԼG�����������ԼF LB1_SellO
    TEnumBuyMinuend_SellSubtrahend_Descrease,    //���۲��Ѿ����͵�����ˮƽ     ->����۲�        ���ٲ�λ        �������źź�ϵͳ�������౻������ԼG�����ռ�����ԼF LB1_BuyC
};

enum TPositionState
{
    NoPosition,                            //Ŀǰ����û���κγֲ�,�ȴ��볡
    HasPosition                            //����Ŀǰ�гֲ�
};


#define TrR_Direction 0
#define TrR_BetTime 1
#define TrR_BetTarPrice 2
#define TrR_BetTradedList 3
#define TrR_ClearTime 4
#define TrR_ClearTarPrice 5
#define TrR_ClearTradedList 6

class CBar
{
    
public:
#define CycleBeginTime (ptime(date(1966, 1, 1), time_duration(0, 0, 0, 0)))
#define CYCLE_NUM_OF_UTC(UTCtime,cyclelen) ((int)(((UTCtime-CycleBeginTime).total_seconds()) / cyclelen))
    void Init(unsigned int TypeSecond)
    {
        m_dbOpen = 0.0;
        m_dbHighest = 0.0;
        m_dbLowest = 0.0;
        m_dbClose = 0.0;
    }

    TPriceType m_dbOpen;
    TPriceType m_dbHighest;
    TPriceType m_dbLowest;
    TPriceType m_dbClose;
    BEGIN_SERIALIZATION
        SERIALIZATION(m_dbOpen)
        SERIALIZATION(m_dbHighest)
        SERIALIZATION(m_dbLowest)
        SERIALIZATION(m_dbClose)
    END_SERIALIZATION
};


struct CPosition
{
    void Init()
    {
        m_uLongPosition = 0;
        m_uShortPosition = 0;
        m_dbLongTurnover = 0.0;
        m_dbShortTurnover = 0.0;

        m_dbAccuFee[0] = m_dbAccuFee[1] = m_dbAccuFee[2] = m_dbAccuFee[3] = 0.0;
    }
    
    unsigned int m_uLongPosition;
    unsigned int m_uShortPosition;
    double m_dbLongTurnover;
    double m_dbShortTurnover;

    double m_dbAccuFee[4];

    BEGIN_SERIALIZATION
        SERIALIZATION(m_uLongPosition)
        SERIALIZATION(m_uShortPosition)
        SERIALIZATION(m_dbLongTurnover)
        SERIALIZATION(m_dbShortTurnover)
        SERIALIZATION(m_dbAccuFee)
    END_SERIALIZATION
};



enum E_TradeState {
    T_INI,//��ʼ��
    T_OI_INI,//
    T_OI_W,//�����ȴ�
    T_OI_F,//�����ɹ�
    T_OO_INI,//�����ɹ��ȴ�
    T_OO_W,//�����ȴ�
    T_OO_F,//�����ɹ�
};

struct TradeOrder {
    BEGIN_SERIALIZATION
        SERIALIZATION(tradeState)
        SERIALIZATION(inRef)
        SERIALIZATION(outRef)
        SERIALIZATION(isFirstIn)
        SERIALIZATION(isFirstOut)
        SERIALIZATION(inSysID)
        SERIALIZATION(outSysID)
        SERIALIZATION(direction_In)
        SERIALIZATION(direction_Out)
        SERIALIZATION(vol)
        SERIALIZATION(dealVol)
        SERIALIZATION(orderTime)
    END_SERIALIZATION
    E_TradeState tradeState;//�ɽ�����״̬
    TOrderRefIdType inRef;//������������
    TOrderRefIdType outRef;//������������
    bool isFirstIn;//�Ƿ��Ƚ���
    bool isFirstOut;//�Ƿ��ȳ���
    string inSysID;//�����������
    string outSysID;//�����������
    TOrderDirectionType direction_In;//0��1��
    TOrderDirectionType direction_Out;//0��1��
    int vol;//������    
    int dealVol;//�ɽ���
    ptime orderTime;//��������ʱ��
    void Init()
    {
        vol = 1;//����������
        dealVol = 0;
        tradeState = T_INI;
        inRef = -1;//������������
        inSysID = "";//�����������
        direction_In = LB1_Buy;//0��1��
        direction_Out = LB1_Buy;//0��1��
        outRef = -1;//������������
        outSysID = "";//�����������
    }

};

struct CStrategyPositionStatus
{
    BEGIN_SERIALIZATION
        SERIALIZATION(m_intLongPosition)
        SERIALIZATION(m_intShortPosition)
        SERIALIZATION(m_dbLongTurnover)
        SERIALIZATION(m_dbShortTurnover)
    END_SERIALIZATION


    unsigned int m_intLongPosition = 0;
    unsigned int m_intShortPosition = 0;
    double m_dbLongTurnover = 0;//��(�ɽ������ɽ��۸�)
    double m_dbShortTurnover = 0;//��(�ɽ������ɽ��۸�)
    void Init() {
        m_intLongPosition = 0;
        m_intShortPosition = 0;
        m_dbLongTurnover = 0;
        m_dbShortTurnover = 0;
    }
};



#define FEE_TYPE_FIX 0
#define FEE_TYPE_FLOAT 1
#define FEE_OFFSET_INCREASE 0
#define FEE_OFFSET_DECREASE_TODAY 1
#define FEE_OFFSET_DECREASE_YESTERDAY 2


    
namespace boost {
    namespace serialization {
        template<class Archive, class A, class B, class C,class D,class E,class F,class G>
        inline void serialize(
            Archive & ar,
            std::tuple<A,B,C,D,E,F,G> & p,
            const unsigned int
            ) {
            ar & get<0>(p);
            ar & get<1>(p);
            ar & get<2>(p);
            ar & get<3>(p);
            ar & get<4>(p);
            ar & get<5>(p);
            ar & get<6>(p);
        };
    }
}

class CArbitrageBase : public MStrategy
{
public:
    STRATEGY_TEMPLATE_DECLARE(CArbitrageBase)
    bool OnInquiry(MStrategyInquiryDataInterface*) { return true; };
    bool IsSupport(TStrategyTickType ticktype);
    TLastErrorIdType OnInit(ptime);
    void OnTick(TMarketDataIdType, const CTick *);
    void OnTrade(
        TOrderRefIdType,
        TOrderSysIdType,
        TVolumeType,
        TPriceType,
        TOrderDirectionType,
        TOrderOffsetType);
    void OnOrder(
        TOrderRefIdType,
        TOrderSysIdType,
        TOrderDirectionType,
        TOrderStatusType,
        TPriceType,
        TTradedVolumeType,
        TRemainVolumeType
        );
    void OnEndup();

    bool OnGetPositionInfo(int *);                                //��ȡ���Ե�ǰ�ֲ֣�������Բ�֧�ִ˹��ܣ�����false����
    bool OnGetCustomInfo(char *, size_t);                            //��ȡ�û��Զ�����Ϣ��������Բ�֧�ִ˹��ܣ�����false����
    bool OnGetFloatingProfit(double *);                            //��ȡ��ǰ�ֲָ���ӯ����������Բ�֧�ִ˹��ܣ�����false����
    bool OnGetStatus(char *, size_t);                                //��ȡ����״̬��������Բ�֧�ִ˹��ܣ�����false����

    TLastErrorIdType OnInit_FromArchive(ptime);

    void MakeOrder(TTradeSignalType Signal, unsigned int copies, TVolumeType MinuendVolume, TVolumeType SubtrahendVolume);

    bool CanExcute();

    bool ParamAndProbeInit(CParNode * ,TProbeStructType);

    CPosition & GetMinuendPosition();

    CPosition & GetSubtrahendPosition();

    CFutureTick & GetMinuendTick();

    CFutureTick & GetSubtrahendTick();

    TPriceType  GetMinuendMinPriceTick();

    TPriceType  GetSubtrahendMinPriceTick();

    int  GetMinuendMultipNumber();

    int  GetSubtrahendMultipNumber();

    bool IsTwoLegHasInited();

    void ShowPosition();

    void SetPresupposedPosition(ptime _ptimeGlobalT, int _PresupposedPositionType,int _PresupposedPositionTradeDayType);

    string GetLogFileName();

    BEGIN_PROBE_BIND
    END_PROBE_BIND

    BEGIN_SERIALIZATION

        SERIALIZATION(WriteCsv)
        SERIALIZATION(MakeOrderType)
        SERIALIZATION(OrderWaitTime)
        SERIALIZATION(MinuendMinPriceTick)
        SERIALIZATION(SubtrahendMinPriceTick)
        SERIALIZATION(SubtrahendBadSlipTickCount)
        SERIALIZATION(MinuendBadSlipTickCount)
        SERIALIZATION(PresupposedPositionType)
        SERIALIZATION(PresupposedPositionTradeDayType)
        SERIALIZATION(m_intMinuendMultipNumber)
        SERIALIZATION(m_intSubtrahendMultipNumber)
        SERIALIZATION(m_intFeeType)
        SERIALIZATION(m_dbFeeRatio)
        SERIALIZATION(m_intLog)
        SERIALIZATION(m_intSharedValueIndex)



        SERIALIZATION(m_datePositionTradeDay)
        SERIALIZATION(m_Position)
        SERIALIZATION(m_ptimeGlobalCurrentTime)
        SERIALIZATION(m_Order)
        SERIALIZATION(m_booIsPedding)
        SERIALIZATION(m_tickData)
        SERIALIZATION(m_boolHasInitialize)
        SERIALIZATION(m_lstTradedLog)
        SERIALIZATION(m_uLockedCopies)

    END_SERIALIZATION

    BEGIN_PARAMETER_BIND
        PARAMETER_INT(WriteCsv)
        PARAMETER_INT(MakeOrderType)
        PARAMETER_INT(OrderWaitTime)
        PARAMETER_DOUBLE(MinuendMinPriceTick)
        PARAMETER_DOUBLE(SubtrahendMinPriceTick)
        PARAMETER_INT(SubtrahendBadSlipTickCount)
        PARAMETER_INT(MinuendBadSlipTickCount)
        PARAMETER_INT(PresupposedPositionType)
        PARAMETER_INT(PresupposedPositionTradeDayType)
        PARAMETER_INT(PresupposedPositionType)
        PARAMETER_INT(m_intMinuendMultipNumber)
        PARAMETER_INT(m_intSubtrahendMultipNumber)

        PARAMETER_INT(m_intFeeType[Minuend_Index])
        PARAMETER_INT(m_intFeeType[Subtrahend_Index])

        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_Increase][Minuend_Index])
        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_Increase][Subtrahend_Index])

        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_Decrease][Minuend_Index])
        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_Decrease][Subtrahend_Index])

        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_DecreaseYesterday][Minuend_Index])
        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_DecreaseYesterday][Subtrahend_Index])

        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_DecreaseToday][Minuend_Index])
        PARAMETER_DOUBLE(m_dbFeeRatio[LB1_DecreaseToday][Subtrahend_Index])

        PARAMETER_INT(m_intLog)
        PARAMETER_INT(m_intSharedValueIndex)
    END_PARAMETER_BIND

private:
    date GetTradeday(ptime _Current);


    int WriteCsv = 1;
    int MakeOrderType = static_cast<int>(LB1_NormalLimitOrderType);
    int OrderWaitTime = 1000;//ms �����ȴ�ʱ�䡣
    double MinuendMinPriceTick = 1;
    double SubtrahendMinPriceTick = 1;
    int SubtrahendBadSlipTickCount = 1;
    int MinuendBadSlipTickCount = 0;
    int PresupposedPositionType = PresupposedPosition_Default;//�Ƿ���Ԥ��Ĳ�λ 0:�� 1:Minuend��ͷ Subtrahend��ͷ -1:Minuend��ͷ Subtrahend��ͷ
    int PresupposedPositionTradeDayType = PresupposedPositionTradeDay_Today;//Ԥ���λ�Ľ���ʱ������ 0:��� -1:���
    int m_intMinuendMultipNumber = 10;
    int m_intSubtrahendMultipNumber = 10;
    int m_intFeeType[2] = { FEE_TYPE_FIX ,FEE_TYPE_FIX };//����������
    double m_dbFeeRatio[LB1_UnknownOffset][2] = { { 0.0,0.0 },{ 0.0,0.0 },{ 0.0,0.0 },{ 0.0,0.0 } };//����������
    int m_intLog=1;
    int m_intSharedValueIndex = 0;



    date m_datePositionTradeDay;
    CPosition m_Position[2];//�ó�Աֻ����OnTrade�в���Ȩ�ı�
    ptime m_ptimeGlobalCurrentTime;
    TradeOrder m_Order[2];
    bool m_booIsPedding = false;
    CFutureTick m_tickData[2];
    bool m_boolHasInitialize[2];
    
    tuple<
        TOrderDirectionType,
        ptime,
        TPriceType, 
        list< pair<TPriceType,TVolumeType> >, 
        ptime,
        TPriceType, 
        list< pair<TPriceType, TVolumeType> >
    > m_lstTradedLog[2];
    unsigned int m_uLockedCopies = 0;



};

#endif
