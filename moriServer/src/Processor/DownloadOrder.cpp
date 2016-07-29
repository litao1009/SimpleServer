#include "ProcessorCommon.h"
#include "transMsg/DownloadOrder.pb.h"
#include "OrderFlow/IOrderState.h"
#include "DataBase/msg-GLUtils.h"
#include "Encrypt.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QDownloadOrder);


CMsgCallBack<transMsg::QDownloadOrder>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QDownloadOrder>::_Process( transMsg::QDownloadOrder& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ADownloadOrder>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_OrderInfo_Data statusInfo;
	statusInfo.SetAll(true);
	
	{
		SociAdaptor ada(Statement().Select(GL_OrderInfo.Into((statusInfo))).From(GL_OrderInfo).Where(GL_OrderInfo.OrderID==msg.orderid()), sql);

		if ( !ada.Excute() )
		{
			retMsg->set_stats(transMsg::ERS_EMPTY_RECORD);
			return;
		}
	}

	auto curState = IOrderState::Factory(static_cast<order::EOrderState>(*statusInfo.OrderStatus_));
	if ( !curState )
	{
		retMsg->set_stats(transMsg::ERS_EMPTY_STATE);
		return;
	}

	AStringType str;
	PathType file;
	auto ret = curState->Download(userInfo, statusInfo, msg.tabletype(), str, file, sql);
	if ( transMsg::ERS_SUCCESS == ret )
	{
		ToUTF8(statusInfo);

		retMsg->mutable_downloadorder()->set_tabletype(msg.tabletype());
		retMsg->mutable_downloadorder()->mutable_ordertable()->swap(str);
		retMsg->mutable_downloadorder()->mutable_gl_orderinfo()->Swap(&ToMessage(statusInfo));

		retInfo.Encode_.Compress_ = true;
		retInfo.Encode_.AESKey_ = FastEncrypt::AES_GenerateKey();
	}

	retMsg->set_stats(ret);
	if ( !file.empty() )
	{
		retInfo.Files_.push_back(file);
	}
}