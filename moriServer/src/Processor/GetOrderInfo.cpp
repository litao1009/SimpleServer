#include "ProcessorCommon.h"
#include "DataBase/msg-SJUtils.h"
#include "DataBase/msg-GLUtils.h"
#include "DataBase/msg-DSUtils.h"
#include "DataBase/msg-GCUtils.h"
#include "transMsg/GetOrderInfo.pb.h"
#include "OrderFlow/IOrderState.h"
#include "Encrypt.h"


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QGetOrderInfo);


CMsgCallBack<transMsg::QGetOrderInfo>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QGetOrderInfo>::_Process( transMsg::QGetOrderInfo& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AGetOrderInfo>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_OrderInfo_Data orderData;
	SJ_OrderDataInfo_Data sjData;
	DS_OrderDataInfo_Data dsData;
	GC_OrderDataInfo_Data gcData;
	GL_SugarVerInfo_Data libData;
	int tableType;

	orderData.SetAll(true);
	sjData.SetAll(true);
	dsData.SetAll(true);
	gcData.SetAll(true);

	libData.VerCode_ = boost::initialized_value;
	libData.VerIndex_ = boost::initialized_value;

	Statement stSJ,stDS,stGC;
	stSJ.Select(GL_OrderInfo.Into(orderData)|SJ_OrderDataInfo.Into(sjData)|IntColumn("1 as type").Into(tableType)|GL_SugarVerInfo.Into(libData)).From(GL_OrderInfo);
	stDS.Select(GL_OrderInfo.Into(orderData)|DS_OrderDataInfo.Into(dsData)|IntColumn("2 as type").Into(tableType)|GL_SugarVerInfo.Into(libData)).From(GL_OrderInfo);
	stGC.Select(GL_OrderInfo.Into(orderData)|GC_OrderDataInfo.Into(gcData)|IntColumn("3 as type").Into(tableType)|GL_SugarVerInfo.Into(libData)).From(GL_OrderInfo);

	if ( msg.has_geocode() )
	{
		stSJ.InnerJoin(GL_DeptInfo).On(GL_OrderInfo.ShopID==GL_DeptInfo.DeptID && GL_DeptInfo.GeoCode.Left(msg.geocode().length())==msg.geocode());
		stDS.InnerJoin(GL_DeptInfo).On(GL_OrderInfo.ShopID==GL_DeptInfo.DeptID && GL_DeptInfo.GeoCode.Left(msg.geocode().length())==msg.geocode());
		stGC.InnerJoin(GL_DeptInfo).On(GL_OrderInfo.ShopID==GL_DeptInfo.DeptID && GL_DeptInfo.GeoCode.Left(msg.geocode().length())==msg.geocode());
	}

	stSJ.InnerJoin(SJ_OrderDataInfo).On(GL_OrderInfo.OrderID==SJ_OrderDataInfo.OrderID && GL_OrderInfo.FactoryID==SJ_OrderDataInfo.FactoryID);
	stDS.InnerJoin(DS_OrderDataInfo).On(GL_OrderInfo.OrderID==DS_OrderDataInfo.OrderID && GL_OrderInfo.FactoryID==DS_OrderDataInfo.FactoryID);
	stGC.InnerJoin(GC_OrderDataInfo).On(GL_OrderInfo.OrderID==GC_OrderDataInfo.OrderID && GL_OrderInfo.FactoryID==GC_OrderDataInfo.FactoryID);

	stSJ.InnerJoin(SJ_DesignPlanInfo).On(GL_OrderInfo.OrderID==SJ_DesignPlanInfo.OrderID && GL_OrderInfo.FactoryID==SJ_DesignPlanInfo.FactoryID && SJ_DesignPlanInfo.IsActive==true);
	stSJ.InnerJoin(GL_SugarVerInfo).On(SJ_DesignPlanInfo.VerCode==GL_SugarVerInfo.VerCode);
	stDS.InnerJoin(DS_DesignPlanInfo).On(GL_OrderInfo.OrderID==DS_DesignPlanInfo.OrderID && GL_OrderInfo.FactoryID==DS_DesignPlanInfo.FactoryID && DS_DesignPlanInfo.IsActive==true);
	stDS.InnerJoin(GL_SugarVerInfo).On(DS_DesignPlanInfo.VerCode==GL_SugarVerInfo.VerCode);
	stGC.InnerJoin(GC_DesignPlanInfo).On(GL_OrderInfo.OrderID==GC_DesignPlanInfo.OrderID && GL_OrderInfo.FactoryID==GC_DesignPlanInfo.FactoryID && GC_DesignPlanInfo.IsActive==true);
	stGC.InnerJoin(GL_SugarVerInfo).On(GC_DesignPlanInfo.VerCode==GL_SugarVerInfo.VerCode);

	auto sjCond = GL_OrderInfo.FactoryID==SJ_OrderDataInfo.FactoryID;
	auto dsCond = GL_OrderInfo.FactoryID==DS_OrderDataInfo.FactoryID;
	auto gcCond = GL_OrderInfo.FactoryID==GC_OrderDataInfo.FactoryID;

	if ( 0 != *userInfo.UserInfo_.ShopID_ )
	{
		sjCond && GL_OrderInfo.ShopID==*userInfo.UserInfo_.ShopID_;
		dsCond && GL_OrderInfo.ShopID==*userInfo.UserInfo_.ShopID_;
		gcCond && GL_OrderInfo.ShopID==*userInfo.UserInfo_.ShopID_;
	}

	if ( msg.has_ordercode() )
	{
		sjCond && GL_OrderInfo.OrderCode.Like(msg.ordercode());
		dsCond && GL_OrderInfo.OrderCode.Like(msg.ordercode());
		gcCond && GL_OrderInfo.OrderCode.Like(msg.ordercode());
	}

	{
		auto orderRelative = IOrderState::GetPeekRightCondString(userInfo);
		orderRelative && IOrderState::GetPeekStateCondString(userInfo);

		sjCond && orderRelative;
		dsCond && orderRelative;
		gcCond && orderRelative;
	}

	if ( 0 != msg.orderstatus_size() )
	{
		sjCond && GL_OrderInfo.OrderStatus.In(msg.orderstatus().begin(), msg.orderstatus().end());
		dsCond && GL_OrderInfo.OrderStatus.In(msg.orderstatus().begin(), msg.orderstatus().end());
		gcCond && GL_OrderInfo.OrderStatus.In(msg.orderstatus().begin(), msg.orderstatus().end());
	}

	{
		if ( msg.has_shopauditstarttime() )
		{
			sjCond && GL_OrderInfo.ShopAuditTime>=DBTime(rawDate, DBMilliseconds(msg.shopauditstarttime()));
			dsCond && GL_OrderInfo.ShopAuditTime>=DBTime(rawDate, DBMilliseconds(msg.shopauditstarttime()));
			gcCond && GL_OrderInfo.ShopAuditTime>=DBTime(rawDate, DBMilliseconds(msg.shopauditstarttime()));
		}
		
		if ( msg.has_shopauditstoptime() )
		{
			sjCond && GL_OrderInfo.ShopAuditTime<=DBTime(rawDate, DBMilliseconds(msg.shopauditstoptime()));
			dsCond && GL_OrderInfo.ShopAuditTime<=DBTime(rawDate, DBMilliseconds(msg.shopauditstoptime()));
			gcCond && GL_OrderInfo.ShopAuditTime<=DBTime(rawDate, DBMilliseconds(msg.shopauditstoptime()));
		}

		if ( msg.has_shopcommitstarttime() )
		{
			sjCond && GL_OrderInfo.ShopCommitTime>=DBTime(rawDate, DBMilliseconds(msg.shopcommitstarttime()));
			dsCond && GL_OrderInfo.ShopCommitTime>=DBTime(rawDate, DBMilliseconds(msg.shopcommitstarttime()));
			gcCond && GL_OrderInfo.ShopCommitTime>=DBTime(rawDate, DBMilliseconds(msg.shopcommitstarttime()));
		}

		if ( msg.has_shopcommitstoptime() )
		{
			sjCond && GL_OrderInfo.ShopCommitTime<=DBTime(rawDate, DBMilliseconds(msg.shopcommitstoptime()));
			dsCond && GL_OrderInfo.ShopCommitTime<=DBTime(rawDate, DBMilliseconds(msg.shopcommitstoptime()));
			gcCond && GL_OrderInfo.ShopCommitTime<=DBTime(rawDate, DBMilliseconds(msg.shopcommitstoptime()));
		}

		if ( msg.has_graphauditstarttime() )
		{
			sjCond && GL_OrderInfo.GraphAuditTime>=DBTime(rawDate, DBMilliseconds(msg.graphauditstarttime()));
			dsCond && GL_OrderInfo.GraphAuditTime>=DBTime(rawDate, DBMilliseconds(msg.graphauditstarttime()));
			gcCond && GL_OrderInfo.GraphAuditTime>=DBTime(rawDate, DBMilliseconds(msg.graphauditstarttime()));
		}

		if ( msg.has_graphauditstoptime() )
		{
			sjCond && GL_OrderInfo.GraphAuditTime<=DBTime(rawDate, DBMilliseconds(msg.graphauditstoptime()));
			dsCond && GL_OrderInfo.GraphAuditTime<=DBTime(rawDate, DBMilliseconds(msg.graphauditstoptime()));
			gcCond && GL_OrderInfo.GraphAuditTime<=DBTime(rawDate, DBMilliseconds(msg.graphauditstoptime()));
		}

		if ( msg.has_listauditstarttime() )
		{
			sjCond && GL_OrderInfo.ListAuditTime>=DBTime(rawDate, DBMilliseconds(msg.listauditstarttime()));
			dsCond && GL_OrderInfo.ListAuditTime>=DBTime(rawDate, DBMilliseconds(msg.listauditstarttime()));
			gcCond && GL_OrderInfo.ListAuditTime>=DBTime(rawDate, DBMilliseconds(msg.listauditstarttime()));
		}

		if ( msg.has_listauditstoptime() )
		{
			sjCond && GL_OrderInfo.ListAuditTime<=DBTime(rawDate, DBMilliseconds(msg.listauditstoptime()));
			dsCond && GL_OrderInfo.ListAuditTime<=DBTime(rawDate, DBMilliseconds(msg.listauditstoptime()));
			gcCond && GL_OrderInfo.ListAuditTime<=DBTime(rawDate, DBMilliseconds(msg.listauditstoptime()));
		}

		if ( msg.has_financeauditstarttime() )
		{
			sjCond && GL_OrderInfo.FinanceAuditTime>=DBTime(rawDate, DBMilliseconds(msg.financeauditstarttime()));
			dsCond && GL_OrderInfo.FinanceAuditTime>=DBTime(rawDate, DBMilliseconds(msg.financeauditstarttime()));
			gcCond && GL_OrderInfo.FinanceAuditTime>=DBTime(rawDate, DBMilliseconds(msg.financeauditstarttime()));
		}

		if ( msg.has_financeauditstoptime() )
		{
			sjCond && GL_OrderInfo.FinanceAuditTime<=DBTime(rawDate, DBMilliseconds(msg.financeauditstoptime()));
			dsCond && GL_OrderInfo.FinanceAuditTime<=DBTime(rawDate, DBMilliseconds(msg.financeauditstoptime()));
			gcCond && GL_OrderInfo.FinanceAuditTime<=DBTime(rawDate, DBMilliseconds(msg.financeauditstoptime()));
		}
	}

	std::vector<int32_t> sjSt,dsSt,gcSt;
		
	sjSt.emplace_back(order::EOS_SAVE);
	sjSt.emplace_back(order::EOS_SHOP_EXAMINE_WAIT);
	sjSt.emplace_back(order::EOS_SHOP_EXAMINE_FAIL);

	dsSt.emplace_back(order::EOS_SHOP_EXAMINE_DURING);
	dsSt.emplace_back(order::EOS_SHOP_EXAMINE_WAIT);
	dsSt.emplace_back(order::EOS_SHOP_EXAMINE_DONE);
	dsSt.emplace_back(order::EOS_FACTORY_EXAMINE_WAIT);

	gcSt.emplace_back(order::EOS_SAVE);
	gcSt.emplace_back(order::EOS_SHOP_EXAMINE_WAIT);
	gcSt.emplace_back(order::EOS_SHOP_EXAMINE_FAIL);
	gcSt.emplace_back(order::EOS_SHOP_EXAMINE_DURING);
	gcSt.emplace_back(order::EOS_SHOP_EXAMINE_WAIT);
	gcSt.emplace_back(order::EOS_SHOP_EXAMINE_DONE);
	gcSt.emplace_back(order::EOS_FACTORY_EXAMINE_WAIT);

	sjCond && GL_OrderInfo.OrderStatus.In(sjSt.begin(), sjSt.end());
	dsCond && GL_OrderInfo.OrderStatus.In(dsSt.begin(), dsSt.end());
	gcCond && GL_OrderInfo.OrderStatus.NotIn(gcSt.begin(), gcSt.end());

	if ( msg.has_ordertitle() )
	{
		sjCond && SJ_OrderDataInfo.OrderTitle.Like("%" + msg.ordertitle() + "%");
		dsCond && DS_OrderDataInfo.OrderTitle.Like("%" + msg.ordertitle() + "%");
		gcCond && GC_OrderDataInfo.OrderTitle.Like("%" + msg.ordertitle() + "%");
	}

	if ( msg.has_orderstarttime() )
	{
		sjCond && SJ_OrderDataInfo.OrderTime>(DBTime(rawDate, DBMilliseconds(msg.orderstarttime())));
		dsCond && DS_OrderDataInfo.OrderTime>(DBTime(rawDate, DBMilliseconds(msg.orderstarttime())));
		gcCond && GC_OrderDataInfo.OrderTime>(DBTime(rawDate, DBMilliseconds(msg.orderstarttime())));
	}

	if ( msg.has_orderstoptime() )
	{
		sjCond && SJ_OrderDataInfo.OrderTime<=(DBTime(rawDate, DBMilliseconds(msg.orderstoptime())));
		dsCond && DS_OrderDataInfo.OrderTime<=(DBTime(rawDate, DBMilliseconds(msg.orderstoptime())));
		gcCond && GC_OrderDataInfo.OrderTime<=(DBTime(rawDate, DBMilliseconds(msg.orderstoptime())));
	}

	if ( msg.has_isshare() )
	{
		sjCond && SJ_OrderDataInfo.IsShare==true;
		dsCond && DS_OrderDataInfo.IsShare==true;
		gcCond && GC_OrderDataInfo.IsShare==true;
	}

	sjCond && SJ_OrderDataInfo.FactoryID==*userInfo.UserInfo_.FactoryID_;
	dsCond && DS_OrderDataInfo.FactoryID==*userInfo.UserInfo_.FactoryID_;
	gcCond && GC_OrderDataInfo.FactoryID==*userInfo.UserInfo_.FactoryID_;

	stSJ.Where(sjCond);
	stDS.Where(dsCond);
	stGC.Where(gcCond);

	Statement finalSt;

	if ( !msg.has_tabletype() )
	{
		finalSt = stSJ;

		finalSt.Union(stDS).Union(stGC);
	}
	else
	{
		switch (msg.tabletype())
		{
		case transMsg::ETT_SJ_TABLE:
			finalSt = stSJ;
			break;
		case transMsg::ETT_DS_TABLE:
			finalSt = stDS;
			break;
		case transMsg::ETT_GC_TABLE:
		case transMsg::ETT_ZB_TABLE:
		case transMsg::ETT_LS_TABLE:
			stGC = stDS;
			break;
		default:
			break;
		}
	}

	SociAdaptor ada(finalSt, sql);

	ada.Excute(false);

	while ( ada.Fetch() )
	{
		ToUTF8(orderData);
		ToUTF8(sjData);
// 		dsData.ToUtf8();
// 		gcData.ToUtf8();

		auto toAdd = retMsg->add_orderinfo();
		toAdd->mutable_statusinfo()->Swap(&ToMessage(orderData));
		toAdd->set_vercode(*libData.VerCode_);
		toAdd->set_verindex(*libData.VerIndex_);
		ToMessage(sjData).SerializeToString(toAdd->mutable_orderinfo());

// 		if ( 1 == tableType )
// 		{
// 			ToMessage(sjData).SerializeToString(toAdd->mutable_orderinfo());
// 		}
// 		else if ( 2 == tableType )
// 		{
// 			ToMessage(dsData).SerializeToString(toAdd->mutable_orderinfo());
// 		}
// 		else if ( 3 == tableType )
// 		{
// 			ToMessage(gcData).SerializeToString(toAdd->mutable_orderinfo());
// 		}
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
	retInfo.Encode_.Compress_ = true;
	retInfo.Encode_.AESKey_ = FastEncrypt::AES_GenerateKey();
}