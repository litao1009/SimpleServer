#include "ProcessorCommon.h"
#include "transMsg/DownloadRes.pb.h"
#include "DataBase/msg-SV.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QDownloadRes);


CMsgCallBack<transMsg::QDownloadRes>::CMsgCallBack()
{

}


void CMsgCallBack<transMsg::QDownloadRes>::_Process( transMsg::QDownloadRes& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ADownloadRes>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	try
	{
		AStringType theHash;
		SV_LibFileInfo_Data fileInfo;
		fileInfo.SetAll(true);

		Statement st;
		st.Select(SV_LibFileInfo.Into(fileInfo))
			.From(SV_LibFileInfo)
			.Where(SV_LibFileInfo.DeptID==*userInfo.UserInfo_.FactoryID_ && SV_LibFileInfo.HashCode==Use(theHash));

		SociAdaptor ada(st, sql);

		for ( auto& perFile : msg.filehashs() )
		{
			theHash = perFile;

			if ( !ada.Excute() )
			{
				retMsg->add_rejectedhashs(perFile);
				continue;
			}

			if ( !nsFileSystem::exists(*fileInfo.DestPath_) )
			{
				LOG_ERROR << fileInfo.DestPath_ << L" Does not exist!";
				retMsg->add_rejectedhashs(perFile);
			}
			else
			{
				retMsg->add_passedhashs(theHash);
				retInfo.Files_.push_back(*fileInfo.DestPath_);
			}
		}

		retMsg->set_stats(transMsg::ERS_SUCCESS);
	}
	catch (soci::soci_error& err)
	{
		retMsg->set_stats(transMsg::ERS_SERVER_ERROR);
		retInfo.Files_.clear();
		LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
	}
}