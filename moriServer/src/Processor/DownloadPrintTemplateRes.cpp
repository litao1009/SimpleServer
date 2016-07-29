#include "ProcessorCommon.h"
#include "transMsg/DownloadPrintTemplateRes.pb.h"
#include "DataBase/msg-GLUtils.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QDownloadPrintTemplateRes);


CMsgCallBack<transMsg::QDownloadPrintTemplateRes>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QDownloadPrintTemplateRes>::_Process( transMsg::QDownloadPrintTemplateRes& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ADownloadPrintTemplateRes>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	if ( 0 == msg.hashcodes_size() )
	{
		retMsg->set_stats(transMsg::ERS_EMPTY_FILE);
		return;
	}

	try
	{
		AStringType theHash;
		GL_PrintTemplateInfo_Data fileInfo;
		fileInfo.SetAll(true);

		Statement st;
		st.Select(GL_PrintTemplateInfo.Into(fileInfo))
			.From(GL_PrintTemplateInfo)
			.Where(GL_PrintTemplateInfo.FactoryID==*userInfo.UserInfo_.FactoryID_ &&	GL_PrintTemplateInfo.HashCode==Use(theHash));

		SociAdaptor ada(st, sql);

		for ( auto& perFile : msg.hashcodes() )
		{
			theHash = perFile;

			if ( !ada.Excute() )
			{
				retMsg->add_rejectedhashcodes(perFile);
				continue;
			}

			if ( !nsFileSystem::exists(*fileInfo.RelativePath_) )
			{
				LOG_ERROR << fileInfo.RelativePath_ << L" Does not exist!";
				retMsg->add_rejectedhashcodes(perFile);
			}
			else
			{
				retMsg->add_passedhashcodes(theHash);
				retInfo.Files_.push_back(*fileInfo.RelativePath_);
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