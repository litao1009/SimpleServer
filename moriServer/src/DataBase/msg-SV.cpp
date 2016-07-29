#include"msg-SV.h"

#include <boost\locale\encoding.hpp>

namespace autoDB
{
void	SV_BOMChargeInfoImp::SData::SetAll(bool val)
{
	val ? BOMChargeID_.reset(boost::initialized_value) : BOMChargeID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? CategoryID_.reset(boost::initialized_value) : CategoryID_=boost::none;
	val ? Enable_.reset(boost::initialized_value) : Enable_=boost::none;
}

void	SV_BOMChargeInfoImp::SData::Flip()
{
	BOMChargeID_ ? BOMChargeID_=boost::none : BOMChargeID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	CategoryID_ ? CategoryID_=boost::none : CategoryID_.reset(boost::initialized_value);
	Enable_ ? Enable_=boost::none : Enable_.reset(boost::initialized_value);
}

void	SV_BOMChargeInfoImp::SData::Check()
{
	if ( !BOMChargeID_ )
	{
		BOMChargeID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !CategoryID_ )
	{
		CategoryID_.reset(boost::initialized_value);
	}
	if ( !Enable_ )
	{
		Enable_.reset(boost::initialized_value);
	}
}

void	SV_BOMChargeInfoImp::SData::ToUtf8()
{
}

void	SV_BOMChargeInfoImp::SData::ToAscii()
{
}

autoDB::SColumns SV_BOMChargeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.BOMChargeID_ )
	{
		ret.With(BOMChargeID.Use(data.BOMChargeID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.CategoryID_ )
	{
		ret.With(CategoryID.Use(data.CategoryID_));
	}
	if ( data.Enable_ )
	{
		ret.With(Enable.Use(data.Enable_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_BOMChargeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.BOMChargeID_ )
	{
		ret.With(BOMChargeID.Into(data.BOMChargeID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.CategoryID_ )
	{
		ret.With(CategoryID.Into(data.CategoryID_));
	}
	if ( data.Enable_ )
	{
		ret.With(Enable.Into(data.Enable_));
	}
	return std::move(ret);
}


SV_BOMChargeInfoImp	SV_BOMChargeInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_BOMChargeInfoImp(alias));
}

SV_BOMChargeInfoImp::SV_BOMChargeInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_BOMChargeInfo"), alias)
	,BOMChargeID(ImpSPtr_,AUTODB_STR("BOMChargeID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,CategoryID(ImpSPtr_,AUTODB_STR("CategoryID"))
	,Enable(ImpSPtr_,AUTODB_STR("Enable"))
{}

SV_BOMChargeInfoImp::SV_BOMChargeInfoImp( const SV_BOMChargeInfoImp& rhs ):Table(rhs)
	,BOMChargeID(rhs.BOMChargeID)
	,FactoryID(rhs.FactoryID)
	,CategoryID(rhs.CategoryID)
	,Enable(rhs.Enable)
{}

SV_BOMChargeInfoImp::SV_BOMChargeInfoImp( SV_BOMChargeInfoImp&& rhs ):Table(rhs)
	,BOMChargeID(std::move(rhs.BOMChargeID))
	,FactoryID(std::move(rhs.FactoryID))
	,CategoryID(std::move(rhs.CategoryID))
	,Enable(std::move(rhs.Enable))
{}

SV_BOMChargeInfoImp	SV_BOMChargeInfo("");



void	SV_ChargeShopInfoImp::SData::SetAll(bool val)
{
	val ? RecordID_.reset(boost::initialized_value) : RecordID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? StartTime_ = DBTime(rawDate) : StartTime_=boost::none;
	val ? StopTime_ = DBTime(rawDate) : StopTime_=boost::none;
}

void	SV_ChargeShopInfoImp::SData::Flip()
{
	RecordID_ ? RecordID_=boost::none : RecordID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	StartTime_ ? StartTime_=boost::none : StartTime_ = DBTime(rawDate);
	StopTime_ ? StopTime_=boost::none : StopTime_ = DBTime(rawDate);
}

void	SV_ChargeShopInfoImp::SData::Check()
{
	if ( !RecordID_ )
	{
		RecordID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !ShopID_ )
	{
		ShopID_.reset(boost::initialized_value);
	}
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !StartTime_ )
	{
		StartTime_ = DBTime(rawDate);
	}
	if ( !StopTime_ )
	{
		StopTime_ = DBTime(rawDate);
	}
}

void	SV_ChargeShopInfoImp::SData::ToUtf8()
{
}

void	SV_ChargeShopInfoImp::SData::ToAscii()
{
}

autoDB::SColumns SV_ChargeShopInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.RecordID_ )
	{
		ret.With(RecordID.Use(data.RecordID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Use(data.ShopID_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.StartTime_ )
	{
		ret.With(StartTime.Use(data.StartTime_));
	}
	if ( data.StopTime_ )
	{
		ret.With(StopTime.Use(data.StopTime_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_ChargeShopInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.RecordID_ )
	{
		ret.With(RecordID.Into(data.RecordID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Into(data.ShopID_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.StartTime_ )
	{
		ret.With(StartTime.Into(data.StartTime_));
	}
	if ( data.StopTime_ )
	{
		ret.With(StopTime.Into(data.StopTime_));
	}
	return std::move(ret);
}


SV_ChargeShopInfoImp	SV_ChargeShopInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_ChargeShopInfoImp(alias));
}

SV_ChargeShopInfoImp::SV_ChargeShopInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_ChargeShopInfo"), alias)
	,RecordID(ImpSPtr_,AUTODB_STR("RecordID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,StartTime(ImpSPtr_,AUTODB_STR("StartTime"))
	,StopTime(ImpSPtr_,AUTODB_STR("StopTime"))
{}

SV_ChargeShopInfoImp::SV_ChargeShopInfoImp( const SV_ChargeShopInfoImp& rhs ):Table(rhs)
	,RecordID(rhs.RecordID)
	,FactoryID(rhs.FactoryID)
	,ShopID(rhs.ShopID)
	,UserID(rhs.UserID)
	,StartTime(rhs.StartTime)
	,StopTime(rhs.StopTime)
{}

SV_ChargeShopInfoImp::SV_ChargeShopInfoImp( SV_ChargeShopInfoImp&& rhs ):Table(rhs)
	,RecordID(std::move(rhs.RecordID))
	,FactoryID(std::move(rhs.FactoryID))
	,ShopID(std::move(rhs.ShopID))
	,UserID(std::move(rhs.UserID))
	,StartTime(std::move(rhs.StartTime))
	,StopTime(std::move(rhs.StopTime))
{}

SV_ChargeShopInfoImp	SV_ChargeShopInfo("");



void	SV_LibFileInfoImp::SData::SetAll(bool val)
{
	val ? DeptID_.reset(boost::initialized_value) : DeptID_=boost::none;
	val ? HashCode_.reset(boost::initialized_value) : HashCode_=boost::none;
	val ? DestPath_.reset(boost::initialized_value) : DestPath_=boost::none;
}

void	SV_LibFileInfoImp::SData::Flip()
{
	DeptID_ ? DeptID_=boost::none : DeptID_.reset(boost::initialized_value);
	HashCode_ ? HashCode_=boost::none : HashCode_.reset(boost::initialized_value);
	DestPath_ ? DestPath_=boost::none : DestPath_.reset(boost::initialized_value);
}

void	SV_LibFileInfoImp::SData::Check()
{
	if ( !DeptID_ )
	{
		DeptID_.reset(boost::initialized_value);
	}
	if ( !HashCode_ )
	{
		HashCode_.reset(boost::initialized_value);
	}
	if ( !DestPath_ )
	{
		DestPath_.reset(boost::initialized_value);
	}
}

void	SV_LibFileInfoImp::SData::ToUtf8()
{
	if ( HashCode_ )
	{
		HashCode_ = boost::locale::conv::to_utf<char>(*HashCode_, "GBK");
	}
	if ( DestPath_ )
	{
		DestPath_ = boost::locale::conv::to_utf<char>(*DestPath_, "GBK");
	}
}

void	SV_LibFileInfoImp::SData::ToAscii()
{
	if ( HashCode_ )
	{
		HashCode_ = boost::locale::conv::from_utf(*HashCode_, "GBK");
	}
	if ( DestPath_ )
	{
		DestPath_ = boost::locale::conv::from_utf(*DestPath_, "GBK");
	}
}

autoDB::SColumns SV_LibFileInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Use(data.DeptID_));
	}
	if ( data.HashCode_ )
	{
		ret.With(HashCode.Use(data.HashCode_));
	}
	if ( data.DestPath_ )
	{
		ret.With(DestPath.Use(data.DestPath_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_LibFileInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Into(data.DeptID_));
	}
	if ( data.HashCode_ )
	{
		ret.With(HashCode.Into(data.HashCode_));
	}
	if ( data.DestPath_ )
	{
		ret.With(DestPath.Into(data.DestPath_));
	}
	return std::move(ret);
}


SV_LibFileInfoImp	SV_LibFileInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_LibFileInfoImp(alias));
}

SV_LibFileInfoImp::SV_LibFileInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_LibFileInfo"), alias)
	,DeptID(ImpSPtr_,AUTODB_STR("DeptID"))
	,HashCode(ImpSPtr_,AUTODB_STR("HashCode"))
	,DestPath(ImpSPtr_,AUTODB_STR("DestPath"))
{}

SV_LibFileInfoImp::SV_LibFileInfoImp( const SV_LibFileInfoImp& rhs ):Table(rhs)
	,DeptID(rhs.DeptID)
	,HashCode(rhs.HashCode)
	,DestPath(rhs.DestPath)
{}

SV_LibFileInfoImp::SV_LibFileInfoImp( SV_LibFileInfoImp&& rhs ):Table(rhs)
	,DeptID(std::move(rhs.DeptID))
	,HashCode(std::move(rhs.HashCode))
	,DestPath(std::move(rhs.DestPath))
{}

SV_LibFileInfoImp	SV_LibFileInfo("");



void	SV_ModuleChargeInfoImp::SData::SetAll(bool val)
{
	val ? ModuleChargeID_.reset(boost::initialized_value) : ModuleChargeID_=boost::none;
	val ? ModuleID_.reset(boost::initialized_value) : ModuleID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? StartTime_ = DBTime(rawDate) : StartTime_=boost::none;
	val ? StopTime_ = DBTime(rawDate) : StopTime_=boost::none;
}

void	SV_ModuleChargeInfoImp::SData::Flip()
{
	ModuleChargeID_ ? ModuleChargeID_=boost::none : ModuleChargeID_.reset(boost::initialized_value);
	ModuleID_ ? ModuleID_=boost::none : ModuleID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	StartTime_ ? StartTime_=boost::none : StartTime_ = DBTime(rawDate);
	StopTime_ ? StopTime_=boost::none : StopTime_ = DBTime(rawDate);
}

void	SV_ModuleChargeInfoImp::SData::Check()
{
	if ( !ModuleChargeID_ )
	{
		ModuleChargeID_.reset(boost::initialized_value);
	}
	if ( !ModuleID_ )
	{
		ModuleID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !ShopID_ )
	{
		ShopID_.reset(boost::initialized_value);
	}
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !StartTime_ )
	{
		StartTime_ = DBTime(rawDate);
	}
	if ( !StopTime_ )
	{
		StopTime_ = DBTime(rawDate);
	}
}

void	SV_ModuleChargeInfoImp::SData::ToUtf8()
{
}

void	SV_ModuleChargeInfoImp::SData::ToAscii()
{
}

autoDB::SColumns SV_ModuleChargeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ModuleChargeID_ )
	{
		ret.With(ModuleChargeID.Use(data.ModuleChargeID_));
	}
	if ( data.ModuleID_ )
	{
		ret.With(ModuleID.Use(data.ModuleID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Use(data.ShopID_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.StartTime_ )
	{
		ret.With(StartTime.Use(data.StartTime_));
	}
	if ( data.StopTime_ )
	{
		ret.With(StopTime.Use(data.StopTime_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_ModuleChargeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ModuleChargeID_ )
	{
		ret.With(ModuleChargeID.Into(data.ModuleChargeID_));
	}
	if ( data.ModuleID_ )
	{
		ret.With(ModuleID.Into(data.ModuleID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Into(data.ShopID_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.StartTime_ )
	{
		ret.With(StartTime.Into(data.StartTime_));
	}
	if ( data.StopTime_ )
	{
		ret.With(StopTime.Into(data.StopTime_));
	}
	return std::move(ret);
}


SV_ModuleChargeInfoImp	SV_ModuleChargeInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_ModuleChargeInfoImp(alias));
}

SV_ModuleChargeInfoImp::SV_ModuleChargeInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_ModuleChargeInfo"), alias)
	,ModuleChargeID(ImpSPtr_,AUTODB_STR("ModuleChargeID"))
	,ModuleID(ImpSPtr_,AUTODB_STR("ModuleID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,StartTime(ImpSPtr_,AUTODB_STR("StartTime"))
	,StopTime(ImpSPtr_,AUTODB_STR("StopTime"))
{}

SV_ModuleChargeInfoImp::SV_ModuleChargeInfoImp( const SV_ModuleChargeInfoImp& rhs ):Table(rhs)
	,ModuleChargeID(rhs.ModuleChargeID)
	,ModuleID(rhs.ModuleID)
	,FactoryID(rhs.FactoryID)
	,ShopID(rhs.ShopID)
	,UserID(rhs.UserID)
	,StartTime(rhs.StartTime)
	,StopTime(rhs.StopTime)
{}

SV_ModuleChargeInfoImp::SV_ModuleChargeInfoImp( SV_ModuleChargeInfoImp&& rhs ):Table(rhs)
	,ModuleChargeID(std::move(rhs.ModuleChargeID))
	,ModuleID(std::move(rhs.ModuleID))
	,FactoryID(std::move(rhs.FactoryID))
	,ShopID(std::move(rhs.ShopID))
	,UserID(std::move(rhs.UserID))
	,StartTime(std::move(rhs.StartTime))
	,StopTime(std::move(rhs.StopTime))
{}

SV_ModuleChargeInfoImp	SV_ModuleChargeInfo("");



void	SV_OrderActionRecordInfoImp::SData::SetAll(bool val)
{
	val ? RecordID_.reset(boost::initialized_value) : RecordID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? ActionID_.reset(boost::initialized_value) : ActionID_=boost::none;
	val ? RecordTime_ = DBTime(rawDate) : RecordTime_=boost::none;
	val ? AuditComment_.reset(boost::initialized_value) : AuditComment_=boost::none;
}

void	SV_OrderActionRecordInfoImp::SData::Flip()
{
	RecordID_ ? RecordID_=boost::none : RecordID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	ActionID_ ? ActionID_=boost::none : ActionID_.reset(boost::initialized_value);
	RecordTime_ ? RecordTime_=boost::none : RecordTime_ = DBTime(rawDate);
	AuditComment_ ? AuditComment_=boost::none : AuditComment_.reset(boost::initialized_value);
}

void	SV_OrderActionRecordInfoImp::SData::Check()
{
	if ( !RecordID_ )
	{
		RecordID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !ActionID_ )
	{
		ActionID_.reset(boost::initialized_value);
	}
	if ( !RecordTime_ )
	{
		RecordTime_ = DBTime(rawDate);
	}
	if ( !AuditComment_ )
	{
		AuditComment_.reset(boost::initialized_value);
	}
}

void	SV_OrderActionRecordInfoImp::SData::ToUtf8()
{
	if ( AuditComment_ )
	{
		AuditComment_ = boost::locale::conv::to_utf<char>(*AuditComment_, "GBK");
	}
}

void	SV_OrderActionRecordInfoImp::SData::ToAscii()
{
	if ( AuditComment_ )
	{
		AuditComment_ = boost::locale::conv::from_utf(*AuditComment_, "GBK");
	}
}

autoDB::SColumns SV_OrderActionRecordInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.RecordID_ )
	{
		ret.With(RecordID.Use(data.RecordID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.ActionID_ )
	{
		ret.With(ActionID.Use(data.ActionID_));
	}
	if ( data.RecordTime_ )
	{
		ret.With(RecordTime.Use(data.RecordTime_));
	}
	if ( data.AuditComment_ )
	{
		ret.With(AuditComment.Use(data.AuditComment_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_OrderActionRecordInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.RecordID_ )
	{
		ret.With(RecordID.Into(data.RecordID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.ActionID_ )
	{
		ret.With(ActionID.Into(data.ActionID_));
	}
	if ( data.RecordTime_ )
	{
		ret.With(RecordTime.Into(data.RecordTime_));
	}
	if ( data.AuditComment_ )
	{
		ret.With(AuditComment.Into(data.AuditComment_));
	}
	return std::move(ret);
}


SV_OrderActionRecordInfoImp	SV_OrderActionRecordInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_OrderActionRecordInfoImp(alias));
}

SV_OrderActionRecordInfoImp::SV_OrderActionRecordInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_OrderActionRecordInfo"), alias)
	,RecordID(ImpSPtr_,AUTODB_STR("RecordID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,ActionID(ImpSPtr_,AUTODB_STR("ActionID"))
	,RecordTime(ImpSPtr_,AUTODB_STR("RecordTime"))
	,AuditComment(ImpSPtr_,AUTODB_STR("AuditComment"))
{}

SV_OrderActionRecordInfoImp::SV_OrderActionRecordInfoImp( const SV_OrderActionRecordInfoImp& rhs ):Table(rhs)
	,RecordID(rhs.RecordID)
	,OrderID(rhs.OrderID)
	,UserID(rhs.UserID)
	,ActionID(rhs.ActionID)
	,RecordTime(rhs.RecordTime)
	,AuditComment(rhs.AuditComment)
{}

SV_OrderActionRecordInfoImp::SV_OrderActionRecordInfoImp( SV_OrderActionRecordInfoImp&& rhs ):Table(rhs)
	,RecordID(std::move(rhs.RecordID))
	,OrderID(std::move(rhs.OrderID))
	,UserID(std::move(rhs.UserID))
	,ActionID(std::move(rhs.ActionID))
	,RecordTime(std::move(rhs.RecordTime))
	,AuditComment(std::move(rhs.AuditComment))
{}

SV_OrderActionRecordInfoImp	SV_OrderActionRecordInfo("");



void	SV_OrderFileInfoImp::SData::SetAll(bool val)
{
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? TableType_.reset(boost::initialized_value) : TableType_=boost::none;
	val ? FilePath_.reset(boost::initialized_value) : FilePath_=boost::none;
}

void	SV_OrderFileInfoImp::SData::Flip()
{
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	TableType_ ? TableType_=boost::none : TableType_.reset(boost::initialized_value);
	FilePath_ ? FilePath_=boost::none : FilePath_.reset(boost::initialized_value);
}

void	SV_OrderFileInfoImp::SData::Check()
{
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !TableType_ )
	{
		TableType_.reset(boost::initialized_value);
	}
	if ( !FilePath_ )
	{
		FilePath_.reset(boost::initialized_value);
	}
}

void	SV_OrderFileInfoImp::SData::ToUtf8()
{
	if ( FilePath_ )
	{
		FilePath_ = boost::locale::conv::to_utf<char>(*FilePath_, "GBK");
	}
}

void	SV_OrderFileInfoImp::SData::ToAscii()
{
	if ( FilePath_ )
	{
		FilePath_ = boost::locale::conv::from_utf(*FilePath_, "GBK");
	}
}

autoDB::SColumns SV_OrderFileInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.TableType_ )
	{
		ret.With(TableType.Use(data.TableType_));
	}
	if ( data.FilePath_ )
	{
		ret.With(FilePath.Use(data.FilePath_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_OrderFileInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.TableType_ )
	{
		ret.With(TableType.Into(data.TableType_));
	}
	if ( data.FilePath_ )
	{
		ret.With(FilePath.Into(data.FilePath_));
	}
	return std::move(ret);
}


SV_OrderFileInfoImp	SV_OrderFileInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_OrderFileInfoImp(alias));
}

SV_OrderFileInfoImp::SV_OrderFileInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_OrderFileInfo"), alias)
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,TableType(ImpSPtr_,AUTODB_STR("TableType"))
	,FilePath(ImpSPtr_,AUTODB_STR("FilePath"))
{}

SV_OrderFileInfoImp::SV_OrderFileInfoImp( const SV_OrderFileInfoImp& rhs ):Table(rhs)
	,OrderID(rhs.OrderID)
	,TableType(rhs.TableType)
	,FilePath(rhs.FilePath)
{}

SV_OrderFileInfoImp::SV_OrderFileInfoImp( SV_OrderFileInfoImp&& rhs ):Table(rhs)
	,OrderID(std::move(rhs.OrderID))
	,TableType(std::move(rhs.TableType))
	,FilePath(std::move(rhs.FilePath))
{}

SV_OrderFileInfoImp	SV_OrderFileInfo("");



void	SV_UserLoginStatusInfoImp::SData::SetAll(bool val)
{
	val ? LoginType_.reset(boost::initialized_value) : LoginType_=boost::none;
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? LoginStatus_.reset(boost::initialized_value) : LoginStatus_=boost::none;
	val ? LoginTime_ = DBTime(rawDate) : LoginTime_=boost::none;
	val ? LastVisitTime_ = DBTime(rawDate) : LastVisitTime_=boost::none;
	val ? LoginIP_.reset(boost::initialized_value) : LoginIP_=boost::none;
}

void	SV_UserLoginStatusInfoImp::SData::Flip()
{
	LoginType_ ? LoginType_=boost::none : LoginType_.reset(boost::initialized_value);
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	LoginStatus_ ? LoginStatus_=boost::none : LoginStatus_.reset(boost::initialized_value);
	LoginTime_ ? LoginTime_=boost::none : LoginTime_ = DBTime(rawDate);
	LastVisitTime_ ? LastVisitTime_=boost::none : LastVisitTime_ = DBTime(rawDate);
	LoginIP_ ? LoginIP_=boost::none : LoginIP_.reset(boost::initialized_value);
}

void	SV_UserLoginStatusInfoImp::SData::Check()
{
	if ( !LoginType_ )
	{
		LoginType_.reset(boost::initialized_value);
	}
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !LoginStatus_ )
	{
		LoginStatus_.reset(boost::initialized_value);
	}
	if ( !LoginTime_ )
	{
		LoginTime_ = DBTime(rawDate);
	}
	if ( !LastVisitTime_ )
	{
		LastVisitTime_ = DBTime(rawDate);
	}
	if ( !LoginIP_ )
	{
		LoginIP_.reset(boost::initialized_value);
	}
}

void	SV_UserLoginStatusInfoImp::SData::ToUtf8()
{
	if ( LoginIP_ )
	{
		LoginIP_ = boost::locale::conv::to_utf<char>(*LoginIP_, "GBK");
	}
}

void	SV_UserLoginStatusInfoImp::SData::ToAscii()
{
	if ( LoginIP_ )
	{
		LoginIP_ = boost::locale::conv::from_utf(*LoginIP_, "GBK");
	}
}

autoDB::SColumns SV_UserLoginStatusInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.LoginType_ )
	{
		ret.With(LoginType.Use(data.LoginType_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.LoginStatus_ )
	{
		ret.With(LoginStatus.Use(data.LoginStatus_));
	}
	if ( data.LoginTime_ )
	{
		ret.With(LoginTime.Use(data.LoginTime_));
	}
	if ( data.LastVisitTime_ )
	{
		ret.With(LastVisitTime.Use(data.LastVisitTime_));
	}
	if ( data.LoginIP_ )
	{
		ret.With(LoginIP.Use(data.LoginIP_));
	}
	return std::move(ret);
}

autoDB::SColumns SV_UserLoginStatusInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.LoginType_ )
	{
		ret.With(LoginType.Into(data.LoginType_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.LoginStatus_ )
	{
		ret.With(LoginStatus.Into(data.LoginStatus_));
	}
	if ( data.LoginTime_ )
	{
		ret.With(LoginTime.Into(data.LoginTime_));
	}
	if ( data.LastVisitTime_ )
	{
		ret.With(LastVisitTime.Into(data.LastVisitTime_));
	}
	if ( data.LoginIP_ )
	{
		ret.With(LoginIP.Into(data.LoginIP_));
	}
	return std::move(ret);
}


SV_UserLoginStatusInfoImp	SV_UserLoginStatusInfoImp::operator() (const StringType& alias)
{
	return std::move(SV_UserLoginStatusInfoImp(alias));
}

SV_UserLoginStatusInfoImp::SV_UserLoginStatusInfoImp( const StringType& alias ):Table(AUTODB_STR("SV_UserLoginStatusInfo"), alias)
	,LoginType(ImpSPtr_,AUTODB_STR("LoginType"))
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,LoginStatus(ImpSPtr_,AUTODB_STR("LoginStatus"))
	,LoginTime(ImpSPtr_,AUTODB_STR("LoginTime"))
	,LastVisitTime(ImpSPtr_,AUTODB_STR("LastVisitTime"))
	,LoginIP(ImpSPtr_,AUTODB_STR("LoginIP"))
{}

SV_UserLoginStatusInfoImp::SV_UserLoginStatusInfoImp( const SV_UserLoginStatusInfoImp& rhs ):Table(rhs)
	,LoginType(rhs.LoginType)
	,UserID(rhs.UserID)
	,LoginStatus(rhs.LoginStatus)
	,LoginTime(rhs.LoginTime)
	,LastVisitTime(rhs.LastVisitTime)
	,LoginIP(rhs.LoginIP)
{}

SV_UserLoginStatusInfoImp::SV_UserLoginStatusInfoImp( SV_UserLoginStatusInfoImp&& rhs ):Table(rhs)
	,LoginType(std::move(rhs.LoginType))
	,UserID(std::move(rhs.UserID))
	,LoginStatus(std::move(rhs.LoginStatus))
	,LoginTime(std::move(rhs.LoginTime))
	,LastVisitTime(std::move(rhs.LastVisitTime))
	,LoginIP(std::move(rhs.LoginIP))
{}

SV_UserLoginStatusInfoImp	SV_UserLoginStatusInfo("");



}
