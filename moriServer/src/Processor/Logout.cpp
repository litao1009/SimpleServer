#include "ProcessorCommon.h"
#include "transMsg/Logout.pb.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QLogout);


CMsgCallBack<transMsg::QLogout>::CMsgCallBack()
{

}


void CMsgCallBack<transMsg::QLogout>::_Process( transMsg::QLogout& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ALogout>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;

	SafeIDMap::GetInstance().EraseVerifyCode(*userInfo.DC_.VerifyCode_);
	retMsg->set_stats(transMsg::ERS_SUCCESS);
}