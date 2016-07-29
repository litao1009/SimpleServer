#include "ProcessorCommon.h"
#include "DataBase/msg-GLUtils.h"
#include "DataBase/msg-SV.h"
#include "transMsg/GetLibStatus.pb.h"

#include "Encrypt.h"
#include "Utils/Cast.h"
#include "Utils/Type/ErrCodeType.h"
#include <sstream>

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QGetLibStatus);


CMsgCallBack<transMsg::QGetLibStatus>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QGetLibStatus>::_Process( transMsg::QGetLibStatus& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AGetLibStatus>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	GL_SugarVerInfo_Data curInfo;
	curInfo.SetAll(true);

	Statement st;
	st.Select(GL_SugarVerInfo.Into(curInfo)).From(GL_SugarVerInfo);

	auto cond = GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_;

	if ( CodecProtocol::ECT_DESIGN == userInfo.DC_.ClientType_ || CodecProtocol::ECT_REVIEW == userInfo.DC_.ClientType_ )
	{
		if ( 0 == msg.vercodes_size() )
		{
			cond && GL_SugarVerInfo.VerCode.Equal(Statement()
				.Select(max(GL_SugarVerInfo.VerCode))
				.From(GL_SugarVerInfo)
				.Where(GL_SugarVerInfo.VerDBState==DBValue::VerDbState::On &&
						GL_SugarVerInfo.StartTime<getdate() &&
						GL_SugarVerInfo.StopTime>getdate() &&
						GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_ &&
						GL_SugarVerInfo.UploadStatus==DBValue::UploadStatus::Done).GetString());
		}
		else
		{
			cond && GL_SugarVerInfo.VerCode.In( msg.vercodes().begin(), msg.vercodes().end() );
		}
	}
	st.Where(cond);

	{
		SociAdaptor ada(st, sql);
		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(curInfo);
			retMsg->add_gl_sugarverinfo()->Swap(&ToMessage(curInfo));
		}
	}

 	if ( CodecProtocol::ECT_FACTORY_BUILD == userInfo.DC_.ClientType_ )
 	{
 		std::vector<AStringType> hashCodes;

		SociAdaptor(Statement()
			.Select(SV_LibFileInfo.HashCode.Into(hashCodes))
			.From(SV_LibFileInfo)
			.Where(SV_LibFileInfo.DeptID==*userInfo.UserInfo_.FactoryID_), sql).Excute();
 		
		for ( auto& cur : hashCodes )
		{
			retMsg->add_hashcodes(cur);
		}
 	}
 
 	retMsg->set_stats(transMsg::ERS_SUCCESS);
 	retInfo.Encode_.AESKey_ = FastEncrypt::AES_GenerateKey();
 	retInfo.Encode_.Compress_ = true;
}