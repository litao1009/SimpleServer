#include"msg-JKUtils.h"

namespace autoDB
{
transMsg::JK_CabBoardMatInfo	ToMessage( const JK_CabBoardMatInfoImp::SData& sdata )
{
	transMsg::JK_CabBoardMatInfo message;
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.IsUseDefaultSkinDirection_ )
	{
		message.set_isusedefaultskindirection(*sdata.IsUseDefaultSkinDirection_);
	}
	return message;
}

::autoDB::JK_CabBoardMatInfoImp::SData	ToData( const transMsg::JK_CabBoardMatInfo& message )
{
	JK_CabBoardMatInfoImp::SData sdata;
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_isusedefaultskindirection() )
	{
		sdata.IsUseDefaultSkinDirection_ = message.isusedefaultskindirection();
	}
	return std::move(sdata);
}



transMsg::JK_CabBoardMatSkinInfo	ToMessage( const JK_CabBoardMatSkinInfoImp::SData& sdata )
{
	transMsg::JK_CabBoardMatSkinInfo message;
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.IsUseDefaultSkinDirection_ )
	{
		message.set_isusedefaultskindirection(*sdata.IsUseDefaultSkinDirection_);
	}
	return message;
}

::autoDB::JK_CabBoardMatSkinInfoImp::SData	ToData( const transMsg::JK_CabBoardMatSkinInfo& message )
{
	JK_CabBoardMatSkinInfoImp::SData sdata;
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_isusedefaultskindirection() )
	{
		sdata.IsUseDefaultSkinDirection_ = message.isusedefaultskindirection();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignBoardSealEdgeInfo	ToMessage( const JK_CabDesignBoardSealEdgeInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignBoardSealEdgeInfo message;
	if ( sdata.CabDesignBoardSealID_ )
	{
		message.set_cabdesignboardsealid(*sdata.CabDesignBoardSealID_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.SealMatID_ )
	{
		message.set_sealmatid(*sdata.SealMatID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabDesignBoardSealEdgeInfoImp::SData	ToData( const transMsg::JK_CabDesignBoardSealEdgeInfo& message )
{
	JK_CabDesignBoardSealEdgeInfoImp::SData sdata;
	if ( message.has_cabdesignboardsealid() )
	{
		sdata.CabDesignBoardSealID_ = message.cabdesignboardsealid();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_sealmatid() )
	{
		sdata.SealMatID_ = message.sealmatid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignBoardSealInfo	ToMessage( const JK_CabDesignBoardSealInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignBoardSealInfo message;
	if ( sdata.CabDesignBoardSealID_ )
	{
		message.set_cabdesignboardsealid(*sdata.CabDesignBoardSealID_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.CabStructID_ )
	{
		message.set_cabstructid(*sdata.CabStructID_);
	}
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabDesignBoardSealInfoImp::SData	ToData( const transMsg::JK_CabDesignBoardSealInfo& message )
{
	JK_CabDesignBoardSealInfoImp::SData sdata;
	if ( message.has_cabdesignboardsealid() )
	{
		sdata.CabDesignBoardSealID_ = message.cabdesignboardsealid();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_cabstructid() )
	{
		sdata.CabStructID_ = message.cabstructid();
	}
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignDoorRegionHandleInfo	ToMessage( const JK_CabDesignDoorRegionHandleInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignDoorRegionHandleInfo message;
	if ( sdata.CabDesignDoorRegionHandleID_ )
	{
		message.set_cabdesigndoorregionhandleid(*sdata.CabDesignDoorRegionHandleID_);
	}
	if ( sdata.CabDesignDoorRegionID_ )
	{
		message.set_cabdesigndoorregionid(*sdata.CabDesignDoorRegionID_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
	}
	if ( sdata.HandleID_ )
	{
		message.set_handleid(*sdata.HandleID_);
	}
	if ( sdata.MatchType_ )
	{
		message.set_matchtype(*sdata.MatchType_);
	}
	return message;
}

::autoDB::JK_CabDesignDoorRegionHandleInfoImp::SData	ToData( const transMsg::JK_CabDesignDoorRegionHandleInfo& message )
{
	JK_CabDesignDoorRegionHandleInfoImp::SData sdata;
	if ( message.has_cabdesigndoorregionhandleid() )
	{
		sdata.CabDesignDoorRegionHandleID_ = message.cabdesigndoorregionhandleid();
	}
	if ( message.has_cabdesigndoorregionid() )
	{
		sdata.CabDesignDoorRegionID_ = message.cabdesigndoorregionid();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
	}
	if ( message.has_handleid() )
	{
		sdata.HandleID_ = message.handleid();
	}
	if ( message.has_matchtype() )
	{
		sdata.MatchType_ = message.matchtype();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignDoorRegionInfo	ToMessage( const JK_CabDesignDoorRegionInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignDoorRegionInfo message;
	if ( sdata.CabDesignDoorRegionID_ )
	{
		message.set_cabdesigndoorregionid(*sdata.CabDesignDoorRegionID_);
	}
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsGroup_ )
	{
		message.set_isgroup(*sdata.IsGroup_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.IsCanResize_ )
	{
		message.set_iscanresize(*sdata.IsCanResize_);
	}
	if ( sdata.MinXLen_ )
	{
		message.set_minxlen(*sdata.MinXLen_);
	}
	if ( sdata.MaxXLen_ )
	{
		message.set_maxxlen(*sdata.MaxXLen_);
	}
	if ( sdata.XLenStep_ )
	{
		message.set_xlenstep(*sdata.XLenStep_);
	}
	if ( sdata.MinYLen_ )
	{
		message.set_minylen(*sdata.MinYLen_);
	}
	if ( sdata.MaxYLen_ )
	{
		message.set_maxylen(*sdata.MaxYLen_);
	}
	if ( sdata.YLenStep_ )
	{
		message.set_ylenstep(*sdata.YLenStep_);
	}
	if ( sdata.DefaultMatID_ )
	{
		message.set_defaultmatid(*sdata.DefaultMatID_);
	}
	if ( sdata.DefaultModelID_ )
	{
		message.set_defaultmodelid(*sdata.DefaultModelID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.DefaultDoorID_ )
	{
		message.set_defaultdoorid(*sdata.DefaultDoorID_);
	}
	if ( sdata.CabDesignDoorSystemID_ )
	{
		message.set_cabdesigndoorsystemid(*sdata.CabDesignDoorSystemID_);
	}
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.IsUseDefaultSize_ )
	{
		message.set_isusedefaultsize(*sdata.IsUseDefaultSize_);
	}
	if ( sdata.IsUseCutFormula_ )
	{
		message.set_isusecutformula(*sdata.IsUseCutFormula_);
	}
	if ( sdata.DoorRegionID_ )
	{
		message.set_doorregionid(*sdata.DoorRegionID_);
	}
	return message;
}

::autoDB::JK_CabDesignDoorRegionInfoImp::SData	ToData( const transMsg::JK_CabDesignDoorRegionInfo& message )
{
	JK_CabDesignDoorRegionInfoImp::SData sdata;
	if ( message.has_cabdesigndoorregionid() )
	{
		sdata.CabDesignDoorRegionID_ = message.cabdesigndoorregionid();
	}
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isgroup() )
	{
		sdata.IsGroup_ = message.isgroup();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_iscanresize() )
	{
		sdata.IsCanResize_ = message.iscanresize();
	}
	if ( message.has_minxlen() )
	{
		sdata.MinXLen_ = message.minxlen();
	}
	if ( message.has_maxxlen() )
	{
		sdata.MaxXLen_ = message.maxxlen();
	}
	if ( message.has_xlenstep() )
	{
		sdata.XLenStep_ = message.xlenstep();
	}
	if ( message.has_minylen() )
	{
		sdata.MinYLen_ = message.minylen();
	}
	if ( message.has_maxylen() )
	{
		sdata.MaxYLen_ = message.maxylen();
	}
	if ( message.has_ylenstep() )
	{
		sdata.YLenStep_ = message.ylenstep();
	}
	if ( message.has_defaultmatid() )
	{
		sdata.DefaultMatID_ = message.defaultmatid();
	}
	if ( message.has_defaultmodelid() )
	{
		sdata.DefaultModelID_ = message.defaultmodelid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_defaultdoorid() )
	{
		sdata.DefaultDoorID_ = message.defaultdoorid();
	}
	if ( message.has_cabdesigndoorsystemid() )
	{
		sdata.CabDesignDoorSystemID_ = message.cabdesigndoorsystemid();
	}
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_isusedefaultsize() )
	{
		sdata.IsUseDefaultSize_ = message.isusedefaultsize();
	}
	if ( message.has_isusecutformula() )
	{
		sdata.IsUseCutFormula_ = message.isusecutformula();
	}
	if ( message.has_doorregionid() )
	{
		sdata.DoorRegionID_ = message.doorregionid();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignDoorSystemInfo	ToMessage( const JK_CabDesignDoorSystemInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignDoorSystemInfo message;
	if ( sdata.CabDesignDoorSystemID_ )
	{
		message.set_cabdesigndoorsystemid(*sdata.CabDesignDoorSystemID_);
	}
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.InstallFaceType_ )
	{
		message.set_installfacetype(*sdata.InstallFaceType_);
	}
	if ( sdata.XAdjustLen_ )
	{
		message.set_xadjustlen(*sdata.XAdjustLen_);
	}
	if ( sdata.YAdjustLen_ )
	{
		message.set_yadjustlen(*sdata.YAdjustLen_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.IsCanDel_ )
	{
		message.set_iscandel(*sdata.IsCanDel_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	return message;
}

::autoDB::JK_CabDesignDoorSystemInfoImp::SData	ToData( const transMsg::JK_CabDesignDoorSystemInfo& message )
{
	JK_CabDesignDoorSystemInfoImp::SData sdata;
	if ( message.has_cabdesigndoorsystemid() )
	{
		sdata.CabDesignDoorSystemID_ = message.cabdesigndoorsystemid();
	}
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_installfacetype() )
	{
		sdata.InstallFaceType_ = message.installfacetype();
	}
	if ( message.has_xadjustlen() )
	{
		sdata.XAdjustLen_ = message.xadjustlen();
	}
	if ( message.has_yadjustlen() )
	{
		sdata.YAdjustLen_ = message.yadjustlen();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_iscandel() )
	{
		sdata.IsCanDel_ = message.iscandel();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignFNFittingInfo	ToMessage( const JK_CabDesignFNFittingInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignFNFittingInfo message;
	if ( sdata.CabDesignFNFittingID_ )
	{
		message.set_cabdesignfnfittingid(*sdata.CabDesignFNFittingID_);
	}
	if ( sdata.ContainerID_ )
	{
		message.set_containerid(*sdata.ContainerID_);
	}
	if ( sdata.ContainerGTypeID_ )
	{
		message.set_containergtypeid(*sdata.ContainerGTypeID_);
	}
	if ( sdata.IsCanDel_ )
	{
		message.set_iscandel(*sdata.IsCanDel_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.ZFormula_ )
	{
		message.set_zformula(*sdata.ZFormula_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_CabDesignFNFittingInfoImp::SData	ToData( const transMsg::JK_CabDesignFNFittingInfo& message )
{
	JK_CabDesignFNFittingInfoImp::SData sdata;
	if ( message.has_cabdesignfnfittingid() )
	{
		sdata.CabDesignFNFittingID_ = message.cabdesignfnfittingid();
	}
	if ( message.has_containerid() )
	{
		sdata.ContainerID_ = message.containerid();
	}
	if ( message.has_containergtypeid() )
	{
		sdata.ContainerGTypeID_ = message.containergtypeid();
	}
	if ( message.has_iscandel() )
	{
		sdata.IsCanDel_ = message.iscandel();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_zformula() )
	{
		sdata.ZFormula_ = message.zformula();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignFNFittingMapInfo	ToMessage( const JK_CabDesignFNFittingMapInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignFNFittingMapInfo message;
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.CabDesignFNFittingID_ )
	{
		message.set_cabdesignfnfittingid(*sdata.CabDesignFNFittingID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.FNType_ )
	{
		message.set_fntype(*sdata.FNType_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabDesignFNFittingMapInfoImp::SData	ToData( const transMsg::JK_CabDesignFNFittingMapInfo& message )
{
	JK_CabDesignFNFittingMapInfoImp::SData sdata;
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_cabdesignfnfittingid() )
	{
		sdata.CabDesignFNFittingID_ = message.cabdesignfnfittingid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_fntype() )
	{
		sdata.FNType_ = message.fntype();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignFootInfo	ToMessage( const JK_CabDesignFootInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignFootInfo message;
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.FootID_ )
	{
		message.set_footid(*sdata.FootID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabDesignFootInfoImp::SData	ToData( const transMsg::JK_CabDesignFootInfo& message )
{
	JK_CabDesignFootInfoImp::SData sdata;
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_footid() )
	{
		sdata.FootID_ = message.footid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignInfo	ToMessage( const JK_CabDesignInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignInfo message;
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.CabFunction_ )
	{
		message.set_cabfunction(*sdata.CabFunction_);
	}
	if ( sdata.CabStructID_ )
	{
		message.set_cabstructid(*sdata.CabStructID_);
	}
	if ( sdata.PosType_ )
	{
		message.set_postype(*sdata.PosType_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CabDesignCode_ )
	{
		message.set_cabdesigncode(*sdata.CabDesignCode_);
	}
	if ( sdata.CabDesignName_ )
	{
		message.set_cabdesignname(*sdata.CabDesignName_);
	}
	if ( sdata.CabDesignMemo_ )
	{
		message.set_cabdesignmemo(*sdata.CabDesignMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.PhotoID_ )
	{
		message.set_photoid(*sdata.PhotoID_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	return message;
}

::autoDB::JK_CabDesignInfoImp::SData	ToData( const transMsg::JK_CabDesignInfo& message )
{
	JK_CabDesignInfoImp::SData sdata;
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_cabfunction() )
	{
		sdata.CabFunction_ = message.cabfunction();
	}
	if ( message.has_cabstructid() )
	{
		sdata.CabStructID_ = message.cabstructid();
	}
	if ( message.has_postype() )
	{
		sdata.PosType_ = message.postype();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_cabdesigncode() )
	{
		sdata.CabDesignCode_ = message.cabdesigncode();
	}
	if ( message.has_cabdesignname() )
	{
		sdata.CabDesignName_ = message.cabdesignname();
	}
	if ( message.has_cabdesignmemo() )
	{
		sdata.CabDesignMemo_ = message.cabdesignmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_photoid() )
	{
		sdata.PhotoID_ = message.photoid();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	return std::move(sdata);
}



transMsg::JK_CabDesignMatInfo	ToMessage( const JK_CabDesignMatInfoImp::SData& sdata )
{
	transMsg::JK_CabDesignMatInfo message;
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabDesignMatInfoImp::SData	ToData( const transMsg::JK_CabDesignMatInfo& message )
{
	JK_CabDesignMatInfoImp::SData sdata;
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_CabMatPlanInfo	ToMessage( const JK_CabMatPlanInfoImp::SData& sdata )
{
	transMsg::JK_CabMatPlanInfo message;
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CabMatPlanCode_ )
	{
		message.set_cabmatplancode(*sdata.CabMatPlanCode_);
	}
	if ( sdata.CabMatPlanName_ )
	{
		message.set_cabmatplanname(*sdata.CabMatPlanName_);
	}
	if ( sdata.CabMatPlanMemo_ )
	{
		message.set_cabmatplanmemo(*sdata.CabMatPlanMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_CabMatPlanInfoImp::SData	ToData( const transMsg::JK_CabMatPlanInfo& message )
{
	JK_CabMatPlanInfoImp::SData sdata;
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_cabmatplancode() )
	{
		sdata.CabMatPlanCode_ = message.cabmatplancode();
	}
	if ( message.has_cabmatplanname() )
	{
		sdata.CabMatPlanName_ = message.cabmatplanname();
	}
	if ( message.has_cabmatplanmemo() )
	{
		sdata.CabMatPlanMemo_ = message.cabmatplanmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_CabStructBoardGapInfo	ToMessage( const JK_CabStructBoardGapInfoImp::SData& sdata )
{
	transMsg::JK_CabStructBoardGapInfo message;
	if ( sdata.CabStructBoardGapID_ )
	{
		message.set_cabstructboardgapid(*sdata.CabStructBoardGapID_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.GapPos_ )
	{
		message.set_gappos(*sdata.GapPos_);
	}
	if ( sdata.GapIndex_ )
	{
		message.set_gapindex(*sdata.GapIndex_);
	}
	if ( sdata.GapType_ )
	{
		message.set_gaptype(*sdata.GapType_);
	}
	if ( sdata.GapShape_ )
	{
		message.set_gapshape(*sdata.GapShape_);
	}
	if ( sdata.XLenFormula_ )
	{
		message.set_xlenformula(*sdata.XLenFormula_);
	}
	if ( sdata.YLenFormula_ )
	{
		message.set_ylenformula(*sdata.YLenFormula_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_CabStructBoardGapInfoImp::SData	ToData( const transMsg::JK_CabStructBoardGapInfo& message )
{
	JK_CabStructBoardGapInfoImp::SData sdata;
	if ( message.has_cabstructboardgapid() )
	{
		sdata.CabStructBoardGapID_ = message.cabstructboardgapid();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_gappos() )
	{
		sdata.GapPos_ = message.gappos();
	}
	if ( message.has_gapindex() )
	{
		sdata.GapIndex_ = message.gapindex();
	}
	if ( message.has_gaptype() )
	{
		sdata.GapType_ = message.gaptype();
	}
	if ( message.has_gapshape() )
	{
		sdata.GapShape_ = message.gapshape();
	}
	if ( message.has_xlenformula() )
	{
		sdata.XLenFormula_ = message.xlenformula();
	}
	if ( message.has_ylenformula() )
	{
		sdata.YLenFormula_ = message.ylenformula();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_CabStructBoardInfo	ToMessage( const JK_CabStructBoardInfoImp::SData& sdata )
{
	transMsg::JK_CabStructBoardInfo message;
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.CabStructID_ )
	{
		message.set_cabstructid(*sdata.CabStructID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsUseMain_ )
	{
		message.set_isusemain(*sdata.IsUseMain_);
	}
	if ( sdata.IsCanRepeat_ )
	{
		message.set_iscanrepeat(*sdata.IsCanRepeat_);
	}
	if ( sdata.IsCanDel_ )
	{
		message.set_iscandel(*sdata.IsCanDel_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.ArcX_ )
	{
		message.set_arcx(*sdata.ArcX_);
	}
	if ( sdata.ArcY_ )
	{
		message.set_arcy(*sdata.ArcY_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CabStructBoardName_ )
	{
		message.set_cabstructboardname(*sdata.CabStructBoardName_);
	}
	if ( sdata.DefaultSkinDirection_ )
	{
		message.set_defaultskindirection(*sdata.DefaultSkinDirection_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_CabStructBoardInfoImp::SData	ToData( const transMsg::JK_CabStructBoardInfo& message )
{
	JK_CabStructBoardInfoImp::SData sdata;
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_cabstructid() )
	{
		sdata.CabStructID_ = message.cabstructid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isusemain() )
	{
		sdata.IsUseMain_ = message.isusemain();
	}
	if ( message.has_iscanrepeat() )
	{
		sdata.IsCanRepeat_ = message.iscanrepeat();
	}
	if ( message.has_iscandel() )
	{
		sdata.IsCanDel_ = message.iscandel();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_arcx() )
	{
		sdata.ArcX_ = message.arcx();
	}
	if ( message.has_arcy() )
	{
		sdata.ArcY_ = message.arcy();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_cabstructboardname() )
	{
		sdata.CabStructBoardName_ = message.cabstructboardname();
	}
	if ( message.has_defaultskindirection() )
	{
		sdata.DefaultSkinDirection_ = message.defaultskindirection();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_CabStructBoardSealInfo	ToMessage( const JK_CabStructBoardSealInfoImp::SData& sdata )
{
	transMsg::JK_CabStructBoardSealInfo message;
	if ( sdata.CabStructBoardSealID_ )
	{
		message.set_cabstructboardsealid(*sdata.CabStructBoardSealID_);
	}
	if ( sdata.SealOrder_ )
	{
		message.set_sealorder(*sdata.SealOrder_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	return message;
}

::autoDB::JK_CabStructBoardSealInfoImp::SData	ToData( const transMsg::JK_CabStructBoardSealInfo& message )
{
	JK_CabStructBoardSealInfoImp::SData sdata;
	if ( message.has_cabstructboardsealid() )
	{
		sdata.CabStructBoardSealID_ = message.cabstructboardsealid();
	}
	if ( message.has_sealorder() )
	{
		sdata.SealOrder_ = message.sealorder();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	return std::move(sdata);
}



transMsg::JK_CabStructGapInfo	ToMessage( const JK_CabStructGapInfoImp::SData& sdata )
{
	transMsg::JK_CabStructGapInfo message;
	if ( sdata.CabStructGapID_ )
	{
		message.set_cabstructgapid(*sdata.CabStructGapID_);
	}
	if ( sdata.CabStructID_ )
	{
		message.set_cabstructid(*sdata.CabStructID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CabGapType_ )
	{
		message.set_cabgaptype(*sdata.CabGapType_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.ZFormula_ )
	{
		message.set_zformula(*sdata.ZFormula_);
	}
	if ( sdata.XVar_ )
	{
		message.set_xvar(*sdata.XVar_);
	}
	if ( sdata.YVar_ )
	{
		message.set_yvar(*sdata.YVar_);
	}
	if ( sdata.ZVar_ )
	{
		message.set_zvar(*sdata.ZVar_);
	}
	if ( sdata.XVarName_ )
	{
		message.set_xvarname(*sdata.XVarName_);
	}
	if ( sdata.YVarName_ )
	{
		message.set_yvarname(*sdata.YVarName_);
	}
	if ( sdata.ZVarName_ )
	{
		message.set_zvarname(*sdata.ZVarName_);
	}
	if ( sdata.CabStructCabStructGapCode_ )
	{
		message.set_cabstructcabstructgapcode(*sdata.CabStructCabStructGapCode_);
	}
	if ( sdata.CabStructGapName_ )
	{
		message.set_cabstructgapname(*sdata.CabStructGapName_);
	}
	if ( sdata.CabStructGapMemo_ )
	{
		message.set_cabstructgapmemo(*sdata.CabStructGapMemo_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_CabStructGapInfoImp::SData	ToData( const transMsg::JK_CabStructGapInfo& message )
{
	JK_CabStructGapInfoImp::SData sdata;
	if ( message.has_cabstructgapid() )
	{
		sdata.CabStructGapID_ = message.cabstructgapid();
	}
	if ( message.has_cabstructid() )
	{
		sdata.CabStructID_ = message.cabstructid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_cabgaptype() )
	{
		sdata.CabGapType_ = message.cabgaptype();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_zformula() )
	{
		sdata.ZFormula_ = message.zformula();
	}
	if ( message.has_xvar() )
	{
		sdata.XVar_ = message.xvar();
	}
	if ( message.has_yvar() )
	{
		sdata.YVar_ = message.yvar();
	}
	if ( message.has_zvar() )
	{
		sdata.ZVar_ = message.zvar();
	}
	if ( message.has_xvarname() )
	{
		sdata.XVarName_ = message.xvarname();
	}
	if ( message.has_yvarname() )
	{
		sdata.YVarName_ = message.yvarname();
	}
	if ( message.has_zvarname() )
	{
		sdata.ZVarName_ = message.zvarname();
	}
	if ( message.has_cabstructcabstructgapcode() )
	{
		sdata.CabStructCabStructGapCode_ = message.cabstructcabstructgapcode();
	}
	if ( message.has_cabstructgapname() )
	{
		sdata.CabStructGapName_ = message.cabstructgapname();
	}
	if ( message.has_cabstructgapmemo() )
	{
		sdata.CabStructGapMemo_ = message.cabstructgapmemo();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_CabStructInfo	ToMessage( const JK_CabStructInfoImp::SData& sdata )
{
	transMsg::JK_CabStructInfo message;
	if ( sdata.CabStructID_ )
	{
		message.set_cabstructid(*sdata.CabStructID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.CabGapType_ )
	{
		message.set_cabgaptype(*sdata.CabGapType_);
	}
	if ( sdata.CabShapeID_ )
	{
		message.set_cabshapeid(*sdata.CabShapeID_);
	}
	if ( sdata.VirtualXLen_ )
	{
		message.set_virtualxlen(*sdata.VirtualXLen_);
	}
	if ( sdata.VirtualYLen_ )
	{
		message.set_virtualylen(*sdata.VirtualYLen_);
	}
	if ( sdata.VirtualZLen_ )
	{
		message.set_virtualzlen(*sdata.VirtualZLen_);
	}
	if ( sdata.VirtualShapeXLen_ )
	{
		message.set_virtualshapexlen(*sdata.VirtualShapeXLen_);
	}
	if ( sdata.VirtualShapeZLen_ )
	{
		message.set_virtualshapezlen(*sdata.VirtualShapeZLen_);
	}
	if ( sdata.VirtualGapXLen_ )
	{
		message.set_virtualgapxlen(*sdata.VirtualGapXLen_);
	}
	if ( sdata.VirtualGapYLen_ )
	{
		message.set_virtualgapylen(*sdata.VirtualGapYLen_);
	}
	if ( sdata.VirtualGapZLen_ )
	{
		message.set_virtualgapzlen(*sdata.VirtualGapZLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CabStructCode_ )
	{
		message.set_cabstructcode(*sdata.CabStructCode_);
	}
	if ( sdata.CabStructName_ )
	{
		message.set_cabstructname(*sdata.CabStructName_);
	}
	if ( sdata.CabStructMemo_ )
	{
		message.set_cabstructmemo(*sdata.CabStructMemo_);
	}
	return message;
}

::autoDB::JK_CabStructInfoImp::SData	ToData( const transMsg::JK_CabStructInfo& message )
{
	JK_CabStructInfoImp::SData sdata;
	if ( message.has_cabstructid() )
	{
		sdata.CabStructID_ = message.cabstructid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_cabgaptype() )
	{
		sdata.CabGapType_ = message.cabgaptype();
	}
	if ( message.has_cabshapeid() )
	{
		sdata.CabShapeID_ = message.cabshapeid();
	}
	if ( message.has_virtualxlen() )
	{
		sdata.VirtualXLen_ = message.virtualxlen();
	}
	if ( message.has_virtualylen() )
	{
		sdata.VirtualYLen_ = message.virtualylen();
	}
	if ( message.has_virtualzlen() )
	{
		sdata.VirtualZLen_ = message.virtualzlen();
	}
	if ( message.has_virtualshapexlen() )
	{
		sdata.VirtualShapeXLen_ = message.virtualshapexlen();
	}
	if ( message.has_virtualshapezlen() )
	{
		sdata.VirtualShapeZLen_ = message.virtualshapezlen();
	}
	if ( message.has_virtualgapxlen() )
	{
		sdata.VirtualGapXLen_ = message.virtualgapxlen();
	}
	if ( message.has_virtualgapylen() )
	{
		sdata.VirtualGapYLen_ = message.virtualgapylen();
	}
	if ( message.has_virtualgapzlen() )
	{
		sdata.VirtualGapZLen_ = message.virtualgapzlen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_cabstructcode() )
	{
		sdata.CabStructCode_ = message.cabstructcode();
	}
	if ( message.has_cabstructname() )
	{
		sdata.CabStructName_ = message.cabstructname();
	}
	if ( message.has_cabstructmemo() )
	{
		sdata.CabStructMemo_ = message.cabstructmemo();
	}
	return std::move(sdata);
}



transMsg::JK_CabStructMatPlanMapInfo	ToMessage( const JK_CabStructMatPlanMapInfoImp::SData& sdata )
{
	transMsg::JK_CabStructMatPlanMapInfo message;
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.CabStructID_ )
	{
		message.set_cabstructid(*sdata.CabStructID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabStructMatPlanMapInfoImp::SData	ToData( const transMsg::JK_CabStructMatPlanMapInfo& message )
{
	JK_CabStructMatPlanMapInfoImp::SData sdata;
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_cabstructid() )
	{
		sdata.CabStructID_ = message.cabstructid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_CabinetSizeBoardInfo	ToMessage( const JK_CabinetSizeBoardInfoImp::SData& sdata )
{
	transMsg::JK_CabinetSizeBoardInfo message;
	if ( sdata.CabinetSizeBoardID_ )
	{
		message.set_cabinetsizeboardid(*sdata.CabinetSizeBoardID_);
	}
	if ( sdata.CabinetSizeID_ )
	{
		message.set_cabinetsizeid(*sdata.CabinetSizeID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.IsCanRelocate_ )
	{
		message.set_iscanrelocate(*sdata.IsCanRelocate_);
	}
	if ( sdata.IsCanDel_ )
	{
		message.set_iscandel(*sdata.IsCanDel_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.CabStructBoardName_ )
	{
		message.set_cabstructboardname(*sdata.CabStructBoardName_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_CabinetSizeBoardInfoImp::SData	ToData( const transMsg::JK_CabinetSizeBoardInfo& message )
{
	JK_CabinetSizeBoardInfoImp::SData sdata;
	if ( message.has_cabinetsizeboardid() )
	{
		sdata.CabinetSizeBoardID_ = message.cabinetsizeboardid();
	}
	if ( message.has_cabinetsizeid() )
	{
		sdata.CabinetSizeID_ = message.cabinetsizeid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_iscanrelocate() )
	{
		sdata.IsCanRelocate_ = message.iscanrelocate();
	}
	if ( message.has_iscandel() )
	{
		sdata.IsCanDel_ = message.iscandel();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_cabstructboardname() )
	{
		sdata.CabStructBoardName_ = message.cabstructboardname();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_CabinetSizeInfo	ToMessage( const JK_CabinetSizeInfoImp::SData& sdata )
{
	transMsg::JK_CabinetSizeInfo message;
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.CabinetSizeID_ )
	{
		message.set_cabinetsizeid(*sdata.CabinetSizeID_);
	}
	if ( sdata.PhotoID_ )
	{
		message.set_photoid(*sdata.PhotoID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.IsStandard_ )
	{
		message.set_isstandard(*sdata.IsStandard_);
	}
	if ( sdata.MinXLen_ )
	{
		message.set_minxlen(*sdata.MinXLen_);
	}
	if ( sdata.MaxXLen_ )
	{
		message.set_maxxlen(*sdata.MaxXLen_);
	}
	if ( sdata.XLenStep_ )
	{
		message.set_xlenstep(*sdata.XLenStep_);
	}
	if ( sdata.MinYLen_ )
	{
		message.set_minylen(*sdata.MinYLen_);
	}
	if ( sdata.MaxYLen_ )
	{
		message.set_maxylen(*sdata.MaxYLen_);
	}
	if ( sdata.YLenStep_ )
	{
		message.set_ylenstep(*sdata.YLenStep_);
	}
	if ( sdata.MinZLen_ )
	{
		message.set_minzlen(*sdata.MinZLen_);
	}
	if ( sdata.MaxZLen_ )
	{
		message.set_maxzlen(*sdata.MaxZLen_);
	}
	if ( sdata.ZLenStep_ )
	{
		message.set_zlenstep(*sdata.ZLenStep_);
	}
	if ( sdata.ShapeXLen_ )
	{
		message.set_shapexlen(*sdata.ShapeXLen_);
	}
	if ( sdata.ShapeZLen_ )
	{
		message.set_shapezlen(*sdata.ShapeZLen_);
	}
	if ( sdata.GapXLen_ )
	{
		message.set_gapxlen(*sdata.GapXLen_);
	}
	if ( sdata.GapYLen_ )
	{
		message.set_gapylen(*sdata.GapYLen_);
	}
	if ( sdata.GapZLen_ )
	{
		message.set_gapzlen(*sdata.GapZLen_);
	}
	if ( sdata.ShapeMinXLen_ )
	{
		message.set_shapeminxlen(*sdata.ShapeMinXLen_);
	}
	if ( sdata.ShapeMaxXLen_ )
	{
		message.set_shapemaxxlen(*sdata.ShapeMaxXLen_);
	}
	if ( sdata.ShapeXLenStep_ )
	{
		message.set_shapexlenstep(*sdata.ShapeXLenStep_);
	}
	if ( sdata.ShapeMinZLen_ )
	{
		message.set_shapeminzlen(*sdata.ShapeMinZLen_);
	}
	if ( sdata.ShapeMaxZLen_ )
	{
		message.set_shapemaxzlen(*sdata.ShapeMaxZLen_);
	}
	if ( sdata.ShapeZLenStep_ )
	{
		message.set_shapezlenstep(*sdata.ShapeZLenStep_);
	}
	if ( sdata.GapMinXLen_ )
	{
		message.set_gapminxlen(*sdata.GapMinXLen_);
	}
	if ( sdata.GapMaxXLen_ )
	{
		message.set_gapmaxxlen(*sdata.GapMaxXLen_);
	}
	if ( sdata.GapXLenStep_ )
	{
		message.set_gapxlenstep(*sdata.GapXLenStep_);
	}
	if ( sdata.GapMinYLen_ )
	{
		message.set_gapminylen(*sdata.GapMinYLen_);
	}
	if ( sdata.GapMaxYLen_ )
	{
		message.set_gapmaxylen(*sdata.GapMaxYLen_);
	}
	if ( sdata.GapYLenStep_ )
	{
		message.set_gapylenstep(*sdata.GapYLenStep_);
	}
	if ( sdata.GapMinZLen_ )
	{
		message.set_gapminzlen(*sdata.GapMinZLen_);
	}
	if ( sdata.GapMaxZLen_ )
	{
		message.set_gapmaxzlen(*sdata.GapMaxZLen_);
	}
	if ( sdata.GapZLenStep_ )
	{
		message.set_gapzlenstep(*sdata.GapZLenStep_);
	}
	if ( sdata.FootCount_ )
	{
		message.set_footcount(*sdata.FootCount_);
	}
	if ( sdata.IsSysFootRule_ )
	{
		message.set_issysfootrule(*sdata.IsSysFootRule_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CabinetSizeCode_ )
	{
		message.set_cabinetsizecode(*sdata.CabinetSizeCode_);
	}
	if ( sdata.CabinetSizeName_ )
	{
		message.set_cabinetsizename(*sdata.CabinetSizeName_);
	}
	if ( sdata.CabinetSizeMemo_ )
	{
		message.set_cabinetsizememo(*sdata.CabinetSizeMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_CabinetSizeInfoImp::SData	ToData( const transMsg::JK_CabinetSizeInfo& message )
{
	JK_CabinetSizeInfoImp::SData sdata;
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_cabinetsizeid() )
	{
		sdata.CabinetSizeID_ = message.cabinetsizeid();
	}
	if ( message.has_photoid() )
	{
		sdata.PhotoID_ = message.photoid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_isstandard() )
	{
		sdata.IsStandard_ = message.isstandard();
	}
	if ( message.has_minxlen() )
	{
		sdata.MinXLen_ = message.minxlen();
	}
	if ( message.has_maxxlen() )
	{
		sdata.MaxXLen_ = message.maxxlen();
	}
	if ( message.has_xlenstep() )
	{
		sdata.XLenStep_ = message.xlenstep();
	}
	if ( message.has_minylen() )
	{
		sdata.MinYLen_ = message.minylen();
	}
	if ( message.has_maxylen() )
	{
		sdata.MaxYLen_ = message.maxylen();
	}
	if ( message.has_ylenstep() )
	{
		sdata.YLenStep_ = message.ylenstep();
	}
	if ( message.has_minzlen() )
	{
		sdata.MinZLen_ = message.minzlen();
	}
	if ( message.has_maxzlen() )
	{
		sdata.MaxZLen_ = message.maxzlen();
	}
	if ( message.has_zlenstep() )
	{
		sdata.ZLenStep_ = message.zlenstep();
	}
	if ( message.has_shapexlen() )
	{
		sdata.ShapeXLen_ = message.shapexlen();
	}
	if ( message.has_shapezlen() )
	{
		sdata.ShapeZLen_ = message.shapezlen();
	}
	if ( message.has_gapxlen() )
	{
		sdata.GapXLen_ = message.gapxlen();
	}
	if ( message.has_gapylen() )
	{
		sdata.GapYLen_ = message.gapylen();
	}
	if ( message.has_gapzlen() )
	{
		sdata.GapZLen_ = message.gapzlen();
	}
	if ( message.has_shapeminxlen() )
	{
		sdata.ShapeMinXLen_ = message.shapeminxlen();
	}
	if ( message.has_shapemaxxlen() )
	{
		sdata.ShapeMaxXLen_ = message.shapemaxxlen();
	}
	if ( message.has_shapexlenstep() )
	{
		sdata.ShapeXLenStep_ = message.shapexlenstep();
	}
	if ( message.has_shapeminzlen() )
	{
		sdata.ShapeMinZLen_ = message.shapeminzlen();
	}
	if ( message.has_shapemaxzlen() )
	{
		sdata.ShapeMaxZLen_ = message.shapemaxzlen();
	}
	if ( message.has_shapezlenstep() )
	{
		sdata.ShapeZLenStep_ = message.shapezlenstep();
	}
	if ( message.has_gapminxlen() )
	{
		sdata.GapMinXLen_ = message.gapminxlen();
	}
	if ( message.has_gapmaxxlen() )
	{
		sdata.GapMaxXLen_ = message.gapmaxxlen();
	}
	if ( message.has_gapxlenstep() )
	{
		sdata.GapXLenStep_ = message.gapxlenstep();
	}
	if ( message.has_gapminylen() )
	{
		sdata.GapMinYLen_ = message.gapminylen();
	}
	if ( message.has_gapmaxylen() )
	{
		sdata.GapMaxYLen_ = message.gapmaxylen();
	}
	if ( message.has_gapylenstep() )
	{
		sdata.GapYLenStep_ = message.gapylenstep();
	}
	if ( message.has_gapminzlen() )
	{
		sdata.GapMinZLen_ = message.gapminzlen();
	}
	if ( message.has_gapmaxzlen() )
	{
		sdata.GapMaxZLen_ = message.gapmaxzlen();
	}
	if ( message.has_gapzlenstep() )
	{
		sdata.GapZLenStep_ = message.gapzlenstep();
	}
	if ( message.has_footcount() )
	{
		sdata.FootCount_ = message.footcount();
	}
	if ( message.has_issysfootrule() )
	{
		sdata.IsSysFootRule_ = message.issysfootrule();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_cabinetsizecode() )
	{
		sdata.CabinetSizeCode_ = message.cabinetsizecode();
	}
	if ( message.has_cabinetsizename() )
	{
		sdata.CabinetSizeName_ = message.cabinetsizename();
	}
	if ( message.has_cabinetsizememo() )
	{
		sdata.CabinetSizeMemo_ = message.cabinetsizememo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_CabinetSizeStructBoardInfo	ToMessage( const JK_CabinetSizeStructBoardInfoImp::SData& sdata )
{
	transMsg::JK_CabinetSizeStructBoardInfo message;
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.CabinetSizeID_ )
	{
		message.set_cabinetsizeid(*sdata.CabinetSizeID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_CabinetSizeStructBoardInfoImp::SData	ToData( const transMsg::JK_CabinetSizeStructBoardInfo& message )
{
	JK_CabinetSizeStructBoardInfoImp::SData sdata;
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_cabinetsizeid() )
	{
		sdata.CabinetSizeID_ = message.cabinetsizeid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorBoardFrameMapInfo	ToMessage( const JK_DecorBoardFrameMapInfoImp::SData& sdata )
{
	transMsg::JK_DecorBoardFrameMapInfo message;
	if ( sdata.DecorBoardID_ )
	{
		message.set_decorboardid(*sdata.DecorBoardID_);
	}
	if ( sdata.DecorFrameID_ )
	{
		message.set_decorframeid(*sdata.DecorFrameID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DecorBoardFrameMapInfoImp::SData	ToData( const transMsg::JK_DecorBoardFrameMapInfo& message )
{
	JK_DecorBoardFrameMapInfoImp::SData sdata;
	if ( message.has_decorboardid() )
	{
		sdata.DecorBoardID_ = message.decorboardid();
	}
	if ( message.has_decorframeid() )
	{
		sdata.DecorFrameID_ = message.decorframeid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorBoardInfo	ToMessage( const JK_DecorBoardInfoImp::SData& sdata )
{
	transMsg::JK_DecorBoardInfo message;
	if ( sdata.DecorBoardID_ )
	{
		message.set_decorboardid(*sdata.DecorBoardID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.SourceType_ )
	{
		message.set_sourcetype(*sdata.SourceType_);
	}
	if ( sdata.DefaultYPos_ )
	{
		message.set_defaultypos(*sdata.DefaultYPos_);
	}
	if ( sdata.DecorBoardCode_ )
	{
		message.set_decorboardcode(*sdata.DecorBoardCode_);
	}
	if ( sdata.DecorBoardName_ )
	{
		message.set_decorboardname(*sdata.DecorBoardName_);
	}
	if ( sdata.DecorBoardMemo_ )
	{
		message.set_decorboardmemo(*sdata.DecorBoardMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.IsCanResize_ )
	{
		message.set_iscanresize(*sdata.IsCanResize_);
	}
	if ( sdata.MinXLen_ )
	{
		message.set_minxlen(*sdata.MinXLen_);
	}
	if ( sdata.MaxXLen_ )
	{
		message.set_maxxlen(*sdata.MaxXLen_);
	}
	if ( sdata.XLenStep_ )
	{
		message.set_xlenstep(*sdata.XLenStep_);
	}
	if ( sdata.MinYLen_ )
	{
		message.set_minylen(*sdata.MinYLen_);
	}
	if ( sdata.MaxYLen_ )
	{
		message.set_maxylen(*sdata.MaxYLen_);
	}
	if ( sdata.YLenStep_ )
	{
		message.set_ylenstep(*sdata.YLenStep_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.PhotoID_ )
	{
		message.set_photoid(*sdata.PhotoID_);
	}
	return message;
}

::autoDB::JK_DecorBoardInfoImp::SData	ToData( const transMsg::JK_DecorBoardInfo& message )
{
	JK_DecorBoardInfoImp::SData sdata;
	if ( message.has_decorboardid() )
	{
		sdata.DecorBoardID_ = message.decorboardid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_sourcetype() )
	{
		sdata.SourceType_ = message.sourcetype();
	}
	if ( message.has_defaultypos() )
	{
		sdata.DefaultYPos_ = message.defaultypos();
	}
	if ( message.has_decorboardcode() )
	{
		sdata.DecorBoardCode_ = message.decorboardcode();
	}
	if ( message.has_decorboardname() )
	{
		sdata.DecorBoardName_ = message.decorboardname();
	}
	if ( message.has_decorboardmemo() )
	{
		sdata.DecorBoardMemo_ = message.decorboardmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_iscanresize() )
	{
		sdata.IsCanResize_ = message.iscanresize();
	}
	if ( message.has_minxlen() )
	{
		sdata.MinXLen_ = message.minxlen();
	}
	if ( message.has_maxxlen() )
	{
		sdata.MaxXLen_ = message.maxxlen();
	}
	if ( message.has_xlenstep() )
	{
		sdata.XLenStep_ = message.xlenstep();
	}
	if ( message.has_minylen() )
	{
		sdata.MinYLen_ = message.minylen();
	}
	if ( message.has_maxylen() )
	{
		sdata.MaxYLen_ = message.maxylen();
	}
	if ( message.has_ylenstep() )
	{
		sdata.YLenStep_ = message.ylenstep();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_photoid() )
	{
		sdata.PhotoID_ = message.photoid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorBoardMatInfo	ToMessage( const JK_DecorBoardMatInfoImp::SData& sdata )
{
	transMsg::JK_DecorBoardMatInfo message;
	if ( sdata.DecorBoardID_ )
	{
		message.set_decorboardid(*sdata.DecorBoardID_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DecorBoardMatInfoImp::SData	ToData( const transMsg::JK_DecorBoardMatInfo& message )
{
	JK_DecorBoardMatInfoImp::SData sdata;
	if ( message.has_decorboardid() )
	{
		sdata.DecorBoardID_ = message.decorboardid();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorBoardUnitInfo	ToMessage( const JK_DecorBoardUnitInfoImp::SData& sdata )
{
	transMsg::JK_DecorBoardUnitInfo message;
	if ( sdata.DecorBoardUnitID_ )
	{
		message.set_decorboardunitid(*sdata.DecorBoardUnitID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.DecorBoardID_ )
	{
		message.set_decorboardid(*sdata.DecorBoardID_);
	}
	if ( sdata.SplitType_ )
	{
		message.set_splittype(*sdata.SplitType_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.ArcX_ )
	{
		message.set_arcx(*sdata.ArcX_);
	}
	if ( sdata.ArcY_ )
	{
		message.set_arcy(*sdata.ArcY_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.DecorBoardUnitIndex_ )
	{
		message.set_decorboardunitindex(*sdata.DecorBoardUnitIndex_);
	}
	if ( sdata.DecorBoardUnitName_ )
	{
		message.set_decorboardunitname(*sdata.DecorBoardUnitName_);
	}
	if ( sdata.DecorBoardUnitMemo_ )
	{
		message.set_decorboardunitmemo(*sdata.DecorBoardUnitMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.IsUseDefaultMat_ )
	{
		message.set_isusedefaultmat(*sdata.IsUseDefaultMat_);
	}
	return message;
}

::autoDB::JK_DecorBoardUnitInfoImp::SData	ToData( const transMsg::JK_DecorBoardUnitInfo& message )
{
	JK_DecorBoardUnitInfoImp::SData sdata;
	if ( message.has_decorboardunitid() )
	{
		sdata.DecorBoardUnitID_ = message.decorboardunitid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_decorboardid() )
	{
		sdata.DecorBoardID_ = message.decorboardid();
	}
	if ( message.has_splittype() )
	{
		sdata.SplitType_ = message.splittype();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_arcx() )
	{
		sdata.ArcX_ = message.arcx();
	}
	if ( message.has_arcy() )
	{
		sdata.ArcY_ = message.arcy();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_decorboardunitindex() )
	{
		sdata.DecorBoardUnitIndex_ = message.decorboardunitindex();
	}
	if ( message.has_decorboardunitname() )
	{
		sdata.DecorBoardUnitName_ = message.decorboardunitname();
	}
	if ( message.has_decorboardunitmemo() )
	{
		sdata.DecorBoardUnitMemo_ = message.decorboardunitmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_isusedefaultmat() )
	{
		sdata.IsUseDefaultMat_ = message.isusedefaultmat();
	}
	return std::move(sdata);
}



transMsg::JK_DecorBoardUnitMatInfo	ToMessage( const JK_DecorBoardUnitMatInfoImp::SData& sdata )
{
	transMsg::JK_DecorBoardUnitMatInfo message;
	if ( sdata.DecorBoardUnitID_ )
	{
		message.set_decorboardunitid(*sdata.DecorBoardUnitID_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.DefaultSealRuleID_ )
	{
		message.set_defaultsealruleid(*sdata.DefaultSealRuleID_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DecorBoardUnitMatInfoImp::SData	ToData( const transMsg::JK_DecorBoardUnitMatInfo& message )
{
	JK_DecorBoardUnitMatInfoImp::SData sdata;
	if ( message.has_decorboardunitid() )
	{
		sdata.DecorBoardUnitID_ = message.decorboardunitid();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_defaultsealruleid() )
	{
		sdata.DefaultSealRuleID_ = message.defaultsealruleid();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorBoardUnitSealInfo	ToMessage( const JK_DecorBoardUnitSealInfoImp::SData& sdata )
{
	transMsg::JK_DecorBoardUnitSealInfo message;
	if ( sdata.DecorBoardUnitID_ )
	{
		message.set_decorboardunitid(*sdata.DecorBoardUnitID_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.DefaultMaterialID_ )
	{
		message.set_defaultmaterialid(*sdata.DefaultMaterialID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.SealOrder_ )
	{
		message.set_sealorder(*sdata.SealOrder_);
	}
	if ( sdata.DecorBoardUnitSealID_ )
	{
		message.set_decorboardunitsealid(*sdata.DecorBoardUnitSealID_);
	}
	return message;
}

::autoDB::JK_DecorBoardUnitSealInfoImp::SData	ToData( const transMsg::JK_DecorBoardUnitSealInfo& message )
{
	JK_DecorBoardUnitSealInfoImp::SData sdata;
	if ( message.has_decorboardunitid() )
	{
		sdata.DecorBoardUnitID_ = message.decorboardunitid();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_defaultmaterialid() )
	{
		sdata.DefaultMaterialID_ = message.defaultmaterialid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_sealorder() )
	{
		sdata.SealOrder_ = message.sealorder();
	}
	if ( message.has_decorboardunitsealid() )
	{
		sdata.DecorBoardUnitSealID_ = message.decorboardunitsealid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorInfo	ToMessage( const JK_DecorInfoImp::SData& sdata )
{
	transMsg::JK_DecorInfo message;
	if ( sdata.DecorID_ )
	{
		message.set_decorid(*sdata.DecorID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.SkinID_ )
	{
		message.set_skinid(*sdata.SkinID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.DecorCode_ )
	{
		message.set_decorcode(*sdata.DecorCode_);
	}
	if ( sdata.DecorName_ )
	{
		message.set_decorname(*sdata.DecorName_);
	}
	if ( sdata.DecorMemo_ )
	{
		message.set_decormemo(*sdata.DecorMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_DecorInfoImp::SData	ToData( const transMsg::JK_DecorInfo& message )
{
	JK_DecorInfoImp::SData sdata;
	if ( message.has_decorid() )
	{
		sdata.DecorID_ = message.decorid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_skinid() )
	{
		sdata.SkinID_ = message.skinid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_decorcode() )
	{
		sdata.DecorCode_ = message.decorcode();
	}
	if ( message.has_decorname() )
	{
		sdata.DecorName_ = message.decorname();
	}
	if ( message.has_decormemo() )
	{
		sdata.DecorMemo_ = message.decormemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_DecorLineInfo	ToMessage( const JK_DecorLineInfoImp::SData& sdata )
{
	transMsg::JK_DecorLineInfo message;
	if ( sdata.DecorLineID_ )
	{
		message.set_decorlineid(*sdata.DecorLineID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.ZOffset_ )
	{
		message.set_zoffset(*sdata.ZOffset_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.DecorLineCode_ )
	{
		message.set_decorlinecode(*sdata.DecorLineCode_);
	}
	if ( sdata.DecorLineName_ )
	{
		message.set_decorlinename(*sdata.DecorLineName_);
	}
	if ( sdata.DecorLineMemo_ )
	{
		message.set_decorlinememo(*sdata.DecorLineMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.DefaultYLen_ )
	{
		message.set_defaultylen(*sdata.DefaultYLen_);
	}
	return message;
}

::autoDB::JK_DecorLineInfoImp::SData	ToData( const transMsg::JK_DecorLineInfo& message )
{
	JK_DecorLineInfoImp::SData sdata;
	if ( message.has_decorlineid() )
	{
		sdata.DecorLineID_ = message.decorlineid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_zoffset() )
	{
		sdata.ZOffset_ = message.zoffset();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_decorlinecode() )
	{
		sdata.DecorLineCode_ = message.decorlinecode();
	}
	if ( message.has_decorlinename() )
	{
		sdata.DecorLineName_ = message.decorlinename();
	}
	if ( message.has_decorlinememo() )
	{
		sdata.DecorLineMemo_ = message.decorlinememo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_defaultylen() )
	{
		sdata.DefaultYLen_ = message.defaultylen();
	}
	return std::move(sdata);
}



transMsg::JK_DecorLineMatInfo	ToMessage( const JK_DecorLineMatInfoImp::SData& sdata )
{
	transMsg::JK_DecorLineMatInfo message;
	if ( sdata.DecorLineID_ )
	{
		message.set_decorlineid(*sdata.DecorLineID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DecorLineMatInfoImp::SData	ToData( const transMsg::JK_DecorLineMatInfo& message )
{
	JK_DecorLineMatInfoImp::SData sdata;
	if ( message.has_decorlineid() )
	{
		sdata.DecorLineID_ = message.decorlineid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DecorUnitHWFittingMapInfo	ToMessage( const JK_DecorUnitHWFittingMapInfoImp::SData& sdata )
{
	transMsg::JK_DecorUnitHWFittingMapInfo message;
	if ( sdata.DecorBoardUnitID_ )
	{
		message.set_decorboardunitid(*sdata.DecorBoardUnitID_);
	}
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DecorUnitHWFittingMapInfoImp::SData	ToData( const transMsg::JK_DecorUnitHWFittingMapInfo& message )
{
	JK_DecorUnitHWFittingMapInfoImp::SData sdata;
	if ( message.has_decorboardunitid() )
	{
		sdata.DecorBoardUnitID_ = message.decorboardunitid();
	}
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorBoardGapInfo	ToMessage( const JK_DoorBoardGapInfoImp::SData& sdata )
{
	transMsg::JK_DoorBoardGapInfo message;
	if ( sdata.DoorBoardGapID_ )
	{
		message.set_doorboardgapid(*sdata.DoorBoardGapID_);
	}
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.GapPos_ )
	{
		message.set_gappos(*sdata.GapPos_);
	}
	if ( sdata.GapIndex_ )
	{
		message.set_gapindex(*sdata.GapIndex_);
	}
	if ( sdata.GapType_ )
	{
		message.set_gaptype(*sdata.GapType_);
	}
	if ( sdata.GapShape_ )
	{
		message.set_gapshape(*sdata.GapShape_);
	}
	if ( sdata.XLenFormula_ )
	{
		message.set_xlenformula(*sdata.XLenFormula_);
	}
	if ( sdata.YLenFormula_ )
	{
		message.set_ylenformula(*sdata.YLenFormula_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_DoorBoardGapInfoImp::SData	ToData( const transMsg::JK_DoorBoardGapInfo& message )
{
	JK_DoorBoardGapInfoImp::SData sdata;
	if ( message.has_doorboardgapid() )
	{
		sdata.DoorBoardGapID_ = message.doorboardgapid();
	}
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_gappos() )
	{
		sdata.GapPos_ = message.gappos();
	}
	if ( message.has_gapindex() )
	{
		sdata.GapIndex_ = message.gapindex();
	}
	if ( message.has_gaptype() )
	{
		sdata.GapType_ = message.gaptype();
	}
	if ( message.has_gapshape() )
	{
		sdata.GapShape_ = message.gapshape();
	}
	if ( message.has_xlenformula() )
	{
		sdata.XLenFormula_ = message.xlenformula();
	}
	if ( message.has_ylenformula() )
	{
		sdata.YLenFormula_ = message.ylenformula();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_DoorBoardInfo	ToMessage( const JK_DoorBoardInfoImp::SData& sdata )
{
	transMsg::JK_DoorBoardInfo message;
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsUseDefaultMat_ )
	{
		message.set_isusedefaultmat(*sdata.IsUseDefaultMat_);
	}
	if ( sdata.SplitType_ )
	{
		message.set_splittype(*sdata.SplitType_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.ArcX_ )
	{
		message.set_arcx(*sdata.ArcX_);
	}
	if ( sdata.ArcY_ )
	{
		message.set_arcy(*sdata.ArcY_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.DoorBoardIndex_ )
	{
		message.set_doorboardindex(*sdata.DoorBoardIndex_);
	}
	if ( sdata.DoorBoardName_ )
	{
		message.set_doorboardname(*sdata.DoorBoardName_);
	}
	if ( sdata.DoorBoardMemo_ )
	{
		message.set_doorboardmemo(*sdata.DoorBoardMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_DoorBoardInfoImp::SData	ToData( const transMsg::JK_DoorBoardInfo& message )
{
	JK_DoorBoardInfoImp::SData sdata;
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isusedefaultmat() )
	{
		sdata.IsUseDefaultMat_ = message.isusedefaultmat();
	}
	if ( message.has_splittype() )
	{
		sdata.SplitType_ = message.splittype();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_arcx() )
	{
		sdata.ArcX_ = message.arcx();
	}
	if ( message.has_arcy() )
	{
		sdata.ArcY_ = message.arcy();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_doorboardindex() )
	{
		sdata.DoorBoardIndex_ = message.doorboardindex();
	}
	if ( message.has_doorboardname() )
	{
		sdata.DoorBoardName_ = message.doorboardname();
	}
	if ( message.has_doorboardmemo() )
	{
		sdata.DoorBoardMemo_ = message.doorboardmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_DoorBoardMatMapInfo	ToMessage( const JK_DoorBoardMatMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorBoardMatMapInfo message;
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorBoardMatMapInfoImp::SData	ToData( const transMsg::JK_DoorBoardMatMapInfo& message )
{
	JK_DoorBoardMatMapInfoImp::SData sdata;
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorBoardSealInfo	ToMessage( const JK_DoorBoardSealInfoImp::SData& sdata )
{
	transMsg::JK_DoorBoardSealInfo message;
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.SealOrder_ )
	{
		message.set_sealorder(*sdata.SealOrder_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	return message;
}

::autoDB::JK_DoorBoardSealInfoImp::SData	ToData( const transMsg::JK_DoorBoardSealInfo& message )
{
	JK_DoorBoardSealInfoImp::SData sdata;
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_sealorder() )
	{
		sdata.SealOrder_ = message.sealorder();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	return std::move(sdata);
}



transMsg::JK_DoorInfo	ToMessage( const JK_DoorInfoImp::SData& sdata )
{
	transMsg::JK_DoorInfo message;
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.CombineType_ )
	{
		message.set_combinetype(*sdata.CombineType_);
	}
	if ( sdata.PhotoID_ )
	{
		message.set_photoid(*sdata.PhotoID_);
	}
	if ( sdata.VirtualContainerXLen_ )
	{
		message.set_virtualcontainerxlen(*sdata.VirtualContainerXLen_);
	}
	if ( sdata.VirtualContainerYLen_ )
	{
		message.set_virtualcontainerylen(*sdata.VirtualContainerYLen_);
	}
	if ( sdata.VirtualContainerZLen_ )
	{
		message.set_virtualcontainerzlen(*sdata.VirtualContainerZLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.DoorCode_ )
	{
		message.set_doorcode(*sdata.DoorCode_);
	}
	if ( sdata.DoorName_ )
	{
		message.set_doorname(*sdata.DoorName_);
	}
	if ( sdata.DoorMemo_ )
	{
		message.set_doormemo(*sdata.DoorMemo_);
	}
	return message;
}

::autoDB::JK_DoorInfoImp::SData	ToData( const transMsg::JK_DoorInfo& message )
{
	JK_DoorInfoImp::SData sdata;
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_combinetype() )
	{
		sdata.CombineType_ = message.combinetype();
	}
	if ( message.has_photoid() )
	{
		sdata.PhotoID_ = message.photoid();
	}
	if ( message.has_virtualcontainerxlen() )
	{
		sdata.VirtualContainerXLen_ = message.virtualcontainerxlen();
	}
	if ( message.has_virtualcontainerylen() )
	{
		sdata.VirtualContainerYLen_ = message.virtualcontainerylen();
	}
	if ( message.has_virtualcontainerzlen() )
	{
		sdata.VirtualContainerZLen_ = message.virtualcontainerzlen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_doorcode() )
	{
		sdata.DoorCode_ = message.doorcode();
	}
	if ( message.has_doorname() )
	{
		sdata.DoorName_ = message.doorname();
	}
	if ( message.has_doormemo() )
	{
		sdata.DoorMemo_ = message.doormemo();
	}
	return std::move(sdata);
}



transMsg::JK_DoorMatMapInfo	ToMessage( const JK_DoorMatMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorMatMapInfo message;
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorMatMapInfoImp::SData	ToData( const transMsg::JK_DoorMatMapInfo& message )
{
	JK_DoorMatMapInfoImp::SData sdata;
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorMatPlanHandleMapInfo	ToMessage( const JK_DoorMatPlanHandleMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorMatPlanHandleMapInfo message;
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.HandleID_ )
	{
		message.set_handleid(*sdata.HandleID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorMatPlanHandleMapInfoImp::SData	ToData( const transMsg::JK_DoorMatPlanHandleMapInfo& message )
{
	JK_DoorMatPlanHandleMapInfoImp::SData sdata;
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_handleid() )
	{
		sdata.HandleID_ = message.handleid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorMatPlanInfo	ToMessage( const JK_DoorMatPlanInfoImp::SData& sdata )
{
	transMsg::JK_DoorMatPlanInfo message;
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.DoorMatPlanCode_ )
	{
		message.set_doormatplancode(*sdata.DoorMatPlanCode_);
	}
	if ( sdata.DoorMatPlanName_ )
	{
		message.set_doormatplanname(*sdata.DoorMatPlanName_);
	}
	if ( sdata.DoorMatPlanMemo_ )
	{
		message.set_doormatplanmemo(*sdata.DoorMatPlanMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.IsCanSeal_ )
	{
		message.set_iscanseal(*sdata.IsCanSeal_);
	}
	return message;
}

::autoDB::JK_DoorMatPlanInfoImp::SData	ToData( const transMsg::JK_DoorMatPlanInfo& message )
{
	JK_DoorMatPlanInfoImp::SData sdata;
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_doormatplancode() )
	{
		sdata.DoorMatPlanCode_ = message.doormatplancode();
	}
	if ( message.has_doormatplanname() )
	{
		sdata.DoorMatPlanName_ = message.doormatplanname();
	}
	if ( message.has_doormatplanmemo() )
	{
		sdata.DoorMatPlanMemo_ = message.doormatplanmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_iscanseal() )
	{
		sdata.IsCanSeal_ = message.iscanseal();
	}
	return std::move(sdata);
}



transMsg::JK_DoorRegionHWFittingMapInfo	ToMessage( const JK_DoorRegionHWFittingMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorRegionHWFittingMapInfo message;
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorRegionHWFittingMapInfoImp::SData	ToData( const transMsg::JK_DoorRegionHWFittingMapInfo& message )
{
	JK_DoorRegionHWFittingMapInfoImp::SData sdata;
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorSystemInfo	ToMessage( const JK_DoorSystemInfoImp::SData& sdata )
{
	transMsg::JK_DoorSystemInfo message;
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.MatchCabShape_ )
	{
		message.set_matchcabshape(*sdata.MatchCabShape_);
	}
	if ( sdata.InstallType_ )
	{
		message.set_installtype(*sdata.InstallType_);
	}
	if ( sdata.VirtualXLen_ )
	{
		message.set_virtualxlen(*sdata.VirtualXLen_);
	}
	if ( sdata.VirtualYLen_ )
	{
		message.set_virtualylen(*sdata.VirtualYLen_);
	}
	if ( sdata.VirtualShapeXLen_ )
	{
		message.set_virtualshapexlen(*sdata.VirtualShapeXLen_);
	}
	if ( sdata.VirtualShapeZLen_ )
	{
		message.set_virtualshapezlen(*sdata.VirtualShapeZLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.DoorSystemCode_ )
	{
		message.set_doorsystemcode(*sdata.DoorSystemCode_);
	}
	if ( sdata.DoorSystemName_ )
	{
		message.set_doorsystemname(*sdata.DoorSystemName_);
	}
	if ( sdata.DoorSystemMemo_ )
	{
		message.set_doorsystemmemo(*sdata.DoorSystemMemo_);
	}
	return message;
}

::autoDB::JK_DoorSystemInfoImp::SData	ToData( const transMsg::JK_DoorSystemInfo& message )
{
	JK_DoorSystemInfoImp::SData sdata;
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_matchcabshape() )
	{
		sdata.MatchCabShape_ = message.matchcabshape();
	}
	if ( message.has_installtype() )
	{
		sdata.InstallType_ = message.installtype();
	}
	if ( message.has_virtualxlen() )
	{
		sdata.VirtualXLen_ = message.virtualxlen();
	}
	if ( message.has_virtualylen() )
	{
		sdata.VirtualYLen_ = message.virtualylen();
	}
	if ( message.has_virtualshapexlen() )
	{
		sdata.VirtualShapeXLen_ = message.virtualshapexlen();
	}
	if ( message.has_virtualshapezlen() )
	{
		sdata.VirtualShapeZLen_ = message.virtualshapezlen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_doorsystemcode() )
	{
		sdata.DoorSystemCode_ = message.doorsystemcode();
	}
	if ( message.has_doorsystemname() )
	{
		sdata.DoorSystemName_ = message.doorsystemname();
	}
	if ( message.has_doorsystemmemo() )
	{
		sdata.DoorSystemMemo_ = message.doorsystemmemo();
	}
	return std::move(sdata);
}



transMsg::JK_DoorSystemMatMapInfo	ToMessage( const JK_DoorSystemMatMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorSystemMatMapInfo message;
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorSystemMatMapInfoImp::SData	ToData( const transMsg::JK_DoorSystemMatMapInfo& message )
{
	JK_DoorSystemMatMapInfoImp::SData sdata;
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorSystemRegionDoorMapInfo	ToMessage( const JK_DoorSystemRegionDoorMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorSystemRegionDoorMapInfo message;
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorSystemRegionDoorMapInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionDoorMapInfo& message )
{
	JK_DoorSystemRegionDoorMapInfoImp::SData sdata;
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorSystemRegionInfo	ToMessage( const JK_DoorSystemRegionInfoImp::SData& sdata )
{
	transMsg::JK_DoorSystemRegionInfo message;
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.ParentID_ )
	{
		message.set_parentid(*sdata.ParentID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.RegionIndex_ )
	{
		message.set_regionindex(*sdata.RegionIndex_);
	}
	if ( sdata.CutDirection_ )
	{
		message.set_cutdirection(*sdata.CutDirection_);
	}
	if ( sdata.CutFormula_ )
	{
		message.set_cutformula(*sdata.CutFormula_);
	}
	if ( sdata.IsSlide_ )
	{
		message.set_isslide(*sdata.IsSlide_);
	}
	if ( sdata.IsRound_ )
	{
		message.set_isround(*sdata.IsRound_);
	}
	if ( sdata.LenPrecision_ )
	{
		message.set_lenprecision(*sdata.LenPrecision_);
	}
	if ( sdata.OpenDoorType_ )
	{
		message.set_opendoortype(*sdata.OpenDoorType_);
	}
	if ( sdata.XAdjustLen_ )
	{
		message.set_xadjustlen(*sdata.XAdjustLen_);
	}
	if ( sdata.YAdjustLen_ )
	{
		message.set_yadjustlen(*sdata.YAdjustLen_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.IsCanResize_ )
	{
		message.set_iscanresize(*sdata.IsCanResize_);
	}
	if ( sdata.DoorFunction_ )
	{
		message.set_doorfunction(*sdata.DoorFunction_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.HandleXDock_ )
	{
		message.set_handlexdock(*sdata.HandleXDock_);
	}
	if ( sdata.HandleYDock_ )
	{
		message.set_handleydock(*sdata.HandleYDock_);
	}
	if ( sdata.HandleZDock_ )
	{
		message.set_handlezdock(*sdata.HandleZDock_);
	}
	if ( sdata.HandleXOffsetFormula_ )
	{
		message.set_handlexoffsetformula(*sdata.HandleXOffsetFormula_);
	}
	if ( sdata.HandleYOffsetFormula_ )
	{
		message.set_handleyoffsetformula(*sdata.HandleYOffsetFormula_);
	}
	if ( sdata.HandleZOffsetFormula_ )
	{
		message.set_handlezoffsetformula(*sdata.HandleZOffsetFormula_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.DoorBoardMatType_ )
	{
		message.set_doorboardmattype(*sdata.DoorBoardMatType_);
	}
	if ( sdata.DoorBoardMatID_ )
	{
		message.set_doorboardmatid(*sdata.DoorBoardMatID_);
	}
	if ( sdata.IsUseCustomThick_ )
	{
		message.set_isusecustomthick(*sdata.IsUseCustomThick_);
	}
	return message;
}

::autoDB::JK_DoorSystemRegionInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionInfo& message )
{
	JK_DoorSystemRegionInfoImp::SData sdata;
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_parentid() )
	{
		sdata.ParentID_ = message.parentid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_regionindex() )
	{
		sdata.RegionIndex_ = message.regionindex();
	}
	if ( message.has_cutdirection() )
	{
		sdata.CutDirection_ = message.cutdirection();
	}
	if ( message.has_cutformula() )
	{
		sdata.CutFormula_ = message.cutformula();
	}
	if ( message.has_isslide() )
	{
		sdata.IsSlide_ = message.isslide();
	}
	if ( message.has_isround() )
	{
		sdata.IsRound_ = message.isround();
	}
	if ( message.has_lenprecision() )
	{
		sdata.LenPrecision_ = message.lenprecision();
	}
	if ( message.has_opendoortype() )
	{
		sdata.OpenDoorType_ = message.opendoortype();
	}
	if ( message.has_xadjustlen() )
	{
		sdata.XAdjustLen_ = message.xadjustlen();
	}
	if ( message.has_yadjustlen() )
	{
		sdata.YAdjustLen_ = message.yadjustlen();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_iscanresize() )
	{
		sdata.IsCanResize_ = message.iscanresize();
	}
	if ( message.has_doorfunction() )
	{
		sdata.DoorFunction_ = message.doorfunction();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_handlexdock() )
	{
		sdata.HandleXDock_ = message.handlexdock();
	}
	if ( message.has_handleydock() )
	{
		sdata.HandleYDock_ = message.handleydock();
	}
	if ( message.has_handlezdock() )
	{
		sdata.HandleZDock_ = message.handlezdock();
	}
	if ( message.has_handlexoffsetformula() )
	{
		sdata.HandleXOffsetFormula_ = message.handlexoffsetformula();
	}
	if ( message.has_handleyoffsetformula() )
	{
		sdata.HandleYOffsetFormula_ = message.handleyoffsetformula();
	}
	if ( message.has_handlezoffsetformula() )
	{
		sdata.HandleZOffsetFormula_ = message.handlezoffsetformula();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_doorboardmattype() )
	{
		sdata.DoorBoardMatType_ = message.doorboardmattype();
	}
	if ( message.has_doorboardmatid() )
	{
		sdata.DoorBoardMatID_ = message.doorboardmatid();
	}
	if ( message.has_isusecustomthick() )
	{
		sdata.IsUseCustomThick_ = message.isusecustomthick();
	}
	return std::move(sdata);
}



transMsg::JK_DoorSystemRegionSlideMapInfo	ToMessage( const JK_DoorSystemRegionSlideMapInfoImp::SData& sdata )
{
	transMsg::JK_DoorSystemRegionSlideMapInfo message;
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.SlideID_ )
	{
		message.set_slideid(*sdata.SlideID_);
	}
	if ( sdata.SlidePosition_ )
	{
		message.set_slideposition(*sdata.SlidePosition_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_DoorSystemRegionSlideMapInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionSlideMapInfo& message )
{
	JK_DoorSystemRegionSlideMapInfoImp::SData sdata;
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_slideid() )
	{
		sdata.SlideID_ = message.slideid();
	}
	if ( message.has_slideposition() )
	{
		sdata.SlidePosition_ = message.slideposition();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_DoorSystemRegionSlidePositionSizeInfo	ToMessage( const JK_DoorSystemRegionSlidePositionSizeInfoImp::SData& sdata )
{
	transMsg::JK_DoorSystemRegionSlidePositionSizeInfo message;
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.SlidePosition_ )
	{
		message.set_slideposition(*sdata.SlidePosition_);
	}
	if ( sdata.XAdjustLen_ )
	{
		message.set_xadjustlen(*sdata.XAdjustLen_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_DoorSystemRegionSlidePositionSizeInfoImp::SData	ToData( const transMsg::JK_DoorSystemRegionSlidePositionSizeInfo& message )
{
	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData sdata;
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_slideposition() )
	{
		sdata.SlidePosition_ = message.slideposition();
	}
	if ( message.has_xadjustlen() )
	{
		sdata.XAdjustLen_ = message.xadjustlen();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_FNFittingInfo	ToMessage( const JK_FNFittingInfoImp::SData& sdata )
{
	transMsg::JK_FNFittingInfo message;
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.IsEntire_ )
	{
		message.set_isentire(*sdata.IsEntire_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.MinInstallX_ )
	{
		message.set_mininstallx(*sdata.MinInstallX_);
	}
	if ( sdata.MinInstallY_ )
	{
		message.set_mininstally(*sdata.MinInstallY_);
	}
	if ( sdata.MinInstallZ_ )
	{
		message.set_mininstallz(*sdata.MinInstallZ_);
	}
	if ( sdata.MinXLen_ )
	{
		message.set_minxlen(*sdata.MinXLen_);
	}
	if ( sdata.MaxXLen_ )
	{
		message.set_maxxlen(*sdata.MaxXLen_);
	}
	if ( sdata.MinYLen_ )
	{
		message.set_minylen(*sdata.MinYLen_);
	}
	if ( sdata.MaxYLen_ )
	{
		message.set_maxylen(*sdata.MaxYLen_);
	}
	if ( sdata.MinZLen_ )
	{
		message.set_minzlen(*sdata.MinZLen_);
	}
	if ( sdata.MaxZLen_ )
	{
		message.set_maxzlen(*sdata.MaxZLen_);
	}
	if ( sdata.IsMatchXLen_ )
	{
		message.set_ismatchxlen(*sdata.IsMatchXLen_);
	}
	if ( sdata.IsMatchYLen_ )
	{
		message.set_ismatchylen(*sdata.IsMatchYLen_);
	}
	if ( sdata.IsMatchZLen_ )
	{
		message.set_ismatchzlen(*sdata.IsMatchZLen_);
	}
	if ( sdata.DefaultYPos_ )
	{
		message.set_defaultypos(*sdata.DefaultYPos_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.FNFittingCode_ )
	{
		message.set_fnfittingcode(*sdata.FNFittingCode_);
	}
	if ( sdata.FNFittingName_ )
	{
		message.set_fnfittingname(*sdata.FNFittingName_);
	}
	if ( sdata.FNFittingMemo_ )
	{
		message.set_fnfittingmemo(*sdata.FNFittingMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_FNFittingInfoImp::SData	ToData( const transMsg::JK_FNFittingInfo& message )
{
	JK_FNFittingInfoImp::SData sdata;
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_isentire() )
	{
		sdata.IsEntire_ = message.isentire();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_mininstallx() )
	{
		sdata.MinInstallX_ = message.mininstallx();
	}
	if ( message.has_mininstally() )
	{
		sdata.MinInstallY_ = message.mininstally();
	}
	if ( message.has_mininstallz() )
	{
		sdata.MinInstallZ_ = message.mininstallz();
	}
	if ( message.has_minxlen() )
	{
		sdata.MinXLen_ = message.minxlen();
	}
	if ( message.has_maxxlen() )
	{
		sdata.MaxXLen_ = message.maxxlen();
	}
	if ( message.has_minylen() )
	{
		sdata.MinYLen_ = message.minylen();
	}
	if ( message.has_maxylen() )
	{
		sdata.MaxYLen_ = message.maxylen();
	}
	if ( message.has_minzlen() )
	{
		sdata.MinZLen_ = message.minzlen();
	}
	if ( message.has_maxzlen() )
	{
		sdata.MaxZLen_ = message.maxzlen();
	}
	if ( message.has_ismatchxlen() )
	{
		sdata.IsMatchXLen_ = message.ismatchxlen();
	}
	if ( message.has_ismatchylen() )
	{
		sdata.IsMatchYLen_ = message.ismatchylen();
	}
	if ( message.has_ismatchzlen() )
	{
		sdata.IsMatchZLen_ = message.ismatchzlen();
	}
	if ( message.has_defaultypos() )
	{
		sdata.DefaultYPos_ = message.defaultypos();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_fnfittingcode() )
	{
		sdata.FNFittingCode_ = message.fnfittingcode();
	}
	if ( message.has_fnfittingname() )
	{
		sdata.FNFittingName_ = message.fnfittingname();
	}
	if ( message.has_fnfittingmemo() )
	{
		sdata.FNFittingMemo_ = message.fnfittingmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_FNFittingMatInfo	ToMessage( const JK_FNFittingMatInfoImp::SData& sdata )
{
	transMsg::JK_FNFittingMatInfo message;
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_FNFittingMatInfoImp::SData	ToData( const transMsg::JK_FNFittingMatInfo& message )
{
	JK_FNFittingMatInfoImp::SData sdata;
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_FNFittingPartInfo	ToMessage( const JK_FNFittingPartInfoImp::SData& sdata )
{
	transMsg::JK_FNFittingPartInfo message;
	if ( sdata.FNFittingPartID_ )
	{
		message.set_fnfittingpartid(*sdata.FNFittingPartID_);
	}
	if ( sdata.PartType_ )
	{
		message.set_parttype(*sdata.PartType_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.IsUseMain_ )
	{
		message.set_isusemain(*sdata.IsUseMain_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.SplitType_ )
	{
		message.set_splittype(*sdata.SplitType_);
	}
	if ( sdata.ArcX_ )
	{
		message.set_arcx(*sdata.ArcX_);
	}
	if ( sdata.ArcY_ )
	{
		message.set_arcy(*sdata.ArcY_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
	}
	if ( sdata.XFormula_ )
	{
		message.set_xformula(*sdata.XFormula_);
	}
	if ( sdata.YFormula_ )
	{
		message.set_yformula(*sdata.YFormula_);
	}
	if ( sdata.XDock_ )
	{
		message.set_xdock(*sdata.XDock_);
	}
	if ( sdata.YDock_ )
	{
		message.set_ydock(*sdata.YDock_);
	}
	if ( sdata.ZDock_ )
	{
		message.set_zdock(*sdata.ZDock_);
	}
	if ( sdata.XOffsetFormula_ )
	{
		message.set_xoffsetformula(*sdata.XOffsetFormula_);
	}
	if ( sdata.YOffsetFormula_ )
	{
		message.set_yoffsetformula(*sdata.YOffsetFormula_);
	}
	if ( sdata.ZOffsetFormula_ )
	{
		message.set_zoffsetformula(*sdata.ZOffsetFormula_);
	}
	if ( sdata.FNFittingPartCode_ )
	{
		message.set_fnfittingpartcode(*sdata.FNFittingPartCode_);
	}
	if ( sdata.FNFittingPartName_ )
	{
		message.set_fnfittingpartname(*sdata.FNFittingPartName_);
	}
	if ( sdata.FNFittingPartMemo_ )
	{
		message.set_fnfittingpartmemo(*sdata.FNFittingPartMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_FNFittingPartInfoImp::SData	ToData( const transMsg::JK_FNFittingPartInfo& message )
{
	JK_FNFittingPartInfoImp::SData sdata;
	if ( message.has_fnfittingpartid() )
	{
		sdata.FNFittingPartID_ = message.fnfittingpartid();
	}
	if ( message.has_parttype() )
	{
		sdata.PartType_ = message.parttype();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_isusemain() )
	{
		sdata.IsUseMain_ = message.isusemain();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_splittype() )
	{
		sdata.SplitType_ = message.splittype();
	}
	if ( message.has_arcx() )
	{
		sdata.ArcX_ = message.arcx();
	}
	if ( message.has_arcy() )
	{
		sdata.ArcY_ = message.arcy();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
	}
	if ( message.has_xformula() )
	{
		sdata.XFormula_ = message.xformula();
	}
	if ( message.has_yformula() )
	{
		sdata.YFormula_ = message.yformula();
	}
	if ( message.has_xdock() )
	{
		sdata.XDock_ = message.xdock();
	}
	if ( message.has_ydock() )
	{
		sdata.YDock_ = message.ydock();
	}
	if ( message.has_zdock() )
	{
		sdata.ZDock_ = message.zdock();
	}
	if ( message.has_xoffsetformula() )
	{
		sdata.XOffsetFormula_ = message.xoffsetformula();
	}
	if ( message.has_yoffsetformula() )
	{
		sdata.YOffsetFormula_ = message.yoffsetformula();
	}
	if ( message.has_zoffsetformula() )
	{
		sdata.ZOffsetFormula_ = message.zoffsetformula();
	}
	if ( message.has_fnfittingpartcode() )
	{
		sdata.FNFittingPartCode_ = message.fnfittingpartcode();
	}
	if ( message.has_fnfittingpartname() )
	{
		sdata.FNFittingPartName_ = message.fnfittingpartname();
	}
	if ( message.has_fnfittingpartmemo() )
	{
		sdata.FNFittingPartMemo_ = message.fnfittingpartmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_FNFittingPartMatInfo	ToMessage( const JK_FNFittingPartMatInfoImp::SData& sdata )
{
	transMsg::JK_FNFittingPartMatInfo message;
	if ( sdata.FNFittingPartID_ )
	{
		message.set_fnfittingpartid(*sdata.FNFittingPartID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	return message;
}

::autoDB::JK_FNFittingPartMatInfoImp::SData	ToData( const transMsg::JK_FNFittingPartMatInfo& message )
{
	JK_FNFittingPartMatInfoImp::SData sdata;
	if ( message.has_fnfittingpartid() )
	{
		sdata.FNFittingPartID_ = message.fnfittingpartid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	return std::move(sdata);
}



transMsg::JK_FNFittingPartSealInfo	ToMessage( const JK_FNFittingPartSealInfoImp::SData& sdata )
{
	transMsg::JK_FNFittingPartSealInfo message;
	if ( sdata.FNFittingPartID_ )
	{
		message.set_fnfittingpartid(*sdata.FNFittingPartID_);
	}
	if ( sdata.SealOrder_ )
	{
		message.set_sealorder(*sdata.SealOrder_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_FNFittingPartSealInfoImp::SData	ToData( const transMsg::JK_FNFittingPartSealInfo& message )
{
	JK_FNFittingPartSealInfoImp::SData sdata;
	if ( message.has_fnfittingpartid() )
	{
		sdata.FNFittingPartID_ = message.fnfittingpartid();
	}
	if ( message.has_sealorder() )
	{
		sdata.SealOrder_ = message.sealorder();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_FittingInfo	ToMessage( const JK_FittingInfoImp::SData& sdata )
{
	transMsg::JK_FittingInfo message;
	if ( sdata.FittingID_ )
	{
		message.set_fittingid(*sdata.FittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.FittingCode_ )
	{
		message.set_fittingcode(*sdata.FittingCode_);
	}
	if ( sdata.FittingName_ )
	{
		message.set_fittingname(*sdata.FittingName_);
	}
	if ( sdata.FittingMemo_ )
	{
		message.set_fittingmemo(*sdata.FittingMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_FittingInfoImp::SData	ToData( const transMsg::JK_FittingInfo& message )
{
	JK_FittingInfoImp::SData sdata;
	if ( message.has_fittingid() )
	{
		sdata.FittingID_ = message.fittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_fittingcode() )
	{
		sdata.FittingCode_ = message.fittingcode();
	}
	if ( message.has_fittingname() )
	{
		sdata.FittingName_ = message.fittingname();
	}
	if ( message.has_fittingmemo() )
	{
		sdata.FittingMemo_ = message.fittingmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_FittingRuleInfo	ToMessage( const JK_FittingRuleInfoImp::SData& sdata )
{
	transMsg::JK_FittingRuleInfo message;
	if ( sdata.FittingRuleID_ )
	{
		message.set_fittingruleid(*sdata.FittingRuleID_);
	}
	if ( sdata.OwnerID_ )
	{
		message.set_ownerid(*sdata.OwnerID_);
	}
	if ( sdata.OwnerGTypeID_ )
	{
		message.set_ownergtypeid(*sdata.OwnerGTypeID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.IsCanDel_ )
	{
		message.set_iscandel(*sdata.IsCanDel_);
	}
	if ( sdata.MinLen_ )
	{
		message.set_minlen(*sdata.MinLen_);
	}
	if ( sdata.MaxLen_ )
	{
		message.set_maxlen(*sdata.MaxLen_);
	}
	if ( sdata.FittingID_ )
	{
		message.set_fittingid(*sdata.FittingID_);
	}
	if ( sdata.FittingType_ )
	{
		message.set_fittingtype(*sdata.FittingType_);
	}
	if ( sdata.UseCount_ )
	{
		message.set_usecount(*sdata.UseCount_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_FittingRuleInfoImp::SData	ToData( const transMsg::JK_FittingRuleInfo& message )
{
	JK_FittingRuleInfoImp::SData sdata;
	if ( message.has_fittingruleid() )
	{
		sdata.FittingRuleID_ = message.fittingruleid();
	}
	if ( message.has_ownerid() )
	{
		sdata.OwnerID_ = message.ownerid();
	}
	if ( message.has_ownergtypeid() )
	{
		sdata.OwnerGTypeID_ = message.ownergtypeid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_iscandel() )
	{
		sdata.IsCanDel_ = message.iscandel();
	}
	if ( message.has_minlen() )
	{
		sdata.MinLen_ = message.minlen();
	}
	if ( message.has_maxlen() )
	{
		sdata.MaxLen_ = message.maxlen();
	}
	if ( message.has_fittingid() )
	{
		sdata.FittingID_ = message.fittingid();
	}
	if ( message.has_fittingtype() )
	{
		sdata.FittingType_ = message.fittingtype();
	}
	if ( message.has_usecount() )
	{
		sdata.UseCount_ = message.usecount();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_FormulaConstInfo	ToMessage( const JK_FormulaConstInfoImp::SData& sdata )
{
	transMsg::JK_FormulaConstInfo message;
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.ConstCode_ )
	{
		message.set_constcode(*sdata.ConstCode_);
	}
	if ( sdata.ConstText_ )
	{
		message.set_consttext(*sdata.ConstText_);
	}
	if ( sdata.ConstValue_ )
	{
		message.set_constvalue(*sdata.ConstValue_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_FormulaConstInfoImp::SData	ToData( const transMsg::JK_FormulaConstInfo& message )
{
	JK_FormulaConstInfoImp::SData sdata;
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_constcode() )
	{
		sdata.ConstCode_ = message.constcode();
	}
	if ( message.has_consttext() )
	{
		sdata.ConstText_ = message.consttext();
	}
	if ( message.has_constvalue() )
	{
		sdata.ConstValue_ = message.constvalue();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_GroupInfo	ToMessage( const JK_GroupInfoImp::SData& sdata )
{
	transMsg::JK_GroupInfo message;
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.ParentID_ )
	{
		message.set_parentid(*sdata.ParentID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.GroupCode_ )
	{
		message.set_groupcode(*sdata.GroupCode_);
	}
	if ( sdata.GroupName_ )
	{
		message.set_groupname(*sdata.GroupName_);
	}
	if ( sdata.GroupMemo_ )
	{
		message.set_groupmemo(*sdata.GroupMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_GroupInfoImp::SData	ToData( const transMsg::JK_GroupInfo& message )
{
	JK_GroupInfoImp::SData sdata;
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_parentid() )
	{
		sdata.ParentID_ = message.parentid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_groupcode() )
	{
		sdata.GroupCode_ = message.groupcode();
	}
	if ( message.has_groupname() )
	{
		sdata.GroupName_ = message.groupname();
	}
	if ( message.has_groupmemo() )
	{
		sdata.GroupMemo_ = message.groupmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_HWFittingInfo	ToMessage( const JK_HWFittingInfoImp::SData& sdata )
{
	transMsg::JK_HWFittingInfo message;
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.SettingCountRuleID_ )
	{
		message.set_settingcountruleid(*sdata.SettingCountRuleID_);
	}
	if ( sdata.IsMatchXLen_ )
	{
		message.set_ismatchxlen(*sdata.IsMatchXLen_);
	}
	if ( sdata.IsMatchYLen_ )
	{
		message.set_ismatchylen(*sdata.IsMatchYLen_);
	}
	if ( sdata.IsMatchZLen_ )
	{
		message.set_ismatchzlen(*sdata.IsMatchZLen_);
	}
	if ( sdata.EffectLen_ )
	{
		message.set_effectlen(*sdata.EffectLen_);
	}
	if ( sdata.XAdjustLen_ )
	{
		message.set_xadjustlen(*sdata.XAdjustLen_);
	}
	if ( sdata.IsEmbed_ )
	{
		message.set_isembed(*sdata.IsEmbed_);
	}
	if ( sdata.InstallDirection_ )
	{
		message.set_installdirection(*sdata.InstallDirection_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.HWFittingCode_ )
	{
		message.set_hwfittingcode(*sdata.HWFittingCode_);
	}
	if ( sdata.HWFittingName_ )
	{
		message.set_hwfittingname(*sdata.HWFittingName_);
	}
	if ( sdata.HWFittingMemo_ )
	{
		message.set_hwfittingmemo(*sdata.HWFittingMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_HWFittingInfoImp::SData	ToData( const transMsg::JK_HWFittingInfo& message )
{
	JK_HWFittingInfoImp::SData sdata;
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_settingcountruleid() )
	{
		sdata.SettingCountRuleID_ = message.settingcountruleid();
	}
	if ( message.has_ismatchxlen() )
	{
		sdata.IsMatchXLen_ = message.ismatchxlen();
	}
	if ( message.has_ismatchylen() )
	{
		sdata.IsMatchYLen_ = message.ismatchylen();
	}
	if ( message.has_ismatchzlen() )
	{
		sdata.IsMatchZLen_ = message.ismatchzlen();
	}
	if ( message.has_effectlen() )
	{
		sdata.EffectLen_ = message.effectlen();
	}
	if ( message.has_xadjustlen() )
	{
		sdata.XAdjustLen_ = message.xadjustlen();
	}
	if ( message.has_isembed() )
	{
		sdata.IsEmbed_ = message.isembed();
	}
	if ( message.has_installdirection() )
	{
		sdata.InstallDirection_ = message.installdirection();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_hwfittingcode() )
	{
		sdata.HWFittingCode_ = message.hwfittingcode();
	}
	if ( message.has_hwfittingname() )
	{
		sdata.HWFittingName_ = message.hwfittingname();
	}
	if ( message.has_hwfittingmemo() )
	{
		sdata.HWFittingMemo_ = message.hwfittingmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_HoleRuleInfo	ToMessage( const JK_HoleRuleInfoImp::SData& sdata )
{
	transMsg::JK_HoleRuleInfo message;
	if ( sdata.HoleID_ )
	{
		message.set_holeid(*sdata.HoleID_);
	}
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.HoleTypeID_ )
	{
		message.set_holetypeid(*sdata.HoleTypeID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.OverHeight_ )
	{
		message.set_overheight(*sdata.OverHeight_);
	}
	if ( sdata.HolePicID_ )
	{
		message.set_holepicid(*sdata.HolePicID_);
	}
	if ( sdata.MinXDistance_ )
	{
		message.set_minxdistance(*sdata.MinXDistance_);
	}
	if ( sdata.MinZDistance_ )
	{
		message.set_minzdistance(*sdata.MinZDistance_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_HoleRuleInfoImp::SData	ToData( const transMsg::JK_HoleRuleInfo& message )
{
	JK_HoleRuleInfoImp::SData sdata;
	if ( message.has_holeid() )
	{
		sdata.HoleID_ = message.holeid();
	}
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_holetypeid() )
	{
		sdata.HoleTypeID_ = message.holetypeid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_overheight() )
	{
		sdata.OverHeight_ = message.overheight();
	}
	if ( message.has_holepicid() )
	{
		sdata.HolePicID_ = message.holepicid();
	}
	if ( message.has_minxdistance() )
	{
		sdata.MinXDistance_ = message.minxdistance();
	}
	if ( message.has_minzdistance() )
	{
		sdata.MinZDistance_ = message.minzdistance();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_MaterialInfo	ToMessage( const JK_MaterialInfoImp::SData& sdata )
{
	transMsg::JK_MaterialInfo message;
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.IsMatchXLen_ )
	{
		message.set_ismatchxlen(*sdata.IsMatchXLen_);
	}
	if ( sdata.IsMatchYLen_ )
	{
		message.set_ismatchylen(*sdata.IsMatchYLen_);
	}
	if ( sdata.IsMatchZLen_ )
	{
		message.set_ismatchzlen(*sdata.IsMatchZLen_);
	}
	if ( sdata.SkinID_ )
	{
		message.set_skinid(*sdata.SkinID_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.TransCode_ )
	{
		message.set_transcode(*sdata.TransCode_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.MaterialCode_ )
	{
		message.set_materialcode(*sdata.MaterialCode_);
	}
	if ( sdata.MaterialName_ )
	{
		message.set_materialname(*sdata.MaterialName_);
	}
	if ( sdata.MaterialMemo_ )
	{
		message.set_materialmemo(*sdata.MaterialMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_MaterialInfoImp::SData	ToData( const transMsg::JK_MaterialInfo& message )
{
	JK_MaterialInfoImp::SData sdata;
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_ismatchxlen() )
	{
		sdata.IsMatchXLen_ = message.ismatchxlen();
	}
	if ( message.has_ismatchylen() )
	{
		sdata.IsMatchYLen_ = message.ismatchylen();
	}
	if ( message.has_ismatchzlen() )
	{
		sdata.IsMatchZLen_ = message.ismatchzlen();
	}
	if ( message.has_skinid() )
	{
		sdata.SkinID_ = message.skinid();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_transcode() )
	{
		sdata.TransCode_ = message.transcode();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_materialcode() )
	{
		sdata.MaterialCode_ = message.materialcode();
	}
	if ( message.has_materialname() )
	{
		sdata.MaterialName_ = message.materialname();
	}
	if ( message.has_materialmemo() )
	{
		sdata.MaterialMemo_ = message.materialmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_MaterialSealRuleMapInfo	ToMessage( const JK_MaterialSealRuleMapInfoImp::SData& sdata )
{
	transMsg::JK_MaterialSealRuleMapInfo message;
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
	}
	if ( sdata.IsCabDef_ )
	{
		message.set_iscabdef(*sdata.IsCabDef_);
	}
	if ( sdata.IsDoorDef_ )
	{
		message.set_isdoordef(*sdata.IsDoorDef_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_MaterialSealRuleMapInfoImp::SData	ToData( const transMsg::JK_MaterialSealRuleMapInfo& message )
{
	JK_MaterialSealRuleMapInfoImp::SData sdata;
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
	}
	if ( message.has_iscabdef() )
	{
		sdata.IsCabDef_ = message.iscabdef();
	}
	if ( message.has_isdoordef() )
	{
		sdata.IsDoorDef_ = message.isdoordef();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_ModelInfo	ToMessage( const JK_ModelInfoImp::SData& sdata )
{
	transMsg::JK_ModelInfo message;
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ArcX_ )
	{
		message.set_arcx(*sdata.ArcX_);
	}
	if ( sdata.ArcY_ )
	{
		message.set_arcy(*sdata.ArcY_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ModelCode_ )
	{
		message.set_modelcode(*sdata.ModelCode_);
	}
	if ( sdata.ModelName_ )
	{
		message.set_modelname(*sdata.ModelName_);
	}
	if ( sdata.RelativePath_ )
	{
		message.set_relativepath(*sdata.RelativePath_);
	}
	if ( sdata.ModelMemo_ )
	{
		message.set_modelmemo(*sdata.ModelMemo_);
	}
	if ( sdata.HASHCode_ )
	{
		message.set_hashcode(*sdata.HASHCode_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FrontViewID_ )
	{
		message.set_frontviewid(*sdata.FrontViewID_);
	}
	if ( sdata.RightViewID_ )
	{
		message.set_rightviewid(*sdata.RightViewID_);
	}
	if ( sdata.TopViewID_ )
	{
		message.set_topviewid(*sdata.TopViewID_);
	}
	if ( sdata.PhotoID_ )
	{
		message.set_photoid(*sdata.PhotoID_);
	}
	return message;
}

::autoDB::JK_ModelInfoImp::SData	ToData( const transMsg::JK_ModelInfo& message )
{
	JK_ModelInfoImp::SData sdata;
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_arcx() )
	{
		sdata.ArcX_ = message.arcx();
	}
	if ( message.has_arcy() )
	{
		sdata.ArcY_ = message.arcy();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_modelcode() )
	{
		sdata.ModelCode_ = message.modelcode();
	}
	if ( message.has_modelname() )
	{
		sdata.ModelName_ = message.modelname();
	}
	if ( message.has_relativepath() )
	{
		sdata.RelativePath_ = message.relativepath();
	}
	if ( message.has_modelmemo() )
	{
		sdata.ModelMemo_ = message.modelmemo();
	}
	if ( message.has_hashcode() )
	{
		sdata.HASHCode_ = message.hashcode();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_frontviewid() )
	{
		sdata.FrontViewID_ = message.frontviewid();
	}
	if ( message.has_rightviewid() )
	{
		sdata.RightViewID_ = message.rightviewid();
	}
	if ( message.has_topviewid() )
	{
		sdata.TopViewID_ = message.topviewid();
	}
	if ( message.has_photoid() )
	{
		sdata.PhotoID_ = message.photoid();
	}
	return std::move(sdata);
}



transMsg::JK_NumberRuleInfo	ToMessage( const JK_NumberRuleInfoImp::SData& sdata )
{
	transMsg::JK_NumberRuleInfo message;
	if ( sdata.NumberRuleID_ )
	{
		message.set_numberruleid(*sdata.NumberRuleID_);
	}
	if ( sdata.FittingID_ )
	{
		message.set_fittingid(*sdata.FittingID_);
	}
	if ( sdata.MinLen_ )
	{
		message.set_minlen(*sdata.MinLen_);
	}
	if ( sdata.MaxLen_ )
	{
		message.set_maxlen(*sdata.MaxLen_);
	}
	if ( sdata.UseCount_ )
	{
		message.set_usecount(*sdata.UseCount_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_NumberRuleInfoImp::SData	ToData( const transMsg::JK_NumberRuleInfo& message )
{
	JK_NumberRuleInfoImp::SData sdata;
	if ( message.has_numberruleid() )
	{
		sdata.NumberRuleID_ = message.numberruleid();
	}
	if ( message.has_fittingid() )
	{
		sdata.FittingID_ = message.fittingid();
	}
	if ( message.has_minlen() )
	{
		sdata.MinLen_ = message.minlen();
	}
	if ( message.has_maxlen() )
	{
		sdata.MaxLen_ = message.maxlen();
	}
	if ( message.has_usecount() )
	{
		sdata.UseCount_ = message.usecount();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_PackageInfo	ToMessage( const JK_PackageInfoImp::SData& sdata )
{
	transMsg::JK_PackageInfo message;
	if ( sdata.FittingPackID_ )
	{
		message.set_fittingpackid(*sdata.FittingPackID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.IsSeparate_ )
	{
		message.set_isseparate(*sdata.IsSeparate_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.FittingPackCode_ )
	{
		message.set_fittingpackcode(*sdata.FittingPackCode_);
	}
	if ( sdata.FittingPackName_ )
	{
		message.set_fittingpackname(*sdata.FittingPackName_);
	}
	if ( sdata.FittingPackMemo_ )
	{
		message.set_fittingpackmemo(*sdata.FittingPackMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_PackageInfoImp::SData	ToData( const transMsg::JK_PackageInfo& message )
{
	JK_PackageInfoImp::SData sdata;
	if ( message.has_fittingpackid() )
	{
		sdata.FittingPackID_ = message.fittingpackid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_isseparate() )
	{
		sdata.IsSeparate_ = message.isseparate();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_fittingpackcode() )
	{
		sdata.FittingPackCode_ = message.fittingpackcode();
	}
	if ( message.has_fittingpackname() )
	{
		sdata.FittingPackName_ = message.fittingpackname();
	}
	if ( message.has_fittingpackmemo() )
	{
		sdata.FittingPackMemo_ = message.fittingpackmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_PackageMapInfo	ToMessage( const JK_PackageMapInfoImp::SData& sdata )
{
	transMsg::JK_PackageMapInfo message;
	if ( sdata.PackageID_ )
	{
		message.set_packageid(*sdata.PackageID_);
	}
	if ( sdata.FittingID_ )
	{
		message.set_fittingid(*sdata.FittingID_);
	}
	if ( sdata.FittingCount_ )
	{
		message.set_fittingcount(*sdata.FittingCount_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	return message;
}

::autoDB::JK_PackageMapInfoImp::SData	ToData( const transMsg::JK_PackageMapInfo& message )
{
	JK_PackageMapInfoImp::SData sdata;
	if ( message.has_packageid() )
	{
		sdata.PackageID_ = message.packageid();
	}
	if ( message.has_fittingid() )
	{
		sdata.FittingID_ = message.fittingid();
	}
	if ( message.has_fittingcount() )
	{
		sdata.FittingCount_ = message.fittingcount();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	return std::move(sdata);
}



transMsg::JK_ProductInfo	ToMessage( const JK_ProductInfoImp::SData& sdata )
{
	transMsg::JK_ProductInfo message;
	if ( sdata.ProductID_ )
	{
		message.set_productid(*sdata.ProductID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.IsSplit_ )
	{
		message.set_issplit(*sdata.IsSplit_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ProductCode_ )
	{
		message.set_productcode(*sdata.ProductCode_);
	}
	if ( sdata.ProductName_ )
	{
		message.set_productname(*sdata.ProductName_);
	}
	if ( sdata.ProductMemo_ )
	{
		message.set_productmemo(*sdata.ProductMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_ProductInfoImp::SData	ToData( const transMsg::JK_ProductInfo& message )
{
	JK_ProductInfoImp::SData sdata;
	if ( message.has_productid() )
	{
		sdata.ProductID_ = message.productid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_issplit() )
	{
		sdata.IsSplit_ = message.issplit();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_productcode() )
	{
		sdata.ProductCode_ = message.productcode();
	}
	if ( message.has_productname() )
	{
		sdata.ProductName_ = message.productname();
	}
	if ( message.has_productmemo() )
	{
		sdata.ProductMemo_ = message.productmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_ProductSeriesInfo	ToMessage( const JK_ProductSeriesInfoImp::SData& sdata )
{
	transMsg::JK_ProductSeriesInfo message;
	if ( sdata.ProductSeriesID_ )
	{
		message.set_productseriesid(*sdata.ProductSeriesID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ProductSeriesCode_ )
	{
		message.set_productseriescode(*sdata.ProductSeriesCode_);
	}
	if ( sdata.ProductSeriesName_ )
	{
		message.set_productseriesname(*sdata.ProductSeriesName_);
	}
	if ( sdata.ProductSeriesMemo_ )
	{
		message.set_productseriesmemo(*sdata.ProductSeriesMemo_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_ProductSeriesInfoImp::SData	ToData( const transMsg::JK_ProductSeriesInfo& message )
{
	JK_ProductSeriesInfoImp::SData sdata;
	if ( message.has_productseriesid() )
	{
		sdata.ProductSeriesID_ = message.productseriesid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_productseriescode() )
	{
		sdata.ProductSeriesCode_ = message.productseriescode();
	}
	if ( message.has_productseriesname() )
	{
		sdata.ProductSeriesName_ = message.productseriesname();
	}
	if ( message.has_productseriesmemo() )
	{
		sdata.ProductSeriesMemo_ = message.productseriesmemo();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_ProductSeriesValidInfo	ToMessage( const JK_ProductSeriesValidInfoImp::SData& sdata )
{
	transMsg::JK_ProductSeriesValidInfo message;
	if ( sdata.ProductSeriesID_ )
	{
		message.set_productseriesid(*sdata.ProductSeriesID_);
	}
	if ( sdata.ProductSeriesItemID_ )
	{
		message.set_productseriesitemid(*sdata.ProductSeriesItemID_);
	}
	if ( sdata.PSType_ )
	{
		message.set_pstype(*sdata.PSType_);
	}
	if ( sdata.ParentID_ )
	{
		message.set_parentid(*sdata.ParentID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.IsGroup_ )
	{
		message.set_isgroup(*sdata.IsGroup_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.DefaultItemID_ )
	{
		message.set_defaultitemid(*sdata.DefaultItemID_);
	}
	return message;
}

::autoDB::JK_ProductSeriesValidInfoImp::SData	ToData( const transMsg::JK_ProductSeriesValidInfo& message )
{
	JK_ProductSeriesValidInfoImp::SData sdata;
	if ( message.has_productseriesid() )
	{
		sdata.ProductSeriesID_ = message.productseriesid();
	}
	if ( message.has_productseriesitemid() )
	{
		sdata.ProductSeriesItemID_ = message.productseriesitemid();
	}
	if ( message.has_pstype() )
	{
		sdata.PSType_ = message.pstype();
	}
	if ( message.has_parentid() )
	{
		sdata.ParentID_ = message.parentid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_isgroup() )
	{
		sdata.IsGroup_ = message.isgroup();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_defaultitemid() )
	{
		sdata.DefaultItemID_ = message.defaultitemid();
	}
	return std::move(sdata);
}



transMsg::JK_ResourceInfo	ToMessage( const JK_ResourceInfoImp::SData& sdata )
{
	transMsg::JK_ResourceInfo message;
	if ( sdata.ResourceID_ )
	{
		message.set_resourceid(*sdata.ResourceID_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ResourceCode_ )
	{
		message.set_resourcecode(*sdata.ResourceCode_);
	}
	if ( sdata.ResourceName_ )
	{
		message.set_resourcename(*sdata.ResourceName_);
	}
	if ( sdata.RelativePath_ )
	{
		message.set_relativepath(*sdata.RelativePath_);
	}
	if ( sdata.ResourceMemo_ )
	{
		message.set_resourcememo(*sdata.ResourceMemo_);
	}
	if ( sdata.HASHCode_ )
	{
		message.set_hashcode(*sdata.HASHCode_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	return message;
}

::autoDB::JK_ResourceInfoImp::SData	ToData( const transMsg::JK_ResourceInfo& message )
{
	JK_ResourceInfoImp::SData sdata;
	if ( message.has_resourceid() )
	{
		sdata.ResourceID_ = message.resourceid();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_resourcecode() )
	{
		sdata.ResourceCode_ = message.resourcecode();
	}
	if ( message.has_resourcename() )
	{
		sdata.ResourceName_ = message.resourcename();
	}
	if ( message.has_relativepath() )
	{
		sdata.RelativePath_ = message.relativepath();
	}
	if ( message.has_resourcememo() )
	{
		sdata.ResourceMemo_ = message.resourcememo();
	}
	if ( message.has_hashcode() )
	{
		sdata.HASHCode_ = message.hashcode();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	return std::move(sdata);
}



transMsg::JK_SealRuleInfo	ToMessage( const JK_SealRuleInfoImp::SData& sdata )
{
	transMsg::JK_SealRuleInfo message;
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.VisibleSealID_ )
	{
		message.set_visiblesealid(*sdata.VisibleSealID_);
	}
	if ( sdata.InvisibleSealID_ )
	{
		message.set_invisiblesealid(*sdata.InvisibleSealID_);
	}
	if ( sdata.VisPreMill_ )
	{
		message.set_vispremill(*sdata.VisPreMill_);
	}
	if ( sdata.InvisPreMill_ )
	{
		message.set_invispremill(*sdata.InvisPreMill_);
	}
	if ( sdata.STypeID_ )
	{
		message.set_stypeid(*sdata.STypeID_);
	}
	if ( sdata.SealRuleName_ )
	{
		message.set_sealrulename(*sdata.SealRuleName_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_SealRuleInfoImp::SData	ToData( const transMsg::JK_SealRuleInfo& message )
{
	JK_SealRuleInfoImp::SData sdata;
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_visiblesealid() )
	{
		sdata.VisibleSealID_ = message.visiblesealid();
	}
	if ( message.has_invisiblesealid() )
	{
		sdata.InvisibleSealID_ = message.invisiblesealid();
	}
	if ( message.has_vispremill() )
	{
		sdata.VisPreMill_ = message.vispremill();
	}
	if ( message.has_invispremill() )
	{
		sdata.InvisPreMill_ = message.invispremill();
	}
	if ( message.has_stypeid() )
	{
		sdata.STypeID_ = message.stypeid();
	}
	if ( message.has_sealrulename() )
	{
		sdata.SealRuleName_ = message.sealrulename();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_SysConfigInfo	ToMessage( const JK_SysConfigInfoImp::SData& sdata )
{
	transMsg::JK_SysConfigInfo message;
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.ConfigID_ )
	{
		message.set_configid(*sdata.ConfigID_);
	}
	if ( sdata.TableFrontLen_ )
	{
		message.set_tablefrontlen(*sdata.TableFrontLen_);
	}
	if ( sdata.TableSideLen_ )
	{
		message.set_tablesidelen(*sdata.TableSideLen_);
	}
	if ( sdata.BaseCabDefaultYPos_ )
	{
		message.set_basecabdefaultypos(*sdata.BaseCabDefaultYPos_);
	}
	if ( sdata.BaseCabSideLen_ )
	{
		message.set_basecabsidelen(*sdata.BaseCabSideLen_);
	}
	if ( sdata.WallCabDefaultYPos_ )
	{
		message.set_wallcabdefaultypos(*sdata.WallCabDefaultYPos_);
	}
	if ( sdata.WallCabSideLen_ )
	{
		message.set_wallcabsidelen(*sdata.WallCabSideLen_);
	}
	if ( sdata.ToekickFrontLen_ )
	{
		message.set_toekickfrontlen(*sdata.ToekickFrontLen_);
	}
	if ( sdata.DefaultBarHeight_ )
	{
		message.set_defaultbarheight(*sdata.DefaultBarHeight_);
	}
	if ( sdata.DefaultSealExtraLen_ )
	{
		message.set_defaultsealextralen(*sdata.DefaultSealExtraLen_);
	}
	if ( sdata.DefaultSealPreMillLen_ )
	{
		message.set_defaultsealpremilllen(*sdata.DefaultSealPreMillLen_);
	}
	if ( sdata.ShelfDefaultYPos_ )
	{
		message.set_shelfdefaultypos(*sdata.ShelfDefaultYPos_);
	}
	if ( sdata.BGPanelDefaultYPos_ )
	{
		message.set_bgpaneldefaultypos(*sdata.BGPanelDefaultYPos_);
	}
	if ( sdata.TableToCabDefaultYLen_ )
	{
		message.set_tabletocabdefaultylen(*sdata.TableToCabDefaultYLen_);
	}
	if ( sdata.DefaultBaseCabinetXLen_ )
	{
		message.set_defaultbasecabinetxlen(*sdata.DefaultBaseCabinetXLen_);
	}
	if ( sdata.DefaultBaseCabinetYLen_ )
	{
		message.set_defaultbasecabinetylen(*sdata.DefaultBaseCabinetYLen_);
	}
	if ( sdata.DefaultBaseCabinetZLen_ )
	{
		message.set_defaultbasecabinetzlen(*sdata.DefaultBaseCabinetZLen_);
	}
	if ( sdata.DefaultWallCabinetXLen_ )
	{
		message.set_defaultwallcabinetxlen(*sdata.DefaultWallCabinetXLen_);
	}
	if ( sdata.DefaultWallCabinetYLen_ )
	{
		message.set_defaultwallcabinetylen(*sdata.DefaultWallCabinetYLen_);
	}
	if ( sdata.DefaultWallCabinetZLen_ )
	{
		message.set_defaultwallcabinetzlen(*sdata.DefaultWallCabinetZLen_);
	}
	if ( sdata.DefaultLCabinetXLen_ )
	{
		message.set_defaultlcabinetxlen(*sdata.DefaultLCabinetXLen_);
	}
	if ( sdata.DefaultLCabinetZLen_ )
	{
		message.set_defaultlcabinetzlen(*sdata.DefaultLCabinetZLen_);
	}
	if ( sdata.DefaultCabinetBoardThick_ )
	{
		message.set_defaultcabinetboardthick(*sdata.DefaultCabinetBoardThick_);
	}
	if ( sdata.DefaultDoorBoardThick_ )
	{
		message.set_defaultdoorboardthick(*sdata.DefaultDoorBoardThick_);
	}
	if ( sdata.DefaultThinBoardThick_ )
	{
		message.set_defaultthinboardthick(*sdata.DefaultThinBoardThick_);
	}
	if ( sdata.DefaultDecorLineHeight_ )
	{
		message.set_defaultdecorlineheight(*sdata.DefaultDecorLineHeight_);
	}
	if ( sdata.DefaultDrawerXLen_ )
	{
		message.set_defaultdrawerxlen(*sdata.DefaultDrawerXLen_);
	}
	if ( sdata.DefaultDrawerYLen_ )
	{
		message.set_defaultdrawerylen(*sdata.DefaultDrawerYLen_);
	}
	if ( sdata.DefaultDrawerZLen_ )
	{
		message.set_defaultdrawerzlen(*sdata.DefaultDrawerZLen_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_SysConfigInfoImp::SData	ToData( const transMsg::JK_SysConfigInfo& message )
{
	JK_SysConfigInfoImp::SData sdata;
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_configid() )
	{
		sdata.ConfigID_ = message.configid();
	}
	if ( message.has_tablefrontlen() )
	{
		sdata.TableFrontLen_ = message.tablefrontlen();
	}
	if ( message.has_tablesidelen() )
	{
		sdata.TableSideLen_ = message.tablesidelen();
	}
	if ( message.has_basecabdefaultypos() )
	{
		sdata.BaseCabDefaultYPos_ = message.basecabdefaultypos();
	}
	if ( message.has_basecabsidelen() )
	{
		sdata.BaseCabSideLen_ = message.basecabsidelen();
	}
	if ( message.has_wallcabdefaultypos() )
	{
		sdata.WallCabDefaultYPos_ = message.wallcabdefaultypos();
	}
	if ( message.has_wallcabsidelen() )
	{
		sdata.WallCabSideLen_ = message.wallcabsidelen();
	}
	if ( message.has_toekickfrontlen() )
	{
		sdata.ToekickFrontLen_ = message.toekickfrontlen();
	}
	if ( message.has_defaultbarheight() )
	{
		sdata.DefaultBarHeight_ = message.defaultbarheight();
	}
	if ( message.has_defaultsealextralen() )
	{
		sdata.DefaultSealExtraLen_ = message.defaultsealextralen();
	}
	if ( message.has_defaultsealpremilllen() )
	{
		sdata.DefaultSealPreMillLen_ = message.defaultsealpremilllen();
	}
	if ( message.has_shelfdefaultypos() )
	{
		sdata.ShelfDefaultYPos_ = message.shelfdefaultypos();
	}
	if ( message.has_bgpaneldefaultypos() )
	{
		sdata.BGPanelDefaultYPos_ = message.bgpaneldefaultypos();
	}
	if ( message.has_tabletocabdefaultylen() )
	{
		sdata.TableToCabDefaultYLen_ = message.tabletocabdefaultylen();
	}
	if ( message.has_defaultbasecabinetxlen() )
	{
		sdata.DefaultBaseCabinetXLen_ = message.defaultbasecabinetxlen();
	}
	if ( message.has_defaultbasecabinetylen() )
	{
		sdata.DefaultBaseCabinetYLen_ = message.defaultbasecabinetylen();
	}
	if ( message.has_defaultbasecabinetzlen() )
	{
		sdata.DefaultBaseCabinetZLen_ = message.defaultbasecabinetzlen();
	}
	if ( message.has_defaultwallcabinetxlen() )
	{
		sdata.DefaultWallCabinetXLen_ = message.defaultwallcabinetxlen();
	}
	if ( message.has_defaultwallcabinetylen() )
	{
		sdata.DefaultWallCabinetYLen_ = message.defaultwallcabinetylen();
	}
	if ( message.has_defaultwallcabinetzlen() )
	{
		sdata.DefaultWallCabinetZLen_ = message.defaultwallcabinetzlen();
	}
	if ( message.has_defaultlcabinetxlen() )
	{
		sdata.DefaultLCabinetXLen_ = message.defaultlcabinetxlen();
	}
	if ( message.has_defaultlcabinetzlen() )
	{
		sdata.DefaultLCabinetZLen_ = message.defaultlcabinetzlen();
	}
	if ( message.has_defaultcabinetboardthick() )
	{
		sdata.DefaultCabinetBoardThick_ = message.defaultcabinetboardthick();
	}
	if ( message.has_defaultdoorboardthick() )
	{
		sdata.DefaultDoorBoardThick_ = message.defaultdoorboardthick();
	}
	if ( message.has_defaultthinboardthick() )
	{
		sdata.DefaultThinBoardThick_ = message.defaultthinboardthick();
	}
	if ( message.has_defaultdecorlineheight() )
	{
		sdata.DefaultDecorLineHeight_ = message.defaultdecorlineheight();
	}
	if ( message.has_defaultdrawerxlen() )
	{
		sdata.DefaultDrawerXLen_ = message.defaultdrawerxlen();
	}
	if ( message.has_defaultdrawerylen() )
	{
		sdata.DefaultDrawerYLen_ = message.defaultdrawerylen();
	}
	if ( message.has_defaultdrawerzlen() )
	{
		sdata.DefaultDrawerZLen_ = message.defaultdrawerzlen();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_SysRuleConfigInfo	ToMessage( const JK_SysRuleConfigInfoImp::SData& sdata )
{
	transMsg::JK_SysRuleConfigInfo message;
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.RuleConfigID_ )
	{
		message.set_ruleconfigid(*sdata.RuleConfigID_);
	}
	if ( sdata.RuleTypeID_ )
	{
		message.set_ruletypeid(*sdata.RuleTypeID_);
	}
	if ( sdata.CabType_ )
	{
		message.set_cabtype(*sdata.CabType_);
	}
	if ( sdata.MinXLen_ )
	{
		message.set_minxlen(*sdata.MinXLen_);
	}
	if ( sdata.MinYLen_ )
	{
		message.set_minylen(*sdata.MinYLen_);
	}
	if ( sdata.MaxXLen_ )
	{
		message.set_maxxlen(*sdata.MaxXLen_);
	}
	if ( sdata.MaxYLen_ )
	{
		message.set_maxylen(*sdata.MaxYLen_);
	}
	if ( sdata.UseCount_ )
	{
		message.set_usecount(*sdata.UseCount_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_SysRuleConfigInfoImp::SData	ToData( const transMsg::JK_SysRuleConfigInfo& message )
{
	JK_SysRuleConfigInfoImp::SData sdata;
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_ruleconfigid() )
	{
		sdata.RuleConfigID_ = message.ruleconfigid();
	}
	if ( message.has_ruletypeid() )
	{
		sdata.RuleTypeID_ = message.ruletypeid();
	}
	if ( message.has_cabtype() )
	{
		sdata.CabType_ = message.cabtype();
	}
	if ( message.has_minxlen() )
	{
		sdata.MinXLen_ = message.minxlen();
	}
	if ( message.has_minylen() )
	{
		sdata.MinYLen_ = message.minylen();
	}
	if ( message.has_maxxlen() )
	{
		sdata.MaxXLen_ = message.maxxlen();
	}
	if ( message.has_maxylen() )
	{
		sdata.MaxYLen_ = message.maxylen();
	}
	if ( message.has_usecount() )
	{
		sdata.UseCount_ = message.usecount();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_SysRuleTypeInfo	ToMessage( const JK_SysRuleTypeInfoImp::SData& sdata )
{
	transMsg::JK_SysRuleTypeInfo message;
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.RuleTypeID_ )
	{
		message.set_ruletypeid(*sdata.RuleTypeID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.RuleTypeName_ )
	{
		message.set_ruletypename(*sdata.RuleTypeName_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.RType_ )
	{
		message.set_rtype(*sdata.RType_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_SysRuleTypeInfoImp::SData	ToData( const transMsg::JK_SysRuleTypeInfo& message )
{
	JK_SysRuleTypeInfoImp::SData sdata;
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_ruletypeid() )
	{
		sdata.RuleTypeID_ = message.ruletypeid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_ruletypename() )
	{
		sdata.RuleTypeName_ = message.ruletypename();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_rtype() )
	{
		sdata.RType_ = message.rtype();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



transMsg::JK_TableTopSideInfo	ToMessage( const JK_TableTopSideInfoImp::SData& sdata )
{
	transMsg::JK_TableTopSideInfo message;
	if ( sdata.TableTopSideID_ )
	{
		message.set_tabletopsideid(*sdata.TableTopSideID_);
	}
	if ( sdata.TableTopID_ )
	{
		message.set_tabletopid(*sdata.TableTopID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.ShowID_ )
	{
		message.set_showid(*sdata.ShowID_);
	}
	if ( sdata.SideWidth_ )
	{
		message.set_sidewidth(*sdata.SideWidth_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.IsDefault_ )
	{
		message.set_isdefault(*sdata.IsDefault_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.UpdaterID_ )
	{
		message.set_updaterid(*sdata.UpdaterID_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::JK_TableTopSideInfoImp::SData	ToData( const transMsg::JK_TableTopSideInfo& message )
{
	JK_TableTopSideInfoImp::SData sdata;
	if ( message.has_tabletopsideid() )
	{
		sdata.TableTopSideID_ = message.tabletopsideid();
	}
	if ( message.has_tabletopid() )
	{
		sdata.TableTopID_ = message.tabletopid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_showid() )
	{
		sdata.ShowID_ = message.showid();
	}
	if ( message.has_sidewidth() )
	{
		sdata.SideWidth_ = message.sidewidth();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_isdefault() )
	{
		sdata.IsDefault_ = message.isdefault();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_updaterid() )
	{
		sdata.UpdaterID_ = message.updaterid();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	return std::move(sdata);
}



void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabBoardMatInfo& toAdd)
{
	package.add_jk_cabboardmatinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabBoardMatSkinInfo& toAdd)
{
	package.add_jk_cabboardmatskininfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignBoardSealEdgeInfo& toAdd)
{
	package.add_jk_cabdesignboardsealedgeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignBoardSealInfo& toAdd)
{
	package.add_jk_cabdesignboardsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignDoorRegionHandleInfo& toAdd)
{
	package.add_jk_cabdesigndoorregionhandleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignDoorRegionInfo& toAdd)
{
	package.add_jk_cabdesigndoorregioninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignDoorSystemInfo& toAdd)
{
	package.add_jk_cabdesigndoorsysteminfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignFNFittingInfo& toAdd)
{
	package.add_jk_cabdesignfnfittinginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignFNFittingMapInfo& toAdd)
{
	package.add_jk_cabdesignfnfittingmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignFootInfo& toAdd)
{
	package.add_jk_cabdesignfootinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignInfo& toAdd)
{
	package.add_jk_cabdesigninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabDesignMatInfo& toAdd)
{
	package.add_jk_cabdesignmatinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabMatPlanInfo& toAdd)
{
	package.add_jk_cabmatplaninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructBoardGapInfo& toAdd)
{
	package.add_jk_cabstructboardgapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructBoardInfo& toAdd)
{
	package.add_jk_cabstructboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructBoardSealInfo& toAdd)
{
	package.add_jk_cabstructboardsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructGapInfo& toAdd)
{
	package.add_jk_cabstructgapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructInfo& toAdd)
{
	package.add_jk_cabstructinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabStructMatPlanMapInfo& toAdd)
{
	package.add_jk_cabstructmatplanmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabinetSizeBoardInfo& toAdd)
{
	package.add_jk_cabinetsizeboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabinetSizeInfo& toAdd)
{
	package.add_jk_cabinetsizeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_CabinetSizeStructBoardInfo& toAdd)
{
	package.add_jk_cabinetsizestructboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardFrameMapInfo& toAdd)
{
	package.add_jk_decorboardframemapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardInfo& toAdd)
{
	package.add_jk_decorboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardMatInfo& toAdd)
{
	package.add_jk_decorboardmatinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardUnitInfo& toAdd)
{
	package.add_jk_decorboardunitinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardUnitMatInfo& toAdd)
{
	package.add_jk_decorboardunitmatinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorBoardUnitSealInfo& toAdd)
{
	package.add_jk_decorboardunitsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorInfo& toAdd)
{
	package.add_jk_decorinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorLineInfo& toAdd)
{
	package.add_jk_decorlineinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorLineMatInfo& toAdd)
{
	package.add_jk_decorlinematinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DecorUnitHWFittingMapInfo& toAdd)
{
	package.add_jk_decorunithwfittingmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardGapInfo& toAdd)
{
	package.add_jk_doorboardgapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardInfo& toAdd)
{
	package.add_jk_doorboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardMatMapInfo& toAdd)
{
	package.add_jk_doorboardmatmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorBoardSealInfo& toAdd)
{
	package.add_jk_doorboardsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorInfo& toAdd)
{
	package.add_jk_doorinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorMatMapInfo& toAdd)
{
	package.add_jk_doormatmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorMatPlanHandleMapInfo& toAdd)
{
	package.add_jk_doormatplanhandlemapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorMatPlanInfo& toAdd)
{
	package.add_jk_doormatplaninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorRegionHWFittingMapInfo& toAdd)
{
	package.add_jk_doorregionhwfittingmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemInfo& toAdd)
{
	package.add_jk_doorsysteminfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemMatMapInfo& toAdd)
{
	package.add_jk_doorsystemmatmapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionDoorMapInfo& toAdd)
{
	package.add_jk_doorsystemregiondoormapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionInfo& toAdd)
{
	package.add_jk_doorsystemregioninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionSlideMapInfo& toAdd)
{
	package.add_jk_doorsystemregionslidemapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_DoorSystemRegionSlidePositionSizeInfo& toAdd)
{
	package.add_jk_doorsystemregionslidepositionsizeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingInfo& toAdd)
{
	package.add_jk_fnfittinginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingMatInfo& toAdd)
{
	package.add_jk_fnfittingmatinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingPartInfo& toAdd)
{
	package.add_jk_fnfittingpartinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingPartMatInfo& toAdd)
{
	package.add_jk_fnfittingpartmatinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FNFittingPartSealInfo& toAdd)
{
	package.add_jk_fnfittingpartsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FittingInfo& toAdd)
{
	package.add_jk_fittinginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FittingRuleInfo& toAdd)
{
	package.add_jk_fittingruleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_FormulaConstInfo& toAdd)
{
	package.add_jk_formulaconstinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_GroupInfo& toAdd)
{
	package.add_jk_groupinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_HWFittingInfo& toAdd)
{
	package.add_jk_hwfittinginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_HoleRuleInfo& toAdd)
{
	package.add_jk_holeruleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_MaterialInfo& toAdd)
{
	package.add_jk_materialinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_MaterialSealRuleMapInfo& toAdd)
{
	package.add_jk_materialsealrulemapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ModelInfo& toAdd)
{
	package.add_jk_modelinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_NumberRuleInfo& toAdd)
{
	package.add_jk_numberruleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_PackageInfo& toAdd)
{
	package.add_jk_packageinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_PackageMapInfo& toAdd)
{
	package.add_jk_packagemapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ProductInfo& toAdd)
{
	package.add_jk_productinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ProductSeriesInfo& toAdd)
{
	package.add_jk_productseriesinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ProductSeriesValidInfo& toAdd)
{
	package.add_jk_productseriesvalidinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_ResourceInfo& toAdd)
{
	package.add_jk_resourceinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SealRuleInfo& toAdd)
{
	package.add_jk_sealruleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SysConfigInfo& toAdd)
{
	package.add_jk_sysconfiginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SysRuleConfigInfo& toAdd)
{
	package.add_jk_sysruleconfiginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_SysRuleTypeInfo& toAdd)
{
	package.add_jk_sysruletypeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JK_Table& package, transMsg::JK_TableTopSideInfo& toAdd)
{
	package.add_jk_tabletopsideinfo()->Swap(&toAdd);
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabBoardMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabBoardMatInfoImp& tableObj)
{
	return *( package.mutable_jk_cabboardmatinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabBoardMatSkinInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabBoardMatSkinInfoImp& tableObj)
{
	return *( package.mutable_jk_cabboardmatskininfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignBoardSealEdgeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignBoardSealEdgeInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesignboardsealedgeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignBoardSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignBoardSealInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesignboardsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignDoorRegionHandleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignDoorRegionHandleInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesigndoorregionhandleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignDoorRegionInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignDoorRegionInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesigndoorregioninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignDoorSystemInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignDoorSystemInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesigndoorsysteminfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignFNFittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignFNFittingInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesignfnfittinginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignFNFittingMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignFNFittingMapInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesignfnfittingmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignFootInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignFootInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesignfootinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesigninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabDesignMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabDesignMatInfoImp& tableObj)
{
	return *( package.mutable_jk_cabdesignmatinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabMatPlanInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabMatPlanInfoImp& tableObj)
{
	return *( package.mutable_jk_cabmatplaninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructBoardGapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructBoardGapInfoImp& tableObj)
{
	return *( package.mutable_jk_cabstructboardgapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructBoardInfoImp& tableObj)
{
	return *( package.mutable_jk_cabstructboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructBoardSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructBoardSealInfoImp& tableObj)
{
	return *( package.mutable_jk_cabstructboardsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructGapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructGapInfoImp& tableObj)
{
	return *( package.mutable_jk_cabstructgapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructInfoImp& tableObj)
{
	return *( package.mutable_jk_cabstructinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabStructMatPlanMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabStructMatPlanMapInfoImp& tableObj)
{
	return *( package.mutable_jk_cabstructmatplanmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabinetSizeBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabinetSizeBoardInfoImp& tableObj)
{
	return *( package.mutable_jk_cabinetsizeboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabinetSizeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabinetSizeInfoImp& tableObj)
{
	return *( package.mutable_jk_cabinetsizeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_CabinetSizeStructBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_CabinetSizeStructBoardInfoImp& tableObj)
{
	return *( package.mutable_jk_cabinetsizestructboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardFrameMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardFrameMapInfoImp& tableObj)
{
	return *( package.mutable_jk_decorboardframemapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardInfoImp& tableObj)
{
	return *( package.mutable_jk_decorboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardMatInfoImp& tableObj)
{
	return *( package.mutable_jk_decorboardmatinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardUnitInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardUnitInfoImp& tableObj)
{
	return *( package.mutable_jk_decorboardunitinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardUnitMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardUnitMatInfoImp& tableObj)
{
	return *( package.mutable_jk_decorboardunitmatinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorBoardUnitSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorBoardUnitSealInfoImp& tableObj)
{
	return *( package.mutable_jk_decorboardunitsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorInfoImp& tableObj)
{
	return *( package.mutable_jk_decorinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorLineInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorLineInfoImp& tableObj)
{
	return *( package.mutable_jk_decorlineinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorLineMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorLineMatInfoImp& tableObj)
{
	return *( package.mutable_jk_decorlinematinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DecorUnitHWFittingMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DecorUnitHWFittingMapInfoImp& tableObj)
{
	return *( package.mutable_jk_decorunithwfittingmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardGapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardGapInfoImp& tableObj)
{
	return *( package.mutable_jk_doorboardgapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardInfoImp& tableObj)
{
	return *( package.mutable_jk_doorboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardMatMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardMatMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doorboardmatmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorBoardSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorBoardSealInfoImp& tableObj)
{
	return *( package.mutable_jk_doorboardsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorInfoImp& tableObj)
{
	return *( package.mutable_jk_doorinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorMatMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorMatMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doormatmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorMatPlanHandleMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorMatPlanHandleMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doormatplanhandlemapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorMatPlanInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorMatPlanInfoImp& tableObj)
{
	return *( package.mutable_jk_doormatplaninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorRegionHWFittingMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorRegionHWFittingMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doorregionhwfittingmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemInfoImp& tableObj)
{
	return *( package.mutable_jk_doorsysteminfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemMatMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemMatMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doorsystemmatmapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionDoorMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionDoorMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doorsystemregiondoormapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionInfoImp& tableObj)
{
	return *( package.mutable_jk_doorsystemregioninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionSlideMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionSlideMapInfoImp& tableObj)
{
	return *( package.mutable_jk_doorsystemregionslidemapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_DoorSystemRegionSlidePositionSizeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_DoorSystemRegionSlidePositionSizeInfoImp& tableObj)
{
	return *( package.mutable_jk_doorsystemregionslidepositionsizeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingInfoImp& tableObj)
{
	return *( package.mutable_jk_fnfittinginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingMatInfoImp& tableObj)
{
	return *( package.mutable_jk_fnfittingmatinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingPartInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingPartInfoImp& tableObj)
{
	return *( package.mutable_jk_fnfittingpartinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingPartMatInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingPartMatInfoImp& tableObj)
{
	return *( package.mutable_jk_fnfittingpartmatinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FNFittingPartSealInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FNFittingPartSealInfoImp& tableObj)
{
	return *( package.mutable_jk_fnfittingpartsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FittingInfoImp& tableObj)
{
	return *( package.mutable_jk_fittinginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FittingRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FittingRuleInfoImp& tableObj)
{
	return *( package.mutable_jk_fittingruleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_FormulaConstInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_FormulaConstInfoImp& tableObj)
{
	return *( package.mutable_jk_formulaconstinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_GroupInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_GroupInfoImp& tableObj)
{
	return *( package.mutable_jk_groupinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_HWFittingInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_HWFittingInfoImp& tableObj)
{
	return *( package.mutable_jk_hwfittinginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_HoleRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_HoleRuleInfoImp& tableObj)
{
	return *( package.mutable_jk_holeruleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_MaterialInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_MaterialInfoImp& tableObj)
{
	return *( package.mutable_jk_materialinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_MaterialSealRuleMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_MaterialSealRuleMapInfoImp& tableObj)
{
	return *( package.mutable_jk_materialsealrulemapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ModelInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ModelInfoImp& tableObj)
{
	return *( package.mutable_jk_modelinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_NumberRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_NumberRuleInfoImp& tableObj)
{
	return *( package.mutable_jk_numberruleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_PackageInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_PackageInfoImp& tableObj)
{
	return *( package.mutable_jk_packageinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_PackageMapInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_PackageMapInfoImp& tableObj)
{
	return *( package.mutable_jk_packagemapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ProductInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ProductInfoImp& tableObj)
{
	return *( package.mutable_jk_productinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ProductSeriesInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ProductSeriesInfoImp& tableObj)
{
	return *( package.mutable_jk_productseriesinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ProductSeriesValidInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ProductSeriesValidInfoImp& tableObj)
{
	return *( package.mutable_jk_productseriesvalidinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_ResourceInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_ResourceInfoImp& tableObj)
{
	return *( package.mutable_jk_resourceinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SealRuleInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SealRuleInfoImp& tableObj)
{
	return *( package.mutable_jk_sealruleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SysConfigInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SysConfigInfoImp& tableObj)
{
	return *( package.mutable_jk_sysconfiginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SysRuleConfigInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SysRuleConfigInfoImp& tableObj)
{
	return *( package.mutable_jk_sysruleconfiginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_SysRuleTypeInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_SysRuleTypeInfoImp& tableObj)
{
	return *( package.mutable_jk_sysruletypeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JK_TableTopSideInfo >&	ExtractFromPack(transMsg::JK_Table& package, autoDB::JK_TableTopSideInfoImp& tableObj)
{
	return *( package.mutable_jk_tabletopsideinfo() );
}


}
