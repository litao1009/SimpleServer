#include "ProcessorCommon.h"
#include "DataBase/msg-JKUtils.h"
#include "DataBase/msg-GLUtils.h"
#include "transMsg/DownloadLib.pb.h"

#include "Encrypt.h"
#include "Utils/Type/ErrCodeType.h"

class	FetchLibTool
{
public:

	FetchLibTool(soci::session& serverSession, int32_t factoryID, transMsg::JK_Table& packTb):
		ServerSession_(serverSession),FactoryID_(factoryID),PackTb_(packTb)
	{
		
	}

	void	Fetch(int64_t verCode)
	{
		_Fetch(JK_CabBoardMatInfo, verCode);
		_Fetch(JK_CabBoardMatSkinInfo, verCode);
		_Fetch(JK_CabDesignBoardSealEdgeInfo, verCode);
		_Fetch(JK_CabDesignBoardSealInfo, verCode);
		_Fetch(JK_CabDesignDoorRegionHandleInfo, verCode);
		_Fetch(JK_CabDesignDoorRegionInfo, verCode);
		_Fetch(JK_CabDesignDoorSystemInfo, verCode);
		_Fetch(JK_CabDesignFNFittingInfo, verCode);
		_Fetch(JK_CabDesignFNFittingMapInfo, verCode);
		_Fetch(JK_CabDesignFootInfo, verCode);
		_Fetch(JK_CabDesignInfo, verCode);
		_Fetch(JK_CabDesignMatInfo, verCode);
		_Fetch(JK_CabMatPlanInfo, verCode);
		_Fetch(JK_CabStructBoardGapInfo, verCode);
		_Fetch(JK_CabStructBoardInfo, verCode);
		_Fetch(JK_CabStructBoardSealInfo, verCode);
		_Fetch(JK_CabStructGapInfo, verCode);
		_Fetch(JK_CabStructInfo, verCode);
		_Fetch(JK_CabStructMatPlanMapInfo, verCode);
		_Fetch(JK_CabinetSizeBoardInfo, verCode);
		_Fetch(JK_CabinetSizeInfo, verCode);
		_Fetch(JK_CabinetSizeStructBoardInfo, verCode);
		_Fetch(JK_DecorBoardFrameMapInfo, verCode);
		_Fetch(JK_DecorBoardInfo, verCode);
		_Fetch(JK_DecorBoardMatInfo, verCode);
		_Fetch(JK_DecorBoardUnitInfo, verCode);
		_Fetch(JK_DecorBoardUnitMatInfo, verCode);
		_Fetch(JK_DecorBoardUnitSealInfo, verCode);
		_Fetch(JK_DecorInfo, verCode);
		_Fetch(JK_DecorLineInfo, verCode);
		_Fetch(JK_DecorLineMatInfo, verCode);
		_Fetch(JK_DecorUnitHWFittingMapInfo, verCode);
		_Fetch(JK_DoorBoardGapInfo, verCode);
		_Fetch(JK_DoorBoardInfo, verCode);
		_Fetch(JK_DoorBoardMatMapInfo, verCode);
		_Fetch(JK_DoorBoardSealInfo, verCode);
		_Fetch(JK_DoorInfo, verCode);
		_Fetch(JK_DoorMatMapInfo, verCode);
		_Fetch(JK_DoorMatPlanHandleMapInfo, verCode);
		_Fetch(JK_DoorMatPlanInfo, verCode);
		_Fetch(JK_DoorRegionHWFittingMapInfo, verCode);
		_Fetch(JK_DoorSystemInfo, verCode);
		_Fetch(JK_DoorSystemMatMapInfo, verCode);
		_Fetch(JK_DoorSystemRegionDoorMapInfo, verCode);
		_Fetch(JK_DoorSystemRegionInfo, verCode);
		_Fetch(JK_DoorSystemRegionSlideMapInfo, verCode);
		_Fetch(JK_DoorSystemRegionSlidePositionSizeInfo, verCode);
		_Fetch(JK_FNFittingInfo, verCode);
		_Fetch(JK_FNFittingMatInfo, verCode);
		_Fetch(JK_FNFittingPartInfo, verCode);
		_Fetch(JK_FNFittingPartMatInfo, verCode);
		_Fetch(JK_FNFittingPartSealInfo, verCode);
		_Fetch(JK_FittingInfo, verCode);
		_Fetch(JK_FittingRuleInfo, verCode);
		_Fetch(JK_FormulaConstInfo, verCode);
		_Fetch(JK_GroupInfo, verCode);
		_Fetch(JK_HWFittingInfo, verCode);
		_Fetch(JK_HoleRuleInfo, verCode);
		_Fetch(JK_MaterialInfo, verCode);
		_Fetch(JK_MaterialSealRuleMapInfo, verCode);
		_Fetch(JK_ModelInfo, verCode);
		_Fetch(JK_NumberRuleInfo, verCode);
		_Fetch(JK_PackageInfo, verCode);
		_Fetch(JK_PackageMapInfo, verCode);
		_Fetch(JK_ProductInfo, verCode);
		_Fetch(JK_ProductSeriesInfo, verCode);
		_Fetch(JK_ProductSeriesValidInfo, verCode);
		_Fetch(JK_ResourceInfo, verCode);
		_Fetch(JK_SealRuleInfo, verCode);
		_Fetch(JK_SysConfigInfo, verCode);
		_Fetch(JK_SysRuleConfigInfo, verCode);
		_Fetch(JK_SysRuleTypeInfo, verCode);
		_Fetch(JK_TableTopSideInfo, verCode);
	}

private:

	template<typename T>
	void	_Fetch(T& table, int64_t verCode)
	{
		typename T::SData into;
		into.SetAll(true);

		Statement st;
		st.Select(table.Into(into))
			.From(table)
			.Where(table.VerCode==verCode && table.FactoryID==FactoryID_);

		SociAdaptor ada(st, ServerSession_);
		ada.Excute(false);

		while ( ada.Fetch() )
		{
			ToUTF8(into);
			AddToPack(PackTb_, ToMessage(into));
		}
	}

	soci::session&	ServerSession_;
	int32_t			FactoryID_;
	transMsg::JK_Table&	PackTb_;
};


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QDownloadLib);


CMsgCallBack<transMsg::QDownloadLib>::CMsgCallBack()
{
	 
}


void CMsgCallBack<transMsg::QDownloadLib>::_Process( transMsg::QDownloadLib& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::ADownloadLib>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;
	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	for ( auto curVerCode : msg.vercodes() )
	{
		Statement st;
		st.Select(GL_SugarVerInfo.VerCode).From(GL_SugarVerInfo);

		if ( CodecProtocol::ECT_FACTORY_BUILD == userInfo.DC_.ClientType_ )
		{
			st.Where(GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_ && GL_SugarVerInfo.VerCode==curVerCode);
		}
		else
		{
			st.Where(GL_SugarVerInfo.DeptID==*userInfo.UserInfo_.FactoryID_ && GL_SugarVerInfo.VerCode==curVerCode && GL_SugarVerInfo.UploadStatus==DBValue::UploadStatus::Done);
		}
		
		sql << st.GetString();

		if ( !sql.got_data() )
		{
			retMsg->add_rejectedvercodes(curVerCode);
			continue;
		}

		auto newPack = retMsg->add_jk_table();
		FetchLibTool tool(sql, *userInfo.UserInfo_.FactoryID_, *newPack);

		tool.Fetch(curVerCode);
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
	retInfo.Encode_.Compress_ = true;
	retInfo.Encode_.AESKey_ = FastEncrypt::AES_GenerateKey();	
}