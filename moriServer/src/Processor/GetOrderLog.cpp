#include "ProcessorCommon.h"
#include "transMsg/GetOrderLog.pb.h"
#include "DataBase/msg-SVUtils.h"


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QGetOrderLog);


CMsgCallBack<transMsg::QGetOrderLog>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QGetOrderLog>::_Process( transMsg::QGetOrderLog& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AGetOrderLog>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	SV_OrderActionRecordInfo_Data res;
	res.SetAll(true);

	SociAdaptor ada(Statement()
		.Select(SV_OrderActionRecordInfo.Into(res))
		.From(SV_OrderActionRecordInfo)
		.Where(SV_OrderActionRecordInfo.OrderID==msg.orderid()), sql);

	ada.Excute(false);

	while ( ada.Fetch() )
	{
		ToUTF8(res);
		retMsg->add_orderlog()->Swap(&ToMessage(res));
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
}