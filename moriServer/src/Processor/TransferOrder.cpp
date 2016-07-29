// #include "ProcessorCommon.h"
// #include "transMsg/TransferOrder.pb.h"
// #include "OrderFlow/IOrderState.h"
// #include "DataBase/msg-GL.h"
// 
// IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QTransferOrder);
// 
// 
// CMsgCallBack<transMsg::QTransferOrder>::CMsgCallBack()
// {
// 
// }
// 
// void CMsgCallBack<transMsg::QTransferOrder>::_Process( transMsg::QTransferOrder& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
// {
// 	auto retMsg = smartPtr::make_shared<transMsg::ATransferOrder>();
// 	auto& retInfo = sendInfoPtr->Add();
// 	retInfo.MsgPtr_ = retMsg;
// 	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);
// 
// 
// // 	GL_OrderInfo statusInfo;
// // 	sql << GL_OrderInfo::SelectString()
// // 		<< " where " << GL_OrderInfo::OrderID() << "=" << msg.orderid()
// // 		,soci::into(statusInfo);
// // 
// // 	auto curPtr = IOrderState::Factory(static_cast<order::EOrderState>(statusInfo.transMsg().orderstatus()));
// // 	if ( !curPtr )
// // 	{
// // 		retMsg->set_stats(transMsg::ERS_ORDER_DENY);
// // 		return;
// // 	}
// // 
// // 	auto res = curPtr->TransferOrder(msg.ownuser(), msg.touser(), userInfo, statusInfo, sql);
// // 	retMsg->set_stats(res);
// }