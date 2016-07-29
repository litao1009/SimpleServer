#include"msg-GCUtils.h"

namespace autoDB
{
transMsg::GC_CabBoardGapInfo	ToMessage( const GC_CabBoardGapInfoImp::SData& sdata )
{
	transMsg::GC_CabBoardGapInfo message;
	if ( sdata.CabBoardGapID_ )
	{
		message.set_cabboardgapid(*sdata.CabBoardGapID_);
	}
	if ( sdata.CabBoardID_ )
	{
		message.set_cabboardid(*sdata.CabBoardID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.CabStructBoardGapID_ )
	{
		message.set_cabstructboardgapid(*sdata.CabStructBoardGapID_);
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
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_CabBoardGapInfoImp::SData	ToData( const transMsg::GC_CabBoardGapInfo& message )
{
	GC_CabBoardGapInfoImp::SData sdata;
	if ( message.has_cabboardgapid() )
	{
		sdata.CabBoardGapID_ = message.cabboardgapid();
	}
	if ( message.has_cabboardid() )
	{
		sdata.CabBoardID_ = message.cabboardid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_cabstructboardgapid() )
	{
		sdata.CabStructBoardGapID_ = message.cabstructboardgapid();
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
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_CabBoardInfo	ToMessage( const GC_CabBoardInfoImp::SData& sdata )
{
	transMsg::GC_CabBoardInfo message;
	if ( sdata.CabBoardID_ )
	{
		message.set_cabboardid(*sdata.CabBoardID_);
	}
	if ( sdata.CabID_ )
	{
		message.set_cabid(*sdata.CabID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.CabinetSizeID_ )
	{
		message.set_cabinetsizeid(*sdata.CabinetSizeID_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.CabinetSizeBoardID_ )
	{
		message.set_cabinetsizeboardid(*sdata.CabinetSizeBoardID_);
	}
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
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
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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
	if ( sdata.IsChangedOffset_ )
	{
		message.set_ischangedoffset(*sdata.IsChangedOffset_);
	}
	if ( sdata.IsFakeDel_ )
	{
		message.set_isfakedel(*sdata.IsFakeDel_);
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
	if ( sdata.CabBoardName_ )
	{
		message.set_cabboardname(*sdata.CabBoardName_);
	}
	return message;
}

::autoDB::GC_CabBoardInfoImp::SData	ToData( const transMsg::GC_CabBoardInfo& message )
{
	GC_CabBoardInfoImp::SData sdata;
	if ( message.has_cabboardid() )
	{
		sdata.CabBoardID_ = message.cabboardid();
	}
	if ( message.has_cabid() )
	{
		sdata.CabID_ = message.cabid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_cabinetsizeid() )
	{
		sdata.CabinetSizeID_ = message.cabinetsizeid();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_cabinetsizeboardid() )
	{
		sdata.CabinetSizeBoardID_ = message.cabinetsizeboardid();
	}
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
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
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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
	if ( message.has_ischangedoffset() )
	{
		sdata.IsChangedOffset_ = message.ischangedoffset();
	}
	if ( message.has_isfakedel() )
	{
		sdata.IsFakeDel_ = message.isfakedel();
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
	if ( message.has_cabboardname() )
	{
		sdata.CabBoardName_ = message.cabboardname();
	}
	return std::move(sdata);
}



transMsg::GC_CabBoardSealInfo	ToMessage( const GC_CabBoardSealInfoImp::SData& sdata )
{
	transMsg::GC_CabBoardSealInfo message;
	if ( sdata.CabBoardSealID_ )
	{
		message.set_cabboardsealid(*sdata.CabBoardSealID_);
	}
	if ( sdata.CabBoardID_ )
	{
		message.set_cabboardid(*sdata.CabBoardID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.CabStructBoardSealID_ )
	{
		message.set_cabstructboardsealid(*sdata.CabStructBoardSealID_);
	}
	if ( sdata.CabStructBoardID_ )
	{
		message.set_cabstructboardid(*sdata.CabStructBoardID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.PreMill_ )
	{
		message.set_premill(*sdata.PreMill_);
	}
	return message;
}

::autoDB::GC_CabBoardSealInfoImp::SData	ToData( const transMsg::GC_CabBoardSealInfo& message )
{
	GC_CabBoardSealInfoImp::SData sdata;
	if ( message.has_cabboardsealid() )
	{
		sdata.CabBoardSealID_ = message.cabboardsealid();
	}
	if ( message.has_cabboardid() )
	{
		sdata.CabBoardID_ = message.cabboardid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_cabstructboardsealid() )
	{
		sdata.CabStructBoardSealID_ = message.cabstructboardsealid();
	}
	if ( message.has_cabstructboardid() )
	{
		sdata.CabStructBoardID_ = message.cabstructboardid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_premill() )
	{
		sdata.PreMill_ = message.premill();
	}
	return std::move(sdata);
}



transMsg::GC_CabDoorBoardGapInfo	ToMessage( const GC_CabDoorBoardGapInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorBoardGapInfo message;
	if ( sdata.CabDoorBoardGapID_ )
	{
		message.set_cabdoorboardgapid(*sdata.CabDoorBoardGapID_);
	}
	if ( sdata.CabDoorBoardID_ )
	{
		message.set_cabdoorboardid(*sdata.CabDoorBoardID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DoorBoardGapID_ )
	{
		message.set_doorboardgapid(*sdata.DoorBoardGapID_);
	}
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
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
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_CabDoorBoardGapInfoImp::SData	ToData( const transMsg::GC_CabDoorBoardGapInfo& message )
{
	GC_CabDoorBoardGapInfoImp::SData sdata;
	if ( message.has_cabdoorboardgapid() )
	{
		sdata.CabDoorBoardGapID_ = message.cabdoorboardgapid();
	}
	if ( message.has_cabdoorboardid() )
	{
		sdata.CabDoorBoardID_ = message.cabdoorboardid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_doorboardgapid() )
	{
		sdata.DoorBoardGapID_ = message.doorboardgapid();
	}
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
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
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_CabDoorBoardInfo	ToMessage( const GC_CabDoorBoardInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorBoardInfo message;
	if ( sdata.CabDoorBoardID_ )
	{
		message.set_cabdoorboardid(*sdata.CabDoorBoardID_);
	}
	if ( sdata.CabDoorID_ )
	{
		message.set_cabdoorid(*sdata.CabDoorID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.DoorBoardIndex_ )
	{
		message.set_doorboardindex(*sdata.DoorBoardIndex_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.SkinDirection_ )
	{
		message.set_skindirection(*sdata.SkinDirection_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
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
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_CabDoorBoardInfoImp::SData	ToData( const transMsg::GC_CabDoorBoardInfo& message )
{
	GC_CabDoorBoardInfoImp::SData sdata;
	if ( message.has_cabdoorboardid() )
	{
		sdata.CabDoorBoardID_ = message.cabdoorboardid();
	}
	if ( message.has_cabdoorid() )
	{
		sdata.CabDoorID_ = message.cabdoorid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_doorboardindex() )
	{
		sdata.DoorBoardIndex_ = message.doorboardindex();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_skindirection() )
	{
		sdata.SkinDirection_ = message.skindirection();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
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
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_CabDoorBoardSealInfo	ToMessage( const GC_CabDoorBoardSealInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorBoardSealInfo message;
	if ( sdata.CabDoorBoardSealID_ )
	{
		message.set_cabdoorboardsealid(*sdata.CabDoorBoardSealID_);
	}
	if ( sdata.CabDoorBoardID_ )
	{
		message.set_cabdoorboardid(*sdata.CabDoorBoardID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DoorBoardID_ )
	{
		message.set_doorboardid(*sdata.DoorBoardID_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.PreMill_ )
	{
		message.set_premill(*sdata.PreMill_);
	}
	return message;
}

::autoDB::GC_CabDoorBoardSealInfoImp::SData	ToData( const transMsg::GC_CabDoorBoardSealInfo& message )
{
	GC_CabDoorBoardSealInfoImp::SData sdata;
	if ( message.has_cabdoorboardsealid() )
	{
		sdata.CabDoorBoardSealID_ = message.cabdoorboardsealid();
	}
	if ( message.has_cabdoorboardid() )
	{
		sdata.CabDoorBoardID_ = message.cabdoorboardid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_doorboardid() )
	{
		sdata.DoorBoardID_ = message.doorboardid();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_premill() )
	{
		sdata.PreMill_ = message.premill();
	}
	return std::move(sdata);
}



transMsg::GC_CabDoorHWFInfo	ToMessage( const GC_CabDoorHWFInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorHWFInfo message;
	if ( sdata.CabDoorHWFID_ )
	{
		message.set_cabdoorhwfid(*sdata.CabDoorHWFID_);
	}
	if ( sdata.CabDoorRegionID_ )
	{
		message.set_cabdoorregionid(*sdata.CabDoorRegionID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.SettingCountRuleID_ )
	{
		message.set_settingcountruleid(*sdata.SettingCountRuleID_);
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

::autoDB::GC_CabDoorHWFInfoImp::SData	ToData( const transMsg::GC_CabDoorHWFInfo& message )
{
	GC_CabDoorHWFInfoImp::SData sdata;
	if ( message.has_cabdoorhwfid() )
	{
		sdata.CabDoorHWFID_ = message.cabdoorhwfid();
	}
	if ( message.has_cabdoorregionid() )
	{
		sdata.CabDoorRegionID_ = message.cabdoorregionid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_settingcountruleid() )
	{
		sdata.SettingCountRuleID_ = message.settingcountruleid();
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



transMsg::GC_CabDoorHandleInfo	ToMessage( const GC_CabDoorHandleInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorHandleInfo message;
	if ( sdata.CabDoorHandleID_ )
	{
		message.set_cabdoorhandleid(*sdata.CabDoorHandleID_);
	}
	if ( sdata.CabParentID_ )
	{
		message.set_cabparentid(*sdata.CabParentID_);
	}
	if ( sdata.ParentType_ )
	{
		message.set_parenttype(*sdata.ParentType_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.CabDesignDoorRegionID_ )
	{
		message.set_cabdesigndoorregionid(*sdata.CabDesignDoorRegionID_);
	}
	if ( sdata.CabDesignDoorRegionHandleID_ )
	{
		message.set_cabdesigndoorregionhandleid(*sdata.CabDesignDoorRegionHandleID_);
	}
	if ( sdata.OwnerID_ )
	{
		message.set_ownerid(*sdata.OwnerID_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.HandleID_ )
	{
		message.set_handleid(*sdata.HandleID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.MatchType_ )
	{
		message.set_matchtype(*sdata.MatchType_);
	}
	if ( sdata.IsChangedOffset_ )
	{
		message.set_ischangedoffset(*sdata.IsChangedOffset_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
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
	if ( sdata.RealXLen_ )
	{
		message.set_realxlen(*sdata.RealXLen_);
	}
	if ( sdata.RealYLen_ )
	{
		message.set_realylen(*sdata.RealYLen_);
	}
	if ( sdata.RealZLen_ )
	{
		message.set_realzlen(*sdata.RealZLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
	}
	if ( sdata.ArcZ_ )
	{
		message.set_arcz(*sdata.ArcZ_);
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

::autoDB::GC_CabDoorHandleInfoImp::SData	ToData( const transMsg::GC_CabDoorHandleInfo& message )
{
	GC_CabDoorHandleInfoImp::SData sdata;
	if ( message.has_cabdoorhandleid() )
	{
		sdata.CabDoorHandleID_ = message.cabdoorhandleid();
	}
	if ( message.has_cabparentid() )
	{
		sdata.CabParentID_ = message.cabparentid();
	}
	if ( message.has_parenttype() )
	{
		sdata.ParentType_ = message.parenttype();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_cabdesigndoorregionid() )
	{
		sdata.CabDesignDoorRegionID_ = message.cabdesigndoorregionid();
	}
	if ( message.has_cabdesigndoorregionhandleid() )
	{
		sdata.CabDesignDoorRegionHandleID_ = message.cabdesigndoorregionhandleid();
	}
	if ( message.has_ownerid() )
	{
		sdata.OwnerID_ = message.ownerid();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_handleid() )
	{
		sdata.HandleID_ = message.handleid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_matchtype() )
	{
		sdata.MatchType_ = message.matchtype();
	}
	if ( message.has_ischangedoffset() )
	{
		sdata.IsChangedOffset_ = message.ischangedoffset();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
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
	if ( message.has_realxlen() )
	{
		sdata.RealXLen_ = message.realxlen();
	}
	if ( message.has_realylen() )
	{
		sdata.RealYLen_ = message.realylen();
	}
	if ( message.has_realzlen() )
	{
		sdata.RealZLen_ = message.realzlen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
	}
	if ( message.has_arcz() )
	{
		sdata.ArcZ_ = message.arcz();
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



transMsg::GC_CabDoorInfo	ToMessage( const GC_CabDoorInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorInfo message;
	if ( sdata.CabDoorID_ )
	{
		message.set_cabdoorid(*sdata.CabDoorID_);
	}
	if ( sdata.CabParentID_ )
	{
		message.set_cabparentid(*sdata.CabParentID_);
	}
	if ( sdata.ParentType_ )
	{
		message.set_parenttype(*sdata.ParentType_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OwnerID_ )
	{
		message.set_ownerid(*sdata.OwnerID_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
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
	return message;
}

::autoDB::GC_CabDoorInfoImp::SData	ToData( const transMsg::GC_CabDoorInfo& message )
{
	GC_CabDoorInfoImp::SData sdata;
	if ( message.has_cabdoorid() )
	{
		sdata.CabDoorID_ = message.cabdoorid();
	}
	if ( message.has_cabparentid() )
	{
		sdata.CabParentID_ = message.cabparentid();
	}
	if ( message.has_parenttype() )
	{
		sdata.ParentType_ = message.parenttype();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_ownerid() )
	{
		sdata.OwnerID_ = message.ownerid();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
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
	return std::move(sdata);
}



transMsg::GC_CabDoorRegionInfo	ToMessage( const GC_CabDoorRegionInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorRegionInfo message;
	if ( sdata.CabDoorRegionID_ )
	{
		message.set_cabdoorregionid(*sdata.CabDoorRegionID_);
	}
	if ( sdata.CabDoorSystemID_ )
	{
		message.set_cabdoorsystemid(*sdata.CabDoorSystemID_);
	}
	if ( sdata.ParentCabRegionID_ )
	{
		message.set_parentcabregionid(*sdata.ParentCabRegionID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.CabDesignDoorRegionID_ )
	{
		message.set_cabdesigndoorregionid(*sdata.CabDesignDoorRegionID_);
	}
	if ( sdata.CabDesignDoorSystemID_ )
	{
		message.set_cabdesigndoorsystemid(*sdata.CabDesignDoorSystemID_);
	}
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsUserDefineSize_ )
	{
		message.set_isuserdefinesize(*sdata.IsUserDefineSize_);
	}
	if ( sdata.IsUserDefinePos_ )
	{
		message.set_isuserdefinepos(*sdata.IsUserDefinePos_);
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
	if ( sdata.XAdjustLen_ )
	{
		message.set_xadjustlen(*sdata.XAdjustLen_);
	}
	if ( sdata.YAdjustLen_ )
	{
		message.set_yadjustlen(*sdata.YAdjustLen_);
	}
	if ( sdata.RealXLen_ )
	{
		message.set_realxlen(*sdata.RealXLen_);
	}
	if ( sdata.RealYLen_ )
	{
		message.set_realylen(*sdata.RealYLen_);
	}
	if ( sdata.RealZLen_ )
	{
		message.set_realzlen(*sdata.RealZLen_);
	}
	if ( sdata.CutXLen_ )
	{
		message.set_cutxlen(*sdata.CutXLen_);
	}
	if ( sdata.CutYLen_ )
	{
		message.set_cutylen(*sdata.CutYLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
	}
	if ( sdata.RealXOffsetLen_ )
	{
		message.set_realxoffsetlen(*sdata.RealXOffsetLen_);
	}
	if ( sdata.RealYOffsetLen_ )
	{
		message.set_realyoffsetlen(*sdata.RealYOffsetLen_);
	}
	if ( sdata.RealZOffsetLen_ )
	{
		message.set_realzoffsetlen(*sdata.RealZOffsetLen_);
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

::autoDB::GC_CabDoorRegionInfoImp::SData	ToData( const transMsg::GC_CabDoorRegionInfo& message )
{
	GC_CabDoorRegionInfoImp::SData sdata;
	if ( message.has_cabdoorregionid() )
	{
		sdata.CabDoorRegionID_ = message.cabdoorregionid();
	}
	if ( message.has_cabdoorsystemid() )
	{
		sdata.CabDoorSystemID_ = message.cabdoorsystemid();
	}
	if ( message.has_parentcabregionid() )
	{
		sdata.ParentCabRegionID_ = message.parentcabregionid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_cabdesigndoorregionid() )
	{
		sdata.CabDesignDoorRegionID_ = message.cabdesigndoorregionid();
	}
	if ( message.has_cabdesigndoorsystemid() )
	{
		sdata.CabDesignDoorSystemID_ = message.cabdesigndoorsystemid();
	}
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_isuserdefinesize() )
	{
		sdata.IsUserDefineSize_ = message.isuserdefinesize();
	}
	if ( message.has_isuserdefinepos() )
	{
		sdata.IsUserDefinePos_ = message.isuserdefinepos();
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
	if ( message.has_xadjustlen() )
	{
		sdata.XAdjustLen_ = message.xadjustlen();
	}
	if ( message.has_yadjustlen() )
	{
		sdata.YAdjustLen_ = message.yadjustlen();
	}
	if ( message.has_realxlen() )
	{
		sdata.RealXLen_ = message.realxlen();
	}
	if ( message.has_realylen() )
	{
		sdata.RealYLen_ = message.realylen();
	}
	if ( message.has_realzlen() )
	{
		sdata.RealZLen_ = message.realzlen();
	}
	if ( message.has_cutxlen() )
	{
		sdata.CutXLen_ = message.cutxlen();
	}
	if ( message.has_cutylen() )
	{
		sdata.CutYLen_ = message.cutylen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
	}
	if ( message.has_realxoffsetlen() )
	{
		sdata.RealXOffsetLen_ = message.realxoffsetlen();
	}
	if ( message.has_realyoffsetlen() )
	{
		sdata.RealYOffsetLen_ = message.realyoffsetlen();
	}
	if ( message.has_realzoffsetlen() )
	{
		sdata.RealZOffsetLen_ = message.realzoffsetlen();
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



transMsg::GC_CabDoorSlideInfo	ToMessage( const GC_CabDoorSlideInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorSlideInfo message;
	if ( sdata.CabDoorSlideID_ )
	{
		message.set_cabdoorslideid(*sdata.CabDoorSlideID_);
	}
	if ( sdata.CabDoorRegionID_ )
	{
		message.set_cabdoorregionid(*sdata.CabDoorRegionID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DoorSystemRegionID_ )
	{
		message.set_doorsystemregionid(*sdata.DoorSystemRegionID_);
	}
	if ( sdata.SlideID_ )
	{
		message.set_slideid(*sdata.SlideID_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.SlidePosition_ )
	{
		message.set_slideposition(*sdata.SlidePosition_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
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
	if ( sdata.RealXLen_ )
	{
		message.set_realxlen(*sdata.RealXLen_);
	}
	if ( sdata.RealYLen_ )
	{
		message.set_realylen(*sdata.RealYLen_);
	}
	if ( sdata.RealZLen_ )
	{
		message.set_realzlen(*sdata.RealZLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_CabDoorSlideInfoImp::SData	ToData( const transMsg::GC_CabDoorSlideInfo& message )
{
	GC_CabDoorSlideInfoImp::SData sdata;
	if ( message.has_cabdoorslideid() )
	{
		sdata.CabDoorSlideID_ = message.cabdoorslideid();
	}
	if ( message.has_cabdoorregionid() )
	{
		sdata.CabDoorRegionID_ = message.cabdoorregionid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_doorsystemregionid() )
	{
		sdata.DoorSystemRegionID_ = message.doorsystemregionid();
	}
	if ( message.has_slideid() )
	{
		sdata.SlideID_ = message.slideid();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_slideposition() )
	{
		sdata.SlidePosition_ = message.slideposition();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
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
	if ( message.has_realxlen() )
	{
		sdata.RealXLen_ = message.realxlen();
	}
	if ( message.has_realylen() )
	{
		sdata.RealYLen_ = message.realylen();
	}
	if ( message.has_realzlen() )
	{
		sdata.RealZLen_ = message.realzlen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_CabDoorSystemInfo	ToMessage( const GC_CabDoorSystemInfoImp::SData& sdata )
{
	transMsg::GC_CabDoorSystemInfo message;
	if ( sdata.CabDoorSystemID_ )
	{
		message.set_cabdoorsystemid(*sdata.CabDoorSystemID_);
	}
	if ( sdata.CabID_ )
	{
		message.set_cabid(*sdata.CabID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.CabDesignDoorSystemID_ )
	{
		message.set_cabdesigndoorsystemid(*sdata.CabDesignDoorSystemID_);
	}
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.DoorSystemID_ )
	{
		message.set_doorsystemid(*sdata.DoorSystemID_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.IsFakeDel_ )
	{
		message.set_isfakedel(*sdata.IsFakeDel_);
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
	if ( sdata.XAdjustLen_ )
	{
		message.set_xadjustlen(*sdata.XAdjustLen_);
	}
	if ( sdata.YAdjustLen_ )
	{
		message.set_yadjustlen(*sdata.YAdjustLen_);
	}
	if ( sdata.RealXLen_ )
	{
		message.set_realxlen(*sdata.RealXLen_);
	}
	if ( sdata.RealYLen_ )
	{
		message.set_realylen(*sdata.RealYLen_);
	}
	if ( sdata.RealZLen_ )
	{
		message.set_realzlen(*sdata.RealZLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
	}
	if ( sdata.RealXOffsetLen_ )
	{
		message.set_realxoffsetlen(*sdata.RealXOffsetLen_);
	}
	if ( sdata.RealYOffsetLen_ )
	{
		message.set_realyoffsetlen(*sdata.RealYOffsetLen_);
	}
	if ( sdata.RealZOffsetLen_ )
	{
		message.set_realzoffsetlen(*sdata.RealZOffsetLen_);
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

::autoDB::GC_CabDoorSystemInfoImp::SData	ToData( const transMsg::GC_CabDoorSystemInfo& message )
{
	GC_CabDoorSystemInfoImp::SData sdata;
	if ( message.has_cabdoorsystemid() )
	{
		sdata.CabDoorSystemID_ = message.cabdoorsystemid();
	}
	if ( message.has_cabid() )
	{
		sdata.CabID_ = message.cabid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_cabdesigndoorsystemid() )
	{
		sdata.CabDesignDoorSystemID_ = message.cabdesigndoorsystemid();
	}
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_doorsystemid() )
	{
		sdata.DoorSystemID_ = message.doorsystemid();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_isfakedel() )
	{
		sdata.IsFakeDel_ = message.isfakedel();
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
	if ( message.has_xadjustlen() )
	{
		sdata.XAdjustLen_ = message.xadjustlen();
	}
	if ( message.has_yadjustlen() )
	{
		sdata.YAdjustLen_ = message.yadjustlen();
	}
	if ( message.has_realxlen() )
	{
		sdata.RealXLen_ = message.realxlen();
	}
	if ( message.has_realylen() )
	{
		sdata.RealYLen_ = message.realylen();
	}
	if ( message.has_realzlen() )
	{
		sdata.RealZLen_ = message.realzlen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
	}
	if ( message.has_realxoffsetlen() )
	{
		sdata.RealXOffsetLen_ = message.realxoffsetlen();
	}
	if ( message.has_realyoffsetlen() )
	{
		sdata.RealYOffsetLen_ = message.realyoffsetlen();
	}
	if ( message.has_realzoffsetlen() )
	{
		sdata.RealZOffsetLen_ = message.realzoffsetlen();
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



transMsg::GC_CabFNFHWFInfo	ToMessage( const GC_CabFNFHWFInfoImp::SData& sdata )
{
	transMsg::GC_CabFNFHWFInfo message;
	if ( sdata.CabFNFHWFID_ )
	{
		message.set_cabfnfhwfid(*sdata.CabFNFHWFID_);
	}
	if ( sdata.CabFNFID_ )
	{
		message.set_cabfnfid(*sdata.CabFNFID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.FittingType_ )
	{
		message.set_fittingtype(*sdata.FittingType_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsFakeDel_ )
	{
		message.set_isfakedel(*sdata.IsFakeDel_);
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

::autoDB::GC_CabFNFHWFInfoImp::SData	ToData( const transMsg::GC_CabFNFHWFInfo& message )
{
	GC_CabFNFHWFInfoImp::SData sdata;
	if ( message.has_cabfnfhwfid() )
	{
		sdata.CabFNFHWFID_ = message.cabfnfhwfid();
	}
	if ( message.has_cabfnfid() )
	{
		sdata.CabFNFID_ = message.cabfnfid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_fittingtype() )
	{
		sdata.FittingType_ = message.fittingtype();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_isfakedel() )
	{
		sdata.IsFakeDel_ = message.isfakedel();
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



transMsg::GC_CabFNFHoleInfo	ToMessage( const GC_CabFNFHoleInfoImp::SData& sdata )
{
	transMsg::GC_CabFNFHoleInfo message;
	if ( sdata.CabFNFHoleID_ )
	{
		message.set_cabfnfholeid(*sdata.CabFNFHoleID_);
	}
	if ( sdata.CabFNFID_ )
	{
		message.set_cabfnfid(*sdata.CabFNFID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.HoleID_ )
	{
		message.set_holeid(*sdata.HoleID_);
	}
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.HoleTypeID_ )
	{
		message.set_holetypeid(*sdata.HoleTypeID_);
	}
	if ( sdata.HolePicID_ )
	{
		message.set_holepicid(*sdata.HolePicID_);
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
	if ( sdata.MinXDistance_ )
	{
		message.set_minxdistance(*sdata.MinXDistance_);
	}
	if ( sdata.MinZDistance_ )
	{
		message.set_minzdistance(*sdata.MinZDistance_);
	}
	return message;
}

::autoDB::GC_CabFNFHoleInfoImp::SData	ToData( const transMsg::GC_CabFNFHoleInfo& message )
{
	GC_CabFNFHoleInfoImp::SData sdata;
	if ( message.has_cabfnfholeid() )
	{
		sdata.CabFNFHoleID_ = message.cabfnfholeid();
	}
	if ( message.has_cabfnfid() )
	{
		sdata.CabFNFID_ = message.cabfnfid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_holeid() )
	{
		sdata.HoleID_ = message.holeid();
	}
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_holetypeid() )
	{
		sdata.HoleTypeID_ = message.holetypeid();
	}
	if ( message.has_holepicid() )
	{
		sdata.HolePicID_ = message.holepicid();
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
	if ( message.has_minxdistance() )
	{
		sdata.MinXDistance_ = message.minxdistance();
	}
	if ( message.has_minzdistance() )
	{
		sdata.MinZDistance_ = message.minzdistance();
	}
	return std::move(sdata);
}



transMsg::GC_CabFNFInfo	ToMessage( const GC_CabFNFInfoImp::SData& sdata )
{
	transMsg::GC_CabFNFInfo message;
	if ( sdata.CabFNFID_ )
	{
		message.set_cabfnfid(*sdata.CabFNFID_);
	}
	if ( sdata.DesignOwnerID_ )
	{
		message.set_designownerid(*sdata.DesignOwnerID_);
	}
	if ( sdata.DesignOwnerGTypeID_ )
	{
		message.set_designownergtypeid(*sdata.DesignOwnerGTypeID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.ContainerID_ )
	{
		message.set_containerid(*sdata.ContainerID_);
	}
	if ( sdata.ContainerGTypeID_ )
	{
		message.set_containergtypeid(*sdata.ContainerGTypeID_);
	}
	if ( sdata.CabDesignFNFittingID_ )
	{
		message.set_cabdesignfnfittingid(*sdata.CabDesignFNFittingID_);
	}
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsFakeDel_ )
	{
		message.set_isfakedel(*sdata.IsFakeDel_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
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
	if ( sdata.RealXLen_ )
	{
		message.set_realxlen(*sdata.RealXLen_);
	}
	if ( sdata.RealYLen_ )
	{
		message.set_realylen(*sdata.RealYLen_);
	}
	if ( sdata.RealZLen_ )
	{
		message.set_realzlen(*sdata.RealZLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
	}
	if ( sdata.YPos_ )
	{
		message.set_ypos(*sdata.YPos_);
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
	if ( sdata.UserMemo_ )
	{
		message.set_usermemo(*sdata.UserMemo_);
	}
	return message;
}

::autoDB::GC_CabFNFInfoImp::SData	ToData( const transMsg::GC_CabFNFInfo& message )
{
	GC_CabFNFInfoImp::SData sdata;
	if ( message.has_cabfnfid() )
	{
		sdata.CabFNFID_ = message.cabfnfid();
	}
	if ( message.has_designownerid() )
	{
		sdata.DesignOwnerID_ = message.designownerid();
	}
	if ( message.has_designownergtypeid() )
	{
		sdata.DesignOwnerGTypeID_ = message.designownergtypeid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_containerid() )
	{
		sdata.ContainerID_ = message.containerid();
	}
	if ( message.has_containergtypeid() )
	{
		sdata.ContainerGTypeID_ = message.containergtypeid();
	}
	if ( message.has_cabdesignfnfittingid() )
	{
		sdata.CabDesignFNFittingID_ = message.cabdesignfnfittingid();
	}
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isfakedel() )
	{
		sdata.IsFakeDel_ = message.isfakedel();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
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
	if ( message.has_realxlen() )
	{
		sdata.RealXLen_ = message.realxlen();
	}
	if ( message.has_realylen() )
	{
		sdata.RealYLen_ = message.realylen();
	}
	if ( message.has_realzlen() )
	{
		sdata.RealZLen_ = message.realzlen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
	}
	if ( message.has_ypos() )
	{
		sdata.YPos_ = message.ypos();
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
	if ( message.has_usermemo() )
	{
		sdata.UserMemo_ = message.usermemo();
	}
	return std::move(sdata);
}



transMsg::GC_CabFNFPartInfo	ToMessage( const GC_CabFNFPartInfoImp::SData& sdata )
{
	transMsg::GC_CabFNFPartInfo message;
	if ( sdata.CabFNFPartID_ )
	{
		message.set_cabfnfpartid(*sdata.CabFNFPartID_);
	}
	if ( sdata.CabFNFID_ )
	{
		message.set_cabfnfid(*sdata.CabFNFID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FNFittingPartID_ )
	{
		message.set_fnfittingpartid(*sdata.FNFittingPartID_);
	}
	if ( sdata.FNFittingID_ )
	{
		message.set_fnfittingid(*sdata.FNFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
	}
	if ( sdata.PartType_ )
	{
		message.set_parttype(*sdata.PartType_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
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
	if ( sdata.RealXLen_ )
	{
		message.set_realxlen(*sdata.RealXLen_);
	}
	if ( sdata.RealYLen_ )
	{
		message.set_realylen(*sdata.RealYLen_);
	}
	if ( sdata.RealZLen_ )
	{
		message.set_realzlen(*sdata.RealZLen_);
	}
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_CabFNFPartInfoImp::SData	ToData( const transMsg::GC_CabFNFPartInfo& message )
{
	GC_CabFNFPartInfoImp::SData sdata;
	if ( message.has_cabfnfpartid() )
	{
		sdata.CabFNFPartID_ = message.cabfnfpartid();
	}
	if ( message.has_cabfnfid() )
	{
		sdata.CabFNFID_ = message.cabfnfid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_fnfittingpartid() )
	{
		sdata.FNFittingPartID_ = message.fnfittingpartid();
	}
	if ( message.has_fnfittingid() )
	{
		sdata.FNFittingID_ = message.fnfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
	}
	if ( message.has_parttype() )
	{
		sdata.PartType_ = message.parttype();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
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
	if ( message.has_realxlen() )
	{
		sdata.RealXLen_ = message.realxlen();
	}
	if ( message.has_realylen() )
	{
		sdata.RealYLen_ = message.realylen();
	}
	if ( message.has_realzlen() )
	{
		sdata.RealZLen_ = message.realzlen();
	}
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_CabFNFPartSealInfo	ToMessage( const GC_CabFNFPartSealInfoImp::SData& sdata )
{
	transMsg::GC_CabFNFPartSealInfo message;
	if ( sdata.CabFNFPartSealID_ )
	{
		message.set_cabfnfpartsealid(*sdata.CabFNFPartSealID_);
	}
	if ( sdata.CabFNFPartID_ )
	{
		message.set_cabfnfpartid(*sdata.CabFNFPartID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FNFittingPartID_ )
	{
		message.set_fnfittingpartid(*sdata.FNFittingPartID_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.PreMill_ )
	{
		message.set_premill(*sdata.PreMill_);
	}
	return message;
}

::autoDB::GC_CabFNFPartSealInfoImp::SData	ToData( const transMsg::GC_CabFNFPartSealInfo& message )
{
	GC_CabFNFPartSealInfoImp::SData sdata;
	if ( message.has_cabfnfpartsealid() )
	{
		sdata.CabFNFPartSealID_ = message.cabfnfpartsealid();
	}
	if ( message.has_cabfnfpartid() )
	{
		sdata.CabFNFPartID_ = message.cabfnfpartid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_fnfittingpartid() )
	{
		sdata.FNFittingPartID_ = message.fnfittingpartid();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_premill() )
	{
		sdata.PreMill_ = message.premill();
	}
	return std::move(sdata);
}



transMsg::GC_CabInfo	ToMessage( const GC_CabInfoImp::SData& sdata )
{
	transMsg::GC_CabInfo message;
	if ( sdata.CabID_ )
	{
		message.set_cabid(*sdata.CabID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.CabDesignID_ )
	{
		message.set_cabdesignid(*sdata.CabDesignID_);
	}
	if ( sdata.CabinetSizeID_ )
	{
		message.set_cabinetsizeid(*sdata.CabinetSizeID_);
	}
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
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
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
	if ( sdata.YPos_ )
	{
		message.set_ypos(*sdata.YPos_);
	}
	if ( sdata.FootID_ )
	{
		message.set_footid(*sdata.FootID_);
	}
	if ( sdata.FootCount_ )
	{
		message.set_footcount(*sdata.FootCount_);
	}
	if ( sdata.FootYLen_ )
	{
		message.set_footylen(*sdata.FootYLen_);
	}
	if ( sdata.IsStandard_ )
	{
		message.set_isstandard(*sdata.IsStandard_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
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

::autoDB::GC_CabInfoImp::SData	ToData( const transMsg::GC_CabInfo& message )
{
	GC_CabInfoImp::SData sdata;
	if ( message.has_cabid() )
	{
		sdata.CabID_ = message.cabid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_cabdesignid() )
	{
		sdata.CabDesignID_ = message.cabdesignid();
	}
	if ( message.has_cabinetsizeid() )
	{
		sdata.CabinetSizeID_ = message.cabinetsizeid();
	}
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
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
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
	if ( message.has_ypos() )
	{
		sdata.YPos_ = message.ypos();
	}
	if ( message.has_footid() )
	{
		sdata.FootID_ = message.footid();
	}
	if ( message.has_footcount() )
	{
		sdata.FootCount_ = message.footcount();
	}
	if ( message.has_footylen() )
	{
		sdata.FootYLen_ = message.footylen();
	}
	if ( message.has_isstandard() )
	{
		sdata.IsStandard_ = message.isstandard();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
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



transMsg::GC_DecorBoardInfo	ToMessage( const GC_DecorBoardInfoImp::SData& sdata )
{
	transMsg::GC_DecorBoardInfo message;
	if ( sdata.DesignDecorBoardID_ )
	{
		message.set_designdecorboardid(*sdata.DesignDecorBoardID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DesignParentID_ )
	{
		message.set_designparentid(*sdata.DesignParentID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DecorBoardID_ )
	{
		message.set_decorboardid(*sdata.DecorBoardID_);
	}
	if ( sdata.DecorParentID_ )
	{
		message.set_decorparentid(*sdata.DecorParentID_);
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
	if ( sdata.GroupIndex_ )
	{
		message.set_groupindex(*sdata.GroupIndex_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.IsAutoFit_ )
	{
		message.set_isautofit(*sdata.IsAutoFit_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.IsChangedSize_ )
	{
		message.set_ischangedsize(*sdata.IsChangedSize_);
	}
	if ( sdata.IsDragIn_ )
	{
		message.set_isdragin(*sdata.IsDragIn_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.TargetType_ )
	{
		message.set_targettype(*sdata.TargetType_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.ModelID_ )
	{
		message.set_modelid(*sdata.ModelID_);
	}
	if ( sdata.YPos_ )
	{
		message.set_ypos(*sdata.YPos_);
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
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_DecorBoardInfoImp::SData	ToData( const transMsg::GC_DecorBoardInfo& message )
{
	GC_DecorBoardInfoImp::SData sdata;
	if ( message.has_designdecorboardid() )
	{
		sdata.DesignDecorBoardID_ = message.designdecorboardid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_designparentid() )
	{
		sdata.DesignParentID_ = message.designparentid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_decorboardid() )
	{
		sdata.DecorBoardID_ = message.decorboardid();
	}
	if ( message.has_decorparentid() )
	{
		sdata.DecorParentID_ = message.decorparentid();
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
	if ( message.has_groupindex() )
	{
		sdata.GroupIndex_ = message.groupindex();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_isautofit() )
	{
		sdata.IsAutoFit_ = message.isautofit();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_ischangedsize() )
	{
		sdata.IsChangedSize_ = message.ischangedsize();
	}
	if ( message.has_isdragin() )
	{
		sdata.IsDragIn_ = message.isdragin();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_targettype() )
	{
		sdata.TargetType_ = message.targettype();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_modelid() )
	{
		sdata.ModelID_ = message.modelid();
	}
	if ( message.has_ypos() )
	{
		sdata.YPos_ = message.ypos();
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
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_DecorBoardUnitInfo	ToMessage( const GC_DecorBoardUnitInfoImp::SData& sdata )
{
	transMsg::GC_DecorBoardUnitInfo message;
	if ( sdata.DesignDecorBoardUnitID_ )
	{
		message.set_designdecorboardunitid(*sdata.DesignDecorBoardUnitID_);
	}
	if ( sdata.DesignDecorBoardID_ )
	{
		message.set_designdecorboardid(*sdata.DesignDecorBoardID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DecorBoardUnitID_ )
	{
		message.set_decorboardunitid(*sdata.DecorBoardUnitID_);
	}
	if ( sdata.DecorBoardID_ )
	{
		message.set_decorboardid(*sdata.DecorBoardID_);
	}
	if ( sdata.DecorBoardUnitIndex_ )
	{
		message.set_decorboardunitindex(*sdata.DecorBoardUnitIndex_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsUseDoor_ )
	{
		message.set_isusedoor(*sdata.IsUseDoor_);
	}
	if ( sdata.DoorMatPlanID_ )
	{
		message.set_doormatplanid(*sdata.DoorMatPlanID_);
	}
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.DoorID_ )
	{
		message.set_doorid(*sdata.DoorID_);
	}
	if ( sdata.TargetType_ )
	{
		message.set_targettype(*sdata.TargetType_);
	}
	if ( sdata.MatID_ )
	{
		message.set_matid(*sdata.MatID_);
	}
	if ( sdata.MatGType_ )
	{
		message.set_matgtype(*sdata.MatGType_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.SealRuleID_ )
	{
		message.set_sealruleid(*sdata.SealRuleID_);
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
	if ( sdata.XOffsetLen_ )
	{
		message.set_xoffsetlen(*sdata.XOffsetLen_);
	}
	if ( sdata.YOffsetLen_ )
	{
		message.set_yoffsetlen(*sdata.YOffsetLen_);
	}
	if ( sdata.ZOffsetLen_ )
	{
		message.set_zoffsetlen(*sdata.ZOffsetLen_);
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

::autoDB::GC_DecorBoardUnitInfoImp::SData	ToData( const transMsg::GC_DecorBoardUnitInfo& message )
{
	GC_DecorBoardUnitInfoImp::SData sdata;
	if ( message.has_designdecorboardunitid() )
	{
		sdata.DesignDecorBoardUnitID_ = message.designdecorboardunitid();
	}
	if ( message.has_designdecorboardid() )
	{
		sdata.DesignDecorBoardID_ = message.designdecorboardid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_decorboardunitid() )
	{
		sdata.DecorBoardUnitID_ = message.decorboardunitid();
	}
	if ( message.has_decorboardid() )
	{
		sdata.DecorBoardID_ = message.decorboardid();
	}
	if ( message.has_decorboardunitindex() )
	{
		sdata.DecorBoardUnitIndex_ = message.decorboardunitindex();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_isusedoor() )
	{
		sdata.IsUseDoor_ = message.isusedoor();
	}
	if ( message.has_doormatplanid() )
	{
		sdata.DoorMatPlanID_ = message.doormatplanid();
	}
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_doorid() )
	{
		sdata.DoorID_ = message.doorid();
	}
	if ( message.has_targettype() )
	{
		sdata.TargetType_ = message.targettype();
	}
	if ( message.has_matid() )
	{
		sdata.MatID_ = message.matid();
	}
	if ( message.has_matgtype() )
	{
		sdata.MatGType_ = message.matgtype();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_sealruleid() )
	{
		sdata.SealRuleID_ = message.sealruleid();
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
	if ( message.has_xoffsetlen() )
	{
		sdata.XOffsetLen_ = message.xoffsetlen();
	}
	if ( message.has_yoffsetlen() )
	{
		sdata.YOffsetLen_ = message.yoffsetlen();
	}
	if ( message.has_zoffsetlen() )
	{
		sdata.ZOffsetLen_ = message.zoffsetlen();
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



transMsg::GC_DecorBoardUnitSealInfo	ToMessage( const GC_DecorBoardUnitSealInfoImp::SData& sdata )
{
	transMsg::GC_DecorBoardUnitSealInfo message;
	if ( sdata.DesignDecorBoardUnitSealID_ )
	{
		message.set_designdecorboardunitsealid(*sdata.DesignDecorBoardUnitSealID_);
	}
	if ( sdata.DesignDecorBoardUnitID_ )
	{
		message.set_designdecorboardunitid(*sdata.DesignDecorBoardUnitID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.DecorBoardUnitID_ )
	{
		message.set_decorboardunitid(*sdata.DecorBoardUnitID_);
	}
	if ( sdata.DecorBoardUnitSealID_ )
	{
		message.set_decorboardunitsealid(*sdata.DecorBoardUnitSealID_);
	}
	if ( sdata.SealIndex_ )
	{
		message.set_sealindex(*sdata.SealIndex_);
	}
	if ( sdata.SealType_ )
	{
		message.set_sealtype(*sdata.SealType_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.PreMill_ )
	{
		message.set_premill(*sdata.PreMill_);
	}
	return message;
}

::autoDB::GC_DecorBoardUnitSealInfoImp::SData	ToData( const transMsg::GC_DecorBoardUnitSealInfo& message )
{
	GC_DecorBoardUnitSealInfoImp::SData sdata;
	if ( message.has_designdecorboardunitsealid() )
	{
		sdata.DesignDecorBoardUnitSealID_ = message.designdecorboardunitsealid();
	}
	if ( message.has_designdecorboardunitid() )
	{
		sdata.DesignDecorBoardUnitID_ = message.designdecorboardunitid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_decorboardunitid() )
	{
		sdata.DecorBoardUnitID_ = message.decorboardunitid();
	}
	if ( message.has_decorboardunitsealid() )
	{
		sdata.DecorBoardUnitSealID_ = message.decorboardunitsealid();
	}
	if ( message.has_sealindex() )
	{
		sdata.SealIndex_ = message.sealindex();
	}
	if ( message.has_sealtype() )
	{
		sdata.SealType_ = message.sealtype();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_premill() )
	{
		sdata.PreMill_ = message.premill();
	}
	return std::move(sdata);
}



transMsg::GC_DecorInfo	ToMessage( const GC_DecorInfoImp::SData& sdata )
{
	transMsg::GC_DecorInfo message;
	if ( sdata.DesignDecorID_ )
	{
		message.set_designdecorid(*sdata.DesignDecorID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DecorID_ )
	{
		message.set_decorid(*sdata.DecorID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
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
	if ( sdata.YPos_ )
	{
		message.set_ypos(*sdata.YPos_);
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

::autoDB::GC_DecorInfoImp::SData	ToData( const transMsg::GC_DecorInfo& message )
{
	GC_DecorInfoImp::SData sdata;
	if ( message.has_designdecorid() )
	{
		sdata.DesignDecorID_ = message.designdecorid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_decorid() )
	{
		sdata.DecorID_ = message.decorid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
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
	if ( message.has_ypos() )
	{
		sdata.YPos_ = message.ypos();
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



transMsg::GC_DecorLineInfo	ToMessage( const GC_DecorLineInfoImp::SData& sdata )
{
	transMsg::GC_DecorLineInfo message;
	if ( sdata.DesignDecorLineID_ )
	{
		message.set_designdecorlineid(*sdata.DesignDecorLineID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DecorLineID_ )
	{
		message.set_decorlineid(*sdata.DecorLineID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
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
	return message;
}

::autoDB::GC_DecorLineInfoImp::SData	ToData( const transMsg::GC_DecorLineInfo& message )
{
	GC_DecorLineInfoImp::SData sdata;
	if ( message.has_designdecorlineid() )
	{
		sdata.DesignDecorLineID_ = message.designdecorlineid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_decorlineid() )
	{
		sdata.DecorLineID_ = message.decorlineid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
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
	return std::move(sdata);
}



transMsg::GC_DesignPlanInfo	ToMessage( const GC_DesignPlanInfoImp::SData& sdata )
{
	transMsg::GC_DesignPlanInfo message;
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.CurScale_ )
	{
		message.set_curscale(*sdata.CurScale_);
	}
	if ( sdata.IsActive_ )
	{
		message.set_isactive(*sdata.IsActive_);
	}
	if ( sdata.SkyDecorID_ )
	{
		message.set_skydecorid(*sdata.SkyDecorID_);
	}
	if ( sdata.FloorDecorID_ )
	{
		message.set_floordecorid(*sdata.FloorDecorID_);
	}
	if ( sdata.WallDecorID_ )
	{
		message.set_walldecorid(*sdata.WallDecorID_);
	}
	if ( sdata.DesignerID_ )
	{
		message.set_designerid(*sdata.DesignerID_);
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
	if ( sdata.DesignPlanName_ )
	{
		message.set_designplanname(*sdata.DesignPlanName_);
	}
	if ( sdata.DesignPlanMemo_ )
	{
		message.set_designplanmemo(*sdata.DesignPlanMemo_);
	}
	return message;
}

::autoDB::GC_DesignPlanInfoImp::SData	ToData( const transMsg::GC_DesignPlanInfo& message )
{
	GC_DesignPlanInfoImp::SData sdata;
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_curscale() )
	{
		sdata.CurScale_ = message.curscale();
	}
	if ( message.has_isactive() )
	{
		sdata.IsActive_ = message.isactive();
	}
	if ( message.has_skydecorid() )
	{
		sdata.SkyDecorID_ = message.skydecorid();
	}
	if ( message.has_floordecorid() )
	{
		sdata.FloorDecorID_ = message.floordecorid();
	}
	if ( message.has_walldecorid() )
	{
		sdata.WallDecorID_ = message.walldecorid();
	}
	if ( message.has_designerid() )
	{
		sdata.DesignerID_ = message.designerid();
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
	if ( message.has_designplanname() )
	{
		sdata.DesignPlanName_ = message.designplanname();
	}
	if ( message.has_designplanmemo() )
	{
		sdata.DesignPlanMemo_ = message.designplanmemo();
	}
	return std::move(sdata);
}



transMsg::GC_FittingInfo	ToMessage( const GC_FittingInfoImp::SData& sdata )
{
	transMsg::GC_FittingInfo message;
	if ( sdata.DesignFittingID_ )
	{
		message.set_designfittingid(*sdata.DesignFittingID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.FittingID_ )
	{
		message.set_fittingid(*sdata.FittingID_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.FittingCount_ )
	{
		message.set_fittingcount(*sdata.FittingCount_);
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

::autoDB::GC_FittingInfoImp::SData	ToData( const transMsg::GC_FittingInfo& message )
{
	GC_FittingInfoImp::SData sdata;
	if ( message.has_designfittingid() )
	{
		sdata.DesignFittingID_ = message.designfittingid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_fittingid() )
	{
		sdata.FittingID_ = message.fittingid();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_fittingcount() )
	{
		sdata.FittingCount_ = message.fittingcount();
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



transMsg::GC_HWFInfo	ToMessage( const GC_HWFInfoImp::SData& sdata )
{
	transMsg::GC_HWFInfo message;
	if ( sdata.DesignHWFID_ )
	{
		message.set_designhwfid(*sdata.DesignHWFID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.HWFittingID_ )
	{
		message.set_hwfittingid(*sdata.HWFittingID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
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

::autoDB::GC_HWFInfoImp::SData	ToData( const transMsg::GC_HWFInfo& message )
{
	GC_HWFInfoImp::SData sdata;
	if ( message.has_designhwfid() )
	{
		sdata.DesignHWFID_ = message.designhwfid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_hwfittingid() )
	{
		sdata.HWFittingID_ = message.hwfittingid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
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



transMsg::GC_MarkInfo	ToMessage( const GC_MarkInfoImp::SData& sdata )
{
	transMsg::GC_MarkInfo message;
	if ( sdata.DesignMarkID_ )
	{
		message.set_designmarkid(*sdata.DesignMarkID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.PrintID_ )
	{
		message.set_printid(*sdata.PrintID_);
	}
	if ( sdata.ViewType_ )
	{
		message.set_viewtype(*sdata.ViewType_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.MarkType_ )
	{
		message.set_marktype(*sdata.MarkType_);
	}
	if ( sdata.FontSize_ )
	{
		message.set_fontsize(*sdata.FontSize_);
	}
	if ( sdata.StartX_ )
	{
		message.set_startx(*sdata.StartX_);
	}
	if ( sdata.StartY_ )
	{
		message.set_starty(*sdata.StartY_);
	}
	if ( sdata.OffsetX_ )
	{
		message.set_offsetx(*sdata.OffsetX_);
	}
	if ( sdata.OffsetY_ )
	{
		message.set_offsety(*sdata.OffsetY_);
	}
	if ( sdata.StopX_ )
	{
		message.set_stopx(*sdata.StopX_);
	}
	if ( sdata.StopY_ )
	{
		message.set_stopy(*sdata.StopY_);
	}
	if ( sdata.TopLeftX_ )
	{
		message.set_topleftx(*sdata.TopLeftX_);
	}
	if ( sdata.TopLeftY_ )
	{
		message.set_toplefty(*sdata.TopLeftY_);
	}
	if ( sdata.Width_ )
	{
		message.set_width(*sdata.Width_);
	}
	if ( sdata.Height_ )
	{
		message.set_height(*sdata.Height_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.EditSign_ )
	{
		message.set_editsign(*sdata.EditSign_);
	}
	if ( sdata.StrickOut_ )
	{
		message.set_strickout(*sdata.StrickOut_);
	}
	if ( sdata.UnderLine_ )
	{
		message.set_underline(*sdata.UnderLine_);
	}
	if ( sdata.Italic_ )
	{
		message.set_italic(*sdata.Italic_);
	}
	if ( sdata.Bold_ )
	{
		message.set_bold(*sdata.Bold_);
	}
	if ( sdata.BGColor_ )
	{
		message.set_bgcolor(*sdata.BGColor_);
	}
	if ( sdata.FontColor_ )
	{
		message.set_fontcolor(*sdata.FontColor_);
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
	if ( sdata.FaceName_ )
	{
		message.set_facename(*sdata.FaceName_);
	}
	if ( sdata.RemarkText_ )
	{
		message.set_remarktext(*sdata.RemarkText_);
	}
	return message;
}

::autoDB::GC_MarkInfoImp::SData	ToData( const transMsg::GC_MarkInfo& message )
{
	GC_MarkInfoImp::SData sdata;
	if ( message.has_designmarkid() )
	{
		sdata.DesignMarkID_ = message.designmarkid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_printid() )
	{
		sdata.PrintID_ = message.printid();
	}
	if ( message.has_viewtype() )
	{
		sdata.ViewType_ = message.viewtype();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_marktype() )
	{
		sdata.MarkType_ = message.marktype();
	}
	if ( message.has_fontsize() )
	{
		sdata.FontSize_ = message.fontsize();
	}
	if ( message.has_startx() )
	{
		sdata.StartX_ = message.startx();
	}
	if ( message.has_starty() )
	{
		sdata.StartY_ = message.starty();
	}
	if ( message.has_offsetx() )
	{
		sdata.OffsetX_ = message.offsetx();
	}
	if ( message.has_offsety() )
	{
		sdata.OffsetY_ = message.offsety();
	}
	if ( message.has_stopx() )
	{
		sdata.StopX_ = message.stopx();
	}
	if ( message.has_stopy() )
	{
		sdata.StopY_ = message.stopy();
	}
	if ( message.has_topleftx() )
	{
		sdata.TopLeftX_ = message.topleftx();
	}
	if ( message.has_toplefty() )
	{
		sdata.TopLeftY_ = message.toplefty();
	}
	if ( message.has_width() )
	{
		sdata.Width_ = message.width();
	}
	if ( message.has_height() )
	{
		sdata.Height_ = message.height();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_editsign() )
	{
		sdata.EditSign_ = message.editsign();
	}
	if ( message.has_strickout() )
	{
		sdata.StrickOut_ = message.strickout();
	}
	if ( message.has_underline() )
	{
		sdata.UnderLine_ = message.underline();
	}
	if ( message.has_italic() )
	{
		sdata.Italic_ = message.italic();
	}
	if ( message.has_bold() )
	{
		sdata.Bold_ = message.bold();
	}
	if ( message.has_bgcolor() )
	{
		sdata.BGColor_ = message.bgcolor();
	}
	if ( message.has_fontcolor() )
	{
		sdata.FontColor_ = message.fontcolor();
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
	if ( message.has_facename() )
	{
		sdata.FaceName_ = message.facename();
	}
	if ( message.has_remarktext() )
	{
		sdata.RemarkText_ = message.remarktext();
	}
	return std::move(sdata);
}



transMsg::GC_MatrixInfo	ToMessage( const GC_MatrixInfoImp::SData& sdata )
{
	transMsg::GC_MatrixInfo message;
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.TransObjID_ )
	{
		message.set_transobjid(*sdata.TransObjID_);
	}
	if ( sdata.TransObjType_ )
	{
		message.set_transobjtype(*sdata.TransObjType_);
	}
	if ( sdata.MajorCurSel_ )
	{
		message.set_majorcursel(*sdata.MajorCurSel_);
	}
	if ( sdata.MinorCurSel_ )
	{
		message.set_minorcursel(*sdata.MinorCurSel_);
	}
	if ( sdata.MatCurIndex_ )
	{
		message.set_matcurindex(*sdata.MatCurIndex_);
	}
	if ( sdata.CabMatPlanID_ )
	{
		message.set_cabmatplanid(*sdata.CabMatPlanID_);
	}
	if ( sdata.M11_ )
	{
		message.set_m11(*sdata.M11_);
	}
	if ( sdata.M12_ )
	{
		message.set_m12(*sdata.M12_);
	}
	if ( sdata.M13_ )
	{
		message.set_m13(*sdata.M13_);
	}
	if ( sdata.M21_ )
	{
		message.set_m21(*sdata.M21_);
	}
	if ( sdata.M22_ )
	{
		message.set_m22(*sdata.M22_);
	}
	if ( sdata.M23_ )
	{
		message.set_m23(*sdata.M23_);
	}
	if ( sdata.M31_ )
	{
		message.set_m31(*sdata.M31_);
	}
	if ( sdata.M32_ )
	{
		message.set_m32(*sdata.M32_);
	}
	if ( sdata.M33_ )
	{
		message.set_m33(*sdata.M33_);
	}
	if ( sdata.M41_ )
	{
		message.set_m41(*sdata.M41_);
	}
	if ( sdata.M42_ )
	{
		message.set_m42(*sdata.M42_);
	}
	if ( sdata.M43_ )
	{
		message.set_m43(*sdata.M43_);
	}
	if ( sdata.M44_ )
	{
		message.set_m44(*sdata.M44_);
	}
	return message;
}

::autoDB::GC_MatrixInfoImp::SData	ToData( const transMsg::GC_MatrixInfo& message )
{
	GC_MatrixInfoImp::SData sdata;
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_transobjid() )
	{
		sdata.TransObjID_ = message.transobjid();
	}
	if ( message.has_transobjtype() )
	{
		sdata.TransObjType_ = message.transobjtype();
	}
	if ( message.has_majorcursel() )
	{
		sdata.MajorCurSel_ = message.majorcursel();
	}
	if ( message.has_minorcursel() )
	{
		sdata.MinorCurSel_ = message.minorcursel();
	}
	if ( message.has_matcurindex() )
	{
		sdata.MatCurIndex_ = message.matcurindex();
	}
	if ( message.has_cabmatplanid() )
	{
		sdata.CabMatPlanID_ = message.cabmatplanid();
	}
	if ( message.has_m11() )
	{
		sdata.M11_ = message.m11();
	}
	if ( message.has_m12() )
	{
		sdata.M12_ = message.m12();
	}
	if ( message.has_m13() )
	{
		sdata.M13_ = message.m13();
	}
	if ( message.has_m21() )
	{
		sdata.M21_ = message.m21();
	}
	if ( message.has_m22() )
	{
		sdata.M22_ = message.m22();
	}
	if ( message.has_m23() )
	{
		sdata.M23_ = message.m23();
	}
	if ( message.has_m31() )
	{
		sdata.M31_ = message.m31();
	}
	if ( message.has_m32() )
	{
		sdata.M32_ = message.m32();
	}
	if ( message.has_m33() )
	{
		sdata.M33_ = message.m33();
	}
	if ( message.has_m41() )
	{
		sdata.M41_ = message.m41();
	}
	if ( message.has_m42() )
	{
		sdata.M42_ = message.m42();
	}
	if ( message.has_m43() )
	{
		sdata.M43_ = message.m43();
	}
	if ( message.has_m44() )
	{
		sdata.M44_ = message.m44();
	}
	return std::move(sdata);
}



transMsg::GC_OrderAddedInfo	ToMessage( const GC_OrderAddedInfoImp::SData& sdata )
{
	transMsg::GC_OrderAddedInfo message;
	if ( sdata.OrderAddedID_ )
	{
		message.set_orderaddedid(*sdata.OrderAddedID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.UseCount_ )
	{
		message.set_usecount(*sdata.UseCount_);
	}
	if ( sdata.UnitPrice_ )
	{
		message.set_unitprice(*sdata.UnitPrice_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.UpdateTime_ )
	{
		message.set_updatetime( ( *sdata.UpdateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.AddedName_ )
	{
		message.set_addedname(*sdata.AddedName_);
	}
	if ( sdata.MatName_ )
	{
		message.set_matname(*sdata.MatName_);
	}
	if ( sdata.UnitName_ )
	{
		message.set_unitname(*sdata.UnitName_);
	}
	if ( sdata.SpecName_ )
	{
		message.set_specname(*sdata.SpecName_);
	}
	if ( sdata.AttachFileName_ )
	{
		message.set_attachfilename(*sdata.AttachFileName_);
	}
	return message;
}

::autoDB::GC_OrderAddedInfoImp::SData	ToData( const transMsg::GC_OrderAddedInfo& message )
{
	GC_OrderAddedInfoImp::SData sdata;
	if ( message.has_orderaddedid() )
	{
		sdata.OrderAddedID_ = message.orderaddedid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_usecount() )
	{
		sdata.UseCount_ = message.usecount();
	}
	if ( message.has_unitprice() )
	{
		sdata.UnitPrice_ = message.unitprice();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_updatetime() )
	{
		sdata.UpdateTime_ = DBTime(rawDate, DBMilliseconds(message.updatetime()) );
	}
	if ( message.has_addedname() )
	{
		sdata.AddedName_ = message.addedname();
	}
	if ( message.has_matname() )
	{
		sdata.MatName_ = message.matname();
	}
	if ( message.has_unitname() )
	{
		sdata.UnitName_ = message.unitname();
	}
	if ( message.has_specname() )
	{
		sdata.SpecName_ = message.specname();
	}
	if ( message.has_attachfilename() )
	{
		sdata.AttachFileName_ = message.attachfilename();
	}
	return std::move(sdata);
}



transMsg::GC_OrderDataInfo	ToMessage( const GC_OrderDataInfoImp::SData& sdata )
{
	transMsg::GC_OrderDataInfo message;
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.ShopID_ )
	{
		message.set_shopid(*sdata.ShopID_);
	}
	if ( sdata.MaxMetaID_ )
	{
		message.set_maxmetaid(*sdata.MaxMetaID_);
	}
	if ( sdata.DesignerID_ )
	{
		message.set_designerid(*sdata.DesignerID_);
	}
	if ( sdata.SellerID_ )
	{
		message.set_sellerid(*sdata.SellerID_);
	}
	if ( sdata.PreSurveyorID_ )
	{
		message.set_presurveyorid(*sdata.PreSurveyorID_);
	}
	if ( sdata.ReSurveyorID_ )
	{
		message.set_resurveyorid(*sdata.ReSurveyorID_);
	}
	if ( sdata.IsNew_ )
	{
		message.set_isnew(*sdata.IsNew_);
	}
	if ( sdata.IsShare_ )
	{
		message.set_isshare(*sdata.IsShare_);
	}
	if ( sdata.IsUpload_ )
	{
		message.set_isupload(*sdata.IsUpload_);
	}
	if ( sdata.CreateTime_ )
	{
		message.set_createtime( ( *sdata.CreateTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.PreSurveyTime_ )
	{
		message.set_presurveytime( ( *sdata.PreSurveyTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.ReSurveyTime_ )
	{
		message.set_resurveytime( ( *sdata.ReSurveyTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.OrderTime_ )
	{
		message.set_ordertime( ( *sdata.OrderTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.DeliveryTime_ )
	{
		message.set_deliverytime( ( *sdata.DeliveryTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.InstallTime_ )
	{
		message.set_installtime( ( *sdata.InstallTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.GeoCode_ )
	{
		message.set_geocode(*sdata.GeoCode_);
	}
	if ( sdata.OrderTitle_ )
	{
		message.set_ordertitle(*sdata.OrderTitle_);
	}
	if ( sdata.CustomerName_ )
	{
		message.set_customername(*sdata.CustomerName_);
	}
	if ( sdata.CustomerTel_ )
	{
		message.set_customertel(*sdata.CustomerTel_);
	}
	if ( sdata.CustomerPostcode_ )
	{
		message.set_customerpostcode(*sdata.CustomerPostcode_);
	}
	if ( sdata.CustomerQQ_ )
	{
		message.set_customerqq(*sdata.CustomerQQ_);
	}
	if ( sdata.CustomerEmail_ )
	{
		message.set_customeremail(*sdata.CustomerEmail_);
	}
	if ( sdata.InstallAddress_ )
	{
		message.set_installaddress(*sdata.InstallAddress_);
	}
	if ( sdata.OrderMemo_ )
	{
		message.set_ordermemo(*sdata.OrderMemo_);
	}
	if ( sdata.AttachFilePath_ )
	{
		message.set_attachfilepath(*sdata.AttachFilePath_);
	}
	return message;
}

::autoDB::GC_OrderDataInfoImp::SData	ToData( const transMsg::GC_OrderDataInfo& message )
{
	GC_OrderDataInfoImp::SData sdata;
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_shopid() )
	{
		sdata.ShopID_ = message.shopid();
	}
	if ( message.has_maxmetaid() )
	{
		sdata.MaxMetaID_ = message.maxmetaid();
	}
	if ( message.has_designerid() )
	{
		sdata.DesignerID_ = message.designerid();
	}
	if ( message.has_sellerid() )
	{
		sdata.SellerID_ = message.sellerid();
	}
	if ( message.has_presurveyorid() )
	{
		sdata.PreSurveyorID_ = message.presurveyorid();
	}
	if ( message.has_resurveyorid() )
	{
		sdata.ReSurveyorID_ = message.resurveyorid();
	}
	if ( message.has_isnew() )
	{
		sdata.IsNew_ = message.isnew();
	}
	if ( message.has_isshare() )
	{
		sdata.IsShare_ = message.isshare();
	}
	if ( message.has_isupload() )
	{
		sdata.IsUpload_ = message.isupload();
	}
	if ( message.has_createtime() )
	{
		sdata.CreateTime_ = DBTime(rawDate, DBMilliseconds(message.createtime()) );
	}
	if ( message.has_presurveytime() )
	{
		sdata.PreSurveyTime_ = DBTime(rawDate, DBMilliseconds(message.presurveytime()) );
	}
	if ( message.has_resurveytime() )
	{
		sdata.ReSurveyTime_ = DBTime(rawDate, DBMilliseconds(message.resurveytime()) );
	}
	if ( message.has_ordertime() )
	{
		sdata.OrderTime_ = DBTime(rawDate, DBMilliseconds(message.ordertime()) );
	}
	if ( message.has_deliverytime() )
	{
		sdata.DeliveryTime_ = DBTime(rawDate, DBMilliseconds(message.deliverytime()) );
	}
	if ( message.has_installtime() )
	{
		sdata.InstallTime_ = DBTime(rawDate, DBMilliseconds(message.installtime()) );
	}
	if ( message.has_geocode() )
	{
		sdata.GeoCode_ = message.geocode();
	}
	if ( message.has_ordertitle() )
	{
		sdata.OrderTitle_ = message.ordertitle();
	}
	if ( message.has_customername() )
	{
		sdata.CustomerName_ = message.customername();
	}
	if ( message.has_customertel() )
	{
		sdata.CustomerTel_ = message.customertel();
	}
	if ( message.has_customerpostcode() )
	{
		sdata.CustomerPostcode_ = message.customerpostcode();
	}
	if ( message.has_customerqq() )
	{
		sdata.CustomerQQ_ = message.customerqq();
	}
	if ( message.has_customeremail() )
	{
		sdata.CustomerEmail_ = message.customeremail();
	}
	if ( message.has_installaddress() )
	{
		sdata.InstallAddress_ = message.installaddress();
	}
	if ( message.has_ordermemo() )
	{
		sdata.OrderMemo_ = message.ordermemo();
	}
	if ( message.has_attachfilepath() )
	{
		sdata.AttachFilePath_ = message.attachfilepath();
	}
	return std::move(sdata);
}



transMsg::GC_PackInfo	ToMessage( const GC_PackInfoImp::SData& sdata )
{
	transMsg::GC_PackInfo message;
	if ( sdata.DesignPackID_ )
	{
		message.set_designpackid(*sdata.DesignPackID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.FittingPackID_ )
	{
		message.set_fittingpackid(*sdata.FittingPackID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsSeparate_ )
	{
		message.set_isseparate(*sdata.IsSeparate_);
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

::autoDB::GC_PackInfoImp::SData	ToData( const transMsg::GC_PackInfo& message )
{
	GC_PackInfoImp::SData sdata;
	if ( message.has_designpackid() )
	{
		sdata.DesignPackID_ = message.designpackid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_fittingpackid() )
	{
		sdata.FittingPackID_ = message.fittingpackid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_isseparate() )
	{
		sdata.IsSeparate_ = message.isseparate();
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



transMsg::GC_PointInfo	ToMessage( const GC_PointInfoImp::SData& sdata )
{
	transMsg::GC_PointInfo message;
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.TransObjID_ )
	{
		message.set_transobjid(*sdata.TransObjID_);
	}
	if ( sdata.TransObjType_ )
	{
		message.set_transobjtype(*sdata.TransObjType_);
	}
	if ( sdata.PointIndex_ )
	{
		message.set_pointindex(*sdata.PointIndex_);
	}
	if ( sdata.CoordX_ )
	{
		message.set_coordx(*sdata.CoordX_);
	}
	if ( sdata.CoordY_ )
	{
		message.set_coordy(*sdata.CoordY_);
	}
	if ( sdata.CoordZ_ )
	{
		message.set_coordz(*sdata.CoordZ_);
	}
	return message;
}

::autoDB::GC_PointInfoImp::SData	ToData( const transMsg::GC_PointInfo& message )
{
	GC_PointInfoImp::SData sdata;
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_transobjid() )
	{
		sdata.TransObjID_ = message.transobjid();
	}
	if ( message.has_transobjtype() )
	{
		sdata.TransObjType_ = message.transobjtype();
	}
	if ( message.has_pointindex() )
	{
		sdata.PointIndex_ = message.pointindex();
	}
	if ( message.has_coordx() )
	{
		sdata.CoordX_ = message.coordx();
	}
	if ( message.has_coordy() )
	{
		sdata.CoordY_ = message.coordy();
	}
	if ( message.has_coordz() )
	{
		sdata.CoordZ_ = message.coordz();
	}
	return std::move(sdata);
}



transMsg::GC_PrintElementInfo	ToMessage( const GC_PrintElementInfoImp::SData& sdata )
{
	transMsg::GC_PrintElementInfo message;
	if ( sdata.DesignPrintElementID_ )
	{
		message.set_designprintelementid(*sdata.DesignPrintElementID_);
	}
	if ( sdata.DesignPrintGroupID_ )
	{
		message.set_designprintgroupid(*sdata.DesignPrintGroupID_);
	}
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.ObjType_ )
	{
		message.set_objtype(*sdata.ObjType_);
	}
	if ( sdata.ObjID_ )
	{
		message.set_objid(*sdata.ObjID_);
	}
	if ( sdata.PrintGroupID_ )
	{
		message.set_printgroupid(*sdata.PrintGroupID_);
	}
	if ( sdata.ViewType_ )
	{
		message.set_viewtype(*sdata.ViewType_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
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

::autoDB::GC_PrintElementInfoImp::SData	ToData( const transMsg::GC_PrintElementInfo& message )
{
	GC_PrintElementInfoImp::SData sdata;
	if ( message.has_designprintelementid() )
	{
		sdata.DesignPrintElementID_ = message.designprintelementid();
	}
	if ( message.has_designprintgroupid() )
	{
		sdata.DesignPrintGroupID_ = message.designprintgroupid();
	}
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_objtype() )
	{
		sdata.ObjType_ = message.objtype();
	}
	if ( message.has_objid() )
	{
		sdata.ObjID_ = message.objid();
	}
	if ( message.has_printgroupid() )
	{
		sdata.PrintGroupID_ = message.printgroupid();
	}
	if ( message.has_viewtype() )
	{
		sdata.ViewType_ = message.viewtype();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
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



transMsg::GC_PrintGroupInfo	ToMessage( const GC_PrintGroupInfoImp::SData& sdata )
{
	transMsg::GC_PrintGroupInfo message;
	if ( sdata.DesignPrintGroupID_ )
	{
		message.set_designprintgroupid(*sdata.DesignPrintGroupID_);
	}
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.PrintID_ )
	{
		message.set_printid(*sdata.PrintID_);
	}
	if ( sdata.PrintGroupID_ )
	{
		message.set_printgroupid(*sdata.PrintGroupID_);
	}
	if ( sdata.ManyViewPort_ )
	{
		message.set_manyviewport(*sdata.ManyViewPort_);
	}
	if ( sdata.FrameStyle_ )
	{
		message.set_framestyle(*sdata.FrameStyle_);
	}
	if ( sdata.FrameColorR_ )
	{
		message.set_framecolorr(*sdata.FrameColorR_);
	}
	if ( sdata.FrameColorG_ )
	{
		message.set_framecolorg(*sdata.FrameColorG_);
	}
	if ( sdata.FrameColorB_ )
	{
		message.set_framecolorb(*sdata.FrameColorB_);
	}
	if ( sdata.FrameColorA_ )
	{
		message.set_framecolora(*sdata.FrameColorA_);
	}
	if ( sdata.FrameWidth_ )
	{
		message.set_framewidth(*sdata.FrameWidth_);
	}
	if ( sdata.LeftX_ )
	{
		message.set_leftx(*sdata.LeftX_);
	}
	if ( sdata.RightY_ )
	{
		message.set_righty(*sdata.RightY_);
	}
	if ( sdata.ScaleX_ )
	{
		message.set_scalex(*sdata.ScaleX_);
	}
	if ( sdata.ScaleY_ )
	{
		message.set_scaley(*sdata.ScaleY_);
	}
	if ( sdata.ScaleOffsetX_ )
	{
		message.set_scaleoffsetx(*sdata.ScaleOffsetX_);
	}
	if ( sdata.ScaleOffsetY_ )
	{
		message.set_scaleoffsety(*sdata.ScaleOffsetY_);
	}
	if ( sdata.ScaleFactor_ )
	{
		message.set_scalefactor(*sdata.ScaleFactor_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
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

::autoDB::GC_PrintGroupInfoImp::SData	ToData( const transMsg::GC_PrintGroupInfo& message )
{
	GC_PrintGroupInfoImp::SData sdata;
	if ( message.has_designprintgroupid() )
	{
		sdata.DesignPrintGroupID_ = message.designprintgroupid();
	}
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_printid() )
	{
		sdata.PrintID_ = message.printid();
	}
	if ( message.has_printgroupid() )
	{
		sdata.PrintGroupID_ = message.printgroupid();
	}
	if ( message.has_manyviewport() )
	{
		sdata.ManyViewPort_ = message.manyviewport();
	}
	if ( message.has_framestyle() )
	{
		sdata.FrameStyle_ = message.framestyle();
	}
	if ( message.has_framecolorr() )
	{
		sdata.FrameColorR_ = message.framecolorr();
	}
	if ( message.has_framecolorg() )
	{
		sdata.FrameColorG_ = message.framecolorg();
	}
	if ( message.has_framecolorb() )
	{
		sdata.FrameColorB_ = message.framecolorb();
	}
	if ( message.has_framecolora() )
	{
		sdata.FrameColorA_ = message.framecolora();
	}
	if ( message.has_framewidth() )
	{
		sdata.FrameWidth_ = message.framewidth();
	}
	if ( message.has_leftx() )
	{
		sdata.LeftX_ = message.leftx();
	}
	if ( message.has_righty() )
	{
		sdata.RightY_ = message.righty();
	}
	if ( message.has_scalex() )
	{
		sdata.ScaleX_ = message.scalex();
	}
	if ( message.has_scaley() )
	{
		sdata.ScaleY_ = message.scaley();
	}
	if ( message.has_scaleoffsetx() )
	{
		sdata.ScaleOffsetX_ = message.scaleoffsetx();
	}
	if ( message.has_scaleoffsety() )
	{
		sdata.ScaleOffsetY_ = message.scaleoffsety();
	}
	if ( message.has_scalefactor() )
	{
		sdata.ScaleFactor_ = message.scalefactor();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
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



transMsg::GC_PrintInfo	ToMessage( const GC_PrintInfoImp::SData& sdata )
{
	transMsg::GC_PrintInfo message;
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.PrintID_ )
	{
		message.set_printid(*sdata.PrintID_);
	}
	if ( sdata.PageBorderStyle_ )
	{
		message.set_pageborderstyle(*sdata.PageBorderStyle_);
	}
	if ( sdata.PageBorderColor_ )
	{
		message.set_pagebordercolor(*sdata.PageBorderColor_);
	}
	if ( sdata.PageBorderWidth_ )
	{
		message.set_pageborderwidth(*sdata.PageBorderWidth_);
	}
	if ( sdata.ShaderPicTopX_ )
	{
		message.set_shaderpictopx(*sdata.ShaderPicTopX_);
	}
	if ( sdata.ShaderPicTopY_ )
	{
		message.set_shaderpictopy(*sdata.ShaderPicTopY_);
	}
	if ( sdata.ShaderPicHeight_ )
	{
		message.set_shaderpicheight(*sdata.ShaderPicHeight_);
	}
	if ( sdata.ShaderPicWidth_ )
	{
		message.set_shaderpicwidth(*sdata.ShaderPicWidth_);
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
	if ( sdata.PrintName_ )
	{
		message.set_printname(*sdata.PrintName_);
	}
	if ( sdata.ShaderPicPath_ )
	{
		message.set_shaderpicpath(*sdata.ShaderPicPath_);
	}
	return message;
}

::autoDB::GC_PrintInfoImp::SData	ToData( const transMsg::GC_PrintInfo& message )
{
	GC_PrintInfoImp::SData sdata;
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_printid() )
	{
		sdata.PrintID_ = message.printid();
	}
	if ( message.has_pageborderstyle() )
	{
		sdata.PageBorderStyle_ = message.pageborderstyle();
	}
	if ( message.has_pagebordercolor() )
	{
		sdata.PageBorderColor_ = message.pagebordercolor();
	}
	if ( message.has_pageborderwidth() )
	{
		sdata.PageBorderWidth_ = message.pageborderwidth();
	}
	if ( message.has_shaderpictopx() )
	{
		sdata.ShaderPicTopX_ = message.shaderpictopx();
	}
	if ( message.has_shaderpictopy() )
	{
		sdata.ShaderPicTopY_ = message.shaderpictopy();
	}
	if ( message.has_shaderpicheight() )
	{
		sdata.ShaderPicHeight_ = message.shaderpicheight();
	}
	if ( message.has_shaderpicwidth() )
	{
		sdata.ShaderPicWidth_ = message.shaderpicwidth();
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
	if ( message.has_printname() )
	{
		sdata.PrintName_ = message.printname();
	}
	if ( message.has_shaderpicpath() )
	{
		sdata.ShaderPicPath_ = message.shaderpicpath();
	}
	return std::move(sdata);
}



transMsg::GC_PrintTableInfo	ToMessage( const GC_PrintTableInfoImp::SData& sdata )
{
	transMsg::GC_PrintTableInfo message;
	if ( sdata.DesignPrintTableID_ )
	{
		message.set_designprinttableid(*sdata.DesignPrintTableID_);
	}
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.TableSign_ )
	{
		message.set_tablesign(*sdata.TableSign_);
	}
	if ( sdata.WhichLine_ )
	{
		message.set_whichline(*sdata.WhichLine_);
	}
	if ( sdata.Align_ )
	{
		message.set_align(*sdata.Align_);
	}
	if ( sdata.LogoSign_ )
	{
		message.set_logosign(*sdata.LogoSign_);
	}
	if ( sdata.TextPos_ )
	{
		message.set_textpos(*sdata.TextPos_);
	}
	if ( sdata.SetLine_ )
	{
		message.set_setline(*sdata.SetLine_);
	}
	if ( sdata.HasLogo_ )
	{
		message.set_haslogo(*sdata.HasLogo_);
	}
	if ( sdata.IsSelected_ )
	{
		message.set_isselected(*sdata.IsSelected_);
	}
	if ( sdata.LineUp_ )
	{
		message.set_lineup(*sdata.LineUp_);
	}
	if ( sdata.LineDown_ )
	{
		message.set_linedown(*sdata.LineDown_);
	}
	if ( sdata.LineLeft_ )
	{
		message.set_lineleft(*sdata.LineLeft_);
	}
	if ( sdata.LineRight_ )
	{
		message.set_lineright(*sdata.LineRight_);
	}
	if ( sdata.LineUpSign_ )
	{
		message.set_lineupsign(*sdata.LineUpSign_);
	}
	if ( sdata.LineDownSign_ )
	{
		message.set_linedownsign(*sdata.LineDownSign_);
	}
	if ( sdata.LineLeftSign_ )
	{
		message.set_lineleftsign(*sdata.LineLeftSign_);
	}
	if ( sdata.LineRightSign_ )
	{
		message.set_linerightsign(*sdata.LineRightSign_);
	}
	if ( sdata.LineWidth_ )
	{
		message.set_linewidth(*sdata.LineWidth_);
	}
	if ( sdata.LeftTopX_ )
	{
		message.set_lefttopx(*sdata.LeftTopX_);
	}
	if ( sdata.LeftTopY_ )
	{
		message.set_lefttopy(*sdata.LeftTopY_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.LineUpWidth_ )
	{
		message.set_lineupwidth(*sdata.LineUpWidth_);
	}
	if ( sdata.LineDownWidth_ )
	{
		message.set_linedownwidth(*sdata.LineDownWidth_);
	}
	if ( sdata.LineRightWidth_ )
	{
		message.set_linerightwidth(*sdata.LineRightWidth_);
	}
	if ( sdata.LineLeftWidth_ )
	{
		message.set_lineleftwidth(*sdata.LineLeftWidth_);
	}
	if ( sdata.FaceName_ )
	{
		message.set_facename(*sdata.FaceName_);
	}
	if ( sdata.LogoPath_ )
	{
		message.set_logopath(*sdata.LogoPath_);
	}
	if ( sdata.SerialPath_ )
	{
		message.set_serialpath(*sdata.SerialPath_);
	}
	if ( sdata.TextValue_ )
	{
		message.set_textvalue(*sdata.TextValue_);
	}
	return message;
}

::autoDB::GC_PrintTableInfoImp::SData	ToData( const transMsg::GC_PrintTableInfo& message )
{
	GC_PrintTableInfoImp::SData sdata;
	if ( message.has_designprinttableid() )
	{
		sdata.DesignPrintTableID_ = message.designprinttableid();
	}
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_tablesign() )
	{
		sdata.TableSign_ = message.tablesign();
	}
	if ( message.has_whichline() )
	{
		sdata.WhichLine_ = message.whichline();
	}
	if ( message.has_align() )
	{
		sdata.Align_ = message.align();
	}
	if ( message.has_logosign() )
	{
		sdata.LogoSign_ = message.logosign();
	}
	if ( message.has_textpos() )
	{
		sdata.TextPos_ = message.textpos();
	}
	if ( message.has_setline() )
	{
		sdata.SetLine_ = message.setline();
	}
	if ( message.has_haslogo() )
	{
		sdata.HasLogo_ = message.haslogo();
	}
	if ( message.has_isselected() )
	{
		sdata.IsSelected_ = message.isselected();
	}
	if ( message.has_lineup() )
	{
		sdata.LineUp_ = message.lineup();
	}
	if ( message.has_linedown() )
	{
		sdata.LineDown_ = message.linedown();
	}
	if ( message.has_lineleft() )
	{
		sdata.LineLeft_ = message.lineleft();
	}
	if ( message.has_lineright() )
	{
		sdata.LineRight_ = message.lineright();
	}
	if ( message.has_lineupsign() )
	{
		sdata.LineUpSign_ = message.lineupsign();
	}
	if ( message.has_linedownsign() )
	{
		sdata.LineDownSign_ = message.linedownsign();
	}
	if ( message.has_lineleftsign() )
	{
		sdata.LineLeftSign_ = message.lineleftsign();
	}
	if ( message.has_linerightsign() )
	{
		sdata.LineRightSign_ = message.linerightsign();
	}
	if ( message.has_linewidth() )
	{
		sdata.LineWidth_ = message.linewidth();
	}
	if ( message.has_lefttopx() )
	{
		sdata.LeftTopX_ = message.lefttopx();
	}
	if ( message.has_lefttopy() )
	{
		sdata.LeftTopY_ = message.lefttopy();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_lineupwidth() )
	{
		sdata.LineUpWidth_ = message.lineupwidth();
	}
	if ( message.has_linedownwidth() )
	{
		sdata.LineDownWidth_ = message.linedownwidth();
	}
	if ( message.has_linerightwidth() )
	{
		sdata.LineRightWidth_ = message.linerightwidth();
	}
	if ( message.has_lineleftwidth() )
	{
		sdata.LineLeftWidth_ = message.lineleftwidth();
	}
	if ( message.has_facename() )
	{
		sdata.FaceName_ = message.facename();
	}
	if ( message.has_logopath() )
	{
		sdata.LogoPath_ = message.logopath();
	}
	if ( message.has_serialpath() )
	{
		sdata.SerialPath_ = message.serialpath();
	}
	if ( message.has_textvalue() )
	{
		sdata.TextValue_ = message.textvalue();
	}
	return std::move(sdata);
}



transMsg::GC_PrintTableRowColInfo	ToMessage( const GC_PrintTableRowColInfoImp::SData& sdata )
{
	transMsg::GC_PrintTableRowColInfo message;
	if ( sdata.DesignPrintTableRowColID_ )
	{
		message.set_designprinttablerowcolid(*sdata.DesignPrintTableRowColID_);
	}
	if ( sdata.DesignPrintTableRowID_ )
	{
		message.set_designprinttablerowid(*sdata.DesignPrintTableRowID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.TableSign_ )
	{
		message.set_tablesign(*sdata.TableSign_);
	}
	if ( sdata.RowNumber_ )
	{
		message.set_rownumber(*sdata.RowNumber_);
	}
	if ( sdata.ColNumber_ )
	{
		message.set_colnumber(*sdata.ColNumber_);
	}
	if ( sdata.WhichLine_ )
	{
		message.set_whichline(*sdata.WhichLine_);
	}
	if ( sdata.Align_ )
	{
		message.set_align(*sdata.Align_);
	}
	if ( sdata.LogoSign_ )
	{
		message.set_logosign(*sdata.LogoSign_);
	}
	if ( sdata.TextPos_ )
	{
		message.set_textpos(*sdata.TextPos_);
	}
	if ( sdata.SetLine_ )
	{
		message.set_setline(*sdata.SetLine_);
	}
	if ( sdata.HasLogo_ )
	{
		message.set_haslogo(*sdata.HasLogo_);
	}
	if ( sdata.IsSelected_ )
	{
		message.set_isselected(*sdata.IsSelected_);
	}
	if ( sdata.LineUp_ )
	{
		message.set_lineup(*sdata.LineUp_);
	}
	if ( sdata.LineDown_ )
	{
		message.set_linedown(*sdata.LineDown_);
	}
	if ( sdata.LineLeft_ )
	{
		message.set_lineleft(*sdata.LineLeft_);
	}
	if ( sdata.LineRight_ )
	{
		message.set_lineright(*sdata.LineRight_);
	}
	if ( sdata.LineUpSign_ )
	{
		message.set_lineupsign(*sdata.LineUpSign_);
	}
	if ( sdata.LineDownSign_ )
	{
		message.set_linedownsign(*sdata.LineDownSign_);
	}
	if ( sdata.LineLeftSign_ )
	{
		message.set_lineleftsign(*sdata.LineLeftSign_);
	}
	if ( sdata.LineRightSign_ )
	{
		message.set_linerightsign(*sdata.LineRightSign_);
	}
	if ( sdata.LineWidth_ )
	{
		message.set_linewidth(*sdata.LineWidth_);
	}
	if ( sdata.LeftTopX_ )
	{
		message.set_lefttopx(*sdata.LeftTopX_);
	}
	if ( sdata.LeftTopY_ )
	{
		message.set_lefttopy(*sdata.LeftTopY_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.LineUpWidth_ )
	{
		message.set_lineupwidth(*sdata.LineUpWidth_);
	}
	if ( sdata.LineDownWidth_ )
	{
		message.set_linedownwidth(*sdata.LineDownWidth_);
	}
	if ( sdata.LineRightWidth_ )
	{
		message.set_linerightwidth(*sdata.LineRightWidth_);
	}
	if ( sdata.LineLeftWidth_ )
	{
		message.set_lineleftwidth(*sdata.LineLeftWidth_);
	}
	if ( sdata.FaceName_ )
	{
		message.set_facename(*sdata.FaceName_);
	}
	if ( sdata.LogoPath_ )
	{
		message.set_logopath(*sdata.LogoPath_);
	}
	if ( sdata.SerialPath_ )
	{
		message.set_serialpath(*sdata.SerialPath_);
	}
	if ( sdata.TextValue_ )
	{
		message.set_textvalue(*sdata.TextValue_);
	}
	return message;
}

::autoDB::GC_PrintTableRowColInfoImp::SData	ToData( const transMsg::GC_PrintTableRowColInfo& message )
{
	GC_PrintTableRowColInfoImp::SData sdata;
	if ( message.has_designprinttablerowcolid() )
	{
		sdata.DesignPrintTableRowColID_ = message.designprinttablerowcolid();
	}
	if ( message.has_designprinttablerowid() )
	{
		sdata.DesignPrintTableRowID_ = message.designprinttablerowid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_tablesign() )
	{
		sdata.TableSign_ = message.tablesign();
	}
	if ( message.has_rownumber() )
	{
		sdata.RowNumber_ = message.rownumber();
	}
	if ( message.has_colnumber() )
	{
		sdata.ColNumber_ = message.colnumber();
	}
	if ( message.has_whichline() )
	{
		sdata.WhichLine_ = message.whichline();
	}
	if ( message.has_align() )
	{
		sdata.Align_ = message.align();
	}
	if ( message.has_logosign() )
	{
		sdata.LogoSign_ = message.logosign();
	}
	if ( message.has_textpos() )
	{
		sdata.TextPos_ = message.textpos();
	}
	if ( message.has_setline() )
	{
		sdata.SetLine_ = message.setline();
	}
	if ( message.has_haslogo() )
	{
		sdata.HasLogo_ = message.haslogo();
	}
	if ( message.has_isselected() )
	{
		sdata.IsSelected_ = message.isselected();
	}
	if ( message.has_lineup() )
	{
		sdata.LineUp_ = message.lineup();
	}
	if ( message.has_linedown() )
	{
		sdata.LineDown_ = message.linedown();
	}
	if ( message.has_lineleft() )
	{
		sdata.LineLeft_ = message.lineleft();
	}
	if ( message.has_lineright() )
	{
		sdata.LineRight_ = message.lineright();
	}
	if ( message.has_lineupsign() )
	{
		sdata.LineUpSign_ = message.lineupsign();
	}
	if ( message.has_linedownsign() )
	{
		sdata.LineDownSign_ = message.linedownsign();
	}
	if ( message.has_lineleftsign() )
	{
		sdata.LineLeftSign_ = message.lineleftsign();
	}
	if ( message.has_linerightsign() )
	{
		sdata.LineRightSign_ = message.linerightsign();
	}
	if ( message.has_linewidth() )
	{
		sdata.LineWidth_ = message.linewidth();
	}
	if ( message.has_lefttopx() )
	{
		sdata.LeftTopX_ = message.lefttopx();
	}
	if ( message.has_lefttopy() )
	{
		sdata.LeftTopY_ = message.lefttopy();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_lineupwidth() )
	{
		sdata.LineUpWidth_ = message.lineupwidth();
	}
	if ( message.has_linedownwidth() )
	{
		sdata.LineDownWidth_ = message.linedownwidth();
	}
	if ( message.has_linerightwidth() )
	{
		sdata.LineRightWidth_ = message.linerightwidth();
	}
	if ( message.has_lineleftwidth() )
	{
		sdata.LineLeftWidth_ = message.lineleftwidth();
	}
	if ( message.has_facename() )
	{
		sdata.FaceName_ = message.facename();
	}
	if ( message.has_logopath() )
	{
		sdata.LogoPath_ = message.logopath();
	}
	if ( message.has_serialpath() )
	{
		sdata.SerialPath_ = message.serialpath();
	}
	if ( message.has_textvalue() )
	{
		sdata.TextValue_ = message.textvalue();
	}
	return std::move(sdata);
}



transMsg::GC_PrintTableRowInfo	ToMessage( const GC_PrintTableRowInfoImp::SData& sdata )
{
	transMsg::GC_PrintTableRowInfo message;
	if ( sdata.DesignPrintTableRowID_ )
	{
		message.set_designprinttablerowid(*sdata.DesignPrintTableRowID_);
	}
	if ( sdata.DesignPrintTableID_ )
	{
		message.set_designprinttableid(*sdata.DesignPrintTableID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.TableSign_ )
	{
		message.set_tablesign(*sdata.TableSign_);
	}
	if ( sdata.RowNumber_ )
	{
		message.set_rownumber(*sdata.RowNumber_);
	}
	if ( sdata.WhichLine_ )
	{
		message.set_whichline(*sdata.WhichLine_);
	}
	if ( sdata.Align_ )
	{
		message.set_align(*sdata.Align_);
	}
	if ( sdata.LogoSign_ )
	{
		message.set_logosign(*sdata.LogoSign_);
	}
	if ( sdata.TextPos_ )
	{
		message.set_textpos(*sdata.TextPos_);
	}
	if ( sdata.SetLine_ )
	{
		message.set_setline(*sdata.SetLine_);
	}
	if ( sdata.HasLogo_ )
	{
		message.set_haslogo(*sdata.HasLogo_);
	}
	if ( sdata.IsSelected_ )
	{
		message.set_isselected(*sdata.IsSelected_);
	}
	if ( sdata.LineUp_ )
	{
		message.set_lineup(*sdata.LineUp_);
	}
	if ( sdata.LineDown_ )
	{
		message.set_linedown(*sdata.LineDown_);
	}
	if ( sdata.LineLeft_ )
	{
		message.set_lineleft(*sdata.LineLeft_);
	}
	if ( sdata.LineRight_ )
	{
		message.set_lineright(*sdata.LineRight_);
	}
	if ( sdata.LineUpSign_ )
	{
		message.set_lineupsign(*sdata.LineUpSign_);
	}
	if ( sdata.LineDownSign_ )
	{
		message.set_linedownsign(*sdata.LineDownSign_);
	}
	if ( sdata.LineLeftSign_ )
	{
		message.set_lineleftsign(*sdata.LineLeftSign_);
	}
	if ( sdata.LineRightSign_ )
	{
		message.set_linerightsign(*sdata.LineRightSign_);
	}
	if ( sdata.LineWidth_ )
	{
		message.set_linewidth(*sdata.LineWidth_);
	}
	if ( sdata.LeftTopX_ )
	{
		message.set_lefttopx(*sdata.LeftTopX_);
	}
	if ( sdata.LeftTopY_ )
	{
		message.set_lefttopy(*sdata.LeftTopY_);
	}
	if ( sdata.XLen_ )
	{
		message.set_xlen(*sdata.XLen_);
	}
	if ( sdata.YLen_ )
	{
		message.set_ylen(*sdata.YLen_);
	}
	if ( sdata.LineUpWidth_ )
	{
		message.set_lineupwidth(*sdata.LineUpWidth_);
	}
	if ( sdata.LineDownWidth_ )
	{
		message.set_linedownwidth(*sdata.LineDownWidth_);
	}
	if ( sdata.LineRightWidth_ )
	{
		message.set_linerightwidth(*sdata.LineRightWidth_);
	}
	if ( sdata.LineLeftWidth_ )
	{
		message.set_lineleftwidth(*sdata.LineLeftWidth_);
	}
	if ( sdata.FaceName_ )
	{
		message.set_facename(*sdata.FaceName_);
	}
	if ( sdata.LogoPath_ )
	{
		message.set_logopath(*sdata.LogoPath_);
	}
	if ( sdata.SerialPath_ )
	{
		message.set_serialpath(*sdata.SerialPath_);
	}
	if ( sdata.TextValue_ )
	{
		message.set_textvalue(*sdata.TextValue_);
	}
	return message;
}

::autoDB::GC_PrintTableRowInfoImp::SData	ToData( const transMsg::GC_PrintTableRowInfo& message )
{
	GC_PrintTableRowInfoImp::SData sdata;
	if ( message.has_designprinttablerowid() )
	{
		sdata.DesignPrintTableRowID_ = message.designprinttablerowid();
	}
	if ( message.has_designprinttableid() )
	{
		sdata.DesignPrintTableID_ = message.designprinttableid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_tablesign() )
	{
		sdata.TableSign_ = message.tablesign();
	}
	if ( message.has_rownumber() )
	{
		sdata.RowNumber_ = message.rownumber();
	}
	if ( message.has_whichline() )
	{
		sdata.WhichLine_ = message.whichline();
	}
	if ( message.has_align() )
	{
		sdata.Align_ = message.align();
	}
	if ( message.has_logosign() )
	{
		sdata.LogoSign_ = message.logosign();
	}
	if ( message.has_textpos() )
	{
		sdata.TextPos_ = message.textpos();
	}
	if ( message.has_setline() )
	{
		sdata.SetLine_ = message.setline();
	}
	if ( message.has_haslogo() )
	{
		sdata.HasLogo_ = message.haslogo();
	}
	if ( message.has_isselected() )
	{
		sdata.IsSelected_ = message.isselected();
	}
	if ( message.has_lineup() )
	{
		sdata.LineUp_ = message.lineup();
	}
	if ( message.has_linedown() )
	{
		sdata.LineDown_ = message.linedown();
	}
	if ( message.has_lineleft() )
	{
		sdata.LineLeft_ = message.lineleft();
	}
	if ( message.has_lineright() )
	{
		sdata.LineRight_ = message.lineright();
	}
	if ( message.has_lineupsign() )
	{
		sdata.LineUpSign_ = message.lineupsign();
	}
	if ( message.has_linedownsign() )
	{
		sdata.LineDownSign_ = message.linedownsign();
	}
	if ( message.has_lineleftsign() )
	{
		sdata.LineLeftSign_ = message.lineleftsign();
	}
	if ( message.has_linerightsign() )
	{
		sdata.LineRightSign_ = message.linerightsign();
	}
	if ( message.has_linewidth() )
	{
		sdata.LineWidth_ = message.linewidth();
	}
	if ( message.has_lefttopx() )
	{
		sdata.LeftTopX_ = message.lefttopx();
	}
	if ( message.has_lefttopy() )
	{
		sdata.LeftTopY_ = message.lefttopy();
	}
	if ( message.has_xlen() )
	{
		sdata.XLen_ = message.xlen();
	}
	if ( message.has_ylen() )
	{
		sdata.YLen_ = message.ylen();
	}
	if ( message.has_lineupwidth() )
	{
		sdata.LineUpWidth_ = message.lineupwidth();
	}
	if ( message.has_linedownwidth() )
	{
		sdata.LineDownWidth_ = message.linedownwidth();
	}
	if ( message.has_linerightwidth() )
	{
		sdata.LineRightWidth_ = message.linerightwidth();
	}
	if ( message.has_lineleftwidth() )
	{
		sdata.LineLeftWidth_ = message.lineleftwidth();
	}
	if ( message.has_facename() )
	{
		sdata.FaceName_ = message.facename();
	}
	if ( message.has_logopath() )
	{
		sdata.LogoPath_ = message.logopath();
	}
	if ( message.has_serialpath() )
	{
		sdata.SerialPath_ = message.serialpath();
	}
	if ( message.has_textvalue() )
	{
		sdata.TextValue_ = message.textvalue();
	}
	return std::move(sdata);
}



transMsg::GC_ProductInfo	ToMessage( const GC_ProductInfoImp::SData& sdata )
{
	transMsg::GC_ProductInfo message;
	if ( sdata.DesignProductID_ )
	{
		message.set_designproductid(*sdata.DesignProductID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.ProductID_ )
	{
		message.set_productid(*sdata.ProductID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockObjType_ )
	{
		message.set_dockobjtype(*sdata.DockObjType_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
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
	if ( sdata.YPos_ )
	{
		message.set_ypos(*sdata.YPos_);
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

::autoDB::GC_ProductInfoImp::SData	ToData( const transMsg::GC_ProductInfo& message )
{
	GC_ProductInfoImp::SData sdata;
	if ( message.has_designproductid() )
	{
		sdata.DesignProductID_ = message.designproductid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_productid() )
	{
		sdata.ProductID_ = message.productid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockobjtype() )
	{
		sdata.DockObjType_ = message.dockobjtype();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
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
	if ( message.has_ypos() )
	{
		sdata.YPos_ = message.ypos();
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



transMsg::GC_RemarkInfo	ToMessage( const GC_RemarkInfoImp::SData& sdata )
{
	transMsg::GC_RemarkInfo message;
	if ( sdata.DesignRemarkID_ )
	{
		message.set_designremarkid(*sdata.DesignRemarkID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.PrintID_ )
	{
		message.set_printid(*sdata.PrintID_);
	}
	if ( sdata.ViewType_ )
	{
		message.set_viewtype(*sdata.ViewType_);
	}
	if ( sdata.BGColor_ )
	{
		message.set_bgcolor(*sdata.BGColor_);
	}
	if ( sdata.ForeColor_ )
	{
		message.set_forecolor(*sdata.ForeColor_);
	}
	if ( sdata.FontSize_ )
	{
		message.set_fontsize(*sdata.FontSize_);
	}
	if ( sdata.FontStyle_ )
	{
		message.set_fontstyle(*sdata.FontStyle_);
	}
	if ( sdata.LineSpace_ )
	{
		message.set_linespace(*sdata.LineSpace_);
	}
	if ( sdata.ArrowID_ )
	{
		message.set_arrowid(*sdata.ArrowID_);
	}
	if ( sdata.ArrowStyle_ )
	{
		message.set_arrowstyle(*sdata.ArrowStyle_);
	}
	if ( sdata.FrameStyle_ )
	{
		message.set_framestyle(*sdata.FrameStyle_);
	}
	if ( sdata.FrameColor_ )
	{
		message.set_framecolor(*sdata.FrameColor_);
	}
	if ( sdata.DirectLine_ )
	{
		message.set_directline(*sdata.DirectLine_);
	}
	if ( sdata.DirectStyle_ )
	{
		message.set_directstyle(*sdata.DirectStyle_);
	}
	if ( sdata.DirectLineStyle_ )
	{
		message.set_directlinestyle(*sdata.DirectLineStyle_);
	}
	if ( sdata.CommentFrameStyle_ )
	{
		message.set_commentframestyle(*sdata.CommentFrameStyle_);
	}
	if ( sdata.IsSingleMode_ )
	{
		message.set_issinglemode(*sdata.IsSingleMode_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.StrickOut_ )
	{
		message.set_strickout(*sdata.StrickOut_);
	}
	if ( sdata.UnderLine_ )
	{
		message.set_underline(*sdata.UnderLine_);
	}
	if ( sdata.Italic_ )
	{
		message.set_italic(*sdata.Italic_);
	}
	if ( sdata.Bold_ )
	{
		message.set_bold(*sdata.Bold_);
	}
	if ( sdata.FrameWidth_ )
	{
		message.set_framewidth(*sdata.FrameWidth_);
	}
	if ( sdata.ArrowX_ )
	{
		message.set_arrowx(*sdata.ArrowX_);
	}
	if ( sdata.ArrowY_ )
	{
		message.set_arrowy(*sdata.ArrowY_);
	}
	if ( sdata.StartX_ )
	{
		message.set_startx(*sdata.StartX_);
	}
	if ( sdata.StartY_ )
	{
		message.set_starty(*sdata.StartY_);
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
	if ( sdata.FaceName_ )
	{
		message.set_facename(*sdata.FaceName_);
	}
	if ( sdata.RemarkText_ )
	{
		message.set_remarktext(*sdata.RemarkText_);
	}
	return message;
}

::autoDB::GC_RemarkInfoImp::SData	ToData( const transMsg::GC_RemarkInfo& message )
{
	GC_RemarkInfoImp::SData sdata;
	if ( message.has_designremarkid() )
	{
		sdata.DesignRemarkID_ = message.designremarkid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_printid() )
	{
		sdata.PrintID_ = message.printid();
	}
	if ( message.has_viewtype() )
	{
		sdata.ViewType_ = message.viewtype();
	}
	if ( message.has_bgcolor() )
	{
		sdata.BGColor_ = message.bgcolor();
	}
	if ( message.has_forecolor() )
	{
		sdata.ForeColor_ = message.forecolor();
	}
	if ( message.has_fontsize() )
	{
		sdata.FontSize_ = message.fontsize();
	}
	if ( message.has_fontstyle() )
	{
		sdata.FontStyle_ = message.fontstyle();
	}
	if ( message.has_linespace() )
	{
		sdata.LineSpace_ = message.linespace();
	}
	if ( message.has_arrowid() )
	{
		sdata.ArrowID_ = message.arrowid();
	}
	if ( message.has_arrowstyle() )
	{
		sdata.ArrowStyle_ = message.arrowstyle();
	}
	if ( message.has_framestyle() )
	{
		sdata.FrameStyle_ = message.framestyle();
	}
	if ( message.has_framecolor() )
	{
		sdata.FrameColor_ = message.framecolor();
	}
	if ( message.has_directline() )
	{
		sdata.DirectLine_ = message.directline();
	}
	if ( message.has_directstyle() )
	{
		sdata.DirectStyle_ = message.directstyle();
	}
	if ( message.has_directlinestyle() )
	{
		sdata.DirectLineStyle_ = message.directlinestyle();
	}
	if ( message.has_commentframestyle() )
	{
		sdata.CommentFrameStyle_ = message.commentframestyle();
	}
	if ( message.has_issinglemode() )
	{
		sdata.IsSingleMode_ = message.issinglemode();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_strickout() )
	{
		sdata.StrickOut_ = message.strickout();
	}
	if ( message.has_underline() )
	{
		sdata.UnderLine_ = message.underline();
	}
	if ( message.has_italic() )
	{
		sdata.Italic_ = message.italic();
	}
	if ( message.has_bold() )
	{
		sdata.Bold_ = message.bold();
	}
	if ( message.has_framewidth() )
	{
		sdata.FrameWidth_ = message.framewidth();
	}
	if ( message.has_arrowx() )
	{
		sdata.ArrowX_ = message.arrowx();
	}
	if ( message.has_arrowy() )
	{
		sdata.ArrowY_ = message.arrowy();
	}
	if ( message.has_startx() )
	{
		sdata.StartX_ = message.startx();
	}
	if ( message.has_starty() )
	{
		sdata.StartY_ = message.starty();
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
	if ( message.has_facename() )
	{
		sdata.FaceName_ = message.facename();
	}
	if ( message.has_remarktext() )
	{
		sdata.RemarkText_ = message.remarktext();
	}
	return std::move(sdata);
}



transMsg::GC_ShapeInfo	ToMessage( const GC_ShapeInfoImp::SData& sdata )
{
	transMsg::GC_ShapeInfo message;
	if ( sdata.DesignShapeID_ )
	{
		message.set_designshapeid(*sdata.DesignShapeID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPrintID_ )
	{
		message.set_designprintid(*sdata.DesignPrintID_);
	}
	if ( sdata.PrintID_ )
	{
		message.set_printid(*sdata.PrintID_);
	}
	if ( sdata.ViewType_ )
	{
		message.set_viewtype(*sdata.ViewType_);
	}
	if ( sdata.ShapeType_ )
	{
		message.set_shapetype(*sdata.ShapeType_);
	}
	if ( sdata.LineWidth_ )
	{
		message.set_linewidth(*sdata.LineWidth_);
	}
	if ( sdata.LineStyle_ )
	{
		message.set_linestyle(*sdata.LineStyle_);
	}
	if ( sdata.StartX_ )
	{
		message.set_startx(*sdata.StartX_);
	}
	if ( sdata.StartY_ )
	{
		message.set_starty(*sdata.StartY_);
	}
	if ( sdata.StopX_ )
	{
		message.set_stopx(*sdata.StopX_);
	}
	if ( sdata.StopY_ )
	{
		message.set_stopy(*sdata.StopY_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
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
	if ( sdata.AttachFilePath_ )
	{
		message.set_attachfilepath(*sdata.AttachFilePath_);
	}
	return message;
}

::autoDB::GC_ShapeInfoImp::SData	ToData( const transMsg::GC_ShapeInfo& message )
{
	GC_ShapeInfoImp::SData sdata;
	if ( message.has_designshapeid() )
	{
		sdata.DesignShapeID_ = message.designshapeid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designprintid() )
	{
		sdata.DesignPrintID_ = message.designprintid();
	}
	if ( message.has_printid() )
	{
		sdata.PrintID_ = message.printid();
	}
	if ( message.has_viewtype() )
	{
		sdata.ViewType_ = message.viewtype();
	}
	if ( message.has_shapetype() )
	{
		sdata.ShapeType_ = message.shapetype();
	}
	if ( message.has_linewidth() )
	{
		sdata.LineWidth_ = message.linewidth();
	}
	if ( message.has_linestyle() )
	{
		sdata.LineStyle_ = message.linestyle();
	}
	if ( message.has_startx() )
	{
		sdata.StartX_ = message.startx();
	}
	if ( message.has_starty() )
	{
		sdata.StartY_ = message.starty();
	}
	if ( message.has_stopx() )
	{
		sdata.StopX_ = message.stopx();
	}
	if ( message.has_stopy() )
	{
		sdata.StopY_ = message.stopy();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
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
	if ( message.has_attachfilepath() )
	{
		sdata.AttachFilePath_ = message.attachfilepath();
	}
	return std::move(sdata);
}



transMsg::GC_SkinInfo	ToMessage( const GC_SkinInfoImp::SData& sdata )
{
	transMsg::GC_SkinInfo message;
	if ( sdata.DesignSkinID_ )
	{
		message.set_designskinid(*sdata.DesignSkinID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DecorID_ )
	{
		message.set_decorid(*sdata.DecorID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
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
	if ( sdata.GroundLen_ )
	{
		message.set_groundlen(*sdata.GroundLen_);
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

::autoDB::GC_SkinInfoImp::SData	ToData( const transMsg::GC_SkinInfo& message )
{
	GC_SkinInfoImp::SData sdata;
	if ( message.has_designskinid() )
	{
		sdata.DesignSkinID_ = message.designskinid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_decorid() )
	{
		sdata.DecorID_ = message.decorid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
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
	if ( message.has_groundlen() )
	{
		sdata.GroundLen_ = message.groundlen();
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



transMsg::GC_TableInfo	ToMessage( const GC_TableInfoImp::SData& sdata )
{
	transMsg::GC_TableInfo message;
	if ( sdata.DesignTableID_ )
	{
		message.set_designtableid(*sdata.DesignTableID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.TableID_ )
	{
		message.set_tableid(*sdata.TableID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.TableIndex_ )
	{
		message.set_tableindex(*sdata.TableIndex_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.ZLen_ )
	{
		message.set_zlen(*sdata.ZLen_);
	}
	if ( sdata.YPos_ )
	{
		message.set_ypos(*sdata.YPos_);
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

::autoDB::GC_TableInfoImp::SData	ToData( const transMsg::GC_TableInfo& message )
{
	GC_TableInfoImp::SData sdata;
	if ( message.has_designtableid() )
	{
		sdata.DesignTableID_ = message.designtableid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_tableid() )
	{
		sdata.TableID_ = message.tableid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_tableindex() )
	{
		sdata.TableIndex_ = message.tableindex();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_zlen() )
	{
		sdata.ZLen_ = message.zlen();
	}
	if ( message.has_ypos() )
	{
		sdata.YPos_ = message.ypos();
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



transMsg::GC_TablePartInfo	ToMessage( const GC_TablePartInfoImp::SData& sdata )
{
	transMsg::GC_TablePartInfo message;
	if ( sdata.DesignTablePartID_ )
	{
		message.set_designtablepartid(*sdata.DesignTablePartID_);
	}
	if ( sdata.DesignTableID_ )
	{
		message.set_designtableid(*sdata.DesignTableID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DecorLineID_ )
	{
		message.set_decorlineid(*sdata.DecorLineID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.TableSideIndex_ )
	{
		message.set_tablesideindex(*sdata.TableSideIndex_);
	}
	if ( sdata.IsUserSetYLen_ )
	{
		message.set_isusersetylen(*sdata.IsUserSetYLen_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
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
	if ( sdata.DefaultYLen_ )
	{
		message.set_defaultylen(*sdata.DefaultYLen_);
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

::autoDB::GC_TablePartInfoImp::SData	ToData( const transMsg::GC_TablePartInfo& message )
{
	GC_TablePartInfoImp::SData sdata;
	if ( message.has_designtablepartid() )
	{
		sdata.DesignTablePartID_ = message.designtablepartid();
	}
	if ( message.has_designtableid() )
	{
		sdata.DesignTableID_ = message.designtableid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_decorlineid() )
	{
		sdata.DecorLineID_ = message.decorlineid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_tablesideindex() )
	{
		sdata.TableSideIndex_ = message.tablesideindex();
	}
	if ( message.has_isusersetylen() )
	{
		sdata.IsUserSetYLen_ = message.isusersetylen();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
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
	if ( message.has_defaultylen() )
	{
		sdata.DefaultYLen_ = message.defaultylen();
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



transMsg::GC_TableSideInfo	ToMessage( const GC_TableSideInfoImp::SData& sdata )
{
	transMsg::GC_TableSideInfo message;
	if ( sdata.DesignTableSideID_ )
	{
		message.set_designtablesideid(*sdata.DesignTableSideID_);
	}
	if ( sdata.DesignTableID_ )
	{
		message.set_designtableid(*sdata.DesignTableID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.TableTopID_ )
	{
		message.set_tabletopid(*sdata.TableTopID_);
	}
	if ( sdata.TableTopSideID_ )
	{
		message.set_tabletopsideid(*sdata.TableTopSideID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.TableSideIndex_ )
	{
		message.set_tablesideindex(*sdata.TableSideIndex_);
	}
	if ( sdata.IsUseTableMat_ )
	{
		message.set_isusetablemat(*sdata.IsUseTableMat_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
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

::autoDB::GC_TableSideInfoImp::SData	ToData( const transMsg::GC_TableSideInfo& message )
{
	GC_TableSideInfoImp::SData sdata;
	if ( message.has_designtablesideid() )
	{
		sdata.DesignTableSideID_ = message.designtablesideid();
	}
	if ( message.has_designtableid() )
	{
		sdata.DesignTableID_ = message.designtableid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_tabletopid() )
	{
		sdata.TableTopID_ = message.tabletopid();
	}
	if ( message.has_tabletopsideid() )
	{
		sdata.TableTopSideID_ = message.tabletopsideid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_tablesideindex() )
	{
		sdata.TableSideIndex_ = message.tablesideindex();
	}
	if ( message.has_isusetablemat() )
	{
		sdata.IsUseTableMat_ = message.isusetablemat();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
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



transMsg::GC_WallDecorInfo	ToMessage( const GC_WallDecorInfoImp::SData& sdata )
{
	transMsg::GC_WallDecorInfo message;
	if ( sdata.DesignWallDecorID_ )
	{
		message.set_designwalldecorid(*sdata.DesignWallDecorID_);
	}
	if ( sdata.DesignWallID_ )
	{
		message.set_designwallid(*sdata.DesignWallID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.DecorID_ )
	{
		message.set_decorid(*sdata.DecorID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.IsModelRevers_ )
	{
		message.set_ismodelrevers(*sdata.IsModelRevers_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.SupplyType_ )
	{
		message.set_supplytype(*sdata.SupplyType_);
	}
	if ( sdata.GTypeID_ )
	{
		message.set_gtypeid(*sdata.GTypeID_);
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
	if ( sdata.OffsetXLen_ )
	{
		message.set_offsetxlen(*sdata.OffsetXLen_);
	}
	if ( sdata.OffsetYLen_ )
	{
		message.set_offsetylen(*sdata.OffsetYLen_);
	}
	if ( sdata.OffsetZLen_ )
	{
		message.set_offsetzlen(*sdata.OffsetZLen_);
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

::autoDB::GC_WallDecorInfoImp::SData	ToData( const transMsg::GC_WallDecorInfo& message )
{
	GC_WallDecorInfoImp::SData sdata;
	if ( message.has_designwalldecorid() )
	{
		sdata.DesignWallDecorID_ = message.designwalldecorid();
	}
	if ( message.has_designwallid() )
	{
		sdata.DesignWallID_ = message.designwallid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_decorid() )
	{
		sdata.DecorID_ = message.decorid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_ismodelrevers() )
	{
		sdata.IsModelRevers_ = message.ismodelrevers();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_supplytype() )
	{
		sdata.SupplyType_ = message.supplytype();
	}
	if ( message.has_gtypeid() )
	{
		sdata.GTypeID_ = message.gtypeid();
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
	if ( message.has_offsetxlen() )
	{
		sdata.OffsetXLen_ = message.offsetxlen();
	}
	if ( message.has_offsetylen() )
	{
		sdata.OffsetYLen_ = message.offsetylen();
	}
	if ( message.has_offsetzlen() )
	{
		sdata.OffsetZLen_ = message.offsetzlen();
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



transMsg::GC_WallInfo	ToMessage( const GC_WallInfoImp::SData& sdata )
{
	transMsg::GC_WallInfo message;
	if ( sdata.DesignWallID_ )
	{
		message.set_designwallid(*sdata.DesignWallID_);
	}
	if ( sdata.DesignPlanID_ )
	{
		message.set_designplanid(*sdata.DesignPlanID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.WallType_ )
	{
		message.set_walltype(*sdata.WallType_);
	}
	if ( sdata.WallIndex_ )
	{
		message.set_wallindex(*sdata.WallIndex_);
	}
	if ( sdata.GroupID_ )
	{
		message.set_groupid(*sdata.GroupID_);
	}
	if ( sdata.DockObjID_ )
	{
		message.set_dockobjid(*sdata.DockObjID_);
	}
	if ( sdata.DockXPos_ )
	{
		message.set_dockxpos(*sdata.DockXPos_);
	}
	if ( sdata.DockYPos_ )
	{
		message.set_dockypos(*sdata.DockYPos_);
	}
	if ( sdata.DecorID_ )
	{
		message.set_decorid(*sdata.DecorID_);
	}
	if ( sdata.GridStyle_ )
	{
		message.set_gridstyle(*sdata.GridStyle_);
	}
	if ( sdata.HasMark_ )
	{
		message.set_hasmark(*sdata.HasMark_);
	}
	if ( sdata.IsVisible_ )
	{
		message.set_isvisible(*sdata.IsVisible_);
	}
	if ( sdata.IsLocked_ )
	{
		message.set_islocked(*sdata.IsLocked_);
	}
	if ( sdata.StartX_ )
	{
		message.set_startx(*sdata.StartX_);
	}
	if ( sdata.StartY_ )
	{
		message.set_starty(*sdata.StartY_);
	}
	if ( sdata.EndX_ )
	{
		message.set_endx(*sdata.EndX_);
	}
	if ( sdata.EndY_ )
	{
		message.set_endy(*sdata.EndY_);
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
	if ( sdata.GroundLen_ )
	{
		message.set_groundlen(*sdata.GroundLen_);
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

::autoDB::GC_WallInfoImp::SData	ToData( const transMsg::GC_WallInfo& message )
{
	GC_WallInfoImp::SData sdata;
	if ( message.has_designwallid() )
	{
		sdata.DesignWallID_ = message.designwallid();
	}
	if ( message.has_designplanid() )
	{
		sdata.DesignPlanID_ = message.designplanid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_walltype() )
	{
		sdata.WallType_ = message.walltype();
	}
	if ( message.has_wallindex() )
	{
		sdata.WallIndex_ = message.wallindex();
	}
	if ( message.has_groupid() )
	{
		sdata.GroupID_ = message.groupid();
	}
	if ( message.has_dockobjid() )
	{
		sdata.DockObjID_ = message.dockobjid();
	}
	if ( message.has_dockxpos() )
	{
		sdata.DockXPos_ = message.dockxpos();
	}
	if ( message.has_dockypos() )
	{
		sdata.DockYPos_ = message.dockypos();
	}
	if ( message.has_decorid() )
	{
		sdata.DecorID_ = message.decorid();
	}
	if ( message.has_gridstyle() )
	{
		sdata.GridStyle_ = message.gridstyle();
	}
	if ( message.has_hasmark() )
	{
		sdata.HasMark_ = message.hasmark();
	}
	if ( message.has_isvisible() )
	{
		sdata.IsVisible_ = message.isvisible();
	}
	if ( message.has_islocked() )
	{
		sdata.IsLocked_ = message.islocked();
	}
	if ( message.has_startx() )
	{
		sdata.StartX_ = message.startx();
	}
	if ( message.has_starty() )
	{
		sdata.StartY_ = message.starty();
	}
	if ( message.has_endx() )
	{
		sdata.EndX_ = message.endx();
	}
	if ( message.has_endy() )
	{
		sdata.EndY_ = message.endy();
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
	if ( message.has_groundlen() )
	{
		sdata.GroundLen_ = message.groundlen();
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



void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabBoardGapInfo& toAdd)
{
	package.add_gc_cabboardgapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabBoardInfo& toAdd)
{
	package.add_gc_cabboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabBoardSealInfo& toAdd)
{
	package.add_gc_cabboardsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorBoardGapInfo& toAdd)
{
	package.add_gc_cabdoorboardgapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorBoardInfo& toAdd)
{
	package.add_gc_cabdoorboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorBoardSealInfo& toAdd)
{
	package.add_gc_cabdoorboardsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorHWFInfo& toAdd)
{
	package.add_gc_cabdoorhwfinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorHandleInfo& toAdd)
{
	package.add_gc_cabdoorhandleinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorInfo& toAdd)
{
	package.add_gc_cabdoorinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorRegionInfo& toAdd)
{
	package.add_gc_cabdoorregioninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorSlideInfo& toAdd)
{
	package.add_gc_cabdoorslideinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabDoorSystemInfo& toAdd)
{
	package.add_gc_cabdoorsysteminfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFHWFInfo& toAdd)
{
	package.add_gc_cabfnfhwfinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFHoleInfo& toAdd)
{
	package.add_gc_cabfnfholeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFInfo& toAdd)
{
	package.add_gc_cabfnfinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFPartInfo& toAdd)
{
	package.add_gc_cabfnfpartinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabFNFPartSealInfo& toAdd)
{
	package.add_gc_cabfnfpartsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_CabInfo& toAdd)
{
	package.add_gc_cabinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorBoardInfo& toAdd)
{
	package.add_gc_decorboardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorBoardUnitInfo& toAdd)
{
	package.add_gc_decorboardunitinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorBoardUnitSealInfo& toAdd)
{
	package.add_gc_decorboardunitsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorInfo& toAdd)
{
	package.add_gc_decorinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DecorLineInfo& toAdd)
{
	package.add_gc_decorlineinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_DesignPlanInfo& toAdd)
{
	package.add_gc_designplaninfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_FittingInfo& toAdd)
{
	package.add_gc_fittinginfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_HWFInfo& toAdd)
{
	package.add_gc_hwfinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_MarkInfo& toAdd)
{
	package.add_gc_markinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_MatrixInfo& toAdd)
{
	package.add_gc_matrixinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_OrderAddedInfo& toAdd)
{
	package.add_gc_orderaddedinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_OrderDataInfo& toAdd)
{
	package.add_gc_orderdatainfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PackInfo& toAdd)
{
	package.add_gc_packinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PointInfo& toAdd)
{
	package.add_gc_pointinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintElementInfo& toAdd)
{
	package.add_gc_printelementinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintGroupInfo& toAdd)
{
	package.add_gc_printgroupinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintInfo& toAdd)
{
	package.add_gc_printinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintTableInfo& toAdd)
{
	package.add_gc_printtableinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintTableRowColInfo& toAdd)
{
	package.add_gc_printtablerowcolinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_PrintTableRowInfo& toAdd)
{
	package.add_gc_printtablerowinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_ProductInfo& toAdd)
{
	package.add_gc_productinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_RemarkInfo& toAdd)
{
	package.add_gc_remarkinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_ShapeInfo& toAdd)
{
	package.add_gc_shapeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_SkinInfo& toAdd)
{
	package.add_gc_skininfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_TableInfo& toAdd)
{
	package.add_gc_tableinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_TablePartInfo& toAdd)
{
	package.add_gc_tablepartinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_TableSideInfo& toAdd)
{
	package.add_gc_tablesideinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_WallDecorInfo& toAdd)
{
	package.add_gc_walldecorinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::GC_Table& package, transMsg::GC_WallInfo& toAdd)
{
	package.add_gc_wallinfo()->Swap(&toAdd);
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabBoardGapInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabBoardGapInfoImp& tableObj)
{
	return *( package.mutable_gc_cabboardgapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabBoardInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabBoardInfoImp& tableObj)
{
	return *( package.mutable_gc_cabboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabBoardSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabBoardSealInfoImp& tableObj)
{
	return *( package.mutable_gc_cabboardsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorBoardGapInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorBoardGapInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorboardgapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorBoardInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorBoardInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorBoardSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorBoardSealInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorboardsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorHWFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorHWFInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorhwfinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorHandleInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorHandleInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorhandleinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorRegionInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorRegionInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorregioninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorSlideInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorSlideInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorslideinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabDoorSystemInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabDoorSystemInfoImp& tableObj)
{
	return *( package.mutable_gc_cabdoorsysteminfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFHWFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFHWFInfoImp& tableObj)
{
	return *( package.mutable_gc_cabfnfhwfinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFHoleInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFHoleInfoImp& tableObj)
{
	return *( package.mutable_gc_cabfnfholeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFInfoImp& tableObj)
{
	return *( package.mutable_gc_cabfnfinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFPartInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFPartInfoImp& tableObj)
{
	return *( package.mutable_gc_cabfnfpartinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabFNFPartSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabFNFPartSealInfoImp& tableObj)
{
	return *( package.mutable_gc_cabfnfpartsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_CabInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_CabInfoImp& tableObj)
{
	return *( package.mutable_gc_cabinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorBoardInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorBoardInfoImp& tableObj)
{
	return *( package.mutable_gc_decorboardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorBoardUnitInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorBoardUnitInfoImp& tableObj)
{
	return *( package.mutable_gc_decorboardunitinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorBoardUnitSealInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorBoardUnitSealInfoImp& tableObj)
{
	return *( package.mutable_gc_decorboardunitsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorInfoImp& tableObj)
{
	return *( package.mutable_gc_decorinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DecorLineInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DecorLineInfoImp& tableObj)
{
	return *( package.mutable_gc_decorlineinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_DesignPlanInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_DesignPlanInfoImp& tableObj)
{
	return *( package.mutable_gc_designplaninfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_FittingInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_FittingInfoImp& tableObj)
{
	return *( package.mutable_gc_fittinginfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_HWFInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_HWFInfoImp& tableObj)
{
	return *( package.mutable_gc_hwfinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_MarkInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_MarkInfoImp& tableObj)
{
	return *( package.mutable_gc_markinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_MatrixInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_MatrixInfoImp& tableObj)
{
	return *( package.mutable_gc_matrixinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_OrderAddedInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_OrderAddedInfoImp& tableObj)
{
	return *( package.mutable_gc_orderaddedinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_OrderDataInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_OrderDataInfoImp& tableObj)
{
	return *( package.mutable_gc_orderdatainfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PackInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PackInfoImp& tableObj)
{
	return *( package.mutable_gc_packinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PointInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PointInfoImp& tableObj)
{
	return *( package.mutable_gc_pointinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintElementInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintElementInfoImp& tableObj)
{
	return *( package.mutable_gc_printelementinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintGroupInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintGroupInfoImp& tableObj)
{
	return *( package.mutable_gc_printgroupinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintInfoImp& tableObj)
{
	return *( package.mutable_gc_printinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintTableInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintTableInfoImp& tableObj)
{
	return *( package.mutable_gc_printtableinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintTableRowColInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintTableRowColInfoImp& tableObj)
{
	return *( package.mutable_gc_printtablerowcolinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_PrintTableRowInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_PrintTableRowInfoImp& tableObj)
{
	return *( package.mutable_gc_printtablerowinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_ProductInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_ProductInfoImp& tableObj)
{
	return *( package.mutable_gc_productinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_RemarkInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_RemarkInfoImp& tableObj)
{
	return *( package.mutable_gc_remarkinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_ShapeInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_ShapeInfoImp& tableObj)
{
	return *( package.mutable_gc_shapeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_SkinInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_SkinInfoImp& tableObj)
{
	return *( package.mutable_gc_skininfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_TableInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_TableInfoImp& tableObj)
{
	return *( package.mutable_gc_tableinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_TablePartInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_TablePartInfoImp& tableObj)
{
	return *( package.mutable_gc_tablepartinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_TableSideInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_TableSideInfoImp& tableObj)
{
	return *( package.mutable_gc_tablesideinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_WallDecorInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_WallDecorInfoImp& tableObj)
{
	return *( package.mutable_gc_walldecorinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::GC_WallInfo >&	ExtractFromPack(transMsg::GC_Table& package, autoDB::GC_WallInfoImp& tableObj)
{
	return *( package.mutable_gc_wallinfo() );
}


}
