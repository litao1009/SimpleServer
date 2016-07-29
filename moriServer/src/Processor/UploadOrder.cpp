#include "ProcessorCommon.h"
#include "DataBase/msg-GL.h"
#include "transMsg/UploadOrder.pb.h"
#include "OrderFlow/IOrderState.h"
#include "Utils/Type/ErrCodeType.h"

#include <atomic>
#include <boost/format.hpp>

static	PathType MoveResFile(int32_t factoryID, int64_t orderID, const PathType& toMoveFile, ErrCodeType& ec)
{
	static	PathType pt("./Save/UploadOrder");
	static	std::atomic<int64_t> safeCounter(0);

	auto dstPt = pt / std::to_string(factoryID) / std::to_string(orderID);
	if ( !nsFileSystem::exists(dstPt) )
	{
		nsFileSystem::create_directories(dstPt);
	}

	auto curCount = safeCounter.fetch_add(1);

	auto newPt = dstPt / std::to_string(curCount);
	nsFileSystem::rename(toMoveFile, newPt, ec);
	if ( ec )
	{
		LOG_INFO << L"Move File :" << toMoveFile << L" Failed";
	}

	return newPt;
}


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUploadOrder);


CMsgCallBack<transMsg::QUploadOrder>::CMsgCallBack()
{
	
}

void CMsgCallBack<transMsg::QUploadOrder>::_Process( transMsg::QUploadOrder& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUploadOrder>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);
		
	soci::transaction trans(sql);

	int64_t orderID = 0;
	int32_t orderIndex = 0;

	if ( msg.isneworder() )
	{
		auto updateInfo = retMsg->mutable_newinfo();
		updateInfo->set_oldid(msg.orderid());

		GL_OrderInfo_Data orderStatusInfo;
		orderStatusInfo.ClientOrderID_ = msg.orderid();
		orderStatusInfo.DesignerID_ = userInfo.UserInfo_.UserID_;
		orderStatusInfo.FactoryID_ = userInfo.UserInfo_.FactoryID_;
		orderStatusInfo.ShopID_ = userInfo.UserInfo_.ShopID_;
		orderStatusInfo.ShopAuditTime_ = DBTime(rawDate);
		orderStatusInfo.ShopCommitTime_ = DBTime(rawDate);
		orderStatusInfo.GraphAuditTime_ = DBTime(rawDate);
		orderStatusInfo.ListAuditTime_ = DBTime(rawDate);
		orderStatusInfo.FinanceAuditTime_ = DBTime(rawDate);

		if ( msg.has_ordertype() )
		{
			orderStatusInfo.OrderType_ = msg.ordertype();
		}
		else
		{
			orderStatusInfo.OrderType_ = 1;
		}
		
		SociAdaptor(Statement().Insert(GL_OrderInfo.Use(orderStatusInfo)), sql).Excute();

		SociAdaptor(Statement()
#ifdef USE_SQLSERVER
			.Select(isnull(max(GL_OrderInfo.OrderID), 0).Into(orderID)|isnull(max(GL_OrderInfo.OrderIndex), 0).Into(orderIndex))
#elif defined USE_MYSQL
			.Select(ifnull(max(GL_OrderInfo.OrderID), 0).Into(orderID)|ifnull(max(GL_OrderInfo.OrderIndex), 0).Into(orderIndex))
#endif
			.From(GL_OrderInfo)
			.Where(GL_OrderInfo.FactoryID==*userInfo.UserInfo_.FactoryID_), sql).Excute();

		++orderIndex;

		boost::format fmtOrderCode("%012d");
		fmtOrderCode % orderIndex;

		updateInfo->set_newcode(fmtOrderCode.str());
		
		GL_OrderInfo_Data updateOrder;
		updateOrder.OrderIndex_ = orderIndex;
		updateOrder.OrderCode_ = fmtOrderCode.str();

		if ( !msg.iszborder() )
		{
			updateOrder.OrderStatus_ = order::EOS_SAVE;
		}
		else
		{
			updateOrder.OrderStatus_ = order::EOS_ZB_SAVE;
		}

		SociAdaptor(Statement().Update(GL_OrderInfo.Use(updateOrder)).Where(GL_OrderInfo.OrderID==orderID && GL_OrderInfo.FactoryID == *userInfo.UserInfo_.FactoryID_), sql).Excute();

		updateInfo->set_newid(orderID);
		updateInfo->set_newindex(orderIndex);

		msg.set_orderid(orderID);
	}

	GL_OrderInfo_Data statusInfo;
	statusInfo.SetAll(true);

	SociAdaptor(Statement().Select(GL_OrderInfo.Into(statusInfo)).From(GL_OrderInfo).Where(GL_OrderInfo.OrderID==msg.orderid()), sql).Excute();

	PathType theFile;
	ErrCodeType ec;
	if ( !files.empty() )
	{
		if ( 1 != files.size() )
		{
			ProcessorCommon::RemoveFiles(files);
			retMsg->set_stats(transMsg::ERS_WRONG_FILE);
			return;
		}
		else
		{
			theFile = MoveResFile(*userInfo.UserInfo_.FactoryID_, *statusInfo.OrderID_, files.front().Path_, ec);
			if ( ec )
			{
				LOG_INFO << ec;
				return;
			}
		}
	}

	auto curState = IOrderState::Factory(static_cast<order::EOrderState>(*statusInfo.OrderStatus_));
	if ( !curState )
	{
		retMsg->set_stats(transMsg::ERS_ORDER_DENY);
		return;
	}
	
	auto ret = curState->Upload(userInfo, statusInfo, *msg.mutable_ordertable(), theFile, sql);
	retMsg->set_stats(ret);

	if ( transMsg::ERS_SUCCESS == ret )
	{
		trans.commit();
	}
}