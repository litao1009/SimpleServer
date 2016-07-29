#include "ProcessorCommon.h"
#include "transMsg/GetOrderStatus.pb.h"

#include <vector>

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QGetOrderStatus);


CMsgCallBack<transMsg::QGetOrderStatus>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QGetOrderStatus>::_Process( transMsg::QGetOrderStatus& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AGetOrderStatus>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	if ( 0 == msg.orderids_size() )
	{
		retMsg->set_stats(transMsg::ERS_SUCCESS);
		return;
	}

	std::vector<int64_t> orders;
	std::vector<int32_t> status;

	SociAdaptor (Statement()
		.Select(GL_OrderInfo.OrderID.Into(orders)|GL_OrderInfo.OrderStatus.Into(status))
		.From(GL_OrderInfo)
		.Where(GL_OrderInfo.FactoryID==*userInfo.UserInfo_.FactoryID_ && GL_OrderInfo.OrderID.In(msg.orderids().begin(), msg.orderids().end())), sql).Excute();

	for ( uint32_t i=0; i<orders.size(); ++i )
	{
		auto info = retMsg->add_orderstatus();
		info->set_orderid(orders[i]);
		info->set_orderstatus(static_cast<order::EOrderState>(status[i]));
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
}