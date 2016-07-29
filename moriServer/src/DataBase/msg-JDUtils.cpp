#include"msg-JDUtils.h"

namespace autoDB
{
transMsg::JD_BoardGapInfo	ToMessage( const JD_BoardGapInfoImp::SData& sdata )
{
	transMsg::JD_BoardGapInfo message;
	if ( sdata.ItemID_ )
	{
		message.set_itemid(*sdata.ItemID_);
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
	if ( sdata.BoardID_ )
	{
		message.set_boardid(*sdata.BoardID_);
	}
	if ( sdata.GapIndex_ )
	{
		message.set_gapindex(*sdata.GapIndex_);
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
	if ( sdata.Square_ )
	{
		message.set_square(*sdata.Square_);
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
	if ( sdata.OrderCode_ )
	{
		message.set_ordercode(*sdata.OrderCode_);
	}
	if ( sdata.OldTableName_ )
	{
		message.set_oldtablename(*sdata.OldTableName_);
	}
	if ( sdata.OldID_ )
	{
		message.set_oldid(*sdata.OldID_);
	}
	return message;
}

::autoDB::JD_BoardGapInfoImp::SData	ToData( const transMsg::JD_BoardGapInfo& message )
{
	JD_BoardGapInfoImp::SData sdata;
	if ( message.has_itemid() )
	{
		sdata.ItemID_ = message.itemid();
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
	if ( message.has_boardid() )
	{
		sdata.BoardID_ = message.boardid();
	}
	if ( message.has_gapindex() )
	{
		sdata.GapIndex_ = message.gapindex();
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
	if ( message.has_square() )
	{
		sdata.Square_ = message.square();
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
	if ( message.has_ordercode() )
	{
		sdata.OrderCode_ = message.ordercode();
	}
	if ( message.has_oldtablename() )
	{
		sdata.OldTableName_ = message.oldtablename();
	}
	if ( message.has_oldid() )
	{
		sdata.OldID_ = message.oldid();
	}
	return std::move(sdata);
}



transMsg::JD_BoardInfo	ToMessage( const JD_BoardInfoImp::SData& sdata )
{
	transMsg::JD_BoardInfo message;
	if ( sdata.ItemID_ )
	{
		message.set_itemid(*sdata.ItemID_);
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
	if ( sdata.BoardType_ )
	{
		message.set_boardtype(*sdata.BoardType_);
	}
	if ( sdata.ObjectID_ )
	{
		message.set_objectid(*sdata.ObjectID_);
	}
	if ( sdata.MaterialID_ )
	{
		message.set_materialid(*sdata.MaterialID_);
	}
	if ( sdata.CabinetID_ )
	{
		message.set_cabinetid(*sdata.CabinetID_);
	}
	if ( sdata.Grain_ )
	{
		message.set_grain(*sdata.Grain_);
	}
	if ( sdata.IsUserAdd_ )
	{
		message.set_isuseradd(*sdata.IsUserAdd_);
	}
	if ( sdata.XLength_ )
	{
		message.set_xlength(*sdata.XLength_);
	}
	if ( sdata.YLength_ )
	{
		message.set_ylength(*sdata.YLength_);
	}
	if ( sdata.ZLength_ )
	{
		message.set_zlength(*sdata.ZLength_);
	}
	if ( sdata.Square_ )
	{
		message.set_square(*sdata.Square_);
	}
	if ( sdata.CutXLength_ )
	{
		message.set_cutxlength(*sdata.CutXLength_);
	}
	if ( sdata.CutYLength_ )
	{
		message.set_cutylength(*sdata.CutYLength_);
	}
	if ( sdata.OrderCode_ )
	{
		message.set_ordercode(*sdata.OrderCode_);
	}
	if ( sdata.Name_ )
	{
		message.set_name(*sdata.Name_);
	}
	if ( sdata.ObjectName_ )
	{
		message.set_objectname(*sdata.ObjectName_);
	}
	if ( sdata.ObjectCode_ )
	{
		message.set_objectcode(*sdata.ObjectCode_);
	}
	if ( sdata.MaterialName_ )
	{
		message.set_materialname(*sdata.MaterialName_);
	}
	if ( sdata.CabinetName_ )
	{
		message.set_cabinetname(*sdata.CabinetName_);
	}
	if ( sdata.CabinetCode_ )
	{
		message.set_cabinetcode(*sdata.CabinetCode_);
	}
	if ( sdata.OldTableName_ )
	{
		message.set_oldtablename(*sdata.OldTableName_);
	}
	if ( sdata.OldID_ )
	{
		message.set_oldid(*sdata.OldID_);
	}
	return message;
}

::autoDB::JD_BoardInfoImp::SData	ToData( const transMsg::JD_BoardInfo& message )
{
	JD_BoardInfoImp::SData sdata;
	if ( message.has_itemid() )
	{
		sdata.ItemID_ = message.itemid();
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
	if ( message.has_boardtype() )
	{
		sdata.BoardType_ = message.boardtype();
	}
	if ( message.has_objectid() )
	{
		sdata.ObjectID_ = message.objectid();
	}
	if ( message.has_materialid() )
	{
		sdata.MaterialID_ = message.materialid();
	}
	if ( message.has_cabinetid() )
	{
		sdata.CabinetID_ = message.cabinetid();
	}
	if ( message.has_grain() )
	{
		sdata.Grain_ = message.grain();
	}
	if ( message.has_isuseradd() )
	{
		sdata.IsUserAdd_ = message.isuseradd();
	}
	if ( message.has_xlength() )
	{
		sdata.XLength_ = message.xlength();
	}
	if ( message.has_ylength() )
	{
		sdata.YLength_ = message.ylength();
	}
	if ( message.has_zlength() )
	{
		sdata.ZLength_ = message.zlength();
	}
	if ( message.has_square() )
	{
		sdata.Square_ = message.square();
	}
	if ( message.has_cutxlength() )
	{
		sdata.CutXLength_ = message.cutxlength();
	}
	if ( message.has_cutylength() )
	{
		sdata.CutYLength_ = message.cutylength();
	}
	if ( message.has_ordercode() )
	{
		sdata.OrderCode_ = message.ordercode();
	}
	if ( message.has_name() )
	{
		sdata.Name_ = message.name();
	}
	if ( message.has_objectname() )
	{
		sdata.ObjectName_ = message.objectname();
	}
	if ( message.has_objectcode() )
	{
		sdata.ObjectCode_ = message.objectcode();
	}
	if ( message.has_materialname() )
	{
		sdata.MaterialName_ = message.materialname();
	}
	if ( message.has_cabinetname() )
	{
		sdata.CabinetName_ = message.cabinetname();
	}
	if ( message.has_cabinetcode() )
	{
		sdata.CabinetCode_ = message.cabinetcode();
	}
	if ( message.has_oldtablename() )
	{
		sdata.OldTableName_ = message.oldtablename();
	}
	if ( message.has_oldid() )
	{
		sdata.OldID_ = message.oldid();
	}
	return std::move(sdata);
}



transMsg::JD_BoardSealInfo	ToMessage( const JD_BoardSealInfoImp::SData& sdata )
{
	transMsg::JD_BoardSealInfo message;
	if ( sdata.ItemID_ )
	{
		message.set_itemid(*sdata.ItemID_);
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
	if ( sdata.BoardID_ )
	{
		message.set_boardid(*sdata.BoardID_);
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
	if ( sdata.OrderCode_ )
	{
		message.set_ordercode(*sdata.OrderCode_);
	}
	if ( sdata.MaterialCode_ )
	{
		message.set_materialcode(*sdata.MaterialCode_);
	}
	if ( sdata.MaterialName_ )
	{
		message.set_materialname(*sdata.MaterialName_);
	}
	if ( sdata.OldTableName_ )
	{
		message.set_oldtablename(*sdata.OldTableName_);
	}
	if ( sdata.OldID_ )
	{
		message.set_oldid(*sdata.OldID_);
	}
	return message;
}

::autoDB::JD_BoardSealInfoImp::SData	ToData( const transMsg::JD_BoardSealInfo& message )
{
	JD_BoardSealInfoImp::SData sdata;
	if ( message.has_itemid() )
	{
		sdata.ItemID_ = message.itemid();
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
	if ( message.has_boardid() )
	{
		sdata.BoardID_ = message.boardid();
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
	if ( message.has_ordercode() )
	{
		sdata.OrderCode_ = message.ordercode();
	}
	if ( message.has_materialcode() )
	{
		sdata.MaterialCode_ = message.materialcode();
	}
	if ( message.has_materialname() )
	{
		sdata.MaterialName_ = message.materialname();
	}
	if ( message.has_oldtablename() )
	{
		sdata.OldTableName_ = message.oldtablename();
	}
	if ( message.has_oldid() )
	{
		sdata.OldID_ = message.oldid();
	}
	return std::move(sdata);
}



transMsg::JD_Objects	ToMessage( const JD_ObjectsImp::SData& sdata )
{
	transMsg::JD_Objects message;
	if ( sdata.ItemID_ )
	{
		message.set_itemid(*sdata.ItemID_);
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
	if ( sdata.ObjectType_ )
	{
		message.set_objecttype(*sdata.ObjectType_);
	}
	if ( sdata.ParentID_ )
	{
		message.set_parentid(*sdata.ParentID_);
	}
	if ( sdata.GType_ )
	{
		message.set_gtype(*sdata.GType_);
	}
	if ( sdata.XLength_ )
	{
		message.set_xlength(*sdata.XLength_);
	}
	if ( sdata.YLength_ )
	{
		message.set_ylength(*sdata.YLength_);
	}
	if ( sdata.ZLength_ )
	{
		message.set_zlength(*sdata.ZLength_);
	}
	if ( sdata.ShapeXLength_ )
	{
		message.set_shapexlength(*sdata.ShapeXLength_);
	}
	if ( sdata.ShapeZLength_ )
	{
		message.set_shapezlength(*sdata.ShapeZLength_);
	}
	if ( sdata.GapXLength_ )
	{
		message.set_gapxlength(*sdata.GapXLength_);
	}
	if ( sdata.GapYLength_ )
	{
		message.set_gapylength(*sdata.GapYLength_);
	}
	if ( sdata.GapZLength_ )
	{
		message.set_gapzlength(*sdata.GapZLength_);
	}
	if ( sdata.Amount_ )
	{
		message.set_amount(*sdata.Amount_);
	}
	if ( sdata.IsStandard_ )
	{
		message.set_isstandard(*sdata.IsStandard_);
	}
	if ( sdata.IsUserAdd_ )
	{
		message.set_isuseradd(*sdata.IsUserAdd_);
	}
	if ( sdata.MaterialPlanID_ )
	{
		message.set_materialplanid(*sdata.MaterialPlanID_);
	}
	if ( sdata.CabGapType_ )
	{
		message.set_cabgaptype(*sdata.CabGapType_);
	}
	if ( sdata.CabShape_ )
	{
		message.set_cabshape(*sdata.CabShape_);
	}
	if ( sdata.OrderCode_ )
	{
		message.set_ordercode(*sdata.OrderCode_);
	}
	if ( sdata.Name_ )
	{
		message.set_name(*sdata.Name_);
	}
	if ( sdata.Code_ )
	{
		message.set_code(*sdata.Code_);
	}
	if ( sdata.MaterialPlanName_ )
	{
		message.set_materialplanname(*sdata.MaterialPlanName_);
	}
	if ( sdata.BarCode_ )
	{
		message.set_barcode(*sdata.BarCode_);
	}
	if ( sdata.Remarks_ )
	{
		message.set_remarks(*sdata.Remarks_);
	}
	if ( sdata.OldTableName_ )
	{
		message.set_oldtablename(*sdata.OldTableName_);
	}
	if ( sdata.OldID_ )
	{
		message.set_oldid(*sdata.OldID_);
	}
	return message;
}

::autoDB::JD_ObjectsImp::SData	ToData( const transMsg::JD_Objects& message )
{
	JD_ObjectsImp::SData sdata;
	if ( message.has_itemid() )
	{
		sdata.ItemID_ = message.itemid();
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
	if ( message.has_objecttype() )
	{
		sdata.ObjectType_ = message.objecttype();
	}
	if ( message.has_parentid() )
	{
		sdata.ParentID_ = message.parentid();
	}
	if ( message.has_gtype() )
	{
		sdata.GType_ = message.gtype();
	}
	if ( message.has_xlength() )
	{
		sdata.XLength_ = message.xlength();
	}
	if ( message.has_ylength() )
	{
		sdata.YLength_ = message.ylength();
	}
	if ( message.has_zlength() )
	{
		sdata.ZLength_ = message.zlength();
	}
	if ( message.has_shapexlength() )
	{
		sdata.ShapeXLength_ = message.shapexlength();
	}
	if ( message.has_shapezlength() )
	{
		sdata.ShapeZLength_ = message.shapezlength();
	}
	if ( message.has_gapxlength() )
	{
		sdata.GapXLength_ = message.gapxlength();
	}
	if ( message.has_gapylength() )
	{
		sdata.GapYLength_ = message.gapylength();
	}
	if ( message.has_gapzlength() )
	{
		sdata.GapZLength_ = message.gapzlength();
	}
	if ( message.has_amount() )
	{
		sdata.Amount_ = message.amount();
	}
	if ( message.has_isstandard() )
	{
		sdata.IsStandard_ = message.isstandard();
	}
	if ( message.has_isuseradd() )
	{
		sdata.IsUserAdd_ = message.isuseradd();
	}
	if ( message.has_materialplanid() )
	{
		sdata.MaterialPlanID_ = message.materialplanid();
	}
	if ( message.has_cabgaptype() )
	{
		sdata.CabGapType_ = message.cabgaptype();
	}
	if ( message.has_cabshape() )
	{
		sdata.CabShape_ = message.cabshape();
	}
	if ( message.has_ordercode() )
	{
		sdata.OrderCode_ = message.ordercode();
	}
	if ( message.has_name() )
	{
		sdata.Name_ = message.name();
	}
	if ( message.has_code() )
	{
		sdata.Code_ = message.code();
	}
	if ( message.has_materialplanname() )
	{
		sdata.MaterialPlanName_ = message.materialplanname();
	}
	if ( message.has_barcode() )
	{
		sdata.BarCode_ = message.barcode();
	}
	if ( message.has_remarks() )
	{
		sdata.Remarks_ = message.remarks();
	}
	if ( message.has_oldtablename() )
	{
		sdata.OldTableName_ = message.oldtablename();
	}
	if ( message.has_oldid() )
	{
		sdata.OldID_ = message.oldid();
	}
	return std::move(sdata);
}



transMsg::JD_OrderInfo	ToMessage( const JD_OrderInfoImp::SData& sdata )
{
	transMsg::JD_OrderInfo message;
	if ( sdata.ItemID_ )
	{
		message.set_itemid(*sdata.ItemID_);
	}
	if ( sdata.OrderCate_ )
	{
		message.set_ordercate(*sdata.OrderCate_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.ParentID_ )
	{
		message.set_parentid(*sdata.ParentID_);
	}
	if ( sdata.OrderType_ )
	{
		message.set_ordertype(*sdata.OrderType_);
	}
	if ( sdata.OrderIndex_ )
	{
		message.set_orderindex(*sdata.OrderIndex_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.VerCode_ )
	{
		message.set_vercode(*sdata.VerCode_);
	}
	if ( sdata.ShopID_ )
	{
		message.set_shopid(*sdata.ShopID_);
	}
	if ( sdata.PreSurveyorID_ )
	{
		message.set_presurveyorid(*sdata.PreSurveyorID_);
	}
	if ( sdata.ReSurveyorID_ )
	{
		message.set_resurveyorid(*sdata.ReSurveyorID_);
	}
	if ( sdata.DesignerID_ )
	{
		message.set_designerid(*sdata.DesignerID_);
	}
	if ( sdata.SellerID_ )
	{
		message.set_sellerid(*sdata.SellerID_);
	}
	if ( sdata.AuditorID_ )
	{
		message.set_auditorid(*sdata.AuditorID_);
	}
	if ( sdata.Square_ )
	{
		message.set_square(*sdata.Square_);
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
	if ( sdata.ShopName_ )
	{
		message.set_shopname(*sdata.ShopName_);
	}
	if ( sdata.ShopCode_ )
	{
		message.set_shopcode(*sdata.ShopCode_);
	}
	if ( sdata.OrderCode_ )
	{
		message.set_ordercode(*sdata.OrderCode_);
	}
	if ( sdata.DesignerName_ )
	{
		message.set_designername(*sdata.DesignerName_);
	}
	if ( sdata.DesignerUserCode_ )
	{
		message.set_designerusercode(*sdata.DesignerUserCode_);
	}
	if ( sdata.PreSurveyorName_ )
	{
		message.set_presurveyorname(*sdata.PreSurveyorName_);
	}
	if ( sdata.PreSurveyorCode_ )
	{
		message.set_presurveyorcode(*sdata.PreSurveyorCode_);
	}
	if ( sdata.ReSurveyorName_ )
	{
		message.set_resurveyorname(*sdata.ReSurveyorName_);
	}
	if ( sdata.ReSurveyorCode_ )
	{
		message.set_resurveyorcode(*sdata.ReSurveyorCode_);
	}
	if ( sdata.SellerName_ )
	{
		message.set_sellername(*sdata.SellerName_);
	}
	if ( sdata.SellerUserCode_ )
	{
		message.set_sellerusercode(*sdata.SellerUserCode_);
	}
	if ( sdata.AuditorName_ )
	{
		message.set_auditorname(*sdata.AuditorName_);
	}
	if ( sdata.AuditorUserCode_ )
	{
		message.set_auditorusercode(*sdata.AuditorUserCode_);
	}
	if ( sdata.GeoCode_ )
	{
		message.set_geocode(*sdata.GeoCode_);
	}
	if ( sdata.GeoName_ )
	{
		message.set_geoname(*sdata.GeoName_);
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
	if ( sdata.CustomerPostCode_ )
	{
		message.set_customerpostcode(*sdata.CustomerPostCode_);
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
	if ( sdata.OrderRemarks_ )
	{
		message.set_orderremarks(*sdata.OrderRemarks_);
	}
	if ( sdata.PlanName_ )
	{
		message.set_planname(*sdata.PlanName_);
	}
	if ( sdata.PlanRemarks_ )
	{
		message.set_planremarks(*sdata.PlanRemarks_);
	}
	if ( sdata.AttachFilePath_ )
	{
		message.set_attachfilepath(*sdata.AttachFilePath_);
	}
	return message;
}

::autoDB::JD_OrderInfoImp::SData	ToData( const transMsg::JD_OrderInfo& message )
{
	JD_OrderInfoImp::SData sdata;
	if ( message.has_itemid() )
	{
		sdata.ItemID_ = message.itemid();
	}
	if ( message.has_ordercate() )
	{
		sdata.OrderCate_ = message.ordercate();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_parentid() )
	{
		sdata.ParentID_ = message.parentid();
	}
	if ( message.has_ordertype() )
	{
		sdata.OrderType_ = message.ordertype();
	}
	if ( message.has_orderindex() )
	{
		sdata.OrderIndex_ = message.orderindex();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_vercode() )
	{
		sdata.VerCode_ = message.vercode();
	}
	if ( message.has_shopid() )
	{
		sdata.ShopID_ = message.shopid();
	}
	if ( message.has_presurveyorid() )
	{
		sdata.PreSurveyorID_ = message.presurveyorid();
	}
	if ( message.has_resurveyorid() )
	{
		sdata.ReSurveyorID_ = message.resurveyorid();
	}
	if ( message.has_designerid() )
	{
		sdata.DesignerID_ = message.designerid();
	}
	if ( message.has_sellerid() )
	{
		sdata.SellerID_ = message.sellerid();
	}
	if ( message.has_auditorid() )
	{
		sdata.AuditorID_ = message.auditorid();
	}
	if ( message.has_square() )
	{
		sdata.Square_ = message.square();
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
	if ( message.has_shopname() )
	{
		sdata.ShopName_ = message.shopname();
	}
	if ( message.has_shopcode() )
	{
		sdata.ShopCode_ = message.shopcode();
	}
	if ( message.has_ordercode() )
	{
		sdata.OrderCode_ = message.ordercode();
	}
	if ( message.has_designername() )
	{
		sdata.DesignerName_ = message.designername();
	}
	if ( message.has_designerusercode() )
	{
		sdata.DesignerUserCode_ = message.designerusercode();
	}
	if ( message.has_presurveyorname() )
	{
		sdata.PreSurveyorName_ = message.presurveyorname();
	}
	if ( message.has_presurveyorcode() )
	{
		sdata.PreSurveyorCode_ = message.presurveyorcode();
	}
	if ( message.has_resurveyorname() )
	{
		sdata.ReSurveyorName_ = message.resurveyorname();
	}
	if ( message.has_resurveyorcode() )
	{
		sdata.ReSurveyorCode_ = message.resurveyorcode();
	}
	if ( message.has_sellername() )
	{
		sdata.SellerName_ = message.sellername();
	}
	if ( message.has_sellerusercode() )
	{
		sdata.SellerUserCode_ = message.sellerusercode();
	}
	if ( message.has_auditorname() )
	{
		sdata.AuditorName_ = message.auditorname();
	}
	if ( message.has_auditorusercode() )
	{
		sdata.AuditorUserCode_ = message.auditorusercode();
	}
	if ( message.has_geocode() )
	{
		sdata.GeoCode_ = message.geocode();
	}
	if ( message.has_geoname() )
	{
		sdata.GeoName_ = message.geoname();
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
		sdata.CustomerPostCode_ = message.customerpostcode();
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
	if ( message.has_orderremarks() )
	{
		sdata.OrderRemarks_ = message.orderremarks();
	}
	if ( message.has_planname() )
	{
		sdata.PlanName_ = message.planname();
	}
	if ( message.has_planremarks() )
	{
		sdata.PlanRemarks_ = message.planremarks();
	}
	if ( message.has_attachfilepath() )
	{
		sdata.AttachFilePath_ = message.attachfilepath();
	}
	return std::move(sdata);
}



void	AddToPack(transMsg::JD_Table& package, transMsg::JD_BoardGapInfo& toAdd)
{
	package.add_jd_boardgapinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_BoardInfo& toAdd)
{
	package.add_jd_boardinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_BoardSealInfo& toAdd)
{
	package.add_jd_boardsealinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_Objects& toAdd)
{
	package.add_jd_objects()->Swap(&toAdd);
}
void	AddToPack(transMsg::JD_Table& package, transMsg::JD_OrderInfo& toAdd)
{
	package.add_jd_orderinfo()->Swap(&toAdd);
}
::google::protobuf::RepeatedPtrField< ::transMsg::JD_BoardGapInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_BoardGapInfoImp& tableObj)
{
	return *( package.mutable_jd_boardgapinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JD_BoardInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_BoardInfoImp& tableObj)
{
	return *( package.mutable_jd_boardinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JD_BoardSealInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_BoardSealInfoImp& tableObj)
{
	return *( package.mutable_jd_boardsealinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JD_Objects >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_ObjectsImp& tableObj)
{
	return *( package.mutable_jd_objects() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::JD_OrderInfo >&	ExtractFromPack(transMsg::JD_Table& package, autoDB::JD_OrderInfoImp& tableObj)
{
	return *( package.mutable_jd_orderinfo() );
}


}
