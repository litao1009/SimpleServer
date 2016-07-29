#include "ProcessorCommon.h"
#include "transMsg/UploadPrintTemplate.pb.h"
#include "DataBase/msg-GLUtils.h"

#include "Utils/NameSpace/nsFileSystem.h"
#include "Utils/Type/ErrCodeType.h"
#include "Utils/Type/PathType.h"

static	PathType MoveResFile(int32_t factoryID, const PathType& toMoveFile, int32_t TemplateID, ErrCodeType& ec)
{
	static PathType pt("./Save/UploadPrintTemplate");

	auto dstPt = pt / std::to_string(factoryID);
	if ( !nsFileSystem::exists(dstPt) )
	{
		nsFileSystem::create_directories(dstPt);
	}

	auto newPt = dstPt / std::to_string(TemplateID);
	nsFileSystem::rename(toMoveFile, newPt, ec);
	if ( ec )
	{
		LOG_INFO << L"Move File :" << toMoveFile << L" Failed" << ec;
	}

	return newPt;
}


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUploadPrintTemplate);


CMsgCallBack<transMsg::QUploadPrintTemplate>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QUploadPrintTemplate>::_Process( transMsg::QUploadPrintTemplate& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUploadPrintTemplate>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	if ( msg.gl_printtemplateinfo_size() != files.size() )
	{
		retMsg->set_stats(transMsg::ERS_WRONG_FILE);
		for ( auto& perFile : files )
		{
			ErrCodeType ec;
			nsFileSystem::remove(perFile.Path_, ec);
			if ( ec )
			{
				LOG_INFO << ec;
			}
		}
		return;
	}

	try
	{
		ErrCodeType ec;
		auto fileIndex = 0;
		GL_PrintTemplateInfo_Data info;

		for ( auto& curRecord : msg.gl_printtemplateinfo() )
		{
			info = ToData(curRecord);

			info.FactoryID_ = userInfo.UserInfo_.FactoryID_;
			ToASCII(info);

			auto newPt = MoveResFile(*userInfo.UserInfo_.FactoryID_, files[fileIndex++].Path_, *info.TemplateID_, ec);
			if ( ec )
			{
				retMsg->set_stats(transMsg::ERS_SERVER_ERROR);
				return;
			}

			info.RelativePath_ = newPt.string();

			SociAdaptor(Statement()
				.Delete(GL_PrintTemplateInfo)
				.Where(GL_PrintTemplateInfo.TemplateID==*info.TemplateID_ && GL_PrintTemplateInfo.FactoryID==*userInfo.UserInfo_.FactoryID_),
				sql).Excute();

			SociAdaptor(Statement().Insert(GL_PrintTemplateInfo.Into(info)), sql).Excute();
		}		
		
		retMsg->set_stats(transMsg::ERS_SUCCESS);
	}
	catch(soci::soci_error& err)
	{
		LOG_ERROR << DataBase::GetSociErrorString(err);
	}
}