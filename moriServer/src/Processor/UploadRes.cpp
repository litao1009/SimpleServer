#include "ProcessorCommon.h"
#include "transMsg/UploadRes.pb.h"

#include "Utils/Cast.h"
#include "Utils/Type/PathType.h"
#include "Utils/Type/ErrCodeType.h"
#include "DataBase/msg-JK.h"
#include "DataBase/msg-SV.h"

#include <unordered_map>
#include <unordered_set>

static	PathType MoveResFile(int32_t factoryID, const PathType& toMoveFile, const AStringType& newFileName, ErrCodeType& ec)
{
	static PathType pt("./Save/UploadRes");

	auto dstPt = pt / std::to_string(factoryID);
	if ( !nsFileSystem::exists(dstPt) )
	{
		nsFileSystem::create_directories(dstPt);
	}

	auto newPt = dstPt / newFileName;
	nsFileSystem::rename(toMoveFile, newPt, ec);
	if ( ec )
	{
		LOG_INFO << L"Move File :" << toMoveFile << L" Failed";
	}

	return newPt;
}

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUploadRes);


CMsgCallBack<transMsg::QUploadRes>::CMsgCallBack()
{

}


void CMsgCallBack<transMsg::QUploadRes>::_Process( transMsg::QUploadRes& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUploadRes>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	typedef	std::unordered_map<AStringType,mori::FilePath>	AddList;
	AddList	toAddList;

	if ( msg.fileshash_size() != files.size() )
	{
		ProcessorCommon::RemoveFiles(files);

		retMsg->set_stats(transMsg::ERS_WRONG_FILE);
		return;
	}

	try
	{
		std::unordered_set<AStringType> neededFiles;

		//查找缺失文件
		//********************************************************************************************************************	
		{
			std::vector<AStringType> tmp;

			SociAdaptor(Statement()
				.Select(SV_LibFileInfo("TmpTb").HashCode.Into(tmp))
				.From(Statement()
					.Select(JK_ResourceInfo.HASHCode)
					.From(JK_ResourceInfo)
					.Where(JK_ResourceInfo.HASHCode!="" && JK_ResourceInfo.FactoryID==*userInfo.UserInfo_.FactoryID_)
					.Union(Statement()
					.Select(JK_ModelInfo.HASHCode)
					.From(JK_ModelInfo)
					.Where(JK_ModelInfo.HASHCode!="" && JK_ModelInfo.FactoryID==*userInfo.UserInfo_.FactoryID_)),"TmpTb")
				.Where(SV_LibFileInfo("TmpTb").HashCode.NotIn(Statement()
					.Select(SV_LibFileInfo.HashCode)
					.From(SV_LibFileInfo)
					.Where(SV_LibFileInfo.DeptID==*userInfo.UserInfo_.FactoryID_ && SV_LibFileInfo.HashCode!="").GetString())), sql).Excute();

			std::copy(tmp.begin(), tmp.end(), std::inserter(neededFiles, neededFiles.end()));
		}
		//********************************************************************************************************************

		//检验文件
		//********************************************************************************************************************
		for ( auto i=0; i<msg.fileshash_size(); ++i )
		{
			const auto& curFileHash = msg.fileshash(i);
			const auto& curFilePath = files[i];
			ErrCodeType ec;

			if ( curFilePath.ChkFaild_ )
			{
				retMsg->add_lostfiles(curFileHash);

				ProcessorCommon::RemoveFile(curFilePath.Path_);
				continue;				
			}
			
			if ( neededFiles.end() == neededFiles.find(curFileHash) )
			{
				retMsg->add_rejectedfiles(curFileHash);

				ProcessorCommon::RemoveFile(curFilePath.Path_);
				continue;
			}
			
			auto newPt = MoveResFile(*userInfo.UserInfo_.FactoryID_, curFilePath.Path_, curFileHash, ec);
			if ( !ec )
			{
				toAddList.insert(std::make_pair(curFileHash,newPt));
			}
			else
			{
				LOG_INFO << ec << L", " << curFilePath.Path_;
			}
		}
		//********************************************************************************************************************


		//添加文件
		//********************************************************************************************************************
		{
			soci::transaction trans(sql);

			SV_LibFileInfo_Data info;
			info.DeptID_ = userInfo.UserInfo_.FactoryID_;
			info.DestPath_.reset(boost::initialized_value);
			info.HashCode_.reset(boost::initialized_value);

			SociAdaptor ada(Statement().Insert(SV_LibFileInfo.Use(info)), sql);
			
			for ( auto& perFile : toAddList )
			{
				info.DestPath_ = std::move(perFile.second.string());
				info.HashCode_ = perFile.first;

				ada.Excute();
			}

			trans.commit();
		}
		//********************************************************************************************************************

		//更新状态
		//********************************************************************************************************************
		{
			std::vector<int64_t>	toUpdateCodes;
			{
				SociAdaptor(Statement()
					.Select(GL_SugarVerInfo.VerCode.Into(toUpdateCodes))
					.From(GL_SugarVerInfo)
					.Where(GL_SugarVerInfo.UploadStatus!=DBValue::UploadStatus::Done &&
							GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_ &&
							GL_SugarVerInfo.VerCode.NotIn(Statement()
													.Select(JK_ResourceInfo.VerCode)
													.From(JK_ResourceInfo)
													.InnerJoin(GL_SugarVerInfo).On(JK_ResourceInfo.VerCode==GL_SugarVerInfo.VerCode)
													.Where(GL_SugarVerInfo.UploadStatus!=DBValue::UploadStatus::Done &&
															JK_ResourceInfo.HASHCode!="" &&
															JK_ResourceInfo.HASHCode.NotIn(Statement()
																							.Select(SV_LibFileInfo.HashCode)
																							.From(SV_LibFileInfo)
																							.Where(SV_LibFileInfo.DeptID==*userInfo.UserInfo_.FactoryID_).GetString()))
													.Union(Statement()
													.Select(JK_ModelInfo.VerCode)
													.From(JK_ModelInfo)
													.InnerJoin(GL_SugarVerInfo).On(JK_ModelInfo.VerCode==GL_SugarVerInfo.VerCode)
													.Where(GL_SugarVerInfo.UploadStatus!=DBValue::UploadStatus::Done &&
															JK_ModelInfo.HASHCode!="" &&
															JK_ModelInfo.HASHCode.NotIn(Statement()
																						.Select(SV_LibFileInfo.HashCode)
																						.From(SV_LibFileInfo)
																						.Where(SV_LibFileInfo.DeptID==*userInfo.UserInfo_.FactoryID_).GetString()))
															).GetString()
															)
							), sql).Excute();
			}

			if ( toUpdateCodes.empty() )
			{
				retMsg->set_stats(transMsg::ERS_SUCCESS);
				return;
			}

			SociAdaptor(Statement()
				.Update(GL_SugarVerInfo.UploadStatus.Use(DBValue::UploadStatus::Done))
				.Where(GL_SugarVerInfo.VerCode.In(toUpdateCodes.begin(), toUpdateCodes.end())), sql).Excute();

			retMsg->set_stats(transMsg::ERS_SUCCESS);
		}
		//********************************************************************************************************************
	}
	catch (soci::soci_error& err)
	{
		for ( auto& perFile : toAddList )
		{
			ProcessorCommon::RemoveFile(perFile.second);
		}

		retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

		LOG_ERROR << DataBase::GetSociErrorString(err) << userInfo.RemoteEP_;
	}
	
}