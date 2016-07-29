#include "ProcessorCommon.h"
#include "transMsg/UploadLib.pb.h"
#include "DataBase/msg-JKUtils.h"
#include "DataBase/msg-GL.h"
#include "DataBase/msg-SV.h"
#include "Utils/Type/PathType.h"
#include "Utils/Type/ErrCodeType.h"
#include "Utils/NameSpace/nsPosixtime.h"


class	InsertLibTool
{
public:

	InsertLibTool(soci::session& serverSession, int64_t verCode, transMsg::JK_Table& packTb):
		ServerSession_(serverSession),VerCode_(verCode),PackTb_(packTb) {}

	template<typename T>
	void	Insert(T& tb)
	{
		typedef typename T::SData	DataType;

		auto& vec = ExtractFromPack(PackTb_, tb);

		if ( 0 == vec.size() )
		{
			return;
		}

		DataType toInsert;
		toInsert.SetAll(true);

		SociAdaptor ada(Statement().Insert(tb.Use(toInsert)), ServerSession_);

		for ( auto& cur : vec )
		{
			toInsert = ToData(cur);

			toInsert.VerCode_ = VerCode_;
			ToASCII(toInsert);

			ada.Excute();
		}
	}

private:

	soci::session&		ServerSession_;
	int64_t				VerCode_;
	transMsg::JK_Table& PackTb_;
};

static	PathType MoveTheFile(int32_t factoryID, int32_t userID, int64_t verCode, const PathType& toMoveFile, ErrCodeType& ec)
{
	static PathType pt("./Save/UpLoadLib");

	auto dstFolder = pt / std::to_string(factoryID);
	if ( !nsFileSystem::exists(dstFolder) )
	{
		nsFileSystem::create_directories(dstFolder);
	}

	auto curTime = nsPosixtime::to_simple_string(nsPosixtime::second_clock::local_time());

	auto newFileName = std::to_string(userID) + "-" + curTime + std::to_string(verCode);

	auto newPt = dstFolder / newFileName;
	nsFileSystem::copy_file(toMoveFile, newPt, ec);

	return newPt;
}

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUpLoadLib);


CMsgCallBack<transMsg::QUpLoadLib>::CMsgCallBack()
{

}


void CMsgCallBack<transMsg::QUpLoadLib>::_Process( transMsg::QUpLoadLib& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUpLoadLib>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	int64_t verCode = 0;
	int32_t	version = 0;

	//初始库信息
	GL_SugarVerInfo_Data sugarInfo;
	sugarInfo.DeptID_ = userInfo.UserInfo_.FactoryID_;
	sugarInfo.CreatorID_ = userInfo.UserInfo_.UserID_;
	sugarInfo.UploadStatus_ = DBValue::UploadStatus::Wait;
	sugarInfo.StartTime_ = DBTime(rawDate);
	sugarInfo.StopTime_ = DBTime(rawDate);
	sugarInfo.CreateTime_ = boost::posix_time::second_clock::local_time();
	sugarInfo.VerType_ = 1;
	{
		soci::transaction trans(sql);

		//库初始信息
		//********************************************************************************************************************
		SociAdaptor(Statement().Insert(GL_SugarVerInfo.Use(sugarInfo)), sql).Excute();

		if ( !SociAdaptor(Statement()
#ifdef USE_SQLSERVER
			.Select(isnull(max(GL_SugarVerInfo.VerCode), 0).Into(verCode)|isnull(max(GL_SugarVerInfo.VerIndex), 0).Into(version)).
#elif defined USE_MYSQL
			.Select(ifnull(max(GL_SugarVerInfo.VerCode), 0).Into(verCode)|ifnull(max(GL_SugarVerInfo.VerIndex), 0).Into(version)).
#endif
			From(GL_SugarVerInfo).
			Where(GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_), sql).Excute() )
		{
			retMsg->set_stats(transMsg::ERS_SERVER_ERROR);
			return;
		}

		sugarInfo.SetAll(false);
		sugarInfo.VerIndex_ = ++version;

		SociAdaptor(Statement()
			.Update(GL_SugarVerInfo.Use(sugarInfo))
			.Where(GL_SugarVerInfo.VerCode==verCode && GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_), sql).Excute();
		//********************************************************************************************************************

		//上传库
		//********************************************************************************************************************
 		InsertLibTool tool(sql,verCode, *msg.mutable_jk_table());

		tool.Insert(JK_CabBoardMatInfo);
		tool.Insert(JK_CabBoardMatSkinInfo);
		tool.Insert(JK_CabDesignBoardSealEdgeInfo);
		tool.Insert(JK_CabDesignBoardSealInfo);
		tool.Insert(JK_CabDesignDoorRegionHandleInfo);
		tool.Insert(JK_CabDesignDoorRegionInfo);
		tool.Insert(JK_CabDesignDoorSystemInfo);
		tool.Insert(JK_CabDesignFNFittingInfo);
		tool.Insert(JK_CabDesignFNFittingMapInfo);
		tool.Insert(JK_CabDesignFootInfo);
		tool.Insert(JK_CabDesignInfo);
		tool.Insert(JK_CabDesignMatInfo);
		tool.Insert(JK_CabMatPlanInfo);
		tool.Insert(JK_CabStructBoardGapInfo);
		tool.Insert(JK_CabStructBoardInfo);
		tool.Insert(JK_CabStructBoardSealInfo);
		tool.Insert(JK_CabStructGapInfo);
		tool.Insert(JK_CabStructInfo);
		tool.Insert(JK_CabStructMatPlanMapInfo);
		tool.Insert(JK_CabinetSizeBoardInfo);
		tool.Insert(JK_CabinetSizeInfo);
		tool.Insert(JK_CabinetSizeStructBoardInfo);
		tool.Insert(JK_DecorBoardFrameMapInfo);
		tool.Insert(JK_DecorBoardInfo);
		tool.Insert(JK_DecorBoardMatInfo);
		tool.Insert(JK_DecorBoardUnitInfo);
		tool.Insert(JK_DecorBoardUnitMatInfo);
		tool.Insert(JK_DecorBoardUnitSealInfo);
		tool.Insert(JK_DecorInfo);
		tool.Insert(JK_DecorLineInfo);
		tool.Insert(JK_DecorLineMatInfo);
		tool.Insert(JK_DecorUnitHWFittingMapInfo);
		tool.Insert(JK_DoorBoardGapInfo);
		tool.Insert(JK_DoorBoardInfo);
		tool.Insert(JK_DoorBoardMatMapInfo);
		tool.Insert(JK_DoorBoardSealInfo);
		tool.Insert(JK_DoorInfo);
		tool.Insert(JK_DoorMatMapInfo);
		tool.Insert(JK_DoorMatPlanHandleMapInfo);
		tool.Insert(JK_DoorMatPlanInfo);
		tool.Insert(JK_DoorRegionHWFittingMapInfo);
		tool.Insert(JK_DoorSystemInfo);
		tool.Insert(JK_DoorSystemMatMapInfo);
		tool.Insert(JK_DoorSystemRegionDoorMapInfo);
		tool.Insert(JK_DoorSystemRegionInfo);
		tool.Insert(JK_DoorSystemRegionSlideMapInfo);
		tool.Insert(JK_DoorSystemRegionSlidePositionSizeInfo);
		tool.Insert(JK_FNFittingInfo);
		tool.Insert(JK_FNFittingMatInfo);
		tool.Insert(JK_FNFittingPartInfo);
		tool.Insert(JK_FNFittingPartMatInfo);
		tool.Insert(JK_FNFittingPartSealInfo);
		tool.Insert(JK_FittingInfo);
		tool.Insert(JK_FittingRuleInfo);
		tool.Insert(JK_FormulaConstInfo);
		tool.Insert(JK_GroupInfo);
		tool.Insert(JK_HWFittingInfo);
		tool.Insert(JK_HoleRuleInfo);
		tool.Insert(JK_MaterialInfo);
		tool.Insert(JK_MaterialSealRuleMapInfo);
		tool.Insert(JK_ModelInfo);
		tool.Insert(JK_NumberRuleInfo);
		tool.Insert(JK_PackageInfo);
		tool.Insert(JK_PackageMapInfo);
		tool.Insert(JK_ProductInfo);
		tool.Insert(JK_ProductSeriesInfo);
		tool.Insert(JK_ProductSeriesValidInfo);
		tool.Insert(JK_ResourceInfo);
		tool.Insert(JK_SealRuleInfo);
		tool.Insert(JK_SysConfigInfo);
		tool.Insert(JK_SysRuleConfigInfo);
		tool.Insert(JK_SysRuleTypeInfo);
		tool.Insert(JK_TableTopSideInfo);
		//********************************************************************************************************************

		//计算需要上传的文件
		//********************************************************************************************************************
		{
			std::vector<AStringType> neededFiles;

			Statement st;
			st.Select(SV_LibFileInfo("TmpTb").HashCode.Into(neededFiles))
				.From(Statement()
					.Select(JK_ResourceInfo.HASHCode)
					.From(JK_ResourceInfo)
					.Where(JK_ResourceInfo.HASHCode!="" &&
							JK_ResourceInfo.FactoryID==*userInfo.UserInfo_.FactoryID_ &&
							JK_ResourceInfo.VerCode==verCode)
					.Union(Statement()
					.Select(JK_ModelInfo.HASHCode)
					.From(JK_ModelInfo)
					.Where(JK_ModelInfo.HASHCode!="" &&
							JK_ModelInfo.FactoryID==*userInfo.UserInfo_.FactoryID_ &&
							JK_ModelInfo.VerCode==verCode)
							), "TmpTb")
				.Where(SV_LibFileInfo("TmpTb").HashCode.NotIn(Statement()
												.Select(SV_LibFileInfo.HashCode)
												.From(SV_LibFileInfo)
												.Where(SV_LibFileInfo.DeptID==*userInfo.UserInfo_.FactoryID_ &&
														SV_LibFileInfo.HashCode!="").GetString()));
			SociAdaptor(st, sql).Excute();

			for (auto& cur : neededFiles )
			{
				retMsg->add_neededfiles(cur);
			}
		}
		//********************************************************************************************************************

		//判断是否上传完成
		//********************************************************************************************************************
		if ( 0 == retMsg->neededfiles_size() )
		{
			SociAdaptor(Statement()
				.Update(GL_SugarVerInfo.UploadStatus.Use(DBValue::UploadStatus::Done))
				.Where(GL_SugarVerInfo.VerCode==verCode &&
						GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_), sql).Excute();
		}
		//********************************************************************************************************************

		trans.commit();
			
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
	retMsg->set_vercode(verCode);
	retMsg->set_verindex(version);

	retInfo.Encode_.Compress_ = true;
}
