#include "ProcessorCommon.h"
#include "transMsg/UploadDesignConfig.pb.h"
#include "DataBase/msg-GLUtils.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUploadDesignConfig);


CMsgCallBack<transMsg::QUploadDesignConfig>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QUploadDesignConfig>::_Process( transMsg::QUploadDesignConfig& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUploadDesignConfig>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	SociAdaptor(Statement().Select(GL_DesignerConfigInfo.UserID).From(GL_DesignerConfigInfo).Where(GL_DesignerConfigInfo.UserID==msg.gl_designerconfiginfo().userid()), sql).Excute();

	auto sdata = autoDB::ToData(msg.gl_designerconfiginfo());

	if ( sql.got_data() )
	{	
		sdata.UserID_ = boost::none;
		SociAdaptor(Statement().Update(GL_DesignerConfigInfo.Use(sdata)).Where(GL_DesignerConfigInfo.UserID==msg.gl_designerconfiginfo().userid()), sql).Excute();
	}
	else
	{
		SociAdaptor(Statement().Insert(GL_DesignerConfigInfo.Use(sdata)), sql).Excute();
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
}