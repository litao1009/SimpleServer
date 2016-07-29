#include"msg-GLUtils.h"

namespace autoDB
{
transMsg::GL_AppVerInfo	ToMessage( const GL_AppVerInfoImp::SData& sdata )
{
	transMsg::GL_AppVerInfo message;
	if ( sdata.AppVerID_ )
	{
		message.set_appverid(*sdata.AppVerID_);
	}
	if ( sdata.ClientType_ )
	{
		message.set_clienttype(*sdata.ClientType_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.FileSize_ )
	{
		message.set_filesize(*sdata.FileSize_);
	}
	if ( sdata.AppVerCode_ )
	{
		message.set_appvercode(*sdata.AppVerCode_);
	}
	if ( sdata.HashCode_ )
	{
		message.set_hashcode(*sdata.HashCode_);
	}
	if ( sdata.FilePath_ )
	{
		message.set_filepath(*sdata.FilePath_);
	}
	return message;
}

::autoDB::GL_AppVerInfoImp::SData	ToData( const transMsg::GL_AppVerInfo& message )
{
	GL_AppVerInfoImp::SData sdata;
	if ( message.has_appverid() )
	{
		sdata.AppVerID_ = message.appverid();
	}
	if ( message.has_clienttype() )
	{
		sdata.ClientType_ = message.clienttype();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_filesize() )
	{
		sdata.FileSize_ = message.filesize();
	}
	if ( message.has_appvercode() )
	{
		sdata.AppVerCode_ = message.appvercode();
	}
	if ( message.has_hashcode() )
	{
		sdata.HashCode_ = message.hashcode();
	}
	if ( message.has_filepath() )
	{
		sdata.FilePath_ = message.filepath();
	}
	return std::move(sdata);
}



transMsg::GL_AppleseedInfo	ToMessage( const GL_AppleseedInfoImp::SData& sdata )
{
	transMsg::GL_AppleseedInfo message;
	if ( sdata.ItemID_ )
	{
		message.set_itemid(*sdata.ItemID_);
	}
	if ( sdata.ItemName_ )
	{
		message.set_itemname(*sdata.ItemName_);
	}
	if ( sdata.ItemData_ )
	{
		message.set_itemdata(*sdata.ItemData_);
	}
	return message;
}

::autoDB::GL_AppleseedInfoImp::SData	ToData( const transMsg::GL_AppleseedInfo& message )
{
	GL_AppleseedInfoImp::SData sdata;
	if ( message.has_itemid() )
	{
		sdata.ItemID_ = message.itemid();
	}
	if ( message.has_itemname() )
	{
		sdata.ItemName_ = message.itemname();
	}
	if ( message.has_itemdata() )
	{
		sdata.ItemData_ = message.itemdata();
	}
	return std::move(sdata);
}



transMsg::GL_AreaGeoMapInfo	ToMessage( const GL_AreaGeoMapInfoImp::SData& sdata )
{
	transMsg::GL_AreaGeoMapInfo message;
	if ( sdata.AreaID_ )
	{
		message.set_areaid(*sdata.AreaID_);
	}
	if ( sdata.GeoCode_ )
	{
		message.set_geocode(*sdata.GeoCode_);
	}
	return message;
}

::autoDB::GL_AreaGeoMapInfoImp::SData	ToData( const transMsg::GL_AreaGeoMapInfo& message )
{
	GL_AreaGeoMapInfoImp::SData sdata;
	if ( message.has_areaid() )
	{
		sdata.AreaID_ = message.areaid();
	}
	if ( message.has_geocode() )
	{
		sdata.GeoCode_ = message.geocode();
	}
	return std::move(sdata);
}



transMsg::GL_AreaInfo	ToMessage( const GL_AreaInfoImp::SData& sdata )
{
	transMsg::GL_AreaInfo message;
	if ( sdata.AreaID_ )
	{
		message.set_areaid(*sdata.AreaID_);
	}
	if ( sdata.DeptID_ )
	{
		message.set_deptid(*sdata.DeptID_);
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
	if ( sdata.AreaName_ )
	{
		message.set_areaname(*sdata.AreaName_);
	}
	return message;
}

::autoDB::GL_AreaInfoImp::SData	ToData( const transMsg::GL_AreaInfo& message )
{
	GL_AreaInfoImp::SData sdata;
	if ( message.has_areaid() )
	{
		sdata.AreaID_ = message.areaid();
	}
	if ( message.has_deptid() )
	{
		sdata.DeptID_ = message.deptid();
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
	if ( message.has_areaname() )
	{
		sdata.AreaName_ = message.areaname();
	}
	return std::move(sdata);
}



transMsg::GL_BaseBoardInfo	ToMessage( const GL_BaseBoardInfoImp::SData& sdata )
{
	transMsg::GL_BaseBoardInfo message;
	if ( sdata.CabShape_ )
	{
		message.set_cabshape(*sdata.CabShape_);
	}
	if ( sdata.CabGapType_ )
	{
		message.set_cabgaptype(*sdata.CabGapType_);
	}
	if ( sdata.BoardType_ )
	{
		message.set_boardtype(*sdata.BoardType_);
	}
	if ( sdata.BoardPosition_ )
	{
		message.set_boardposition(*sdata.BoardPosition_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
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
	if ( sdata.XOffset_ )
	{
		message.set_xoffset(*sdata.XOffset_);
	}
	if ( sdata.YOffset_ )
	{
		message.set_yoffset(*sdata.YOffset_);
	}
	if ( sdata.ZOffset_ )
	{
		message.set_zoffset(*sdata.ZOffset_);
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
	if ( sdata.Name_ )
	{
		message.set_name(*sdata.Name_);
	}
	return message;
}

::autoDB::GL_BaseBoardInfoImp::SData	ToData( const transMsg::GL_BaseBoardInfo& message )
{
	GL_BaseBoardInfoImp::SData sdata;
	if ( message.has_cabshape() )
	{
		sdata.CabShape_ = message.cabshape();
	}
	if ( message.has_cabgaptype() )
	{
		sdata.CabGapType_ = message.cabgaptype();
	}
	if ( message.has_boardtype() )
	{
		sdata.BoardType_ = message.boardtype();
	}
	if ( message.has_boardposition() )
	{
		sdata.BoardPosition_ = message.boardposition();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
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
	if ( message.has_xoffset() )
	{
		sdata.XOffset_ = message.xoffset();
	}
	if ( message.has_yoffset() )
	{
		sdata.YOffset_ = message.yoffset();
	}
	if ( message.has_zoffset() )
	{
		sdata.ZOffset_ = message.zoffset();
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
	if ( message.has_name() )
	{
		sdata.Name_ = message.name();
	}
	return std::move(sdata);
}



transMsg::GL_ChargeLogInfo	ToMessage( const GL_ChargeLogInfoImp::SData& sdata )
{
	transMsg::GL_ChargeLogInfo message;
	if ( sdata.LogID_ )
	{
		message.set_logid(*sdata.LogID_);
	}
	if ( sdata.CardNo_ )
	{
		message.set_cardno(*sdata.CardNo_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.ShopID_ )
	{
		message.set_shopid(*sdata.ShopID_);
	}
	if ( sdata.UserID_ )
	{
		message.set_userid(*sdata.UserID_);
	}
	return message;
}

::autoDB::GL_ChargeLogInfoImp::SData	ToData( const transMsg::GL_ChargeLogInfo& message )
{
	GL_ChargeLogInfoImp::SData sdata;
	if ( message.has_logid() )
	{
		sdata.LogID_ = message.logid();
	}
	if ( message.has_cardno() )
	{
		sdata.CardNo_ = message.cardno();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_shopid() )
	{
		sdata.ShopID_ = message.shopid();
	}
	if ( message.has_userid() )
	{
		sdata.UserID_ = message.userid();
	}
	return std::move(sdata);
}



transMsg::GL_DeptInfo	ToMessage( const GL_DeptInfoImp::SData& sdata )
{
	transMsg::GL_DeptInfo message;
	if ( sdata.DeptID_ )
	{
		message.set_deptid(*sdata.DeptID_);
	}
	if ( sdata.ParentID_ )
	{
		message.set_parentid(*sdata.ParentID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.DTypeID_ )
	{
		message.set_dtypeid(*sdata.DTypeID_);
	}
	if ( sdata.IncOrder_ )
	{
		message.set_incorder(*sdata.IncOrder_);
	}
	if ( sdata.ShowOrder_ )
	{
		message.set_showorder(*sdata.ShowOrder_);
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
	if ( sdata.GeoCode_ )
	{
		message.set_geocode(*sdata.GeoCode_);
	}
	if ( sdata.DeptCode_ )
	{
		message.set_deptcode(*sdata.DeptCode_);
	}
	if ( sdata.DeptName_ )
	{
		message.set_deptname(*sdata.DeptName_);
	}
	if ( sdata.Postcode_ )
	{
		message.set_postcode(*sdata.Postcode_);
	}
	if ( sdata.Tel_ )
	{
		message.set_tel(*sdata.Tel_);
	}
	if ( sdata.Contacter_ )
	{
		message.set_contacter(*sdata.Contacter_);
	}
	if ( sdata.ContactAddress_ )
	{
		message.set_contactaddress(*sdata.ContactAddress_);
	}
	if ( sdata.DeptMemo_ )
	{
		message.set_deptmemo(*sdata.DeptMemo_);
	}
	return message;
}

::autoDB::GL_DeptInfoImp::SData	ToData( const transMsg::GL_DeptInfo& message )
{
	GL_DeptInfoImp::SData sdata;
	if ( message.has_deptid() )
	{
		sdata.DeptID_ = message.deptid();
	}
	if ( message.has_parentid() )
	{
		sdata.ParentID_ = message.parentid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_dtypeid() )
	{
		sdata.DTypeID_ = message.dtypeid();
	}
	if ( message.has_incorder() )
	{
		sdata.IncOrder_ = message.incorder();
	}
	if ( message.has_showorder() )
	{
		sdata.ShowOrder_ = message.showorder();
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
	if ( message.has_geocode() )
	{
		sdata.GeoCode_ = message.geocode();
	}
	if ( message.has_deptcode() )
	{
		sdata.DeptCode_ = message.deptcode();
	}
	if ( message.has_deptname() )
	{
		sdata.DeptName_ = message.deptname();
	}
	if ( message.has_postcode() )
	{
		sdata.Postcode_ = message.postcode();
	}
	if ( message.has_tel() )
	{
		sdata.Tel_ = message.tel();
	}
	if ( message.has_contacter() )
	{
		sdata.Contacter_ = message.contacter();
	}
	if ( message.has_contactaddress() )
	{
		sdata.ContactAddress_ = message.contactaddress();
	}
	if ( message.has_deptmemo() )
	{
		sdata.DeptMemo_ = message.deptmemo();
	}
	return std::move(sdata);
}



transMsg::GL_DesignerConfigInfo	ToMessage( const GL_DesignerConfigInfoImp::SData& sdata )
{
	transMsg::GL_DesignerConfigInfo message;
	if ( sdata.EnableSnap_ )
	{
		message.set_enablesnap(*sdata.EnableSnap_);
	}
	if ( sdata.AllPole_ )
	{
		message.set_allpole(*sdata.AllPole_);
	}
	if ( sdata.CrossPole_ )
	{
		message.set_crosspole(*sdata.CrossPole_);
	}
	if ( sdata.WallPole_ )
	{
		message.set_wallpole(*sdata.WallPole_);
	}
	if ( sdata.HotspotCapture_ )
	{
		message.set_hotspotcapture(*sdata.HotspotCapture_);
	}
	if ( sdata.GridShow_ )
	{
		message.set_gridshow(*sdata.GridShow_);
	}
	if ( sdata.AngleStep_ )
	{
		message.set_anglestep(*sdata.AngleStep_);
	}
	if ( sdata.TargetRange_ )
	{
		message.set_targetrange(*sdata.TargetRange_);
	}
	if ( sdata.DesignBGID_ )
	{
		message.set_designbgid(*sdata.DesignBGID_);
	}
	if ( sdata.PrintBGID_ )
	{
		message.set_printbgid(*sdata.PrintBGID_);
	}
	if ( sdata.GridBigID_ )
	{
		message.set_gridbigid(*sdata.GridBigID_);
	}
	if ( sdata.GridSmallID_ )
	{
		message.set_gridsmallid(*sdata.GridSmallID_);
	}
	if ( sdata.HotspotRotateID_ )
	{
		message.set_hotspotrotateid(*sdata.HotspotRotateID_);
	}
	if ( sdata.HotspotNormalID_ )
	{
		message.set_hotspotnormalid(*sdata.HotspotNormalID_);
	}
	if ( sdata.HotspotSelectID_ )
	{
		message.set_hotspotselectid(*sdata.HotspotSelectID_);
	}
	if ( sdata.CreatePointID_ )
	{
		message.set_createpointid(*sdata.CreatePointID_);
	}
	if ( sdata.DesignBGColor_ )
	{
		message.set_designbgcolor(*sdata.DesignBGColor_);
	}
	if ( sdata.PrintBGColor_ )
	{
		message.set_printbgcolor(*sdata.PrintBGColor_);
	}
	if ( sdata.GridBigColor_ )
	{
		message.set_gridbigcolor(*sdata.GridBigColor_);
	}
	if ( sdata.GridSmallColor_ )
	{
		message.set_gridsmallcolor(*sdata.GridSmallColor_);
	}
	if ( sdata.HotspotRotateColor_ )
	{
		message.set_hotspotrotatecolor(*sdata.HotspotRotateColor_);
	}
	if ( sdata.HotspotNormalColor_ )
	{
		message.set_hotspotnormalcolor(*sdata.HotspotNormalColor_);
	}
	if ( sdata.HotspotSelectColor_ )
	{
		message.set_hotspotselectcolor(*sdata.HotspotSelectColor_);
	}
	if ( sdata.CreatePointColor_ )
	{
		message.set_createpointcolor(*sdata.CreatePointColor_);
	}
	if ( sdata.UserID_ )
	{
		message.set_userid(*sdata.UserID_);
	}
	if ( sdata.WallThickness_ )
	{
		message.set_wallthickness(*sdata.WallThickness_);
	}
	if ( sdata.WallHeight_ )
	{
		message.set_wallheight(*sdata.WallHeight_);
	}
	if ( sdata.BaseLineLen_ )
	{
		message.set_baselinelen(*sdata.BaseLineLen_);
	}
	if ( sdata.GridWidth_ )
	{
		message.set_gridwidth(*sdata.GridWidth_);
	}
	if ( sdata.SnapRange_ )
	{
		message.set_snaprange(*sdata.SnapRange_);
	}
	if ( sdata.SkirtLineOffsetLen_ )
	{
		message.set_skirtlineoffsetlen(*sdata.SkirtLineOffsetLen_);
	}
	if ( sdata.BottomLineOffsetLen_ )
	{
		message.set_bottomlineoffsetlen(*sdata.BottomLineOffsetLen_);
	}
	if ( sdata.TopLineOffsetLen_ )
	{
		message.set_toplineoffsetlen(*sdata.TopLineOffsetLen_);
	}
	return message;
}

::autoDB::GL_DesignerConfigInfoImp::SData	ToData( const transMsg::GL_DesignerConfigInfo& message )
{
	GL_DesignerConfigInfoImp::SData sdata;
	if ( message.has_enablesnap() )
	{
		sdata.EnableSnap_ = message.enablesnap();
	}
	if ( message.has_allpole() )
	{
		sdata.AllPole_ = message.allpole();
	}
	if ( message.has_crosspole() )
	{
		sdata.CrossPole_ = message.crosspole();
	}
	if ( message.has_wallpole() )
	{
		sdata.WallPole_ = message.wallpole();
	}
	if ( message.has_hotspotcapture() )
	{
		sdata.HotspotCapture_ = message.hotspotcapture();
	}
	if ( message.has_gridshow() )
	{
		sdata.GridShow_ = message.gridshow();
	}
	if ( message.has_anglestep() )
	{
		sdata.AngleStep_ = message.anglestep();
	}
	if ( message.has_targetrange() )
	{
		sdata.TargetRange_ = message.targetrange();
	}
	if ( message.has_designbgid() )
	{
		sdata.DesignBGID_ = message.designbgid();
	}
	if ( message.has_printbgid() )
	{
		sdata.PrintBGID_ = message.printbgid();
	}
	if ( message.has_gridbigid() )
	{
		sdata.GridBigID_ = message.gridbigid();
	}
	if ( message.has_gridsmallid() )
	{
		sdata.GridSmallID_ = message.gridsmallid();
	}
	if ( message.has_hotspotrotateid() )
	{
		sdata.HotspotRotateID_ = message.hotspotrotateid();
	}
	if ( message.has_hotspotnormalid() )
	{
		sdata.HotspotNormalID_ = message.hotspotnormalid();
	}
	if ( message.has_hotspotselectid() )
	{
		sdata.HotspotSelectID_ = message.hotspotselectid();
	}
	if ( message.has_createpointid() )
	{
		sdata.CreatePointID_ = message.createpointid();
	}
	if ( message.has_designbgcolor() )
	{
		sdata.DesignBGColor_ = message.designbgcolor();
	}
	if ( message.has_printbgcolor() )
	{
		sdata.PrintBGColor_ = message.printbgcolor();
	}
	if ( message.has_gridbigcolor() )
	{
		sdata.GridBigColor_ = message.gridbigcolor();
	}
	if ( message.has_gridsmallcolor() )
	{
		sdata.GridSmallColor_ = message.gridsmallcolor();
	}
	if ( message.has_hotspotrotatecolor() )
	{
		sdata.HotspotRotateColor_ = message.hotspotrotatecolor();
	}
	if ( message.has_hotspotnormalcolor() )
	{
		sdata.HotspotNormalColor_ = message.hotspotnormalcolor();
	}
	if ( message.has_hotspotselectcolor() )
	{
		sdata.HotspotSelectColor_ = message.hotspotselectcolor();
	}
	if ( message.has_createpointcolor() )
	{
		sdata.CreatePointColor_ = message.createpointcolor();
	}
	if ( message.has_userid() )
	{
		sdata.UserID_ = message.userid();
	}
	if ( message.has_wallthickness() )
	{
		sdata.WallThickness_ = message.wallthickness();
	}
	if ( message.has_wallheight() )
	{
		sdata.WallHeight_ = message.wallheight();
	}
	if ( message.has_baselinelen() )
	{
		sdata.BaseLineLen_ = message.baselinelen();
	}
	if ( message.has_gridwidth() )
	{
		sdata.GridWidth_ = message.gridwidth();
	}
	if ( message.has_snaprange() )
	{
		sdata.SnapRange_ = message.snaprange();
	}
	if ( message.has_skirtlineoffsetlen() )
	{
		sdata.SkirtLineOffsetLen_ = message.skirtlineoffsetlen();
	}
	if ( message.has_bottomlineoffsetlen() )
	{
		sdata.BottomLineOffsetLen_ = message.bottomlineoffsetlen();
	}
	if ( message.has_toplineoffsetlen() )
	{
		sdata.TopLineOffsetLen_ = message.toplineoffsetlen();
	}
	return std::move(sdata);
}



transMsg::GL_GTypeInfo	ToMessage( const GL_GTypeInfoImp::SData& sdata )
{
	transMsg::GL_GTypeInfo message;
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.GTypeName_ )
	{
		message.set_gtypename(*sdata.GTypeName_);
	}
	return message;
}

::autoDB::GL_GTypeInfoImp::SData	ToData( const transMsg::GL_GTypeInfo& message )
{
	GL_GTypeInfoImp::SData sdata;
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_gtypename() )
	{
		sdata.GTypeName_ = message.gtypename();
	}
	return std::move(sdata);
}



transMsg::GL_GeoCodeInfo	ToMessage( const GL_GeoCodeInfoImp::SData& sdata )
{
	transMsg::GL_GeoCodeInfo message;
	if ( sdata.GeoCode_ )
	{
		message.set_geocode(*sdata.GeoCode_);
	}
	if ( sdata.GeoName_ )
	{
		message.set_geoname(*sdata.GeoName_);
	}
	return message;
}

::autoDB::GL_GeoCodeInfoImp::SData	ToData( const transMsg::GL_GeoCodeInfo& message )
{
	GL_GeoCodeInfoImp::SData sdata;
	if ( message.has_geocode() )
	{
		sdata.GeoCode_ = message.geocode();
	}
	if ( message.has_geoname() )
	{
		sdata.GeoName_ = message.geoname();
	}
	return std::move(sdata);
}



transMsg::GL_MajorCateInfo	ToMessage( const GL_MajorCateInfoImp::SData& sdata )
{
	transMsg::GL_MajorCateInfo message;
	if ( sdata.MajorCateID_ )
	{
		message.set_majorcateid(*sdata.MajorCateID_);
	}
	if ( sdata.MajorCateName_ )
	{
		message.set_majorcatename(*sdata.MajorCateName_);
	}
	return message;
}

::autoDB::GL_MajorCateInfoImp::SData	ToData( const transMsg::GL_MajorCateInfo& message )
{
	GL_MajorCateInfoImp::SData sdata;
	if ( message.has_majorcateid() )
	{
		sdata.MajorCateID_ = message.majorcateid();
	}
	if ( message.has_majorcatename() )
	{
		sdata.MajorCateName_ = message.majorcatename();
	}
	return std::move(sdata);
}



transMsg::GL_MinorCateInfo	ToMessage( const GL_MinorCateInfoImp::SData& sdata )
{
	transMsg::GL_MinorCateInfo message;
	if ( sdata.MajorCateID_ )
	{
		message.set_majorcateid(*sdata.MajorCateID_);
	}
	if ( sdata.MinorCateID_ )
	{
		message.set_minorcateid(*sdata.MinorCateID_);
	}
	if ( sdata.MinorCateName_ )
	{
		message.set_minorcatename(*sdata.MinorCateName_);
	}
	return message;
}

::autoDB::GL_MinorCateInfoImp::SData	ToData( const transMsg::GL_MinorCateInfo& message )
{
	GL_MinorCateInfoImp::SData sdata;
	if ( message.has_majorcateid() )
	{
		sdata.MajorCateID_ = message.majorcateid();
	}
	if ( message.has_minorcateid() )
	{
		sdata.MinorCateID_ = message.minorcateid();
	}
	if ( message.has_minorcatename() )
	{
		sdata.MinorCateName_ = message.minorcatename();
	}
	return std::move(sdata);
}



transMsg::GL_MinorGTypeMapInfo	ToMessage( const GL_MinorGTypeMapInfoImp::SData& sdata )
{
	transMsg::GL_MinorGTypeMapInfo message;
	if ( sdata.MajorCateID_ )
	{
		message.set_majorcateid(*sdata.MajorCateID_);
	}
	if ( sdata.MinorCateID_ )
	{
		message.set_minorcateid(*sdata.MinorCateID_);
	}
	if ( sdata.CreateType_ )
	{
		message.set_createtype(*sdata.CreateType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	return message;
}

::autoDB::GL_MinorGTypeMapInfoImp::SData	ToData( const transMsg::GL_MinorGTypeMapInfo& message )
{
	GL_MinorGTypeMapInfoImp::SData sdata;
	if ( message.has_majorcateid() )
	{
		sdata.MajorCateID_ = message.majorcateid();
	}
	if ( message.has_minorcateid() )
	{
		sdata.MinorCateID_ = message.minorcateid();
	}
	if ( message.has_createtype() )
	{
		sdata.CreateType_ = message.createtype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	return std::move(sdata);
}



transMsg::GL_OrderInfo	ToMessage( const GL_OrderInfoImp::SData& sdata )
{
	transMsg::GL_OrderInfo message;
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.ClientOrderID_ )
	{
		message.set_clientorderid(*sdata.ClientOrderID_);
	}
	if ( sdata.OrderIndex_ )
	{
		message.set_orderindex(*sdata.OrderIndex_);
	}
	if ( sdata.OrderType_ )
	{
		message.set_ordertype(*sdata.OrderType_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.ShopID_ )
	{
		message.set_shopid(*sdata.ShopID_);
	}
	if ( sdata.OrderStatus_ )
	{
		message.set_orderstatus(*sdata.OrderStatus_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.DesignerID_ )
	{
		message.set_designerid(*sdata.DesignerID_);
	}
	if ( sdata.ShopAuditorID_ )
	{
		message.set_shopauditorid(*sdata.ShopAuditorID_);
	}
	if ( sdata.ShopCommitorID_ )
	{
		message.set_shopcommitorid(*sdata.ShopCommitorID_);
	}
	if ( sdata.FactoryGraphAuditorID_ )
	{
		message.set_factorygraphauditorid(*sdata.FactoryGraphAuditorID_);
	}
	if ( sdata.FactoryListAuditorID_ )
	{
		message.set_factorylistauditorid(*sdata.FactoryListAuditorID_);
	}
	if ( sdata.FactoryFinanceAuditorID_ )
	{
		message.set_factoryfinanceauditorid(*sdata.FactoryFinanceAuditorID_);
	}
	if ( sdata.ShopAuditTime_ )
	{
		message.set_shopaudittime( ( *sdata.ShopAuditTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ShopCommitTime_ )
	{
		message.set_shopcommittime( ( *sdata.ShopCommitTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.GraphAuditTime_ )
	{
		message.set_graphaudittime( ( *sdata.GraphAuditTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ListAuditTime_ )
	{
		message.set_listaudittime( ( *sdata.ListAuditTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.FinanceAuditTime_ )
	{
		message.set_financeaudittime( ( *sdata.FinanceAuditTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.OrderCode_ )
	{
		message.set_ordercode(*sdata.OrderCode_);
	}
	if ( sdata.ShopAuditContent_ )
	{
		message.set_shopauditcontent(*sdata.ShopAuditContent_);
	}
	if ( sdata.ShopCommitContent_ )
	{
		message.set_shopcommitcontent(*sdata.ShopCommitContent_);
	}
	if ( sdata.GraphAuditContent_ )
	{
		message.set_graphauditcontent(*sdata.GraphAuditContent_);
	}
	if ( sdata.ListAuditContent_ )
	{
		message.set_listauditcontent(*sdata.ListAuditContent_);
	}
	if ( sdata.FinanceAuditContent_ )
	{
		message.set_financeauditcontent(*sdata.FinanceAuditContent_);
	}
	return message;
}

::autoDB::GL_OrderInfoImp::SData	ToData( const transMsg::GL_OrderInfo& message )
{
	GL_OrderInfoImp::SData sdata;
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_clientorderid() )
	{
		sdata.ClientOrderID_ = message.clientorderid();
	}
	if ( message.has_orderindex() )
	{
		sdata.OrderIndex_ = message.orderindex();
	}
	if ( message.has_ordertype() )
	{
		sdata.OrderType_ = message.ordertype();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_shopid() )
	{
		sdata.ShopID_ = message.shopid();
	}
	if ( message.has_orderstatus() )
	{
		sdata.OrderStatus_ = message.orderstatus();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_designerid() )
	{
		sdata.DesignerID_ = message.designerid();
	}
	if ( message.has_shopauditorid() )
	{
		sdata.ShopAuditorID_ = message.shopauditorid();
	}
	if ( message.has_shopcommitorid() )
	{
		sdata.ShopCommitorID_ = message.shopcommitorid();
	}
	if ( message.has_factorygraphauditorid() )
	{
		sdata.FactoryGraphAuditorID_ = message.factorygraphauditorid();
	}
	if ( message.has_factorylistauditorid() )
	{
		sdata.FactoryListAuditorID_ = message.factorylistauditorid();
	}
	if ( message.has_factoryfinanceauditorid() )
	{
		sdata.FactoryFinanceAuditorID_ = message.factoryfinanceauditorid();
	}
	if ( message.has_shopaudittime() )
	{
		sdata.ShopAuditTime_ = DBTime(rawDate, DBMilliseconds(message.shopaudittime()) );
	}
	if ( message.has_shopcommittime() )
	{
		sdata.ShopCommitTime_ = DBTime(rawDate, DBMilliseconds(message.shopcommittime()) );
	}
	if ( message.has_graphaudittime() )
	{
		sdata.GraphAuditTime_ = DBTime(rawDate, DBMilliseconds(message.graphaudittime()) );
	}
	if ( message.has_listaudittime() )
	{
		sdata.ListAuditTime_ = DBTime(rawDate, DBMilliseconds(message.listaudittime()) );
	}
	if ( message.has_financeaudittime() )
	{
		sdata.FinanceAuditTime_ = DBTime(rawDate, DBMilliseconds(message.financeaudittime()) );
	}
	if ( message.has_ordercode() )
	{
		sdata.OrderCode_ = message.ordercode();
	}
	if ( message.has_shopauditcontent() )
	{
		sdata.ShopAuditContent_ = message.shopauditcontent();
	}
	if ( message.has_shopcommitcontent() )
	{
		sdata.ShopCommitContent_ = message.shopcommitcontent();
	}
	if ( message.has_graphauditcontent() )
	{
		sdata.GraphAuditContent_ = message.graphauditcontent();
	}
	if ( message.has_listauditcontent() )
	{
		sdata.ListAuditContent_ = message.listauditcontent();
	}
	if ( message.has_financeauditcontent() )
	{
		sdata.FinanceAuditContent_ = message.financeauditcontent();
	}
	return std::move(sdata);
}



transMsg::GL_PinYin	ToMessage( const GL_PinYinImp::SData& sdata )
{
	transMsg::GL_PinYin message;
	if ( sdata.PYCode_ )
	{
		message.set_pycode(*sdata.PYCode_);
	}
	if ( sdata.PYName_ )
	{
		message.set_pyname(*sdata.PYName_);
	}
	return message;
}

::autoDB::GL_PinYinImp::SData	ToData( const transMsg::GL_PinYin& message )
{
	GL_PinYinImp::SData sdata;
	if ( message.has_pycode() )
	{
		sdata.PYCode_ = message.pycode();
	}
	if ( message.has_pyname() )
	{
		sdata.PYName_ = message.pyname();
	}
	return std::move(sdata);
}



transMsg::GL_PrepaidCardInfo	ToMessage( const GL_PrepaidCardInfoImp::SData& sdata )
{
	transMsg::GL_PrepaidCardInfo message;
	if ( sdata.CardID_ )
	{
		message.set_cardid(*sdata.CardID_);
	}
	if ( sdata.CardCategory_ )
	{
		message.set_cardcategory(*sdata.CardCategory_);
	}
	if ( sdata.CardType_ )
	{
		message.set_cardtype(*sdata.CardType_);
	}
	if ( sdata.Period_ )
	{
		message.set_period(*sdata.Period_);
	}
	if ( sdata.SecureCode_ )
	{
		message.set_securecode(*sdata.SecureCode_);
	}
	if ( sdata.CardPwd_ )
	{
		message.set_cardpwd(*sdata.CardPwd_);
	}
	if ( sdata.SerialNo_ )
	{
		message.set_serialno(*sdata.SerialNo_);
	}
	if ( sdata.CardNo_ )
	{
		message.set_cardno(*sdata.CardNo_);
	}
	return message;
}

::autoDB::GL_PrepaidCardInfoImp::SData	ToData( const transMsg::GL_PrepaidCardInfo& message )
{
	GL_PrepaidCardInfoImp::SData sdata;
	if ( message.has_cardid() )
	{
		sdata.CardID_ = message.cardid();
	}
	if ( message.has_cardcategory() )
	{
		sdata.CardCategory_ = message.cardcategory();
	}
	if ( message.has_cardtype() )
	{
		sdata.CardType_ = message.cardtype();
	}
	if ( message.has_period() )
	{
		sdata.Period_ = message.period();
	}
	if ( message.has_securecode() )
	{
		sdata.SecureCode_ = message.securecode();
	}
	if ( message.has_cardpwd() )
	{
		sdata.CardPwd_ = message.cardpwd();
	}
	if ( message.has_serialno() )
	{
		sdata.SerialNo_ = message.serialno();
	}
	if ( message.has_cardno() )
	{
		sdata.CardNo_ = message.cardno();
	}
	return std::move(sdata);
}



transMsg::GL_PrintTemplateInfo	ToMessage( const GL_PrintTemplateInfoImp::SData& sdata )
{
	transMsg::GL_PrintTemplateInfo message;
	if ( sdata.TemplateID_ )
	{
		message.set_templateid(*sdata.TemplateID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.RelativePath_ )
	{
		message.set_relativepath(*sdata.RelativePath_);
	}
	if ( sdata.TemplateName_ )
	{
		message.set_templatename(*sdata.TemplateName_);
	}
	if ( sdata.TemplateMemo_ )
	{
		message.set_templatememo(*sdata.TemplateMemo_);
	}
	if ( sdata.HashCode_ )
	{
		message.set_hashcode(*sdata.HashCode_);
	}
	return message;
}

::autoDB::GL_PrintTemplateInfoImp::SData	ToData( const transMsg::GL_PrintTemplateInfo& message )
{
	GL_PrintTemplateInfoImp::SData sdata;
	if ( message.has_templateid() )
	{
		sdata.TemplateID_ = message.templateid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_relativepath() )
	{
		sdata.RelativePath_ = message.relativepath();
	}
	if ( message.has_templatename() )
	{
		sdata.TemplateName_ = message.templatename();
	}
	if ( message.has_templatememo() )
	{
		sdata.TemplateMemo_ = message.templatememo();
	}
	if ( message.has_hashcode() )
	{
		sdata.HashCode_ = message.hashcode();
	}
	return std::move(sdata);
}



transMsg::GL_RoleInfo	ToMessage( const GL_RoleInfoImp::SData& sdata )
{
	transMsg::GL_RoleInfo message;
	if ( sdata.RoleID_ )
	{
		message.set_roleid(*sdata.RoleID_);
	}
	if ( sdata.DeptID_ )
	{
		message.set_deptid(*sdata.DeptID_);
	}
	if ( sdata.DTypeID_ )
	{
		message.set_dtypeid(*sdata.DTypeID_);
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
	if ( sdata.RoleName_ )
	{
		message.set_rolename(*sdata.RoleName_);
	}
	return message;
}

::autoDB::GL_RoleInfoImp::SData	ToData( const transMsg::GL_RoleInfo& message )
{
	GL_RoleInfoImp::SData sdata;
	if ( message.has_roleid() )
	{
		sdata.RoleID_ = message.roleid();
	}
	if ( message.has_deptid() )
	{
		sdata.DeptID_ = message.deptid();
	}
	if ( message.has_dtypeid() )
	{
		sdata.DTypeID_ = message.dtypeid();
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
	if ( message.has_rolename() )
	{
		sdata.RoleName_ = message.rolename();
	}
	return std::move(sdata);
}



transMsg::GL_RoleRightInfo	ToMessage( const GL_RoleRightInfoImp::SData& sdata )
{
	transMsg::GL_RoleRightInfo message;
	if ( sdata.RightID_ )
	{
		message.set_rightid(*sdata.RightID_);
	}
	if ( sdata.RightType_ )
	{
		message.set_righttype(*sdata.RightType_);
	}
	if ( sdata.RoleID_ )
	{
		message.set_roleid(*sdata.RoleID_);
	}
	return message;
}

::autoDB::GL_RoleRightInfoImp::SData	ToData( const transMsg::GL_RoleRightInfo& message )
{
	GL_RoleRightInfoImp::SData sdata;
	if ( message.has_rightid() )
	{
		sdata.RightID_ = message.rightid();
	}
	if ( message.has_righttype() )
	{
		sdata.RightType_ = message.righttype();
	}
	if ( message.has_roleid() )
	{
		sdata.RoleID_ = message.roleid();
	}
	return std::move(sdata);
}



transMsg::GL_SugarVerInfo	ToMessage( const GL_SugarVerInfoImp::SData& sdata )
{
	transMsg::GL_SugarVerInfo message;
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.DeptID_ )
	{
		message.set_deptid(*sdata.DeptID_);
	}
	if ( sdata.VerType_ )
	{
		message.set_vertype(*sdata.VerType_);
	}
	if ( sdata.VerIndex_ )
	{
		message.set_verindex(*sdata.VerIndex_);
	}
	if ( sdata.UploadStatus_ )
	{
		message.set_uploadstatus(*sdata.UploadStatus_);
	}
	if ( sdata.FileCount_ )
	{
		message.set_filecount(*sdata.FileCount_);
	}
	if ( sdata.VerDBState_ )
	{
		message.set_verdbstate(*sdata.VerDBState_);
	}
	if ( sdata.CreatorID_ )
	{
		message.set_creatorid(*sdata.CreatorID_);
	}
	if ( sdata.StartTime_ )
	{
		message.set_starttime( ( *sdata.StartTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.StopTime_ )
	{
		message.set_stoptime( ( *sdata.StopTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.VerMemo_ )
	{
		message.set_vermemo(*sdata.VerMemo_);
	}
	return message;
}

::autoDB::GL_SugarVerInfoImp::SData	ToData( const transMsg::GL_SugarVerInfo& message )
{
	GL_SugarVerInfoImp::SData sdata;
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_deptid() )
	{
		sdata.DeptID_ = message.deptid();
	}
	if ( message.has_vertype() )
	{
		sdata.VerType_ = message.vertype();
	}
	if ( message.has_verindex() )
	{
		sdata.VerIndex_ = message.verindex();
	}
	if ( message.has_uploadstatus() )
	{
		sdata.UploadStatus_ = message.uploadstatus();
	}
	if ( message.has_filecount() )
	{
		sdata.FileCount_ = message.filecount();
	}
	if ( message.has_verdbstate() )
	{
		sdata.VerDBState_ = message.verdbstate();
	}
	if ( message.has_creatorid() )
	{
		sdata.CreatorID_ = message.creatorid();
	}
	if ( message.has_starttime() )
	{
		sdata.StartTime_ = DBTime(rawDate, DBMilliseconds(message.starttime()) );
	}
	if ( message.has_stoptime() )
	{
		sdata.StopTime_ = DBTime(rawDate, DBMilliseconds(message.stoptime()) );
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_vermemo() )
	{
		sdata.VerMemo_ = message.vermemo();
	}
	return std::move(sdata);
}



transMsg::GL_TransferOrderInfo	ToMessage( const GL_TransferOrderInfoImp::SData& sdata )
{
	transMsg::GL_TransferOrderInfo message;
	if ( sdata.RecordID_ )
	{
		message.set_recordid(*sdata.RecordID_);
	}
	if ( sdata.TransferByUserID_ )
	{
		message.set_transferbyuserid(*sdata.TransferByUserID_);
	}
	if ( sdata.TransferToUserID_ )
	{
		message.set_transfertouserid(*sdata.TransferToUserID_);
	}
	return message;
}

::autoDB::GL_TransferOrderInfoImp::SData	ToData( const transMsg::GL_TransferOrderInfo& message )
{
	GL_TransferOrderInfoImp::SData sdata;
	if ( message.has_recordid() )
	{
		sdata.RecordID_ = message.recordid();
	}
	if ( message.has_transferbyuserid() )
	{
		sdata.TransferByUserID_ = message.transferbyuserid();
	}
	if ( message.has_transfertouserid() )
	{
		sdata.TransferToUserID_ = message.transfertouserid();
	}
	return std::move(sdata);
}



transMsg::GL_UnitInfo	ToMessage( const GL_UnitInfoImp::SData& sdata )
{
	transMsg::GL_UnitInfo message;
	if ( sdata.UnitID_ )
	{
		message.set_unitid(*sdata.UnitID_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.UnitName_ )
	{
		message.set_unitname(*sdata.UnitName_);
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

::autoDB::GL_UnitInfoImp::SData	ToData( const transMsg::GL_UnitInfo& message )
{
	GL_UnitInfoImp::SData sdata;
	if ( message.has_unitid() )
	{
		sdata.UnitID_ = message.unitid();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_unitname() )
	{
		sdata.UnitName_ = message.unitname();
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



transMsg::GL_UserActivationInfo	ToMessage( const GL_UserActivationInfoImp::SData& sdata )
{
	transMsg::GL_UserActivationInfo message;
	if ( sdata.UserID_ )
	{
		message.set_userid(*sdata.UserID_);
	}
	if ( sdata.ActivationCode_ )
	{
		message.set_activationcode(*sdata.ActivationCode_);
	}
	if ( sdata.TryCount_ )
	{
		message.set_trycount(*sdata.TryCount_);
	}
	if ( sdata.LastTryTime_ )
	{
		message.set_lasttrytime( ( *sdata.LastTryTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::GL_UserActivationInfoImp::SData	ToData( const transMsg::GL_UserActivationInfo& message )
{
	GL_UserActivationInfoImp::SData sdata;
	if ( message.has_userid() )
	{
		sdata.UserID_ = message.userid();
	}
	if ( message.has_activationcode() )
	{
		sdata.ActivationCode_ = message.activationcode();
	}
	if ( message.has_trycount() )
	{
		sdata.TryCount_ = message.trycount();
	}
	if ( message.has_lasttrytime() )
	{
		sdata.LastTryTime_ = DBTime(rawDate, DBMilliseconds(message.lasttrytime()) );
	}
	return std::move(sdata);
}



transMsg::GL_UserInfo	ToMessage( const GL_UserInfoImp::SData& sdata )
{
	transMsg::GL_UserInfo message;
	if ( sdata.UserID_ )
	{
		message.set_userid(*sdata.UserID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.ShopID_ )
	{
		message.set_shopid(*sdata.ShopID_);
	}
	if ( sdata.DeptID_ )
	{
		message.set_deptid(*sdata.DeptID_);
	}
	if ( sdata.IsDel_ )
	{
		message.set_isdel(*sdata.IsDel_);
	}
	if ( sdata.RoleID_ )
	{
		message.set_roleid(*sdata.RoleID_);
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
	if ( sdata.UserPwd_ )
	{
		message.set_userpwd(*sdata.UserPwd_);
	}
	if ( sdata.UserCode_ )
	{
		message.set_usercode(*sdata.UserCode_);
	}
	if ( sdata.EncodeStr_ )
	{
		message.set_encodestr(*sdata.EncodeStr_);
	}
	if ( sdata.TrueName_ )
	{
		message.set_truename(*sdata.TrueName_);
	}
	if ( sdata.IDCode_ )
	{
		message.set_idcode(*sdata.IDCode_);
	}
	if ( sdata.QQNum_ )
	{
		message.set_qqnum(*sdata.QQNum_);
	}
	if ( sdata.Email_ )
	{
		message.set_email(*sdata.Email_);
	}
	if ( sdata.Tel_ )
	{
		message.set_tel(*sdata.Tel_);
	}
	if ( sdata.CellPhone_ )
	{
		message.set_cellphone(*sdata.CellPhone_);
	}
	if ( sdata.PostCode_ )
	{
		message.set_postcode(*sdata.PostCode_);
	}
	if ( sdata.ContactAddress_ )
	{
		message.set_contactaddress(*sdata.ContactAddress_);
	}
	if ( sdata.IsActived_ )
	{
		message.set_isactived(*sdata.IsActived_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	return message;
}

::autoDB::GL_UserInfoImp::SData	ToData( const transMsg::GL_UserInfo& message )
{
	GL_UserInfoImp::SData sdata;
	if ( message.has_userid() )
	{
		sdata.UserID_ = message.userid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_shopid() )
	{
		sdata.ShopID_ = message.shopid();
	}
	if ( message.has_deptid() )
	{
		sdata.DeptID_ = message.deptid();
	}
	if ( message.has_isdel() )
	{
		sdata.IsDel_ = message.isdel();
	}
	if ( message.has_roleid() )
	{
		sdata.RoleID_ = message.roleid();
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
	if ( message.has_userpwd() )
	{
		sdata.UserPwd_ = message.userpwd();
	}
	if ( message.has_usercode() )
	{
		sdata.UserCode_ = message.usercode();
	}
	if ( message.has_encodestr() )
	{
		sdata.EncodeStr_ = message.encodestr();
	}
	if ( message.has_truename() )
	{
		sdata.TrueName_ = message.truename();
	}
	if ( message.has_idcode() )
	{
		sdata.IDCode_ = message.idcode();
	}
	if ( message.has_qqnum() )
	{
		sdata.QQNum_ = message.qqnum();
	}
	if ( message.has_email() )
	{
		sdata.Email_ = message.email();
	}
	if ( message.has_tel() )
	{
		sdata.Tel_ = message.tel();
	}
	if ( message.has_cellphone() )
	{
		sdata.CellPhone_ = message.cellphone();
	}
	if ( message.has_postcode() )
	{
		sdata.PostCode_ = message.postcode();
	}
	if ( message.has_contactaddress() )
	{
		sdata.ContactAddress_ = message.contactaddress();
	}
	if ( message.has_isactived() )
	{
		sdata.IsActived_ = message.isactived();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	return std::move(sdata);
}



void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AppVerInfo& toAdd)
{
	package.add_gl_appverinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AppleseedInfo& toAdd)
{
	package.add_gl_appleseedinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AreaGeoMapInfo& toAdd)
{
	package.add_gl_areageomapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_AreaInfo& toAdd)
{
	package.add_gl_areainfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_BaseBoardInfo& toAdd)
{
	package.add_gl_baseboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_ChargeLogInfo& toAdd)
{
	package.add_gl_chargeloginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_DeptInfo& toAdd)
{
	package.add_gl_deptinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_DesignerConfigInfo& toAdd)
{
	package.add_gl_designerconfiginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_GTypeInfo& toAdd)
{
	package.add_gl_gtypeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_GeoCodeInfo& toAdd)
{
	package.add_gl_geocodeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_MajorCateInfo& toAdd)
{
	package.add_gl_majorcateinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_MinorCateInfo& toAdd)
{
	package.add_gl_minorcateinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_MinorGTypeMapInfo& toAdd)
{
	package.add_gl_minorgtypemapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_OrderInfo& toAdd)
{
	package.add_gl_orderinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_PinYin& toAdd)
{
	package.add_gl_pinyin()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_PrepaidCardInfo& toAdd)
{
	package.add_gl_prepaidcardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_PrintTemplateInfo& toAdd)
{
	package.add_gl_printtemplateinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_RoleInfo& toAdd)
{
	package.add_gl_roleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_RoleRightInfo& toAdd)
{
	package.add_gl_rolerightinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_SugarVerInfo& toAdd)
{
	package.add_gl_sugarverinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_TransferOrderInfo& toAdd)
{
	package.add_gl_transferorderinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_UnitInfo& toAdd)
{
	package.add_gl_unitinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_UserActivationInfo& toAdd)
{
	package.add_gl_useractivationinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GL_Table& package, transMsg::GL_UserInfo& toAdd)
{
	package.add_gl_userinfo()->Swap(&toAdd);
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AppVerInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AppVerInfoImp& tableObj)
{
	return *( package.mutable_gl_appverinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AppleseedInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AppleseedInfoImp& tableObj)
{
	return *( package.mutable_gl_appleseedinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AreaGeoMapInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AreaGeoMapInfoImp& tableObj)
{
	return *( package.mutable_gl_areageomapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_AreaInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_AreaInfoImp& tableObj)
{
	return *( package.mutable_gl_areainfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_BaseBoardInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_BaseBoardInfoImp& tableObj)
{
	return *( package.mutable_gl_baseboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_ChargeLogInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_ChargeLogInfoImp& tableObj)
{
	return *( package.mutable_gl_chargeloginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_DeptInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_DeptInfoImp& tableObj)
{
	return *( package.mutable_gl_deptinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_DesignerConfigInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_DesignerConfigInfoImp& tableObj)
{
	return *( package.mutable_gl_designerconfiginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_GTypeInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_GTypeInfoImp& tableObj)
{
	return *( package.mutable_gl_gtypeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_GeoCodeInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_GeoCodeInfoImp& tableObj)
{
	return *( package.mutable_gl_geocodeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_MajorCateInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_MajorCateInfoImp& tableObj)
{
	return *( package.mutable_gl_majorcateinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_MinorCateInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_MinorCateInfoImp& tableObj)
{
	return *( package.mutable_gl_minorcateinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_MinorGTypeMapInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_MinorGTypeMapInfoImp& tableObj)
{
	return *( package.mutable_gl_minorgtypemapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_OrderInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_OrderInfoImp& tableObj)
{
	return *( package.mutable_gl_orderinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_PinYin >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_PinYinImp& tableObj)
{
	return *( package.mutable_gl_pinyin() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrepaidCardInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_PrepaidCardInfoImp& tableObj)
{
	return *( package.mutable_gl_prepaidcardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_PrintTemplateInfoImp& tableObj)
{
	return *( package.mutable_gl_printtemplateinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_RoleInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_RoleInfoImp& tableObj)
{
	return *( package.mutable_gl_roleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_RoleRightInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_RoleRightInfoImp& tableObj)
{
	return *( package.mutable_gl_rolerightinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_SugarVerInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_SugarVerInfoImp& tableObj)
{
	return *( package.mutable_gl_sugarverinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_TransferOrderInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_TransferOrderInfoImp& tableObj)
{
	return *( package.mutable_gl_transferorderinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_UnitInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_UnitInfoImp& tableObj)
{
	return *( package.mutable_gl_unitinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_UserActivationInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_UserActivationInfoImp& tableObj)
{
	return *( package.mutable_gl_useractivationinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GL_UserInfo >&	ExtractFromPack(transMsg::GL_Table& package, autoDB::GL_UserInfoImp& tableObj)
{
	return *( package.mutable_gl_userinfo() );
}


}
