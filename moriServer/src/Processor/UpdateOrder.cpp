#include "ProcessorCommon.h"
#include "transMsg/UpdateOrder.pb.h"
#include "OrderFlow/IOrderState.h"
#include "DataBase/msg-GL.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUpdateOrder);


CMsgCallBack<transMsg::QUpdateOrder>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QUpdateOrder>::_Process( transMsg::QUpdateOrder& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUpdateOrder>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_OrderInfo_Data statusInfo;
	int64_t theOrderID;
	statusInfo.SetAll(true);

	Statement st;
	st.Select(GL_OrderInfo.Into(statusInfo))
		.From(GL_OrderInfo)
		.Where(GL_OrderInfo.OrderID==Use(theOrderID));

	for ( auto& curOrder : msg.orders() )
	{
		auto curStats = retMsg->add_results();
		curStats->set_orderid(curOrder.orderid());
		curStats->set_stats(transMsg::ERS_SERVER_ERROR);
		theOrderID = curOrder.orderid();

		if ( !SociAdaptor(st, sql).Excute() )
		{
			curStats->set_stats(transMsg::ERS_EMPTY_RECORD);
			continue;
		}

		auto curState = IOrderState::Factory(static_cast<order::EOrderState>(*statusInfo.OrderStatus_));

		if ( !curState )
		{
			curStats->set_stats(transMsg::ERS_EMPTY_RECORD);
			continue;
		}

		auto pathList = IOrderState::CalcuOrderPathList(static_cast<order::EOrderState>(*statusInfo.OrderStatus_), curOrder.tostatus(), statusInfo, userInfo);

		if ( pathList.empty() )
		{
			curStats->set_stats(transMsg::ERS_ORDER_DENY);
			continue;
		}

		{
			soci::transaction trans(sql);

			transMsg::EReturnStatus res = transMsg::ERS_SUCCESS;
			auto orderID = curOrder.orderid();
			for ( auto& toState : pathList )
			{
				if ( transMsg::ERS_SUCCESS != res )
				{
					break;
				}

				auto curState = IOrderState::Factory(static_cast<order::EOrderState>(*statusInfo.OrderStatus_));

				res = curState->ChangeTo(userInfo, statusInfo, toState, curOrder.has_comment()?curOrder.comment():AStringType(), sql);

				if ( transMsg::ERS_SUCCESS != res )
				{
					curStats->set_stats(res);
					break;
				}
			}

			if ( transMsg::ERS_SUCCESS == res )
			{
				trans.commit();
				curStats->set_stats(transMsg::ERS_SUCCESS);
			}
		}
	}
	
	retMsg->set_stats(transMsg::ERS_SUCCESS);
}