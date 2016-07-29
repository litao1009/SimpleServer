#include "ProcessorCommon.h"
#include "DataBase/msg-GL.h"
#include "OrderFlow/IOrderState.h"
#include "transMsg/ResetOrder.pb.h"


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QResetOrder);


CMsgCallBack<transMsg::QResetOrder>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QResetOrder>::_Process( transMsg::QResetOrder& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AResetOrder>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_OrderInfo_Data statusOrder;
	statusOrder.SetAll(true);

	if ( !SociAdaptor(Statement()
		.Select(GL_OrderInfo.Into(statusOrder))
		.From(GL_OrderInfo)
		.Where(GL_OrderInfo.OrderID==msg.orderid()), sql).Excute() )
	{
		retMsg->set_stats(transMsg::ERS_EMPTY_RECORD);
		return;
	}

	IOrderStatePtr curState = IOrderState::Factory(static_cast<order::EOrderState>(*statusOrder.OrderStatus_));

	if ( !curState )
	{
		retMsg->set_stats(transMsg::ERS_EMPTY_RECORD);
		return;
	}

	auto res = curState->ReSet(userInfo, statusOrder, sql);

	retMsg->set_stats(res);
}