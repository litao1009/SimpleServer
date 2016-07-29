#include "ProcessorCommon.h"
#include "transMsg/GetAppVersion.pb.h"
#include "Utils/NameSpace/nsFileSystem.h"
#include "DataBase/msg-GLUtils.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QGetAppVersion);


CMsgCallBack<transMsg::QGetAppVersion>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QGetAppVersion>::_Process( transMsg::QGetAppVersion& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AGetAppVersion>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_AppVerInfo_Data verInfo;
	verInfo.SetAll(true);

	Statement st;
	st.Select(GL_AppVerInfo.Into(verInfo))
		.From(GL_AppVerInfo)
		.Where(GL_AppVerInfo.ClientType==userInfo.DC_.ClientType_ && GL_AppVerInfo.IsActive==DBValue::True);

	retMsg->set_stats(transMsg::ERS_SUCCESS);

	if ( !SociAdaptor(st,sql).Excute() || verInfo.AppVerID_ <= msg.appverid() )
	{
		return;
	}

	retMsg->mutable_gl_appverinfo()->CopyFrom(ToMessage(verInfo));

	if ( !msg.isdownload() )
	{
		return;
	}

	if ( !nsFileSystem::exists(*verInfo.FilePath_) )
	{
		LOG_ERROR << L"无法找到文件" << verInfo.FilePath_;
		return;
	}

	retInfo.Files_.push_back(*verInfo.FilePath_);
}