#include"msg-SVUtils.h"

namespace autoDB
{
transMsg::SV_BOMChargeInfo	ToMessage( const SV_BOMChargeInfoImp::SData& sdata )
{
	transMsg::SV_BOMChargeInfo message;
	if ( sdata.BOMChargeID_ )
	{
		message.set_bomchargeid(*sdata.BOMChargeID_);
	}
	if ( sdata.FactoryID_ )
	{
		message.set_factoryid(*sdata.FactoryID_);
	}
	if ( sdata.CategoryID_ )
	{
		message.set_categoryid(*sdata.CategoryID_);
	}
	if ( sdata.Enable_ )
	{
		message.set_enable(*sdata.Enable_);
	}
	return message;
}

::autoDB::SV_BOMChargeInfoImp::SData	ToData( const transMsg::SV_BOMChargeInfo& message )
{
	SV_BOMChargeInfoImp::SData sdata;
	if ( message.has_bomchargeid() )
	{
		sdata.BOMChargeID_ = message.bomchargeid();
	}
	if ( message.has_factoryid() )
	{
		sdata.FactoryID_ = message.factoryid();
	}
	if ( message.has_categoryid() )
	{
		sdata.CategoryID_ = message.categoryid();
	}
	if ( message.has_enable() )
	{
		sdata.Enable_ = message.enable();
	}
	return std::move(sdata);
}



transMsg::SV_ChargeShopInfo	ToMessage( const SV_ChargeShopInfoImp::SData& sdata )
{
	transMsg::SV_ChargeShopInfo message;
	if ( sdata.RecordID_ )
	{
		message.set_recordid(*sdata.RecordID_);
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
	if ( sdata.StartTime_ )
	{
		message.set_starttime( ( *sdata.StartTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.StopTime_ )
	{
		message.set_stoptime( ( *sdata.StopTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::SV_ChargeShopInfoImp::SData	ToData( const transMsg::SV_ChargeShopInfo& message )
{
	SV_ChargeShopInfoImp::SData sdata;
	if ( message.has_recordid() )
	{
		sdata.RecordID_ = message.recordid();
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
	if ( message.has_starttime() )
	{
		sdata.StartTime_ = DBTime(rawDate, DBMilliseconds(message.starttime()) );
	}
	if ( message.has_stoptime() )
	{
		sdata.StopTime_ = DBTime(rawDate, DBMilliseconds(message.stoptime()) );
	}
	return std::move(sdata);
}



transMsg::SV_LibFileInfo	ToMessage( const SV_LibFileInfoImp::SData& sdata )
{
	transMsg::SV_LibFileInfo message;
	if ( sdata.DeptID_ )
	{
		message.set_deptid(*sdata.DeptID_);
	}
	if ( sdata.HashCode_ )
	{
		message.set_hashcode(*sdata.HashCode_);
	}
	if ( sdata.DestPath_ )
	{
		message.set_destpath(*sdata.DestPath_);
	}
	return message;
}

::autoDB::SV_LibFileInfoImp::SData	ToData( const transMsg::SV_LibFileInfo& message )
{
	SV_LibFileInfoImp::SData sdata;
	if ( message.has_deptid() )
	{
		sdata.DeptID_ = message.deptid();
	}
	if ( message.has_hashcode() )
	{
		sdata.HashCode_ = message.hashcode();
	}
	if ( message.has_destpath() )
	{
		sdata.DestPath_ = message.destpath();
	}
	return std::move(sdata);
}



transMsg::SV_ModuleChargeInfo	ToMessage( const SV_ModuleChargeInfoImp::SData& sdata )
{
	transMsg::SV_ModuleChargeInfo message;
	if ( sdata.ModuleChargeID_ )
	{
		message.set_modulechargeid(*sdata.ModuleChargeID_);
	}
	if ( sdata.ModuleID_ )
	{
		message.set_moduleid(*sdata.ModuleID_);
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
	if ( sdata.StartTime_ )
	{
		message.set_starttime( ( *sdata.StartTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.StopTime_ )
	{
		message.set_stoptime( ( *sdata.StopTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	return message;
}

::autoDB::SV_ModuleChargeInfoImp::SData	ToData( const transMsg::SV_ModuleChargeInfo& message )
{
	SV_ModuleChargeInfoImp::SData sdata;
	if ( message.has_modulechargeid() )
	{
		sdata.ModuleChargeID_ = message.modulechargeid();
	}
	if ( message.has_moduleid() )
	{
		sdata.ModuleID_ = message.moduleid();
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
	if ( message.has_starttime() )
	{
		sdata.StartTime_ = DBTime(rawDate, DBMilliseconds(message.starttime()) );
	}
	if ( message.has_stoptime() )
	{
		sdata.StopTime_ = DBTime(rawDate, DBMilliseconds(message.stoptime()) );
	}
	return std::move(sdata);
}



transMsg::SV_OrderActionRecordInfo	ToMessage( const SV_OrderActionRecordInfoImp::SData& sdata )
{
	transMsg::SV_OrderActionRecordInfo message;
	if ( sdata.RecordID_ )
	{
		message.set_recordid(*sdata.RecordID_);
	}
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.UserID_ )
	{
		message.set_userid(*sdata.UserID_);
	}
	if ( sdata.ActionID_ )
	{
		message.set_actionid(*sdata.ActionID_);
	}
	if ( sdata.RecordTime_ )
	{
		message.set_recordtime( ( *sdata.RecordTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.AuditComment_ )
	{
		message.set_auditcomment(*sdata.AuditComment_);
	}
	return message;
}

::autoDB::SV_OrderActionRecordInfoImp::SData	ToData( const transMsg::SV_OrderActionRecordInfo& message )
{
	SV_OrderActionRecordInfoImp::SData sdata;
	if ( message.has_recordid() )
	{
		sdata.RecordID_ = message.recordid();
	}
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_userid() )
	{
		sdata.UserID_ = message.userid();
	}
	if ( message.has_actionid() )
	{
		sdata.ActionID_ = message.actionid();
	}
	if ( message.has_recordtime() )
	{
		sdata.RecordTime_ = DBTime(rawDate, DBMilliseconds(message.recordtime()) );
	}
	if ( message.has_auditcomment() )
	{
		sdata.AuditComment_ = message.auditcomment();
	}
	return std::move(sdata);
}



transMsg::SV_OrderFileInfo	ToMessage( const SV_OrderFileInfoImp::SData& sdata )
{
	transMsg::SV_OrderFileInfo message;
	if ( sdata.OrderID_ )
	{
		message.set_orderid(*sdata.OrderID_);
	}
	if ( sdata.TableType_ )
	{
		message.set_tabletype(*sdata.TableType_);
	}
	if ( sdata.FilePath_ )
	{
		message.set_filepath(*sdata.FilePath_);
	}
	return message;
}

::autoDB::SV_OrderFileInfoImp::SData	ToData( const transMsg::SV_OrderFileInfo& message )
{
	SV_OrderFileInfoImp::SData sdata;
	if ( message.has_orderid() )
	{
		sdata.OrderID_ = message.orderid();
	}
	if ( message.has_tabletype() )
	{
		sdata.TableType_ = message.tabletype();
	}
	if ( message.has_filepath() )
	{
		sdata.FilePath_ = message.filepath();
	}
	return std::move(sdata);
}



transMsg::SV_UserLoginStatusInfo	ToMessage( const SV_UserLoginStatusInfoImp::SData& sdata )
{
	transMsg::SV_UserLoginStatusInfo message;
	if ( sdata.LoginType_ )
	{
		message.set_logintype(*sdata.LoginType_);
	}
	if ( sdata.UserID_ )
	{
		message.set_userid(*sdata.UserID_);
	}
	if ( sdata.LoginStatus_ )
	{
		message.set_loginstatus(*sdata.LoginStatus_);
	}
	if ( sdata.LoginTime_ )
	{
		message.set_logintime( ( *sdata.LoginTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.LastVisitTime_ )
	{
		message.set_lastvisittime( ( *sdata.LastVisitTime_ - DBTime(rawDate) ).total_milliseconds() );
	}
	if ( sdata.LoginIP_ )
	{
		message.set_loginip(*sdata.LoginIP_);
	}
	return message;
}

::autoDB::SV_UserLoginStatusInfoImp::SData	ToData( const transMsg::SV_UserLoginStatusInfo& message )
{
	SV_UserLoginStatusInfoImp::SData sdata;
	if ( message.has_logintype() )
	{
		sdata.LoginType_ = message.logintype();
	}
	if ( message.has_userid() )
	{
		sdata.UserID_ = message.userid();
	}
	if ( message.has_loginstatus() )
	{
		sdata.LoginStatus_ = message.loginstatus();
	}
	if ( message.has_logintime() )
	{
		sdata.LoginTime_ = DBTime(rawDate, DBMilliseconds(message.logintime()) );
	}
	if ( message.has_lastvisittime() )
	{
		sdata.LastVisitTime_ = DBTime(rawDate, DBMilliseconds(message.lastvisittime()) );
	}
	if ( message.has_loginip() )
	{
		sdata.LoginIP_ = message.loginip();
	}
	return std::move(sdata);
}



void	AddToPack(transMsg::SV_Table& package, transMsg::SV_BOMChargeInfo& toAdd)
{
	package.add_sv_bomchargeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_ChargeShopInfo& toAdd)
{
	package.add_sv_chargeshopinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_LibFileInfo& toAdd)
{
	package.add_sv_libfileinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_ModuleChargeInfo& toAdd)
{
	package.add_sv_modulechargeinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_OrderActionRecordInfo& toAdd)
{
	package.add_sv_orderactionrecordinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_OrderFileInfo& toAdd)
{
	package.add_sv_orderfileinfo()->Swap(&toAdd);
}
void	AddToPack(transMsg::SV_Table& package, transMsg::SV_UserLoginStatusInfo& toAdd)
{
	package.add_sv_userloginstatusinfo()->Swap(&toAdd);
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_BOMChargeInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_BOMChargeInfoImp& tableObj)
{
	return *( package.mutable_sv_bomchargeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_ChargeShopInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_ChargeShopInfoImp& tableObj)
{
	return *( package.mutable_sv_chargeshopinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_LibFileInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_LibFileInfoImp& tableObj)
{
	return *( package.mutable_sv_libfileinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_ModuleChargeInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_ModuleChargeInfoImp& tableObj)
{
	return *( package.mutable_sv_modulechargeinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_OrderActionRecordInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_OrderActionRecordInfoImp& tableObj)
{
	return *( package.mutable_sv_orderactionrecordinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_OrderFileInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_OrderFileInfoImp& tableObj)
{
	return *( package.mutable_sv_orderfileinfo() );
}
::google::protobuf::RepeatedPtrField< ::transMsg::SV_UserLoginStatusInfo >&	ExtractFromPack(transMsg::SV_Table& package, autoDB::SV_UserLoginStatusInfoImp& tableObj)
{
	return *( package.mutable_sv_userloginstatusinfo() );
}


}
