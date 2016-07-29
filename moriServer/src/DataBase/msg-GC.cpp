#include"msg-GC.h"

#include <boost\locale\encoding.hpp>

namespace autoDB
{
void	GC_CabBoardGapInfoImp::SData::SetAll(bool val)
{
	val ? CabBoardGapID_.reset(boost::initialized_value) : CabBoardGapID_=boost::none;
	val ? CabBoardID_.reset(boost::initialized_value) : CabBoardID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? CabStructBoardGapID_.reset(boost::initialized_value) : CabStructBoardGapID_=boost::none;
	val ? GapPos_.reset(boost::initialized_value) : GapPos_=boost::none;
	val ? GapIndex_.reset(boost::initialized_value) : GapIndex_=boost::none;
	val ? GapType_.reset(boost::initialized_value) : GapType_=boost::none;
	val ? GapShape_.reset(boost::initialized_value) : GapShape_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabBoardGapInfoImp::SData::Flip()
{
	CabBoardGapID_ ? CabBoardGapID_=boost::none : CabBoardGapID_.reset(boost::initialized_value);
	CabBoardID_ ? CabBoardID_=boost::none : CabBoardID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	CabStructBoardGapID_ ? CabStructBoardGapID_=boost::none : CabStructBoardGapID_.reset(boost::initialized_value);
	GapPos_ ? GapPos_=boost::none : GapPos_.reset(boost::initialized_value);
	GapIndex_ ? GapIndex_=boost::none : GapIndex_.reset(boost::initialized_value);
	GapType_ ? GapType_=boost::none : GapType_.reset(boost::initialized_value);
	GapShape_ ? GapShape_=boost::none : GapShape_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabBoardGapInfoImp::SData::Check()
{
	if ( !CabBoardGapID_ )
	{
		CabBoardGapID_.reset(boost::initialized_value);
	}
	if ( !CabBoardID_ )
	{
		CabBoardID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardGapID_ )
	{
		CabStructBoardGapID_.reset(boost::initialized_value);
	}
	if ( !GapPos_ )
	{
		GapPos_.reset(boost::initialized_value);
	}
	if ( !GapIndex_ )
	{
		GapIndex_.reset(boost::initialized_value);
	}
	if ( !GapType_ )
	{
		GapType_.reset(boost::initialized_value);
	}
	if ( !GapShape_ )
	{
		GapShape_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabBoardGapInfoImp::SData::ToUtf8()
{
}

void	GC_CabBoardGapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabBoardGapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabBoardGapID_ )
	{
		ret.With(CabBoardGapID.Use(data.CabBoardGapID_));
	}
	if ( data.CabBoardID_ )
	{
		ret.With(CabBoardID.Use(data.CabBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.CabStructBoardGapID_ )
	{
		ret.With(CabStructBoardGapID.Use(data.CabStructBoardGapID_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Use(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Use(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Use(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Use(data.GapShape_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabBoardGapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabBoardGapID_ )
	{
		ret.With(CabBoardGapID.Into(data.CabBoardGapID_));
	}
	if ( data.CabBoardID_ )
	{
		ret.With(CabBoardID.Into(data.CabBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.CabStructBoardGapID_ )
	{
		ret.With(CabStructBoardGapID.Into(data.CabStructBoardGapID_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Into(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Into(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Into(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Into(data.GapShape_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabBoardGapInfoImp	GC_CabBoardGapInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabBoardGapInfoImp(alias));
}

GC_CabBoardGapInfoImp::GC_CabBoardGapInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabBoardGapInfo"), alias)
	,CabBoardGapID(ImpSPtr_,AUTODB_STR("CabBoardGapID"))
	,CabBoardID(ImpSPtr_,AUTODB_STR("CabBoardID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,CabStructBoardGapID(ImpSPtr_,AUTODB_STR("CabStructBoardGapID"))
	,GapPos(ImpSPtr_,AUTODB_STR("GapPos"))
	,GapIndex(ImpSPtr_,AUTODB_STR("GapIndex"))
	,GapType(ImpSPtr_,AUTODB_STR("GapType"))
	,GapShape(ImpSPtr_,AUTODB_STR("GapShape"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabBoardGapInfoImp::GC_CabBoardGapInfoImp( const GC_CabBoardGapInfoImp& rhs ):Table(rhs)
	,CabBoardGapID(rhs.CabBoardGapID)
	,CabBoardID(rhs.CabBoardID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,CabStructBoardID(rhs.CabStructBoardID)
	,CabStructBoardGapID(rhs.CabStructBoardGapID)
	,GapPos(rhs.GapPos)
	,GapIndex(rhs.GapIndex)
	,GapType(rhs.GapType)
	,GapShape(rhs.GapShape)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabBoardGapInfoImp::GC_CabBoardGapInfoImp( GC_CabBoardGapInfoImp&& rhs ):Table(rhs)
	,CabBoardGapID(std::move(rhs.CabBoardGapID))
	,CabBoardID(std::move(rhs.CabBoardID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,CabStructBoardGapID(std::move(rhs.CabStructBoardGapID))
	,GapPos(std::move(rhs.GapPos))
	,GapIndex(std::move(rhs.GapIndex))
	,GapType(std::move(rhs.GapType))
	,GapShape(std::move(rhs.GapShape))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabBoardGapInfoImp	GC_CabBoardGapInfo("");



void	GC_CabBoardInfoImp::SData::SetAll(bool val)
{
	val ? CabBoardID_.reset(boost::initialized_value) : CabBoardID_=boost::none;
	val ? CabID_.reset(boost::initialized_value) : CabID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? CabinetSizeID_.reset(boost::initialized_value) : CabinetSizeID_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? CabinetSizeBoardID_.reset(boost::initialized_value) : CabinetSizeBoardID_=boost::none;
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? IsChangedOffset_.reset(boost::initialized_value) : IsChangedOffset_=boost::none;
	val ? IsFakeDel_.reset(boost::initialized_value) : IsFakeDel_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? CabBoardName_.reset(boost::initialized_value) : CabBoardName_=boost::none;
}

void	GC_CabBoardInfoImp::SData::Flip()
{
	CabBoardID_ ? CabBoardID_=boost::none : CabBoardID_.reset(boost::initialized_value);
	CabID_ ? CabID_=boost::none : CabID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	CabinetSizeID_ ? CabinetSizeID_=boost::none : CabinetSizeID_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	CabinetSizeBoardID_ ? CabinetSizeBoardID_=boost::none : CabinetSizeBoardID_.reset(boost::initialized_value);
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	IsChangedOffset_ ? IsChangedOffset_=boost::none : IsChangedOffset_.reset(boost::initialized_value);
	IsFakeDel_ ? IsFakeDel_=boost::none : IsFakeDel_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	CabBoardName_ ? CabBoardName_=boost::none : CabBoardName_.reset(boost::initialized_value);
}

void	GC_CabBoardInfoImp::SData::Check()
{
	if ( !CabBoardID_ )
	{
		CabBoardID_.reset(boost::initialized_value);
	}
	if ( !CabID_ )
	{
		CabID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeID_ )
	{
		CabinetSizeID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeBoardID_ )
	{
		CabinetSizeBoardID_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !IsChangedOffset_ )
	{
		IsChangedOffset_.reset(boost::initialized_value);
	}
	if ( !IsFakeDel_ )
	{
		IsFakeDel_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !CabBoardName_ )
	{
		CabBoardName_.reset(boost::initialized_value);
	}
}

void	GC_CabBoardInfoImp::SData::ToUtf8()
{
	if ( CabBoardName_ )
	{
		CabBoardName_ = boost::locale::conv::to_utf<char>(*CabBoardName_, "GBK");
	}
}

void	GC_CabBoardInfoImp::SData::ToAscii()
{
	if ( CabBoardName_ )
	{
		CabBoardName_ = boost::locale::conv::from_utf(*CabBoardName_, "GBK");
	}
}

autoDB::SColumns GC_CabBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabBoardID_ )
	{
		ret.With(CabBoardID.Use(data.CabBoardID_));
	}
	if ( data.CabID_ )
	{
		ret.With(CabID.Use(data.CabID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Use(data.CabinetSizeID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.CabinetSizeBoardID_ )
	{
		ret.With(CabinetSizeBoardID.Use(data.CabinetSizeBoardID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.IsChangedOffset_ )
	{
		ret.With(IsChangedOffset.Use(data.IsChangedOffset_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Use(data.IsFakeDel_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.CabBoardName_ )
	{
		ret.With(CabBoardName.Use(data.CabBoardName_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabBoardID_ )
	{
		ret.With(CabBoardID.Into(data.CabBoardID_));
	}
	if ( data.CabID_ )
	{
		ret.With(CabID.Into(data.CabID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Into(data.CabinetSizeID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.CabinetSizeBoardID_ )
	{
		ret.With(CabinetSizeBoardID.Into(data.CabinetSizeBoardID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.IsChangedOffset_ )
	{
		ret.With(IsChangedOffset.Into(data.IsChangedOffset_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Into(data.IsFakeDel_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.CabBoardName_ )
	{
		ret.With(CabBoardName.Into(data.CabBoardName_));
	}
	return std::move(ret);
}


GC_CabBoardInfoImp	GC_CabBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabBoardInfoImp(alias));
}

GC_CabBoardInfoImp::GC_CabBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabBoardInfo"), alias)
	,CabBoardID(ImpSPtr_,AUTODB_STR("CabBoardID"))
	,CabID(ImpSPtr_,AUTODB_STR("CabID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,CabinetSizeID(ImpSPtr_,AUTODB_STR("CabinetSizeID"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,CabinetSizeBoardID(ImpSPtr_,AUTODB_STR("CabinetSizeBoardID"))
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,IsChangedOffset(ImpSPtr_,AUTODB_STR("IsChangedOffset"))
	,IsFakeDel(ImpSPtr_,AUTODB_STR("IsFakeDel"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,CabBoardName(ImpSPtr_,AUTODB_STR("CabBoardName"))
{}

GC_CabBoardInfoImp::GC_CabBoardInfoImp( const GC_CabBoardInfoImp& rhs ):Table(rhs)
	,CabBoardID(rhs.CabBoardID)
	,CabID(rhs.CabID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,CabinetSizeID(rhs.CabinetSizeID)
	,CabStructBoardID(rhs.CabStructBoardID)
	,CabinetSizeBoardID(rhs.CabinetSizeBoardID)
	,CabMatPlanID(rhs.CabMatPlanID)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,SkinDirection(rhs.SkinDirection)
	,SealRuleID(rhs.SealRuleID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,IsChangedOffset(rhs.IsChangedOffset)
	,IsFakeDel(rhs.IsFakeDel)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,CabBoardName(rhs.CabBoardName)
{}

GC_CabBoardInfoImp::GC_CabBoardInfoImp( GC_CabBoardInfoImp&& rhs ):Table(rhs)
	,CabBoardID(std::move(rhs.CabBoardID))
	,CabID(std::move(rhs.CabID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,CabinetSizeID(std::move(rhs.CabinetSizeID))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,CabinetSizeBoardID(std::move(rhs.CabinetSizeBoardID))
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,SkinDirection(std::move(rhs.SkinDirection))
	,SealRuleID(std::move(rhs.SealRuleID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,IsChangedOffset(std::move(rhs.IsChangedOffset))
	,IsFakeDel(std::move(rhs.IsFakeDel))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,CabBoardName(std::move(rhs.CabBoardName))
{}

GC_CabBoardInfoImp	GC_CabBoardInfo("");



void	GC_CabBoardSealInfoImp::SData::SetAll(bool val)
{
	val ? CabBoardSealID_.reset(boost::initialized_value) : CabBoardSealID_=boost::none;
	val ? CabBoardID_.reset(boost::initialized_value) : CabBoardID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? CabStructBoardSealID_.reset(boost::initialized_value) : CabStructBoardSealID_=boost::none;
	val ? CabStructBoardID_.reset(boost::initialized_value) : CabStructBoardID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? PreMill_.reset(boost::initialized_value) : PreMill_=boost::none;
}

void	GC_CabBoardSealInfoImp::SData::Flip()
{
	CabBoardSealID_ ? CabBoardSealID_=boost::none : CabBoardSealID_.reset(boost::initialized_value);
	CabBoardID_ ? CabBoardID_=boost::none : CabBoardID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	CabStructBoardSealID_ ? CabStructBoardSealID_=boost::none : CabStructBoardSealID_.reset(boost::initialized_value);
	CabStructBoardID_ ? CabStructBoardID_=boost::none : CabStructBoardID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	PreMill_ ? PreMill_=boost::none : PreMill_.reset(boost::initialized_value);
}

void	GC_CabBoardSealInfoImp::SData::Check()
{
	if ( !CabBoardSealID_ )
	{
		CabBoardSealID_.reset(boost::initialized_value);
	}
	if ( !CabBoardID_ )
	{
		CabBoardID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardSealID_ )
	{
		CabStructBoardSealID_.reset(boost::initialized_value);
	}
	if ( !CabStructBoardID_ )
	{
		CabStructBoardID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !PreMill_ )
	{
		PreMill_.reset(boost::initialized_value);
	}
}

void	GC_CabBoardSealInfoImp::SData::ToUtf8()
{
}

void	GC_CabBoardSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabBoardSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabBoardSealID_ )
	{
		ret.With(CabBoardSealID.Use(data.CabBoardSealID_));
	}
	if ( data.CabBoardID_ )
	{
		ret.With(CabBoardID.Use(data.CabBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.CabStructBoardSealID_ )
	{
		ret.With(CabStructBoardSealID.Use(data.CabStructBoardSealID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Use(data.CabStructBoardID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Use(data.PreMill_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabBoardSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabBoardSealID_ )
	{
		ret.With(CabBoardSealID.Into(data.CabBoardSealID_));
	}
	if ( data.CabBoardID_ )
	{
		ret.With(CabBoardID.Into(data.CabBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.CabStructBoardSealID_ )
	{
		ret.With(CabStructBoardSealID.Into(data.CabStructBoardSealID_));
	}
	if ( data.CabStructBoardID_ )
	{
		ret.With(CabStructBoardID.Into(data.CabStructBoardID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Into(data.PreMill_));
	}
	return std::move(ret);
}


GC_CabBoardSealInfoImp	GC_CabBoardSealInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabBoardSealInfoImp(alias));
}

GC_CabBoardSealInfoImp::GC_CabBoardSealInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabBoardSealInfo"), alias)
	,CabBoardSealID(ImpSPtr_,AUTODB_STR("CabBoardSealID"))
	,CabBoardID(ImpSPtr_,AUTODB_STR("CabBoardID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,CabStructBoardSealID(ImpSPtr_,AUTODB_STR("CabStructBoardSealID"))
	,CabStructBoardID(ImpSPtr_,AUTODB_STR("CabStructBoardID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,PreMill(ImpSPtr_,AUTODB_STR("PreMill"))
{}

GC_CabBoardSealInfoImp::GC_CabBoardSealInfoImp( const GC_CabBoardSealInfoImp& rhs ):Table(rhs)
	,CabBoardSealID(rhs.CabBoardSealID)
	,CabBoardID(rhs.CabBoardID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,CabStructBoardSealID(rhs.CabStructBoardSealID)
	,CabStructBoardID(rhs.CabStructBoardID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,SealType(rhs.SealType)
	,SealIndex(rhs.SealIndex)
	,MaterialID(rhs.MaterialID)
	,PreMill(rhs.PreMill)
{}

GC_CabBoardSealInfoImp::GC_CabBoardSealInfoImp( GC_CabBoardSealInfoImp&& rhs ):Table(rhs)
	,CabBoardSealID(std::move(rhs.CabBoardSealID))
	,CabBoardID(std::move(rhs.CabBoardID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,CabStructBoardSealID(std::move(rhs.CabStructBoardSealID))
	,CabStructBoardID(std::move(rhs.CabStructBoardID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,SealType(std::move(rhs.SealType))
	,SealIndex(std::move(rhs.SealIndex))
	,MaterialID(std::move(rhs.MaterialID))
	,PreMill(std::move(rhs.PreMill))
{}

GC_CabBoardSealInfoImp	GC_CabBoardSealInfo("");



void	GC_CabDoorBoardGapInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorBoardGapID_.reset(boost::initialized_value) : CabDoorBoardGapID_=boost::none;
	val ? CabDoorBoardID_.reset(boost::initialized_value) : CabDoorBoardID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DoorBoardGapID_.reset(boost::initialized_value) : DoorBoardGapID_=boost::none;
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GapPos_.reset(boost::initialized_value) : GapPos_=boost::none;
	val ? GapIndex_.reset(boost::initialized_value) : GapIndex_=boost::none;
	val ? GapType_.reset(boost::initialized_value) : GapType_=boost::none;
	val ? GapShape_.reset(boost::initialized_value) : GapShape_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorBoardGapInfoImp::SData::Flip()
{
	CabDoorBoardGapID_ ? CabDoorBoardGapID_=boost::none : CabDoorBoardGapID_.reset(boost::initialized_value);
	CabDoorBoardID_ ? CabDoorBoardID_=boost::none : CabDoorBoardID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DoorBoardGapID_ ? DoorBoardGapID_=boost::none : DoorBoardGapID_.reset(boost::initialized_value);
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GapPos_ ? GapPos_=boost::none : GapPos_.reset(boost::initialized_value);
	GapIndex_ ? GapIndex_=boost::none : GapIndex_.reset(boost::initialized_value);
	GapType_ ? GapType_=boost::none : GapType_.reset(boost::initialized_value);
	GapShape_ ? GapShape_=boost::none : GapShape_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorBoardGapInfoImp::SData::Check()
{
	if ( !CabDoorBoardGapID_ )
	{
		CabDoorBoardGapID_.reset(boost::initialized_value);
	}
	if ( !CabDoorBoardID_ )
	{
		CabDoorBoardID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorBoardGapID_ )
	{
		DoorBoardGapID_.reset(boost::initialized_value);
	}
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GapPos_ )
	{
		GapPos_.reset(boost::initialized_value);
	}
	if ( !GapIndex_ )
	{
		GapIndex_.reset(boost::initialized_value);
	}
	if ( !GapType_ )
	{
		GapType_.reset(boost::initialized_value);
	}
	if ( !GapShape_ )
	{
		GapShape_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorBoardGapInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorBoardGapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorBoardGapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorBoardGapID_ )
	{
		ret.With(CabDoorBoardGapID.Use(data.CabDoorBoardGapID_));
	}
	if ( data.CabDoorBoardID_ )
	{
		ret.With(CabDoorBoardID.Use(data.CabDoorBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DoorBoardGapID_ )
	{
		ret.With(DoorBoardGapID.Use(data.DoorBoardGapID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Use(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Use(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Use(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Use(data.GapShape_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorBoardGapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorBoardGapID_ )
	{
		ret.With(CabDoorBoardGapID.Into(data.CabDoorBoardGapID_));
	}
	if ( data.CabDoorBoardID_ )
	{
		ret.With(CabDoorBoardID.Into(data.CabDoorBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DoorBoardGapID_ )
	{
		ret.With(DoorBoardGapID.Into(data.DoorBoardGapID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GapPos_ )
	{
		ret.With(GapPos.Into(data.GapPos_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Into(data.GapIndex_));
	}
	if ( data.GapType_ )
	{
		ret.With(GapType.Into(data.GapType_));
	}
	if ( data.GapShape_ )
	{
		ret.With(GapShape.Into(data.GapShape_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorBoardGapInfoImp	GC_CabDoorBoardGapInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorBoardGapInfoImp(alias));
}

GC_CabDoorBoardGapInfoImp::GC_CabDoorBoardGapInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorBoardGapInfo"), alias)
	,CabDoorBoardGapID(ImpSPtr_,AUTODB_STR("CabDoorBoardGapID"))
	,CabDoorBoardID(ImpSPtr_,AUTODB_STR("CabDoorBoardID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DoorBoardGapID(ImpSPtr_,AUTODB_STR("DoorBoardGapID"))
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GapPos(ImpSPtr_,AUTODB_STR("GapPos"))
	,GapIndex(ImpSPtr_,AUTODB_STR("GapIndex"))
	,GapType(ImpSPtr_,AUTODB_STR("GapType"))
	,GapShape(ImpSPtr_,AUTODB_STR("GapShape"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorBoardGapInfoImp::GC_CabDoorBoardGapInfoImp( const GC_CabDoorBoardGapInfoImp& rhs ):Table(rhs)
	,CabDoorBoardGapID(rhs.CabDoorBoardGapID)
	,CabDoorBoardID(rhs.CabDoorBoardID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DoorBoardGapID(rhs.DoorBoardGapID)
	,DoorBoardID(rhs.DoorBoardID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,GapPos(rhs.GapPos)
	,GapIndex(rhs.GapIndex)
	,GapType(rhs.GapType)
	,GapShape(rhs.GapShape)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorBoardGapInfoImp::GC_CabDoorBoardGapInfoImp( GC_CabDoorBoardGapInfoImp&& rhs ):Table(rhs)
	,CabDoorBoardGapID(std::move(rhs.CabDoorBoardGapID))
	,CabDoorBoardID(std::move(rhs.CabDoorBoardID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DoorBoardGapID(std::move(rhs.DoorBoardGapID))
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,GapPos(std::move(rhs.GapPos))
	,GapIndex(std::move(rhs.GapIndex))
	,GapType(std::move(rhs.GapType))
	,GapShape(std::move(rhs.GapShape))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorBoardGapInfoImp	GC_CabDoorBoardGapInfo("");



void	GC_CabDoorBoardInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorBoardID_.reset(boost::initialized_value) : CabDoorBoardID_=boost::none;
	val ? CabDoorID_.reset(boost::initialized_value) : CabDoorID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? DoorBoardIndex_.reset(boost::initialized_value) : DoorBoardIndex_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? SkinDirection_.reset(boost::initialized_value) : SkinDirection_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorBoardInfoImp::SData::Flip()
{
	CabDoorBoardID_ ? CabDoorBoardID_=boost::none : CabDoorBoardID_.reset(boost::initialized_value);
	CabDoorID_ ? CabDoorID_=boost::none : CabDoorID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	DoorBoardIndex_ ? DoorBoardIndex_=boost::none : DoorBoardIndex_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	SkinDirection_ ? SkinDirection_=boost::none : SkinDirection_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorBoardInfoImp::SData::Check()
{
	if ( !CabDoorBoardID_ )
	{
		CabDoorBoardID_.reset(boost::initialized_value);
	}
	if ( !CabDoorID_ )
	{
		CabDoorID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !DoorBoardIndex_ )
	{
		DoorBoardIndex_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !SkinDirection_ )
	{
		SkinDirection_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorBoardInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorBoardInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorBoardID_ )
	{
		ret.With(CabDoorBoardID.Use(data.CabDoorBoardID_));
	}
	if ( data.CabDoorID_ )
	{
		ret.With(CabDoorID.Use(data.CabDoorID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.DoorBoardIndex_ )
	{
		ret.With(DoorBoardIndex.Use(data.DoorBoardIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Use(data.SkinDirection_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorBoardID_ )
	{
		ret.With(CabDoorBoardID.Into(data.CabDoorBoardID_));
	}
	if ( data.CabDoorID_ )
	{
		ret.With(CabDoorID.Into(data.CabDoorID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.DoorBoardIndex_ )
	{
		ret.With(DoorBoardIndex.Into(data.DoorBoardIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.SkinDirection_ )
	{
		ret.With(SkinDirection.Into(data.SkinDirection_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorBoardInfoImp	GC_CabDoorBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorBoardInfoImp(alias));
}

GC_CabDoorBoardInfoImp::GC_CabDoorBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorBoardInfo"), alias)
	,CabDoorBoardID(ImpSPtr_,AUTODB_STR("CabDoorBoardID"))
	,CabDoorID(ImpSPtr_,AUTODB_STR("CabDoorID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,DoorBoardIndex(ImpSPtr_,AUTODB_STR("DoorBoardIndex"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,SkinDirection(ImpSPtr_,AUTODB_STR("SkinDirection"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorBoardInfoImp::GC_CabDoorBoardInfoImp( const GC_CabDoorBoardInfoImp& rhs ):Table(rhs)
	,CabDoorBoardID(rhs.CabDoorBoardID)
	,CabDoorID(rhs.CabDoorID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DoorBoardID(rhs.DoorBoardID)
	,DoorID(rhs.DoorID)
	,DoorBoardIndex(rhs.DoorBoardIndex)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,SkinDirection(rhs.SkinDirection)
	,SealRuleID(rhs.SealRuleID)
	,ModelID(rhs.ModelID)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorBoardInfoImp::GC_CabDoorBoardInfoImp( GC_CabDoorBoardInfoImp&& rhs ):Table(rhs)
	,CabDoorBoardID(std::move(rhs.CabDoorBoardID))
	,CabDoorID(std::move(rhs.CabDoorID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,DoorID(std::move(rhs.DoorID))
	,DoorBoardIndex(std::move(rhs.DoorBoardIndex))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,SkinDirection(std::move(rhs.SkinDirection))
	,SealRuleID(std::move(rhs.SealRuleID))
	,ModelID(std::move(rhs.ModelID))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorBoardInfoImp	GC_CabDoorBoardInfo("");



void	GC_CabDoorBoardSealInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorBoardSealID_.reset(boost::initialized_value) : CabDoorBoardSealID_=boost::none;
	val ? CabDoorBoardID_.reset(boost::initialized_value) : CabDoorBoardID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DoorBoardID_.reset(boost::initialized_value) : DoorBoardID_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? PreMill_.reset(boost::initialized_value) : PreMill_=boost::none;
}

void	GC_CabDoorBoardSealInfoImp::SData::Flip()
{
	CabDoorBoardSealID_ ? CabDoorBoardSealID_=boost::none : CabDoorBoardSealID_.reset(boost::initialized_value);
	CabDoorBoardID_ ? CabDoorBoardID_=boost::none : CabDoorBoardID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DoorBoardID_ ? DoorBoardID_=boost::none : DoorBoardID_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	PreMill_ ? PreMill_=boost::none : PreMill_.reset(boost::initialized_value);
}

void	GC_CabDoorBoardSealInfoImp::SData::Check()
{
	if ( !CabDoorBoardSealID_ )
	{
		CabDoorBoardSealID_.reset(boost::initialized_value);
	}
	if ( !CabDoorBoardID_ )
	{
		CabDoorBoardID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorBoardID_ )
	{
		DoorBoardID_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !PreMill_ )
	{
		PreMill_.reset(boost::initialized_value);
	}
}

void	GC_CabDoorBoardSealInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorBoardSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorBoardSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorBoardSealID_ )
	{
		ret.With(CabDoorBoardSealID.Use(data.CabDoorBoardSealID_));
	}
	if ( data.CabDoorBoardID_ )
	{
		ret.With(CabDoorBoardID.Use(data.CabDoorBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Use(data.DoorBoardID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Use(data.PreMill_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorBoardSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorBoardSealID_ )
	{
		ret.With(CabDoorBoardSealID.Into(data.CabDoorBoardSealID_));
	}
	if ( data.CabDoorBoardID_ )
	{
		ret.With(CabDoorBoardID.Into(data.CabDoorBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DoorBoardID_ )
	{
		ret.With(DoorBoardID.Into(data.DoorBoardID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Into(data.PreMill_));
	}
	return std::move(ret);
}


GC_CabDoorBoardSealInfoImp	GC_CabDoorBoardSealInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorBoardSealInfoImp(alias));
}

GC_CabDoorBoardSealInfoImp::GC_CabDoorBoardSealInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorBoardSealInfo"), alias)
	,CabDoorBoardSealID(ImpSPtr_,AUTODB_STR("CabDoorBoardSealID"))
	,CabDoorBoardID(ImpSPtr_,AUTODB_STR("CabDoorBoardID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DoorBoardID(ImpSPtr_,AUTODB_STR("DoorBoardID"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,PreMill(ImpSPtr_,AUTODB_STR("PreMill"))
{}

GC_CabDoorBoardSealInfoImp::GC_CabDoorBoardSealInfoImp( const GC_CabDoorBoardSealInfoImp& rhs ):Table(rhs)
	,CabDoorBoardSealID(rhs.CabDoorBoardSealID)
	,CabDoorBoardID(rhs.CabDoorBoardID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DoorBoardID(rhs.DoorBoardID)
	,SealIndex(rhs.SealIndex)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,SealType(rhs.SealType)
	,MaterialID(rhs.MaterialID)
	,PreMill(rhs.PreMill)
{}

GC_CabDoorBoardSealInfoImp::GC_CabDoorBoardSealInfoImp( GC_CabDoorBoardSealInfoImp&& rhs ):Table(rhs)
	,CabDoorBoardSealID(std::move(rhs.CabDoorBoardSealID))
	,CabDoorBoardID(std::move(rhs.CabDoorBoardID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DoorBoardID(std::move(rhs.DoorBoardID))
	,SealIndex(std::move(rhs.SealIndex))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,SealType(std::move(rhs.SealType))
	,MaterialID(std::move(rhs.MaterialID))
	,PreMill(std::move(rhs.PreMill))
{}

GC_CabDoorBoardSealInfoImp	GC_CabDoorBoardSealInfo("");



void	GC_CabDoorHWFInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorHWFID_.reset(boost::initialized_value) : CabDoorHWFID_=boost::none;
	val ? CabDoorRegionID_.reset(boost::initialized_value) : CabDoorRegionID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? SettingCountRuleID_.reset(boost::initialized_value) : SettingCountRuleID_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorHWFInfoImp::SData::Flip()
{
	CabDoorHWFID_ ? CabDoorHWFID_=boost::none : CabDoorHWFID_.reset(boost::initialized_value);
	CabDoorRegionID_ ? CabDoorRegionID_=boost::none : CabDoorRegionID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	SettingCountRuleID_ ? SettingCountRuleID_=boost::none : SettingCountRuleID_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorHWFInfoImp::SData::Check()
{
	if ( !CabDoorHWFID_ )
	{
		CabDoorHWFID_.reset(boost::initialized_value);
	}
	if ( !CabDoorRegionID_ )
	{
		CabDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !SettingCountRuleID_ )
	{
		SettingCountRuleID_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorHWFInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorHWFInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorHWFInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorHWFID_ )
	{
		ret.With(CabDoorHWFID.Use(data.CabDoorHWFID_));
	}
	if ( data.CabDoorRegionID_ )
	{
		ret.With(CabDoorRegionID.Use(data.CabDoorRegionID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.SettingCountRuleID_ )
	{
		ret.With(SettingCountRuleID.Use(data.SettingCountRuleID_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorHWFInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorHWFID_ )
	{
		ret.With(CabDoorHWFID.Into(data.CabDoorHWFID_));
	}
	if ( data.CabDoorRegionID_ )
	{
		ret.With(CabDoorRegionID.Into(data.CabDoorRegionID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.SettingCountRuleID_ )
	{
		ret.With(SettingCountRuleID.Into(data.SettingCountRuleID_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorHWFInfoImp	GC_CabDoorHWFInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorHWFInfoImp(alias));
}

GC_CabDoorHWFInfoImp::GC_CabDoorHWFInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorHWFInfo"), alias)
	,CabDoorHWFID(ImpSPtr_,AUTODB_STR("CabDoorHWFID"))
	,CabDoorRegionID(ImpSPtr_,AUTODB_STR("CabDoorRegionID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,SettingCountRuleID(ImpSPtr_,AUTODB_STR("SettingCountRuleID"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorHWFInfoImp::GC_CabDoorHWFInfoImp( const GC_CabDoorHWFInfoImp& rhs ):Table(rhs)
	,CabDoorHWFID(rhs.CabDoorHWFID)
	,CabDoorRegionID(rhs.CabDoorRegionID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,HWFittingID(rhs.HWFittingID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,SettingCountRuleID(rhs.SettingCountRuleID)
	,UseCount(rhs.UseCount)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorHWFInfoImp::GC_CabDoorHWFInfoImp( GC_CabDoorHWFInfoImp&& rhs ):Table(rhs)
	,CabDoorHWFID(std::move(rhs.CabDoorHWFID))
	,CabDoorRegionID(std::move(rhs.CabDoorRegionID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,HWFittingID(std::move(rhs.HWFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,SettingCountRuleID(std::move(rhs.SettingCountRuleID))
	,UseCount(std::move(rhs.UseCount))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorHWFInfoImp	GC_CabDoorHWFInfo("");



void	GC_CabDoorHandleInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorHandleID_.reset(boost::initialized_value) : CabDoorHandleID_=boost::none;
	val ? CabParentID_.reset(boost::initialized_value) : CabParentID_=boost::none;
	val ? ParentType_.reset(boost::initialized_value) : ParentType_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? CabDesignDoorRegionID_.reset(boost::initialized_value) : CabDesignDoorRegionID_=boost::none;
	val ? CabDesignDoorRegionHandleID_.reset(boost::initialized_value) : CabDesignDoorRegionHandleID_=boost::none;
	val ? OwnerID_.reset(boost::initialized_value) : OwnerID_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? HandleID_.reset(boost::initialized_value) : HandleID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? MatchType_.reset(boost::initialized_value) : MatchType_=boost::none;
	val ? IsChangedOffset_.reset(boost::initialized_value) : IsChangedOffset_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? RealXLen_.reset(boost::initialized_value) : RealXLen_=boost::none;
	val ? RealYLen_.reset(boost::initialized_value) : RealYLen_=boost::none;
	val ? RealZLen_.reset(boost::initialized_value) : RealZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorHandleInfoImp::SData::Flip()
{
	CabDoorHandleID_ ? CabDoorHandleID_=boost::none : CabDoorHandleID_.reset(boost::initialized_value);
	CabParentID_ ? CabParentID_=boost::none : CabParentID_.reset(boost::initialized_value);
	ParentType_ ? ParentType_=boost::none : ParentType_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	CabDesignDoorRegionID_ ? CabDesignDoorRegionID_=boost::none : CabDesignDoorRegionID_.reset(boost::initialized_value);
	CabDesignDoorRegionHandleID_ ? CabDesignDoorRegionHandleID_=boost::none : CabDesignDoorRegionHandleID_.reset(boost::initialized_value);
	OwnerID_ ? OwnerID_=boost::none : OwnerID_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	HandleID_ ? HandleID_=boost::none : HandleID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	MatchType_ ? MatchType_=boost::none : MatchType_.reset(boost::initialized_value);
	IsChangedOffset_ ? IsChangedOffset_=boost::none : IsChangedOffset_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	RealXLen_ ? RealXLen_=boost::none : RealXLen_.reset(boost::initialized_value);
	RealYLen_ ? RealYLen_=boost::none : RealYLen_.reset(boost::initialized_value);
	RealZLen_ ? RealZLen_=boost::none : RealZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorHandleInfoImp::SData::Check()
{
	if ( !CabDoorHandleID_ )
	{
		CabDoorHandleID_.reset(boost::initialized_value);
	}
	if ( !CabParentID_ )
	{
		CabParentID_.reset(boost::initialized_value);
	}
	if ( !ParentType_ )
	{
		ParentType_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorRegionID_ )
	{
		CabDesignDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorRegionHandleID_ )
	{
		CabDesignDoorRegionHandleID_.reset(boost::initialized_value);
	}
	if ( !OwnerID_ )
	{
		OwnerID_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !HandleID_ )
	{
		HandleID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !MatchType_ )
	{
		MatchType_.reset(boost::initialized_value);
	}
	if ( !IsChangedOffset_ )
	{
		IsChangedOffset_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !RealXLen_ )
	{
		RealXLen_.reset(boost::initialized_value);
	}
	if ( !RealYLen_ )
	{
		RealYLen_.reset(boost::initialized_value);
	}
	if ( !RealZLen_ )
	{
		RealZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorHandleInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorHandleInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorHandleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorHandleID_ )
	{
		ret.With(CabDoorHandleID.Use(data.CabDoorHandleID_));
	}
	if ( data.CabParentID_ )
	{
		ret.With(CabParentID.Use(data.CabParentID_));
	}
	if ( data.ParentType_ )
	{
		ret.With(ParentType.Use(data.ParentType_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Use(data.CabDesignDoorRegionID_));
	}
	if ( data.CabDesignDoorRegionHandleID_ )
	{
		ret.With(CabDesignDoorRegionHandleID.Use(data.CabDesignDoorRegionHandleID_));
	}
	if ( data.OwnerID_ )
	{
		ret.With(OwnerID.Use(data.OwnerID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.HandleID_ )
	{
		ret.With(HandleID.Use(data.HandleID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.MatchType_ )
	{
		ret.With(MatchType.Use(data.MatchType_));
	}
	if ( data.IsChangedOffset_ )
	{
		ret.With(IsChangedOffset.Use(data.IsChangedOffset_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Use(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Use(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Use(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorHandleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorHandleID_ )
	{
		ret.With(CabDoorHandleID.Into(data.CabDoorHandleID_));
	}
	if ( data.CabParentID_ )
	{
		ret.With(CabParentID.Into(data.CabParentID_));
	}
	if ( data.ParentType_ )
	{
		ret.With(ParentType.Into(data.ParentType_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Into(data.CabDesignDoorRegionID_));
	}
	if ( data.CabDesignDoorRegionHandleID_ )
	{
		ret.With(CabDesignDoorRegionHandleID.Into(data.CabDesignDoorRegionHandleID_));
	}
	if ( data.OwnerID_ )
	{
		ret.With(OwnerID.Into(data.OwnerID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.HandleID_ )
	{
		ret.With(HandleID.Into(data.HandleID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.MatchType_ )
	{
		ret.With(MatchType.Into(data.MatchType_));
	}
	if ( data.IsChangedOffset_ )
	{
		ret.With(IsChangedOffset.Into(data.IsChangedOffset_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Into(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Into(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Into(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorHandleInfoImp	GC_CabDoorHandleInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorHandleInfoImp(alias));
}

GC_CabDoorHandleInfoImp::GC_CabDoorHandleInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorHandleInfo"), alias)
	,CabDoorHandleID(ImpSPtr_,AUTODB_STR("CabDoorHandleID"))
	,CabParentID(ImpSPtr_,AUTODB_STR("CabParentID"))
	,ParentType(ImpSPtr_,AUTODB_STR("ParentType"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,CabDesignDoorRegionID(ImpSPtr_,AUTODB_STR("CabDesignDoorRegionID"))
	,CabDesignDoorRegionHandleID(ImpSPtr_,AUTODB_STR("CabDesignDoorRegionHandleID"))
	,OwnerID(ImpSPtr_,AUTODB_STR("OwnerID"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,HandleID(ImpSPtr_,AUTODB_STR("HandleID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,MatchType(ImpSPtr_,AUTODB_STR("MatchType"))
	,IsChangedOffset(ImpSPtr_,AUTODB_STR("IsChangedOffset"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,RealXLen(ImpSPtr_,AUTODB_STR("RealXLen"))
	,RealYLen(ImpSPtr_,AUTODB_STR("RealYLen"))
	,RealZLen(ImpSPtr_,AUTODB_STR("RealZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorHandleInfoImp::GC_CabDoorHandleInfoImp( const GC_CabDoorHandleInfoImp& rhs ):Table(rhs)
	,CabDoorHandleID(rhs.CabDoorHandleID)
	,CabParentID(rhs.CabParentID)
	,ParentType(rhs.ParentType)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,CabDesignDoorRegionID(rhs.CabDesignDoorRegionID)
	,CabDesignDoorRegionHandleID(rhs.CabDesignDoorRegionHandleID)
	,OwnerID(rhs.OwnerID)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,HandleID(rhs.HandleID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,MatchType(rhs.MatchType)
	,IsChangedOffset(rhs.IsChangedOffset)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,RealXLen(rhs.RealXLen)
	,RealYLen(rhs.RealYLen)
	,RealZLen(rhs.RealZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,ArcZ(rhs.ArcZ)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorHandleInfoImp::GC_CabDoorHandleInfoImp( GC_CabDoorHandleInfoImp&& rhs ):Table(rhs)
	,CabDoorHandleID(std::move(rhs.CabDoorHandleID))
	,CabParentID(std::move(rhs.CabParentID))
	,ParentType(std::move(rhs.ParentType))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,CabDesignDoorRegionID(std::move(rhs.CabDesignDoorRegionID))
	,CabDesignDoorRegionHandleID(std::move(rhs.CabDesignDoorRegionHandleID))
	,OwnerID(std::move(rhs.OwnerID))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,HandleID(std::move(rhs.HandleID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,MatchType(std::move(rhs.MatchType))
	,IsChangedOffset(std::move(rhs.IsChangedOffset))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,RealXLen(std::move(rhs.RealXLen))
	,RealYLen(std::move(rhs.RealYLen))
	,RealZLen(std::move(rhs.RealZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,ArcZ(std::move(rhs.ArcZ))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorHandleInfoImp	GC_CabDoorHandleInfo("");



void	GC_CabDoorInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorID_.reset(boost::initialized_value) : CabDoorID_=boost::none;
	val ? CabParentID_.reset(boost::initialized_value) : CabParentID_=boost::none;
	val ? ParentType_.reset(boost::initialized_value) : ParentType_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OwnerID_.reset(boost::initialized_value) : OwnerID_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorInfoImp::SData::Flip()
{
	CabDoorID_ ? CabDoorID_=boost::none : CabDoorID_.reset(boost::initialized_value);
	CabParentID_ ? CabParentID_=boost::none : CabParentID_.reset(boost::initialized_value);
	ParentType_ ? ParentType_=boost::none : ParentType_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OwnerID_ ? OwnerID_=boost::none : OwnerID_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorInfoImp::SData::Check()
{
	if ( !CabDoorID_ )
	{
		CabDoorID_.reset(boost::initialized_value);
	}
	if ( !CabParentID_ )
	{
		CabParentID_.reset(boost::initialized_value);
	}
	if ( !ParentType_ )
	{
		ParentType_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OwnerID_ )
	{
		OwnerID_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorID_ )
	{
		ret.With(CabDoorID.Use(data.CabDoorID_));
	}
	if ( data.CabParentID_ )
	{
		ret.With(CabParentID.Use(data.CabParentID_));
	}
	if ( data.ParentType_ )
	{
		ret.With(ParentType.Use(data.ParentType_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OwnerID_ )
	{
		ret.With(OwnerID.Use(data.OwnerID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorID_ )
	{
		ret.With(CabDoorID.Into(data.CabDoorID_));
	}
	if ( data.CabParentID_ )
	{
		ret.With(CabParentID.Into(data.CabParentID_));
	}
	if ( data.ParentType_ )
	{
		ret.With(ParentType.Into(data.ParentType_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OwnerID_ )
	{
		ret.With(OwnerID.Into(data.OwnerID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorInfoImp	GC_CabDoorInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorInfoImp(alias));
}

GC_CabDoorInfoImp::GC_CabDoorInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorInfo"), alias)
	,CabDoorID(ImpSPtr_,AUTODB_STR("CabDoorID"))
	,CabParentID(ImpSPtr_,AUTODB_STR("CabParentID"))
	,ParentType(ImpSPtr_,AUTODB_STR("ParentType"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OwnerID(ImpSPtr_,AUTODB_STR("OwnerID"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorInfoImp::GC_CabDoorInfoImp( const GC_CabDoorInfoImp& rhs ):Table(rhs)
	,CabDoorID(rhs.CabDoorID)
	,CabParentID(rhs.CabParentID)
	,ParentType(rhs.ParentType)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,OwnerID(rhs.OwnerID)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,DoorID(rhs.DoorID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorInfoImp::GC_CabDoorInfoImp( GC_CabDoorInfoImp&& rhs ):Table(rhs)
	,CabDoorID(std::move(rhs.CabDoorID))
	,CabParentID(std::move(rhs.CabParentID))
	,ParentType(std::move(rhs.ParentType))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OwnerID(std::move(rhs.OwnerID))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,DoorID(std::move(rhs.DoorID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorInfoImp	GC_CabDoorInfo("");



void	GC_CabDoorRegionInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorRegionID_.reset(boost::initialized_value) : CabDoorRegionID_=boost::none;
	val ? CabDoorSystemID_.reset(boost::initialized_value) : CabDoorSystemID_=boost::none;
	val ? ParentCabRegionID_.reset(boost::initialized_value) : ParentCabRegionID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? CabDesignDoorRegionID_.reset(boost::initialized_value) : CabDesignDoorRegionID_=boost::none;
	val ? CabDesignDoorSystemID_.reset(boost::initialized_value) : CabDesignDoorSystemID_=boost::none;
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsUserDefineSize_.reset(boost::initialized_value) : IsUserDefineSize_=boost::none;
	val ? IsUserDefinePos_.reset(boost::initialized_value) : IsUserDefinePos_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? XAdjustLen_.reset(boost::initialized_value) : XAdjustLen_=boost::none;
	val ? YAdjustLen_.reset(boost::initialized_value) : YAdjustLen_=boost::none;
	val ? RealXLen_.reset(boost::initialized_value) : RealXLen_=boost::none;
	val ? RealYLen_.reset(boost::initialized_value) : RealYLen_=boost::none;
	val ? RealZLen_.reset(boost::initialized_value) : RealZLen_=boost::none;
	val ? CutXLen_.reset(boost::initialized_value) : CutXLen_=boost::none;
	val ? CutYLen_.reset(boost::initialized_value) : CutYLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? RealXOffsetLen_.reset(boost::initialized_value) : RealXOffsetLen_=boost::none;
	val ? RealYOffsetLen_.reset(boost::initialized_value) : RealYOffsetLen_=boost::none;
	val ? RealZOffsetLen_.reset(boost::initialized_value) : RealZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorRegionInfoImp::SData::Flip()
{
	CabDoorRegionID_ ? CabDoorRegionID_=boost::none : CabDoorRegionID_.reset(boost::initialized_value);
	CabDoorSystemID_ ? CabDoorSystemID_=boost::none : CabDoorSystemID_.reset(boost::initialized_value);
	ParentCabRegionID_ ? ParentCabRegionID_=boost::none : ParentCabRegionID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	CabDesignDoorRegionID_ ? CabDesignDoorRegionID_=boost::none : CabDesignDoorRegionID_.reset(boost::initialized_value);
	CabDesignDoorSystemID_ ? CabDesignDoorSystemID_=boost::none : CabDesignDoorSystemID_.reset(boost::initialized_value);
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsUserDefineSize_ ? IsUserDefineSize_=boost::none : IsUserDefineSize_.reset(boost::initialized_value);
	IsUserDefinePos_ ? IsUserDefinePos_=boost::none : IsUserDefinePos_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	XAdjustLen_ ? XAdjustLen_=boost::none : XAdjustLen_.reset(boost::initialized_value);
	YAdjustLen_ ? YAdjustLen_=boost::none : YAdjustLen_.reset(boost::initialized_value);
	RealXLen_ ? RealXLen_=boost::none : RealXLen_.reset(boost::initialized_value);
	RealYLen_ ? RealYLen_=boost::none : RealYLen_.reset(boost::initialized_value);
	RealZLen_ ? RealZLen_=boost::none : RealZLen_.reset(boost::initialized_value);
	CutXLen_ ? CutXLen_=boost::none : CutXLen_.reset(boost::initialized_value);
	CutYLen_ ? CutYLen_=boost::none : CutYLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	RealXOffsetLen_ ? RealXOffsetLen_=boost::none : RealXOffsetLen_.reset(boost::initialized_value);
	RealYOffsetLen_ ? RealYOffsetLen_=boost::none : RealYOffsetLen_.reset(boost::initialized_value);
	RealZOffsetLen_ ? RealZOffsetLen_=boost::none : RealZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorRegionInfoImp::SData::Check()
{
	if ( !CabDoorRegionID_ )
	{
		CabDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !CabDoorSystemID_ )
	{
		CabDoorSystemID_.reset(boost::initialized_value);
	}
	if ( !ParentCabRegionID_ )
	{
		ParentCabRegionID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorRegionID_ )
	{
		CabDesignDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorSystemID_ )
	{
		CabDesignDoorSystemID_.reset(boost::initialized_value);
	}
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsUserDefineSize_ )
	{
		IsUserDefineSize_.reset(boost::initialized_value);
	}
	if ( !IsUserDefinePos_ )
	{
		IsUserDefinePos_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !XAdjustLen_ )
	{
		XAdjustLen_.reset(boost::initialized_value);
	}
	if ( !YAdjustLen_ )
	{
		YAdjustLen_.reset(boost::initialized_value);
	}
	if ( !RealXLen_ )
	{
		RealXLen_.reset(boost::initialized_value);
	}
	if ( !RealYLen_ )
	{
		RealYLen_.reset(boost::initialized_value);
	}
	if ( !RealZLen_ )
	{
		RealZLen_.reset(boost::initialized_value);
	}
	if ( !CutXLen_ )
	{
		CutXLen_.reset(boost::initialized_value);
	}
	if ( !CutYLen_ )
	{
		CutYLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !RealXOffsetLen_ )
	{
		RealXOffsetLen_.reset(boost::initialized_value);
	}
	if ( !RealYOffsetLen_ )
	{
		RealYOffsetLen_.reset(boost::initialized_value);
	}
	if ( !RealZOffsetLen_ )
	{
		RealZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorRegionInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorRegionInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorRegionInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorRegionID_ )
	{
		ret.With(CabDoorRegionID.Use(data.CabDoorRegionID_));
	}
	if ( data.CabDoorSystemID_ )
	{
		ret.With(CabDoorSystemID.Use(data.CabDoorSystemID_));
	}
	if ( data.ParentCabRegionID_ )
	{
		ret.With(ParentCabRegionID.Use(data.ParentCabRegionID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Use(data.CabDesignDoorRegionID_));
	}
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Use(data.CabDesignDoorSystemID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsUserDefineSize_ )
	{
		ret.With(IsUserDefineSize.Use(data.IsUserDefineSize_));
	}
	if ( data.IsUserDefinePos_ )
	{
		ret.With(IsUserDefinePos.Use(data.IsUserDefinePos_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Use(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Use(data.YAdjustLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Use(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Use(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Use(data.RealZLen_));
	}
	if ( data.CutXLen_ )
	{
		ret.With(CutXLen.Use(data.CutXLen_));
	}
	if ( data.CutYLen_ )
	{
		ret.With(CutYLen.Use(data.CutYLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.RealXOffsetLen_ )
	{
		ret.With(RealXOffsetLen.Use(data.RealXOffsetLen_));
	}
	if ( data.RealYOffsetLen_ )
	{
		ret.With(RealYOffsetLen.Use(data.RealYOffsetLen_));
	}
	if ( data.RealZOffsetLen_ )
	{
		ret.With(RealZOffsetLen.Use(data.RealZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorRegionInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorRegionID_ )
	{
		ret.With(CabDoorRegionID.Into(data.CabDoorRegionID_));
	}
	if ( data.CabDoorSystemID_ )
	{
		ret.With(CabDoorSystemID.Into(data.CabDoorSystemID_));
	}
	if ( data.ParentCabRegionID_ )
	{
		ret.With(ParentCabRegionID.Into(data.ParentCabRegionID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.CabDesignDoorRegionID_ )
	{
		ret.With(CabDesignDoorRegionID.Into(data.CabDesignDoorRegionID_));
	}
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Into(data.CabDesignDoorSystemID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsUserDefineSize_ )
	{
		ret.With(IsUserDefineSize.Into(data.IsUserDefineSize_));
	}
	if ( data.IsUserDefinePos_ )
	{
		ret.With(IsUserDefinePos.Into(data.IsUserDefinePos_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Into(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Into(data.YAdjustLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Into(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Into(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Into(data.RealZLen_));
	}
	if ( data.CutXLen_ )
	{
		ret.With(CutXLen.Into(data.CutXLen_));
	}
	if ( data.CutYLen_ )
	{
		ret.With(CutYLen.Into(data.CutYLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.RealXOffsetLen_ )
	{
		ret.With(RealXOffsetLen.Into(data.RealXOffsetLen_));
	}
	if ( data.RealYOffsetLen_ )
	{
		ret.With(RealYOffsetLen.Into(data.RealYOffsetLen_));
	}
	if ( data.RealZOffsetLen_ )
	{
		ret.With(RealZOffsetLen.Into(data.RealZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorRegionInfoImp	GC_CabDoorRegionInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorRegionInfoImp(alias));
}

GC_CabDoorRegionInfoImp::GC_CabDoorRegionInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorRegionInfo"), alias)
	,CabDoorRegionID(ImpSPtr_,AUTODB_STR("CabDoorRegionID"))
	,CabDoorSystemID(ImpSPtr_,AUTODB_STR("CabDoorSystemID"))
	,ParentCabRegionID(ImpSPtr_,AUTODB_STR("ParentCabRegionID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,CabDesignDoorRegionID(ImpSPtr_,AUTODB_STR("CabDesignDoorRegionID"))
	,CabDesignDoorSystemID(ImpSPtr_,AUTODB_STR("CabDesignDoorSystemID"))
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsUserDefineSize(ImpSPtr_,AUTODB_STR("IsUserDefineSize"))
	,IsUserDefinePos(ImpSPtr_,AUTODB_STR("IsUserDefinePos"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,XAdjustLen(ImpSPtr_,AUTODB_STR("XAdjustLen"))
	,YAdjustLen(ImpSPtr_,AUTODB_STR("YAdjustLen"))
	,RealXLen(ImpSPtr_,AUTODB_STR("RealXLen"))
	,RealYLen(ImpSPtr_,AUTODB_STR("RealYLen"))
	,RealZLen(ImpSPtr_,AUTODB_STR("RealZLen"))
	,CutXLen(ImpSPtr_,AUTODB_STR("CutXLen"))
	,CutYLen(ImpSPtr_,AUTODB_STR("CutYLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,RealXOffsetLen(ImpSPtr_,AUTODB_STR("RealXOffsetLen"))
	,RealYOffsetLen(ImpSPtr_,AUTODB_STR("RealYOffsetLen"))
	,RealZOffsetLen(ImpSPtr_,AUTODB_STR("RealZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorRegionInfoImp::GC_CabDoorRegionInfoImp( const GC_CabDoorRegionInfoImp& rhs ):Table(rhs)
	,CabDoorRegionID(rhs.CabDoorRegionID)
	,CabDoorSystemID(rhs.CabDoorSystemID)
	,ParentCabRegionID(rhs.ParentCabRegionID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,DoorSystemID(rhs.DoorSystemID)
	,CabDesignDoorRegionID(rhs.CabDesignDoorRegionID)
	,CabDesignDoorSystemID(rhs.CabDesignDoorSystemID)
	,CabDesignID(rhs.CabDesignID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsUserDefineSize(rhs.IsUserDefineSize)
	,IsUserDefinePos(rhs.IsUserDefinePos)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,XAdjustLen(rhs.XAdjustLen)
	,YAdjustLen(rhs.YAdjustLen)
	,RealXLen(rhs.RealXLen)
	,RealYLen(rhs.RealYLen)
	,RealZLen(rhs.RealZLen)
	,CutXLen(rhs.CutXLen)
	,CutYLen(rhs.CutYLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,RealXOffsetLen(rhs.RealXOffsetLen)
	,RealYOffsetLen(rhs.RealYOffsetLen)
	,RealZOffsetLen(rhs.RealZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorRegionInfoImp::GC_CabDoorRegionInfoImp( GC_CabDoorRegionInfoImp&& rhs ):Table(rhs)
	,CabDoorRegionID(std::move(rhs.CabDoorRegionID))
	,CabDoorSystemID(std::move(rhs.CabDoorSystemID))
	,ParentCabRegionID(std::move(rhs.ParentCabRegionID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,CabDesignDoorRegionID(std::move(rhs.CabDesignDoorRegionID))
	,CabDesignDoorSystemID(std::move(rhs.CabDesignDoorSystemID))
	,CabDesignID(std::move(rhs.CabDesignID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsUserDefineSize(std::move(rhs.IsUserDefineSize))
	,IsUserDefinePos(std::move(rhs.IsUserDefinePos))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,XAdjustLen(std::move(rhs.XAdjustLen))
	,YAdjustLen(std::move(rhs.YAdjustLen))
	,RealXLen(std::move(rhs.RealXLen))
	,RealYLen(std::move(rhs.RealYLen))
	,RealZLen(std::move(rhs.RealZLen))
	,CutXLen(std::move(rhs.CutXLen))
	,CutYLen(std::move(rhs.CutYLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,RealXOffsetLen(std::move(rhs.RealXOffsetLen))
	,RealYOffsetLen(std::move(rhs.RealYOffsetLen))
	,RealZOffsetLen(std::move(rhs.RealZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorRegionInfoImp	GC_CabDoorRegionInfo("");



void	GC_CabDoorSlideInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorSlideID_.reset(boost::initialized_value) : CabDoorSlideID_=boost::none;
	val ? CabDoorRegionID_.reset(boost::initialized_value) : CabDoorRegionID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DoorSystemRegionID_.reset(boost::initialized_value) : DoorSystemRegionID_=boost::none;
	val ? SlideID_.reset(boost::initialized_value) : SlideID_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? SlidePosition_.reset(boost::initialized_value) : SlidePosition_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? RealXLen_.reset(boost::initialized_value) : RealXLen_=boost::none;
	val ? RealYLen_.reset(boost::initialized_value) : RealYLen_=boost::none;
	val ? RealZLen_.reset(boost::initialized_value) : RealZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorSlideInfoImp::SData::Flip()
{
	CabDoorSlideID_ ? CabDoorSlideID_=boost::none : CabDoorSlideID_.reset(boost::initialized_value);
	CabDoorRegionID_ ? CabDoorRegionID_=boost::none : CabDoorRegionID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DoorSystemRegionID_ ? DoorSystemRegionID_=boost::none : DoorSystemRegionID_.reset(boost::initialized_value);
	SlideID_ ? SlideID_=boost::none : SlideID_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	SlidePosition_ ? SlidePosition_=boost::none : SlidePosition_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	RealXLen_ ? RealXLen_=boost::none : RealXLen_.reset(boost::initialized_value);
	RealYLen_ ? RealYLen_=boost::none : RealYLen_.reset(boost::initialized_value);
	RealZLen_ ? RealZLen_=boost::none : RealZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorSlideInfoImp::SData::Check()
{
	if ( !CabDoorSlideID_ )
	{
		CabDoorSlideID_.reset(boost::initialized_value);
	}
	if ( !CabDoorRegionID_ )
	{
		CabDoorRegionID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorSystemRegionID_ )
	{
		DoorSystemRegionID_.reset(boost::initialized_value);
	}
	if ( !SlideID_ )
	{
		SlideID_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !SlidePosition_ )
	{
		SlidePosition_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !RealXLen_ )
	{
		RealXLen_.reset(boost::initialized_value);
	}
	if ( !RealYLen_ )
	{
		RealYLen_.reset(boost::initialized_value);
	}
	if ( !RealZLen_ )
	{
		RealZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorSlideInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorSlideInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorSlideInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorSlideID_ )
	{
		ret.With(CabDoorSlideID.Use(data.CabDoorSlideID_));
	}
	if ( data.CabDoorRegionID_ )
	{
		ret.With(CabDoorRegionID.Use(data.CabDoorRegionID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Use(data.DoorSystemRegionID_));
	}
	if ( data.SlideID_ )
	{
		ret.With(SlideID.Use(data.SlideID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.SlidePosition_ )
	{
		ret.With(SlidePosition.Use(data.SlidePosition_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Use(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Use(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Use(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorSlideInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorSlideID_ )
	{
		ret.With(CabDoorSlideID.Into(data.CabDoorSlideID_));
	}
	if ( data.CabDoorRegionID_ )
	{
		ret.With(CabDoorRegionID.Into(data.CabDoorRegionID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DoorSystemRegionID_ )
	{
		ret.With(DoorSystemRegionID.Into(data.DoorSystemRegionID_));
	}
	if ( data.SlideID_ )
	{
		ret.With(SlideID.Into(data.SlideID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.SlidePosition_ )
	{
		ret.With(SlidePosition.Into(data.SlidePosition_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Into(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Into(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Into(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorSlideInfoImp	GC_CabDoorSlideInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorSlideInfoImp(alias));
}

GC_CabDoorSlideInfoImp::GC_CabDoorSlideInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorSlideInfo"), alias)
	,CabDoorSlideID(ImpSPtr_,AUTODB_STR("CabDoorSlideID"))
	,CabDoorRegionID(ImpSPtr_,AUTODB_STR("CabDoorRegionID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DoorSystemRegionID(ImpSPtr_,AUTODB_STR("DoorSystemRegionID"))
	,SlideID(ImpSPtr_,AUTODB_STR("SlideID"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,SlidePosition(ImpSPtr_,AUTODB_STR("SlidePosition"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,RealXLen(ImpSPtr_,AUTODB_STR("RealXLen"))
	,RealYLen(ImpSPtr_,AUTODB_STR("RealYLen"))
	,RealZLen(ImpSPtr_,AUTODB_STR("RealZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorSlideInfoImp::GC_CabDoorSlideInfoImp( const GC_CabDoorSlideInfoImp& rhs ):Table(rhs)
	,CabDoorSlideID(rhs.CabDoorSlideID)
	,CabDoorRegionID(rhs.CabDoorRegionID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DoorSystemRegionID(rhs.DoorSystemRegionID)
	,SlideID(rhs.SlideID)
	,GTypeID(rhs.GTypeID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,SlidePosition(rhs.SlidePosition)
	,SupplyType(rhs.SupplyType)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,RealXLen(rhs.RealXLen)
	,RealYLen(rhs.RealYLen)
	,RealZLen(rhs.RealZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorSlideInfoImp::GC_CabDoorSlideInfoImp( GC_CabDoorSlideInfoImp&& rhs ):Table(rhs)
	,CabDoorSlideID(std::move(rhs.CabDoorSlideID))
	,CabDoorRegionID(std::move(rhs.CabDoorRegionID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DoorSystemRegionID(std::move(rhs.DoorSystemRegionID))
	,SlideID(std::move(rhs.SlideID))
	,GTypeID(std::move(rhs.GTypeID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,SlidePosition(std::move(rhs.SlidePosition))
	,SupplyType(std::move(rhs.SupplyType))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,RealXLen(std::move(rhs.RealXLen))
	,RealYLen(std::move(rhs.RealYLen))
	,RealZLen(std::move(rhs.RealZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorSlideInfoImp	GC_CabDoorSlideInfo("");



void	GC_CabDoorSystemInfoImp::SData::SetAll(bool val)
{
	val ? CabDoorSystemID_.reset(boost::initialized_value) : CabDoorSystemID_=boost::none;
	val ? CabID_.reset(boost::initialized_value) : CabID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? CabDesignDoorSystemID_.reset(boost::initialized_value) : CabDesignDoorSystemID_=boost::none;
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? DoorSystemID_.reset(boost::initialized_value) : DoorSystemID_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? IsFakeDel_.reset(boost::initialized_value) : IsFakeDel_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? XAdjustLen_.reset(boost::initialized_value) : XAdjustLen_=boost::none;
	val ? YAdjustLen_.reset(boost::initialized_value) : YAdjustLen_=boost::none;
	val ? RealXLen_.reset(boost::initialized_value) : RealXLen_=boost::none;
	val ? RealYLen_.reset(boost::initialized_value) : RealYLen_=boost::none;
	val ? RealZLen_.reset(boost::initialized_value) : RealZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? RealXOffsetLen_.reset(boost::initialized_value) : RealXOffsetLen_=boost::none;
	val ? RealYOffsetLen_.reset(boost::initialized_value) : RealYOffsetLen_=boost::none;
	val ? RealZOffsetLen_.reset(boost::initialized_value) : RealZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabDoorSystemInfoImp::SData::Flip()
{
	CabDoorSystemID_ ? CabDoorSystemID_=boost::none : CabDoorSystemID_.reset(boost::initialized_value);
	CabID_ ? CabID_=boost::none : CabID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	CabDesignDoorSystemID_ ? CabDesignDoorSystemID_=boost::none : CabDesignDoorSystemID_.reset(boost::initialized_value);
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	DoorSystemID_ ? DoorSystemID_=boost::none : DoorSystemID_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	IsFakeDel_ ? IsFakeDel_=boost::none : IsFakeDel_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	XAdjustLen_ ? XAdjustLen_=boost::none : XAdjustLen_.reset(boost::initialized_value);
	YAdjustLen_ ? YAdjustLen_=boost::none : YAdjustLen_.reset(boost::initialized_value);
	RealXLen_ ? RealXLen_=boost::none : RealXLen_.reset(boost::initialized_value);
	RealYLen_ ? RealYLen_=boost::none : RealYLen_.reset(boost::initialized_value);
	RealZLen_ ? RealZLen_=boost::none : RealZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	RealXOffsetLen_ ? RealXOffsetLen_=boost::none : RealXOffsetLen_.reset(boost::initialized_value);
	RealYOffsetLen_ ? RealYOffsetLen_=boost::none : RealYOffsetLen_.reset(boost::initialized_value);
	RealZOffsetLen_ ? RealZOffsetLen_=boost::none : RealZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabDoorSystemInfoImp::SData::Check()
{
	if ( !CabDoorSystemID_ )
	{
		CabDoorSystemID_.reset(boost::initialized_value);
	}
	if ( !CabID_ )
	{
		CabID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !CabDesignDoorSystemID_ )
	{
		CabDesignDoorSystemID_.reset(boost::initialized_value);
	}
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !DoorSystemID_ )
	{
		DoorSystemID_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !IsFakeDel_ )
	{
		IsFakeDel_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !XAdjustLen_ )
	{
		XAdjustLen_.reset(boost::initialized_value);
	}
	if ( !YAdjustLen_ )
	{
		YAdjustLen_.reset(boost::initialized_value);
	}
	if ( !RealXLen_ )
	{
		RealXLen_.reset(boost::initialized_value);
	}
	if ( !RealYLen_ )
	{
		RealYLen_.reset(boost::initialized_value);
	}
	if ( !RealZLen_ )
	{
		RealZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !RealXOffsetLen_ )
	{
		RealXOffsetLen_.reset(boost::initialized_value);
	}
	if ( !RealYOffsetLen_ )
	{
		RealYOffsetLen_.reset(boost::initialized_value);
	}
	if ( !RealZOffsetLen_ )
	{
		RealZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabDoorSystemInfoImp::SData::ToUtf8()
{
}

void	GC_CabDoorSystemInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabDoorSystemInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabDoorSystemID_ )
	{
		ret.With(CabDoorSystemID.Use(data.CabDoorSystemID_));
	}
	if ( data.CabID_ )
	{
		ret.With(CabID.Use(data.CabID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Use(data.CabDesignDoorSystemID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Use(data.DoorSystemID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Use(data.IsFakeDel_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Use(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Use(data.YAdjustLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Use(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Use(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Use(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.RealXOffsetLen_ )
	{
		ret.With(RealXOffsetLen.Use(data.RealXOffsetLen_));
	}
	if ( data.RealYOffsetLen_ )
	{
		ret.With(RealYOffsetLen.Use(data.RealYOffsetLen_));
	}
	if ( data.RealZOffsetLen_ )
	{
		ret.With(RealZOffsetLen.Use(data.RealZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabDoorSystemInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabDoorSystemID_ )
	{
		ret.With(CabDoorSystemID.Into(data.CabDoorSystemID_));
	}
	if ( data.CabID_ )
	{
		ret.With(CabID.Into(data.CabID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.CabDesignDoorSystemID_ )
	{
		ret.With(CabDesignDoorSystemID.Into(data.CabDesignDoorSystemID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.DoorSystemID_ )
	{
		ret.With(DoorSystemID.Into(data.DoorSystemID_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Into(data.IsFakeDel_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.XAdjustLen_ )
	{
		ret.With(XAdjustLen.Into(data.XAdjustLen_));
	}
	if ( data.YAdjustLen_ )
	{
		ret.With(YAdjustLen.Into(data.YAdjustLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Into(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Into(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Into(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.RealXOffsetLen_ )
	{
		ret.With(RealXOffsetLen.Into(data.RealXOffsetLen_));
	}
	if ( data.RealYOffsetLen_ )
	{
		ret.With(RealYOffsetLen.Into(data.RealYOffsetLen_));
	}
	if ( data.RealZOffsetLen_ )
	{
		ret.With(RealZOffsetLen.Into(data.RealZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabDoorSystemInfoImp	GC_CabDoorSystemInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabDoorSystemInfoImp(alias));
}

GC_CabDoorSystemInfoImp::GC_CabDoorSystemInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabDoorSystemInfo"), alias)
	,CabDoorSystemID(ImpSPtr_,AUTODB_STR("CabDoorSystemID"))
	,CabID(ImpSPtr_,AUTODB_STR("CabID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,CabDesignDoorSystemID(ImpSPtr_,AUTODB_STR("CabDesignDoorSystemID"))
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,DoorSystemID(ImpSPtr_,AUTODB_STR("DoorSystemID"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,IsFakeDel(ImpSPtr_,AUTODB_STR("IsFakeDel"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,XAdjustLen(ImpSPtr_,AUTODB_STR("XAdjustLen"))
	,YAdjustLen(ImpSPtr_,AUTODB_STR("YAdjustLen"))
	,RealXLen(ImpSPtr_,AUTODB_STR("RealXLen"))
	,RealYLen(ImpSPtr_,AUTODB_STR("RealYLen"))
	,RealZLen(ImpSPtr_,AUTODB_STR("RealZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,RealXOffsetLen(ImpSPtr_,AUTODB_STR("RealXOffsetLen"))
	,RealYOffsetLen(ImpSPtr_,AUTODB_STR("RealYOffsetLen"))
	,RealZOffsetLen(ImpSPtr_,AUTODB_STR("RealZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabDoorSystemInfoImp::GC_CabDoorSystemInfoImp( const GC_CabDoorSystemInfoImp& rhs ):Table(rhs)
	,CabDoorSystemID(rhs.CabDoorSystemID)
	,CabID(rhs.CabID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,CabDesignDoorSystemID(rhs.CabDesignDoorSystemID)
	,CabDesignID(rhs.CabDesignID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,DoorSystemID(rhs.DoorSystemID)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,SupplyType(rhs.SupplyType)
	,IsFakeDel(rhs.IsFakeDel)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,XAdjustLen(rhs.XAdjustLen)
	,YAdjustLen(rhs.YAdjustLen)
	,RealXLen(rhs.RealXLen)
	,RealYLen(rhs.RealYLen)
	,RealZLen(rhs.RealZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,RealXOffsetLen(rhs.RealXOffsetLen)
	,RealYOffsetLen(rhs.RealYOffsetLen)
	,RealZOffsetLen(rhs.RealZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabDoorSystemInfoImp::GC_CabDoorSystemInfoImp( GC_CabDoorSystemInfoImp&& rhs ):Table(rhs)
	,CabDoorSystemID(std::move(rhs.CabDoorSystemID))
	,CabID(std::move(rhs.CabID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,CabDesignDoorSystemID(std::move(rhs.CabDesignDoorSystemID))
	,CabDesignID(std::move(rhs.CabDesignID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,DoorSystemID(std::move(rhs.DoorSystemID))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,SupplyType(std::move(rhs.SupplyType))
	,IsFakeDel(std::move(rhs.IsFakeDel))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,XAdjustLen(std::move(rhs.XAdjustLen))
	,YAdjustLen(std::move(rhs.YAdjustLen))
	,RealXLen(std::move(rhs.RealXLen))
	,RealYLen(std::move(rhs.RealYLen))
	,RealZLen(std::move(rhs.RealZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,RealXOffsetLen(std::move(rhs.RealXOffsetLen))
	,RealYOffsetLen(std::move(rhs.RealYOffsetLen))
	,RealZOffsetLen(std::move(rhs.RealZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabDoorSystemInfoImp	GC_CabDoorSystemInfo("");



void	GC_CabFNFHWFInfoImp::SData::SetAll(bool val)
{
	val ? CabFNFHWFID_.reset(boost::initialized_value) : CabFNFHWFID_=boost::none;
	val ? CabFNFID_.reset(boost::initialized_value) : CabFNFID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? FittingType_.reset(boost::initialized_value) : FittingType_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsFakeDel_.reset(boost::initialized_value) : IsFakeDel_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabFNFHWFInfoImp::SData::Flip()
{
	CabFNFHWFID_ ? CabFNFHWFID_=boost::none : CabFNFHWFID_.reset(boost::initialized_value);
	CabFNFID_ ? CabFNFID_=boost::none : CabFNFID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	FittingType_ ? FittingType_=boost::none : FittingType_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsFakeDel_ ? IsFakeDel_=boost::none : IsFakeDel_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabFNFHWFInfoImp::SData::Check()
{
	if ( !CabFNFHWFID_ )
	{
		CabFNFHWFID_.reset(boost::initialized_value);
	}
	if ( !CabFNFID_ )
	{
		CabFNFID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !FittingType_ )
	{
		FittingType_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsFakeDel_ )
	{
		IsFakeDel_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabFNFHWFInfoImp::SData::ToUtf8()
{
}

void	GC_CabFNFHWFInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabFNFHWFInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabFNFHWFID_ )
	{
		ret.With(CabFNFHWFID.Use(data.CabFNFHWFID_));
	}
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Use(data.CabFNFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.FittingType_ )
	{
		ret.With(FittingType.Use(data.FittingType_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Use(data.IsFakeDel_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabFNFHWFInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabFNFHWFID_ )
	{
		ret.With(CabFNFHWFID.Into(data.CabFNFHWFID_));
	}
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Into(data.CabFNFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.FittingType_ )
	{
		ret.With(FittingType.Into(data.FittingType_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Into(data.IsFakeDel_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabFNFHWFInfoImp	GC_CabFNFHWFInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabFNFHWFInfoImp(alias));
}

GC_CabFNFHWFInfoImp::GC_CabFNFHWFInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabFNFHWFInfo"), alias)
	,CabFNFHWFID(ImpSPtr_,AUTODB_STR("CabFNFHWFID"))
	,CabFNFID(ImpSPtr_,AUTODB_STR("CabFNFID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,FittingType(ImpSPtr_,AUTODB_STR("FittingType"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsFakeDel(ImpSPtr_,AUTODB_STR("IsFakeDel"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabFNFHWFInfoImp::GC_CabFNFHWFInfoImp( const GC_CabFNFHWFInfoImp& rhs ):Table(rhs)
	,CabFNFHWFID(rhs.CabFNFHWFID)
	,CabFNFID(rhs.CabFNFID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,FNFittingID(rhs.FNFittingID)
	,HWFittingID(rhs.HWFittingID)
	,FittingType(rhs.FittingType)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsFakeDel(rhs.IsFakeDel)
	,UseCount(rhs.UseCount)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabFNFHWFInfoImp::GC_CabFNFHWFInfoImp( GC_CabFNFHWFInfoImp&& rhs ):Table(rhs)
	,CabFNFHWFID(std::move(rhs.CabFNFHWFID))
	,CabFNFID(std::move(rhs.CabFNFID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FNFittingID(std::move(rhs.FNFittingID))
	,HWFittingID(std::move(rhs.HWFittingID))
	,FittingType(std::move(rhs.FittingType))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsFakeDel(std::move(rhs.IsFakeDel))
	,UseCount(std::move(rhs.UseCount))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabFNFHWFInfoImp	GC_CabFNFHWFInfo("");



void	GC_CabFNFHoleInfoImp::SData::SetAll(bool val)
{
	val ? CabFNFHoleID_.reset(boost::initialized_value) : CabFNFHoleID_=boost::none;
	val ? CabFNFID_.reset(boost::initialized_value) : CabFNFID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? HoleID_.reset(boost::initialized_value) : HoleID_=boost::none;
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? HoleTypeID_.reset(boost::initialized_value) : HoleTypeID_=boost::none;
	val ? HolePicID_.reset(boost::initialized_value) : HolePicID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? OverHeight_.reset(boost::initialized_value) : OverHeight_=boost::none;
	val ? MinXDistance_.reset(boost::initialized_value) : MinXDistance_=boost::none;
	val ? MinZDistance_.reset(boost::initialized_value) : MinZDistance_=boost::none;
}

void	GC_CabFNFHoleInfoImp::SData::Flip()
{
	CabFNFHoleID_ ? CabFNFHoleID_=boost::none : CabFNFHoleID_.reset(boost::initialized_value);
	CabFNFID_ ? CabFNFID_=boost::none : CabFNFID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	HoleID_ ? HoleID_=boost::none : HoleID_.reset(boost::initialized_value);
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	HoleTypeID_ ? HoleTypeID_=boost::none : HoleTypeID_.reset(boost::initialized_value);
	HolePicID_ ? HolePicID_=boost::none : HolePicID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	OverHeight_ ? OverHeight_=boost::none : OverHeight_.reset(boost::initialized_value);
	MinXDistance_ ? MinXDistance_=boost::none : MinXDistance_.reset(boost::initialized_value);
	MinZDistance_ ? MinZDistance_=boost::none : MinZDistance_.reset(boost::initialized_value);
}

void	GC_CabFNFHoleInfoImp::SData::Check()
{
	if ( !CabFNFHoleID_ )
	{
		CabFNFHoleID_.reset(boost::initialized_value);
	}
	if ( !CabFNFID_ )
	{
		CabFNFID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !HoleID_ )
	{
		HoleID_.reset(boost::initialized_value);
	}
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !HoleTypeID_ )
	{
		HoleTypeID_.reset(boost::initialized_value);
	}
	if ( !HolePicID_ )
	{
		HolePicID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !OverHeight_ )
	{
		OverHeight_.reset(boost::initialized_value);
	}
	if ( !MinXDistance_ )
	{
		MinXDistance_.reset(boost::initialized_value);
	}
	if ( !MinZDistance_ )
	{
		MinZDistance_.reset(boost::initialized_value);
	}
}

void	GC_CabFNFHoleInfoImp::SData::ToUtf8()
{
}

void	GC_CabFNFHoleInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabFNFHoleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabFNFHoleID_ )
	{
		ret.With(CabFNFHoleID.Use(data.CabFNFHoleID_));
	}
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Use(data.CabFNFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.HoleID_ )
	{
		ret.With(HoleID.Use(data.HoleID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.HoleTypeID_ )
	{
		ret.With(HoleTypeID.Use(data.HoleTypeID_));
	}
	if ( data.HolePicID_ )
	{
		ret.With(HolePicID.Use(data.HolePicID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.OverHeight_ )
	{
		ret.With(OverHeight.Use(data.OverHeight_));
	}
	if ( data.MinXDistance_ )
	{
		ret.With(MinXDistance.Use(data.MinXDistance_));
	}
	if ( data.MinZDistance_ )
	{
		ret.With(MinZDistance.Use(data.MinZDistance_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabFNFHoleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabFNFHoleID_ )
	{
		ret.With(CabFNFHoleID.Into(data.CabFNFHoleID_));
	}
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Into(data.CabFNFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.HoleID_ )
	{
		ret.With(HoleID.Into(data.HoleID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.HoleTypeID_ )
	{
		ret.With(HoleTypeID.Into(data.HoleTypeID_));
	}
	if ( data.HolePicID_ )
	{
		ret.With(HolePicID.Into(data.HolePicID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.OverHeight_ )
	{
		ret.With(OverHeight.Into(data.OverHeight_));
	}
	if ( data.MinXDistance_ )
	{
		ret.With(MinXDistance.Into(data.MinXDistance_));
	}
	if ( data.MinZDistance_ )
	{
		ret.With(MinZDistance.Into(data.MinZDistance_));
	}
	return std::move(ret);
}


GC_CabFNFHoleInfoImp	GC_CabFNFHoleInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabFNFHoleInfoImp(alias));
}

GC_CabFNFHoleInfoImp::GC_CabFNFHoleInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabFNFHoleInfo"), alias)
	,CabFNFHoleID(ImpSPtr_,AUTODB_STR("CabFNFHoleID"))
	,CabFNFID(ImpSPtr_,AUTODB_STR("CabFNFID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,HoleID(ImpSPtr_,AUTODB_STR("HoleID"))
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,HoleTypeID(ImpSPtr_,AUTODB_STR("HoleTypeID"))
	,HolePicID(ImpSPtr_,AUTODB_STR("HolePicID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,OverHeight(ImpSPtr_,AUTODB_STR("OverHeight"))
	,MinXDistance(ImpSPtr_,AUTODB_STR("MinXDistance"))
	,MinZDistance(ImpSPtr_,AUTODB_STR("MinZDistance"))
{}

GC_CabFNFHoleInfoImp::GC_CabFNFHoleInfoImp( const GC_CabFNFHoleInfoImp& rhs ):Table(rhs)
	,CabFNFHoleID(rhs.CabFNFHoleID)
	,CabFNFID(rhs.CabFNFID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,HoleID(rhs.HoleID)
	,FNFittingID(rhs.FNFittingID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,HoleTypeID(rhs.HoleTypeID)
	,HolePicID(rhs.HolePicID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,OverHeight(rhs.OverHeight)
	,MinXDistance(rhs.MinXDistance)
	,MinZDistance(rhs.MinZDistance)
{}

GC_CabFNFHoleInfoImp::GC_CabFNFHoleInfoImp( GC_CabFNFHoleInfoImp&& rhs ):Table(rhs)
	,CabFNFHoleID(std::move(rhs.CabFNFHoleID))
	,CabFNFID(std::move(rhs.CabFNFID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,HoleID(std::move(rhs.HoleID))
	,FNFittingID(std::move(rhs.FNFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,HoleTypeID(std::move(rhs.HoleTypeID))
	,HolePicID(std::move(rhs.HolePicID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,OverHeight(std::move(rhs.OverHeight))
	,MinXDistance(std::move(rhs.MinXDistance))
	,MinZDistance(std::move(rhs.MinZDistance))
{}

GC_CabFNFHoleInfoImp	GC_CabFNFHoleInfo("");



void	GC_CabFNFInfoImp::SData::SetAll(bool val)
{
	val ? CabFNFID_.reset(boost::initialized_value) : CabFNFID_=boost::none;
	val ? DesignOwnerID_.reset(boost::initialized_value) : DesignOwnerID_=boost::none;
	val ? DesignOwnerGTypeID_.reset(boost::initialized_value) : DesignOwnerGTypeID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? ContainerID_.reset(boost::initialized_value) : ContainerID_=boost::none;
	val ? ContainerGTypeID_.reset(boost::initialized_value) : ContainerGTypeID_=boost::none;
	val ? CabDesignFNFittingID_.reset(boost::initialized_value) : CabDesignFNFittingID_=boost::none;
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsFakeDel_.reset(boost::initialized_value) : IsFakeDel_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? RealXLen_.reset(boost::initialized_value) : RealXLen_=boost::none;
	val ? RealYLen_.reset(boost::initialized_value) : RealYLen_=boost::none;
	val ? RealZLen_.reset(boost::initialized_value) : RealZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? YPos_.reset(boost::initialized_value) : YPos_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? UserMemo_.reset(boost::initialized_value) : UserMemo_=boost::none;
}

void	GC_CabFNFInfoImp::SData::Flip()
{
	CabFNFID_ ? CabFNFID_=boost::none : CabFNFID_.reset(boost::initialized_value);
	DesignOwnerID_ ? DesignOwnerID_=boost::none : DesignOwnerID_.reset(boost::initialized_value);
	DesignOwnerGTypeID_ ? DesignOwnerGTypeID_=boost::none : DesignOwnerGTypeID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	ContainerID_ ? ContainerID_=boost::none : ContainerID_.reset(boost::initialized_value);
	ContainerGTypeID_ ? ContainerGTypeID_=boost::none : ContainerGTypeID_.reset(boost::initialized_value);
	CabDesignFNFittingID_ ? CabDesignFNFittingID_=boost::none : CabDesignFNFittingID_.reset(boost::initialized_value);
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsFakeDel_ ? IsFakeDel_=boost::none : IsFakeDel_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	RealXLen_ ? RealXLen_=boost::none : RealXLen_.reset(boost::initialized_value);
	RealYLen_ ? RealYLen_=boost::none : RealYLen_.reset(boost::initialized_value);
	RealZLen_ ? RealZLen_=boost::none : RealZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	YPos_ ? YPos_=boost::none : YPos_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	UserMemo_ ? UserMemo_=boost::none : UserMemo_.reset(boost::initialized_value);
}

void	GC_CabFNFInfoImp::SData::Check()
{
	if ( !CabFNFID_ )
	{
		CabFNFID_.reset(boost::initialized_value);
	}
	if ( !DesignOwnerID_ )
	{
		DesignOwnerID_.reset(boost::initialized_value);
	}
	if ( !DesignOwnerGTypeID_ )
	{
		DesignOwnerGTypeID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !ContainerID_ )
	{
		ContainerID_.reset(boost::initialized_value);
	}
	if ( !ContainerGTypeID_ )
	{
		ContainerGTypeID_.reset(boost::initialized_value);
	}
	if ( !CabDesignFNFittingID_ )
	{
		CabDesignFNFittingID_.reset(boost::initialized_value);
	}
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsFakeDel_ )
	{
		IsFakeDel_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !XDock_ )
	{
		XDock_.reset(boost::initialized_value);
	}
	if ( !YDock_ )
	{
		YDock_.reset(boost::initialized_value);
	}
	if ( !ZDock_ )
	{
		ZDock_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !RealXLen_ )
	{
		RealXLen_.reset(boost::initialized_value);
	}
	if ( !RealYLen_ )
	{
		RealYLen_.reset(boost::initialized_value);
	}
	if ( !RealZLen_ )
	{
		RealZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YPos_ )
	{
		YPos_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !UserMemo_ )
	{
		UserMemo_.reset(boost::initialized_value);
	}
}

void	GC_CabFNFInfoImp::SData::ToUtf8()
{
	if ( UserMemo_ )
	{
		UserMemo_ = boost::locale::conv::to_utf<char>(*UserMemo_, "GBK");
	}
}

void	GC_CabFNFInfoImp::SData::ToAscii()
{
	if ( UserMemo_ )
	{
		UserMemo_ = boost::locale::conv::from_utf(*UserMemo_, "GBK");
	}
}

autoDB::SColumns GC_CabFNFInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Use(data.CabFNFID_));
	}
	if ( data.DesignOwnerID_ )
	{
		ret.With(DesignOwnerID.Use(data.DesignOwnerID_));
	}
	if ( data.DesignOwnerGTypeID_ )
	{
		ret.With(DesignOwnerGTypeID.Use(data.DesignOwnerGTypeID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.ContainerID_ )
	{
		ret.With(ContainerID.Use(data.ContainerID_));
	}
	if ( data.ContainerGTypeID_ )
	{
		ret.With(ContainerGTypeID.Use(data.ContainerGTypeID_));
	}
	if ( data.CabDesignFNFittingID_ )
	{
		ret.With(CabDesignFNFittingID.Use(data.CabDesignFNFittingID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Use(data.IsFakeDel_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Use(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Use(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Use(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Use(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Use(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Use(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Use(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.UserMemo_ )
	{
		ret.With(UserMemo.Use(data.UserMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabFNFInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Into(data.CabFNFID_));
	}
	if ( data.DesignOwnerID_ )
	{
		ret.With(DesignOwnerID.Into(data.DesignOwnerID_));
	}
	if ( data.DesignOwnerGTypeID_ )
	{
		ret.With(DesignOwnerGTypeID.Into(data.DesignOwnerGTypeID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.ContainerID_ )
	{
		ret.With(ContainerID.Into(data.ContainerID_));
	}
	if ( data.ContainerGTypeID_ )
	{
		ret.With(ContainerGTypeID.Into(data.ContainerGTypeID_));
	}
	if ( data.CabDesignFNFittingID_ )
	{
		ret.With(CabDesignFNFittingID.Into(data.CabDesignFNFittingID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsFakeDel_ )
	{
		ret.With(IsFakeDel.Into(data.IsFakeDel_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.XDock_ )
	{
		ret.With(XDock.Into(data.XDock_));
	}
	if ( data.YDock_ )
	{
		ret.With(YDock.Into(data.YDock_));
	}
	if ( data.ZDock_ )
	{
		ret.With(ZDock.Into(data.ZDock_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Into(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Into(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Into(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Into(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.UserMemo_ )
	{
		ret.With(UserMemo.Into(data.UserMemo_));
	}
	return std::move(ret);
}


GC_CabFNFInfoImp	GC_CabFNFInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabFNFInfoImp(alias));
}

GC_CabFNFInfoImp::GC_CabFNFInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabFNFInfo"), alias)
	,CabFNFID(ImpSPtr_,AUTODB_STR("CabFNFID"))
	,DesignOwnerID(ImpSPtr_,AUTODB_STR("DesignOwnerID"))
	,DesignOwnerGTypeID(ImpSPtr_,AUTODB_STR("DesignOwnerGTypeID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,ContainerID(ImpSPtr_,AUTODB_STR("ContainerID"))
	,ContainerGTypeID(ImpSPtr_,AUTODB_STR("ContainerGTypeID"))
	,CabDesignFNFittingID(ImpSPtr_,AUTODB_STR("CabDesignFNFittingID"))
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsFakeDel(ImpSPtr_,AUTODB_STR("IsFakeDel"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,RealXLen(ImpSPtr_,AUTODB_STR("RealXLen"))
	,RealYLen(ImpSPtr_,AUTODB_STR("RealYLen"))
	,RealZLen(ImpSPtr_,AUTODB_STR("RealZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,YPos(ImpSPtr_,AUTODB_STR("YPos"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,UserMemo(ImpSPtr_,AUTODB_STR("UserMemo"))
{}

GC_CabFNFInfoImp::GC_CabFNFInfoImp( const GC_CabFNFInfoImp& rhs ):Table(rhs)
	,CabFNFID(rhs.CabFNFID)
	,DesignOwnerID(rhs.DesignOwnerID)
	,DesignOwnerGTypeID(rhs.DesignOwnerGTypeID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,ContainerID(rhs.ContainerID)
	,ContainerGTypeID(rhs.ContainerGTypeID)
	,CabDesignFNFittingID(rhs.CabDesignFNFittingID)
	,FNFittingID(rhs.FNFittingID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,HasMark(rhs.HasMark)
	,IsFakeDel(rhs.IsFakeDel)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,MaterialID(rhs.MaterialID)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,RealXLen(rhs.RealXLen)
	,RealYLen(rhs.RealYLen)
	,RealZLen(rhs.RealZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,YPos(rhs.YPos)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,UserMemo(rhs.UserMemo)
{}

GC_CabFNFInfoImp::GC_CabFNFInfoImp( GC_CabFNFInfoImp&& rhs ):Table(rhs)
	,CabFNFID(std::move(rhs.CabFNFID))
	,DesignOwnerID(std::move(rhs.DesignOwnerID))
	,DesignOwnerGTypeID(std::move(rhs.DesignOwnerGTypeID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,ContainerID(std::move(rhs.ContainerID))
	,ContainerGTypeID(std::move(rhs.ContainerGTypeID))
	,CabDesignFNFittingID(std::move(rhs.CabDesignFNFittingID))
	,FNFittingID(std::move(rhs.FNFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,HasMark(std::move(rhs.HasMark))
	,IsFakeDel(std::move(rhs.IsFakeDel))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,MaterialID(std::move(rhs.MaterialID))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,RealXLen(std::move(rhs.RealXLen))
	,RealYLen(std::move(rhs.RealYLen))
	,RealZLen(std::move(rhs.RealZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,YPos(std::move(rhs.YPos))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,UserMemo(std::move(rhs.UserMemo))
{}

GC_CabFNFInfoImp	GC_CabFNFInfo("");



void	GC_CabFNFPartInfoImp::SData::SetAll(bool val)
{
	val ? CabFNFPartID_.reset(boost::initialized_value) : CabFNFPartID_=boost::none;
	val ? CabFNFID_.reset(boost::initialized_value) : CabFNFID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FNFittingPartID_.reset(boost::initialized_value) : FNFittingPartID_=boost::none;
	val ? FNFittingID_.reset(boost::initialized_value) : FNFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? PartType_.reset(boost::initialized_value) : PartType_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? RealXLen_.reset(boost::initialized_value) : RealXLen_=boost::none;
	val ? RealYLen_.reset(boost::initialized_value) : RealYLen_=boost::none;
	val ? RealZLen_.reset(boost::initialized_value) : RealZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabFNFPartInfoImp::SData::Flip()
{
	CabFNFPartID_ ? CabFNFPartID_=boost::none : CabFNFPartID_.reset(boost::initialized_value);
	CabFNFID_ ? CabFNFID_=boost::none : CabFNFID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FNFittingPartID_ ? FNFittingPartID_=boost::none : FNFittingPartID_.reset(boost::initialized_value);
	FNFittingID_ ? FNFittingID_=boost::none : FNFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	PartType_ ? PartType_=boost::none : PartType_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	RealXLen_ ? RealXLen_=boost::none : RealXLen_.reset(boost::initialized_value);
	RealYLen_ ? RealYLen_=boost::none : RealYLen_.reset(boost::initialized_value);
	RealZLen_ ? RealZLen_=boost::none : RealZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabFNFPartInfoImp::SData::Check()
{
	if ( !CabFNFPartID_ )
	{
		CabFNFPartID_.reset(boost::initialized_value);
	}
	if ( !CabFNFID_ )
	{
		CabFNFID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FNFittingPartID_ )
	{
		FNFittingPartID_.reset(boost::initialized_value);
	}
	if ( !FNFittingID_ )
	{
		FNFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !PartType_ )
	{
		PartType_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !RealXLen_ )
	{
		RealXLen_.reset(boost::initialized_value);
	}
	if ( !RealYLen_ )
	{
		RealYLen_.reset(boost::initialized_value);
	}
	if ( !RealZLen_ )
	{
		RealZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabFNFPartInfoImp::SData::ToUtf8()
{
}

void	GC_CabFNFPartInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabFNFPartInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabFNFPartID_ )
	{
		ret.With(CabFNFPartID.Use(data.CabFNFPartID_));
	}
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Use(data.CabFNFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Use(data.FNFittingPartID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Use(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.PartType_ )
	{
		ret.With(PartType.Use(data.PartType_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Use(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Use(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Use(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabFNFPartInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabFNFPartID_ )
	{
		ret.With(CabFNFPartID.Into(data.CabFNFPartID_));
	}
	if ( data.CabFNFID_ )
	{
		ret.With(CabFNFID.Into(data.CabFNFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Into(data.FNFittingPartID_));
	}
	if ( data.FNFittingID_ )
	{
		ret.With(FNFittingID.Into(data.FNFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.PartType_ )
	{
		ret.With(PartType.Into(data.PartType_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.RealXLen_ )
	{
		ret.With(RealXLen.Into(data.RealXLen_));
	}
	if ( data.RealYLen_ )
	{
		ret.With(RealYLen.Into(data.RealYLen_));
	}
	if ( data.RealZLen_ )
	{
		ret.With(RealZLen.Into(data.RealZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabFNFPartInfoImp	GC_CabFNFPartInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabFNFPartInfoImp(alias));
}

GC_CabFNFPartInfoImp::GC_CabFNFPartInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabFNFPartInfo"), alias)
	,CabFNFPartID(ImpSPtr_,AUTODB_STR("CabFNFPartID"))
	,CabFNFID(ImpSPtr_,AUTODB_STR("CabFNFID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FNFittingPartID(ImpSPtr_,AUTODB_STR("FNFittingPartID"))
	,FNFittingID(ImpSPtr_,AUTODB_STR("FNFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,PartType(ImpSPtr_,AUTODB_STR("PartType"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,RealXLen(ImpSPtr_,AUTODB_STR("RealXLen"))
	,RealYLen(ImpSPtr_,AUTODB_STR("RealYLen"))
	,RealZLen(ImpSPtr_,AUTODB_STR("RealZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabFNFPartInfoImp::GC_CabFNFPartInfoImp( const GC_CabFNFPartInfoImp& rhs ):Table(rhs)
	,CabFNFPartID(rhs.CabFNFPartID)
	,CabFNFID(rhs.CabFNFID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,FNFittingPartID(rhs.FNFittingPartID)
	,FNFittingID(rhs.FNFittingID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,HWFittingID(rhs.HWFittingID)
	,MaterialID(rhs.MaterialID)
	,SealRuleID(rhs.SealRuleID)
	,PartType(rhs.PartType)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,RealXLen(rhs.RealXLen)
	,RealYLen(rhs.RealYLen)
	,RealZLen(rhs.RealZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabFNFPartInfoImp::GC_CabFNFPartInfoImp( GC_CabFNFPartInfoImp&& rhs ):Table(rhs)
	,CabFNFPartID(std::move(rhs.CabFNFPartID))
	,CabFNFID(std::move(rhs.CabFNFID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FNFittingPartID(std::move(rhs.FNFittingPartID))
	,FNFittingID(std::move(rhs.FNFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,HWFittingID(std::move(rhs.HWFittingID))
	,MaterialID(std::move(rhs.MaterialID))
	,SealRuleID(std::move(rhs.SealRuleID))
	,PartType(std::move(rhs.PartType))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,RealXLen(std::move(rhs.RealXLen))
	,RealYLen(std::move(rhs.RealYLen))
	,RealZLen(std::move(rhs.RealZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabFNFPartInfoImp	GC_CabFNFPartInfo("");



void	GC_CabFNFPartSealInfoImp::SData::SetAll(bool val)
{
	val ? CabFNFPartSealID_.reset(boost::initialized_value) : CabFNFPartSealID_=boost::none;
	val ? CabFNFPartID_.reset(boost::initialized_value) : CabFNFPartID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FNFittingPartID_.reset(boost::initialized_value) : FNFittingPartID_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? PreMill_.reset(boost::initialized_value) : PreMill_=boost::none;
}

void	GC_CabFNFPartSealInfoImp::SData::Flip()
{
	CabFNFPartSealID_ ? CabFNFPartSealID_=boost::none : CabFNFPartSealID_.reset(boost::initialized_value);
	CabFNFPartID_ ? CabFNFPartID_=boost::none : CabFNFPartID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FNFittingPartID_ ? FNFittingPartID_=boost::none : FNFittingPartID_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	PreMill_ ? PreMill_=boost::none : PreMill_.reset(boost::initialized_value);
}

void	GC_CabFNFPartSealInfoImp::SData::Check()
{
	if ( !CabFNFPartSealID_ )
	{
		CabFNFPartSealID_.reset(boost::initialized_value);
	}
	if ( !CabFNFPartID_ )
	{
		CabFNFPartID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FNFittingPartID_ )
	{
		FNFittingPartID_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !PreMill_ )
	{
		PreMill_.reset(boost::initialized_value);
	}
}

void	GC_CabFNFPartSealInfoImp::SData::ToUtf8()
{
}

void	GC_CabFNFPartSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabFNFPartSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabFNFPartSealID_ )
	{
		ret.With(CabFNFPartSealID.Use(data.CabFNFPartSealID_));
	}
	if ( data.CabFNFPartID_ )
	{
		ret.With(CabFNFPartID.Use(data.CabFNFPartID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Use(data.FNFittingPartID_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Use(data.PreMill_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabFNFPartSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabFNFPartSealID_ )
	{
		ret.With(CabFNFPartSealID.Into(data.CabFNFPartSealID_));
	}
	if ( data.CabFNFPartID_ )
	{
		ret.With(CabFNFPartID.Into(data.CabFNFPartID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FNFittingPartID_ )
	{
		ret.With(FNFittingPartID.Into(data.FNFittingPartID_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Into(data.PreMill_));
	}
	return std::move(ret);
}


GC_CabFNFPartSealInfoImp	GC_CabFNFPartSealInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabFNFPartSealInfoImp(alias));
}

GC_CabFNFPartSealInfoImp::GC_CabFNFPartSealInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabFNFPartSealInfo"), alias)
	,CabFNFPartSealID(ImpSPtr_,AUTODB_STR("CabFNFPartSealID"))
	,CabFNFPartID(ImpSPtr_,AUTODB_STR("CabFNFPartID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FNFittingPartID(ImpSPtr_,AUTODB_STR("FNFittingPartID"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,PreMill(ImpSPtr_,AUTODB_STR("PreMill"))
{}

GC_CabFNFPartSealInfoImp::GC_CabFNFPartSealInfoImp( const GC_CabFNFPartSealInfoImp& rhs ):Table(rhs)
	,CabFNFPartSealID(rhs.CabFNFPartSealID)
	,CabFNFPartID(rhs.CabFNFPartID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,FNFittingPartID(rhs.FNFittingPartID)
	,SealType(rhs.SealType)
	,SealIndex(rhs.SealIndex)
	,MaterialID(rhs.MaterialID)
	,PreMill(rhs.PreMill)
{}

GC_CabFNFPartSealInfoImp::GC_CabFNFPartSealInfoImp( GC_CabFNFPartSealInfoImp&& rhs ):Table(rhs)
	,CabFNFPartSealID(std::move(rhs.CabFNFPartSealID))
	,CabFNFPartID(std::move(rhs.CabFNFPartID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,FNFittingPartID(std::move(rhs.FNFittingPartID))
	,SealType(std::move(rhs.SealType))
	,SealIndex(std::move(rhs.SealIndex))
	,MaterialID(std::move(rhs.MaterialID))
	,PreMill(std::move(rhs.PreMill))
{}

GC_CabFNFPartSealInfoImp	GC_CabFNFPartSealInfo("");



void	GC_CabInfoImp::SData::SetAll(bool val)
{
	val ? CabID_.reset(boost::initialized_value) : CabID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? CabDesignID_.reset(boost::initialized_value) : CabDesignID_=boost::none;
	val ? CabinetSizeID_.reset(boost::initialized_value) : CabinetSizeID_=boost::none;
	val ? CabStructID_.reset(boost::initialized_value) : CabStructID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? ShapeXLen_.reset(boost::initialized_value) : ShapeXLen_=boost::none;
	val ? ShapeZLen_.reset(boost::initialized_value) : ShapeZLen_=boost::none;
	val ? GapXLen_.reset(boost::initialized_value) : GapXLen_=boost::none;
	val ? GapYLen_.reset(boost::initialized_value) : GapYLen_=boost::none;
	val ? GapZLen_.reset(boost::initialized_value) : GapZLen_=boost::none;
	val ? YPos_.reset(boost::initialized_value) : YPos_=boost::none;
	val ? FootID_.reset(boost::initialized_value) : FootID_=boost::none;
	val ? FootCount_.reset(boost::initialized_value) : FootCount_=boost::none;
	val ? FootYLen_.reset(boost::initialized_value) : FootYLen_=boost::none;
	val ? IsStandard_.reset(boost::initialized_value) : IsStandard_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_CabInfoImp::SData::Flip()
{
	CabID_ ? CabID_=boost::none : CabID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	CabDesignID_ ? CabDesignID_=boost::none : CabDesignID_.reset(boost::initialized_value);
	CabinetSizeID_ ? CabinetSizeID_=boost::none : CabinetSizeID_.reset(boost::initialized_value);
	CabStructID_ ? CabStructID_=boost::none : CabStructID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	ShapeXLen_ ? ShapeXLen_=boost::none : ShapeXLen_.reset(boost::initialized_value);
	ShapeZLen_ ? ShapeZLen_=boost::none : ShapeZLen_.reset(boost::initialized_value);
	GapXLen_ ? GapXLen_=boost::none : GapXLen_.reset(boost::initialized_value);
	GapYLen_ ? GapYLen_=boost::none : GapYLen_.reset(boost::initialized_value);
	GapZLen_ ? GapZLen_=boost::none : GapZLen_.reset(boost::initialized_value);
	YPos_ ? YPos_=boost::none : YPos_.reset(boost::initialized_value);
	FootID_ ? FootID_=boost::none : FootID_.reset(boost::initialized_value);
	FootCount_ ? FootCount_=boost::none : FootCount_.reset(boost::initialized_value);
	FootYLen_ ? FootYLen_=boost::none : FootYLen_.reset(boost::initialized_value);
	IsStandard_ ? IsStandard_=boost::none : IsStandard_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_CabInfoImp::SData::Check()
{
	if ( !CabID_ )
	{
		CabID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !CabDesignID_ )
	{
		CabDesignID_.reset(boost::initialized_value);
	}
	if ( !CabinetSizeID_ )
	{
		CabinetSizeID_.reset(boost::initialized_value);
	}
	if ( !CabStructID_ )
	{
		CabStructID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !ShapeXLen_ )
	{
		ShapeXLen_.reset(boost::initialized_value);
	}
	if ( !ShapeZLen_ )
	{
		ShapeZLen_.reset(boost::initialized_value);
	}
	if ( !GapXLen_ )
	{
		GapXLen_.reset(boost::initialized_value);
	}
	if ( !GapYLen_ )
	{
		GapYLen_.reset(boost::initialized_value);
	}
	if ( !GapZLen_ )
	{
		GapZLen_.reset(boost::initialized_value);
	}
	if ( !YPos_ )
	{
		YPos_.reset(boost::initialized_value);
	}
	if ( !FootID_ )
	{
		FootID_.reset(boost::initialized_value);
	}
	if ( !FootCount_ )
	{
		FootCount_.reset(boost::initialized_value);
	}
	if ( !FootYLen_ )
	{
		FootYLen_.reset(boost::initialized_value);
	}
	if ( !IsStandard_ )
	{
		IsStandard_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_CabInfoImp::SData::ToUtf8()
{
}

void	GC_CabInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_CabInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabID_ )
	{
		ret.With(CabID.Use(data.CabID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Use(data.CabDesignID_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Use(data.CabinetSizeID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Use(data.CabStructID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.ShapeXLen_ )
	{
		ret.With(ShapeXLen.Use(data.ShapeXLen_));
	}
	if ( data.ShapeZLen_ )
	{
		ret.With(ShapeZLen.Use(data.ShapeZLen_));
	}
	if ( data.GapXLen_ )
	{
		ret.With(GapXLen.Use(data.GapXLen_));
	}
	if ( data.GapYLen_ )
	{
		ret.With(GapYLen.Use(data.GapYLen_));
	}
	if ( data.GapZLen_ )
	{
		ret.With(GapZLen.Use(data.GapZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Use(data.YPos_));
	}
	if ( data.FootID_ )
	{
		ret.With(FootID.Use(data.FootID_));
	}
	if ( data.FootCount_ )
	{
		ret.With(FootCount.Use(data.FootCount_));
	}
	if ( data.FootYLen_ )
	{
		ret.With(FootYLen.Use(data.FootYLen_));
	}
	if ( data.IsStandard_ )
	{
		ret.With(IsStandard.Use(data.IsStandard_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_CabInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabID_ )
	{
		ret.With(CabID.Into(data.CabID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.CabDesignID_ )
	{
		ret.With(CabDesignID.Into(data.CabDesignID_));
	}
	if ( data.CabinetSizeID_ )
	{
		ret.With(CabinetSizeID.Into(data.CabinetSizeID_));
	}
	if ( data.CabStructID_ )
	{
		ret.With(CabStructID.Into(data.CabStructID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.ShapeXLen_ )
	{
		ret.With(ShapeXLen.Into(data.ShapeXLen_));
	}
	if ( data.ShapeZLen_ )
	{
		ret.With(ShapeZLen.Into(data.ShapeZLen_));
	}
	if ( data.GapXLen_ )
	{
		ret.With(GapXLen.Into(data.GapXLen_));
	}
	if ( data.GapYLen_ )
	{
		ret.With(GapYLen.Into(data.GapYLen_));
	}
	if ( data.GapZLen_ )
	{
		ret.With(GapZLen.Into(data.GapZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Into(data.YPos_));
	}
	if ( data.FootID_ )
	{
		ret.With(FootID.Into(data.FootID_));
	}
	if ( data.FootCount_ )
	{
		ret.With(FootCount.Into(data.FootCount_));
	}
	if ( data.FootYLen_ )
	{
		ret.With(FootYLen.Into(data.FootYLen_));
	}
	if ( data.IsStandard_ )
	{
		ret.With(IsStandard.Into(data.IsStandard_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_CabInfoImp	GC_CabInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_CabInfoImp(alias));
}

GC_CabInfoImp::GC_CabInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_CabInfo"), alias)
	,CabID(ImpSPtr_,AUTODB_STR("CabID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,CabDesignID(ImpSPtr_,AUTODB_STR("CabDesignID"))
	,CabinetSizeID(ImpSPtr_,AUTODB_STR("CabinetSizeID"))
	,CabStructID(ImpSPtr_,AUTODB_STR("CabStructID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,ShapeXLen(ImpSPtr_,AUTODB_STR("ShapeXLen"))
	,ShapeZLen(ImpSPtr_,AUTODB_STR("ShapeZLen"))
	,GapXLen(ImpSPtr_,AUTODB_STR("GapXLen"))
	,GapYLen(ImpSPtr_,AUTODB_STR("GapYLen"))
	,GapZLen(ImpSPtr_,AUTODB_STR("GapZLen"))
	,YPos(ImpSPtr_,AUTODB_STR("YPos"))
	,FootID(ImpSPtr_,AUTODB_STR("FootID"))
	,FootCount(ImpSPtr_,AUTODB_STR("FootCount"))
	,FootYLen(ImpSPtr_,AUTODB_STR("FootYLen"))
	,IsStandard(ImpSPtr_,AUTODB_STR("IsStandard"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_CabInfoImp::GC_CabInfoImp( const GC_CabInfoImp& rhs ):Table(rhs)
	,CabID(rhs.CabID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,CabDesignID(rhs.CabDesignID)
	,CabinetSizeID(rhs.CabinetSizeID)
	,CabStructID(rhs.CabStructID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,CabMatPlanID(rhs.CabMatPlanID)
	,SealRuleID(rhs.SealRuleID)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,ShapeXLen(rhs.ShapeXLen)
	,ShapeZLen(rhs.ShapeZLen)
	,GapXLen(rhs.GapXLen)
	,GapYLen(rhs.GapYLen)
	,GapZLen(rhs.GapZLen)
	,YPos(rhs.YPos)
	,FootID(rhs.FootID)
	,FootCount(rhs.FootCount)
	,FootYLen(rhs.FootYLen)
	,IsStandard(rhs.IsStandard)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_CabInfoImp::GC_CabInfoImp( GC_CabInfoImp&& rhs ):Table(rhs)
	,CabID(std::move(rhs.CabID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,CabDesignID(std::move(rhs.CabDesignID))
	,CabinetSizeID(std::move(rhs.CabinetSizeID))
	,CabStructID(std::move(rhs.CabStructID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,SealRuleID(std::move(rhs.SealRuleID))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,ShapeXLen(std::move(rhs.ShapeXLen))
	,ShapeZLen(std::move(rhs.ShapeZLen))
	,GapXLen(std::move(rhs.GapXLen))
	,GapYLen(std::move(rhs.GapYLen))
	,GapZLen(std::move(rhs.GapZLen))
	,YPos(std::move(rhs.YPos))
	,FootID(std::move(rhs.FootID))
	,FootCount(std::move(rhs.FootCount))
	,FootYLen(std::move(rhs.FootYLen))
	,IsStandard(std::move(rhs.IsStandard))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_CabInfoImp	GC_CabInfo("");



void	GC_DecorBoardInfoImp::SData::SetAll(bool val)
{
	val ? DesignDecorBoardID_.reset(boost::initialized_value) : DesignDecorBoardID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DesignParentID_.reset(boost::initialized_value) : DesignParentID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DecorBoardID_.reset(boost::initialized_value) : DecorBoardID_=boost::none;
	val ? DecorParentID_.reset(boost::initialized_value) : DecorParentID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? GroupIndex_.reset(boost::initialized_value) : GroupIndex_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? IsAutoFit_.reset(boost::initialized_value) : IsAutoFit_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? IsChangedSize_.reset(boost::initialized_value) : IsChangedSize_=boost::none;
	val ? IsDragIn_.reset(boost::initialized_value) : IsDragIn_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? TargetType_.reset(boost::initialized_value) : TargetType_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? YPos_.reset(boost::initialized_value) : YPos_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_DecorBoardInfoImp::SData::Flip()
{
	DesignDecorBoardID_ ? DesignDecorBoardID_=boost::none : DesignDecorBoardID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DesignParentID_ ? DesignParentID_=boost::none : DesignParentID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DecorBoardID_ ? DecorBoardID_=boost::none : DecorBoardID_.reset(boost::initialized_value);
	DecorParentID_ ? DecorParentID_=boost::none : DecorParentID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	GroupIndex_ ? GroupIndex_=boost::none : GroupIndex_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	IsAutoFit_ ? IsAutoFit_=boost::none : IsAutoFit_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	IsChangedSize_ ? IsChangedSize_=boost::none : IsChangedSize_.reset(boost::initialized_value);
	IsDragIn_ ? IsDragIn_=boost::none : IsDragIn_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	TargetType_ ? TargetType_=boost::none : TargetType_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	YPos_ ? YPos_=boost::none : YPos_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_DecorBoardInfoImp::SData::Check()
{
	if ( !DesignDecorBoardID_ )
	{
		DesignDecorBoardID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DesignParentID_ )
	{
		DesignParentID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DecorBoardID_ )
	{
		DecorBoardID_.reset(boost::initialized_value);
	}
	if ( !DecorParentID_ )
	{
		DecorParentID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !GroupIndex_ )
	{
		GroupIndex_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !IsAutoFit_ )
	{
		IsAutoFit_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !IsChangedSize_ )
	{
		IsChangedSize_.reset(boost::initialized_value);
	}
	if ( !IsDragIn_ )
	{
		IsDragIn_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !TargetType_ )
	{
		TargetType_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !YPos_ )
	{
		YPos_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_DecorBoardInfoImp::SData::ToUtf8()
{
}

void	GC_DecorBoardInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_DecorBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignDecorBoardID_ )
	{
		ret.With(DesignDecorBoardID.Use(data.DesignDecorBoardID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DesignParentID_ )
	{
		ret.With(DesignParentID.Use(data.DesignParentID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Use(data.DecorBoardID_));
	}
	if ( data.DecorParentID_ )
	{
		ret.With(DecorParentID.Use(data.DecorParentID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.GroupIndex_ )
	{
		ret.With(GroupIndex.Use(data.GroupIndex_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.IsAutoFit_ )
	{
		ret.With(IsAutoFit.Use(data.IsAutoFit_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.IsChangedSize_ )
	{
		ret.With(IsChangedSize.Use(data.IsChangedSize_));
	}
	if ( data.IsDragIn_ )
	{
		ret.With(IsDragIn.Use(data.IsDragIn_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.TargetType_ )
	{
		ret.With(TargetType.Use(data.TargetType_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Use(data.YPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_DecorBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignDecorBoardID_ )
	{
		ret.With(DesignDecorBoardID.Into(data.DesignDecorBoardID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DesignParentID_ )
	{
		ret.With(DesignParentID.Into(data.DesignParentID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Into(data.DecorBoardID_));
	}
	if ( data.DecorParentID_ )
	{
		ret.With(DecorParentID.Into(data.DecorParentID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.GroupIndex_ )
	{
		ret.With(GroupIndex.Into(data.GroupIndex_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.IsAutoFit_ )
	{
		ret.With(IsAutoFit.Into(data.IsAutoFit_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.IsChangedSize_ )
	{
		ret.With(IsChangedSize.Into(data.IsChangedSize_));
	}
	if ( data.IsDragIn_ )
	{
		ret.With(IsDragIn.Into(data.IsDragIn_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.TargetType_ )
	{
		ret.With(TargetType.Into(data.TargetType_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Into(data.YPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_DecorBoardInfoImp	GC_DecorBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_DecorBoardInfoImp(alias));
}

GC_DecorBoardInfoImp::GC_DecorBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_DecorBoardInfo"), alias)
	,DesignDecorBoardID(ImpSPtr_,AUTODB_STR("DesignDecorBoardID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DesignParentID(ImpSPtr_,AUTODB_STR("DesignParentID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DecorBoardID(ImpSPtr_,AUTODB_STR("DecorBoardID"))
	,DecorParentID(ImpSPtr_,AUTODB_STR("DecorParentID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,GroupIndex(ImpSPtr_,AUTODB_STR("GroupIndex"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,IsAutoFit(ImpSPtr_,AUTODB_STR("IsAutoFit"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,IsChangedSize(ImpSPtr_,AUTODB_STR("IsChangedSize"))
	,IsDragIn(ImpSPtr_,AUTODB_STR("IsDragIn"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,TargetType(ImpSPtr_,AUTODB_STR("TargetType"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,YPos(ImpSPtr_,AUTODB_STR("YPos"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_DecorBoardInfoImp::GC_DecorBoardInfoImp( const GC_DecorBoardInfoImp& rhs ):Table(rhs)
	,DesignDecorBoardID(rhs.DesignDecorBoardID)
	,DesignPlanID(rhs.DesignPlanID)
	,DesignParentID(rhs.DesignParentID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DecorBoardID(rhs.DecorBoardID)
	,DecorParentID(rhs.DecorParentID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,GroupID(rhs.GroupID)
	,GroupIndex(rhs.GroupIndex)
	,GTypeID(rhs.GTypeID)
	,IsAutoFit(rhs.IsAutoFit)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,IsChangedSize(rhs.IsChangedSize)
	,IsDragIn(rhs.IsDragIn)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,CabMatPlanID(rhs.CabMatPlanID)
	,DoorID(rhs.DoorID)
	,TargetType(rhs.TargetType)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,SupplyType(rhs.SupplyType)
	,ModelID(rhs.ModelID)
	,YPos(rhs.YPos)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_DecorBoardInfoImp::GC_DecorBoardInfoImp( GC_DecorBoardInfoImp&& rhs ):Table(rhs)
	,DesignDecorBoardID(std::move(rhs.DesignDecorBoardID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DesignParentID(std::move(rhs.DesignParentID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DecorBoardID(std::move(rhs.DecorBoardID))
	,DecorParentID(std::move(rhs.DecorParentID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,GroupID(std::move(rhs.GroupID))
	,GroupIndex(std::move(rhs.GroupIndex))
	,GTypeID(std::move(rhs.GTypeID))
	,IsAutoFit(std::move(rhs.IsAutoFit))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,IsChangedSize(std::move(rhs.IsChangedSize))
	,IsDragIn(std::move(rhs.IsDragIn))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,DoorID(std::move(rhs.DoorID))
	,TargetType(std::move(rhs.TargetType))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,SupplyType(std::move(rhs.SupplyType))
	,ModelID(std::move(rhs.ModelID))
	,YPos(std::move(rhs.YPos))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_DecorBoardInfoImp	GC_DecorBoardInfo("");



void	GC_DecorBoardUnitInfoImp::SData::SetAll(bool val)
{
	val ? DesignDecorBoardUnitID_.reset(boost::initialized_value) : DesignDecorBoardUnitID_=boost::none;
	val ? DesignDecorBoardID_.reset(boost::initialized_value) : DesignDecorBoardID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DecorBoardUnitID_.reset(boost::initialized_value) : DecorBoardUnitID_=boost::none;
	val ? DecorBoardID_.reset(boost::initialized_value) : DecorBoardID_=boost::none;
	val ? DecorBoardUnitIndex_.reset(boost::initialized_value) : DecorBoardUnitIndex_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsUseDoor_.reset(boost::initialized_value) : IsUseDoor_=boost::none;
	val ? DoorMatPlanID_.reset(boost::initialized_value) : DoorMatPlanID_=boost::none;
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? DoorID_.reset(boost::initialized_value) : DoorID_=boost::none;
	val ? TargetType_.reset(boost::initialized_value) : TargetType_=boost::none;
	val ? MatID_.reset(boost::initialized_value) : MatID_=boost::none;
	val ? MatGType_.reset(boost::initialized_value) : MatGType_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? SealRuleID_.reset(boost::initialized_value) : SealRuleID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? XOffsetLen_.reset(boost::initialized_value) : XOffsetLen_=boost::none;
	val ? YOffsetLen_.reset(boost::initialized_value) : YOffsetLen_=boost::none;
	val ? ZOffsetLen_.reset(boost::initialized_value) : ZOffsetLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_DecorBoardUnitInfoImp::SData::Flip()
{
	DesignDecorBoardUnitID_ ? DesignDecorBoardUnitID_=boost::none : DesignDecorBoardUnitID_.reset(boost::initialized_value);
	DesignDecorBoardID_ ? DesignDecorBoardID_=boost::none : DesignDecorBoardID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DecorBoardUnitID_ ? DecorBoardUnitID_=boost::none : DecorBoardUnitID_.reset(boost::initialized_value);
	DecorBoardID_ ? DecorBoardID_=boost::none : DecorBoardID_.reset(boost::initialized_value);
	DecorBoardUnitIndex_ ? DecorBoardUnitIndex_=boost::none : DecorBoardUnitIndex_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsUseDoor_ ? IsUseDoor_=boost::none : IsUseDoor_.reset(boost::initialized_value);
	DoorMatPlanID_ ? DoorMatPlanID_=boost::none : DoorMatPlanID_.reset(boost::initialized_value);
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	DoorID_ ? DoorID_=boost::none : DoorID_.reset(boost::initialized_value);
	TargetType_ ? TargetType_=boost::none : TargetType_.reset(boost::initialized_value);
	MatID_ ? MatID_=boost::none : MatID_.reset(boost::initialized_value);
	MatGType_ ? MatGType_=boost::none : MatGType_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	SealRuleID_ ? SealRuleID_=boost::none : SealRuleID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	XOffsetLen_ ? XOffsetLen_=boost::none : XOffsetLen_.reset(boost::initialized_value);
	YOffsetLen_ ? YOffsetLen_=boost::none : YOffsetLen_.reset(boost::initialized_value);
	ZOffsetLen_ ? ZOffsetLen_=boost::none : ZOffsetLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_DecorBoardUnitInfoImp::SData::Check()
{
	if ( !DesignDecorBoardUnitID_ )
	{
		DesignDecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !DesignDecorBoardID_ )
	{
		DesignDecorBoardID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitID_ )
	{
		DecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !DecorBoardID_ )
	{
		DecorBoardID_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitIndex_ )
	{
		DecorBoardUnitIndex_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsUseDoor_ )
	{
		IsUseDoor_.reset(boost::initialized_value);
	}
	if ( !DoorMatPlanID_ )
	{
		DoorMatPlanID_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !DoorID_ )
	{
		DoorID_.reset(boost::initialized_value);
	}
	if ( !TargetType_ )
	{
		TargetType_.reset(boost::initialized_value);
	}
	if ( !MatID_ )
	{
		MatID_.reset(boost::initialized_value);
	}
	if ( !MatGType_ )
	{
		MatGType_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !SealRuleID_ )
	{
		SealRuleID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !XOffsetLen_ )
	{
		XOffsetLen_.reset(boost::initialized_value);
	}
	if ( !YOffsetLen_ )
	{
		YOffsetLen_.reset(boost::initialized_value);
	}
	if ( !ZOffsetLen_ )
	{
		ZOffsetLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_DecorBoardUnitInfoImp::SData::ToUtf8()
{
}

void	GC_DecorBoardUnitInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_DecorBoardUnitInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignDecorBoardUnitID_ )
	{
		ret.With(DesignDecorBoardUnitID.Use(data.DesignDecorBoardUnitID_));
	}
	if ( data.DesignDecorBoardID_ )
	{
		ret.With(DesignDecorBoardID.Use(data.DesignDecorBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Use(data.DecorBoardUnitID_));
	}
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Use(data.DecorBoardID_));
	}
	if ( data.DecorBoardUnitIndex_ )
	{
		ret.With(DecorBoardUnitIndex.Use(data.DecorBoardUnitIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsUseDoor_ )
	{
		ret.With(IsUseDoor.Use(data.IsUseDoor_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Use(data.DoorMatPlanID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Use(data.DoorID_));
	}
	if ( data.TargetType_ )
	{
		ret.With(TargetType.Use(data.TargetType_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Use(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Use(data.MatGType_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Use(data.SealRuleID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Use(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Use(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Use(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_DecorBoardUnitInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignDecorBoardUnitID_ )
	{
		ret.With(DesignDecorBoardUnitID.Into(data.DesignDecorBoardUnitID_));
	}
	if ( data.DesignDecorBoardID_ )
	{
		ret.With(DesignDecorBoardID.Into(data.DesignDecorBoardID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Into(data.DecorBoardUnitID_));
	}
	if ( data.DecorBoardID_ )
	{
		ret.With(DecorBoardID.Into(data.DecorBoardID_));
	}
	if ( data.DecorBoardUnitIndex_ )
	{
		ret.With(DecorBoardUnitIndex.Into(data.DecorBoardUnitIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsUseDoor_ )
	{
		ret.With(IsUseDoor.Into(data.IsUseDoor_));
	}
	if ( data.DoorMatPlanID_ )
	{
		ret.With(DoorMatPlanID.Into(data.DoorMatPlanID_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.DoorID_ )
	{
		ret.With(DoorID.Into(data.DoorID_));
	}
	if ( data.TargetType_ )
	{
		ret.With(TargetType.Into(data.TargetType_));
	}
	if ( data.MatID_ )
	{
		ret.With(MatID.Into(data.MatID_));
	}
	if ( data.MatGType_ )
	{
		ret.With(MatGType.Into(data.MatGType_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.SealRuleID_ )
	{
		ret.With(SealRuleID.Into(data.SealRuleID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.XOffsetLen_ )
	{
		ret.With(XOffsetLen.Into(data.XOffsetLen_));
	}
	if ( data.YOffsetLen_ )
	{
		ret.With(YOffsetLen.Into(data.YOffsetLen_));
	}
	if ( data.ZOffsetLen_ )
	{
		ret.With(ZOffsetLen.Into(data.ZOffsetLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_DecorBoardUnitInfoImp	GC_DecorBoardUnitInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_DecorBoardUnitInfoImp(alias));
}

GC_DecorBoardUnitInfoImp::GC_DecorBoardUnitInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_DecorBoardUnitInfo"), alias)
	,DesignDecorBoardUnitID(ImpSPtr_,AUTODB_STR("DesignDecorBoardUnitID"))
	,DesignDecorBoardID(ImpSPtr_,AUTODB_STR("DesignDecorBoardID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DecorBoardUnitID(ImpSPtr_,AUTODB_STR("DecorBoardUnitID"))
	,DecorBoardID(ImpSPtr_,AUTODB_STR("DecorBoardID"))
	,DecorBoardUnitIndex(ImpSPtr_,AUTODB_STR("DecorBoardUnitIndex"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsUseDoor(ImpSPtr_,AUTODB_STR("IsUseDoor"))
	,DoorMatPlanID(ImpSPtr_,AUTODB_STR("DoorMatPlanID"))
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,DoorID(ImpSPtr_,AUTODB_STR("DoorID"))
	,TargetType(ImpSPtr_,AUTODB_STR("TargetType"))
	,MatID(ImpSPtr_,AUTODB_STR("MatID"))
	,MatGType(ImpSPtr_,AUTODB_STR("MatGType"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,SealRuleID(ImpSPtr_,AUTODB_STR("SealRuleID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,XOffsetLen(ImpSPtr_,AUTODB_STR("XOffsetLen"))
	,YOffsetLen(ImpSPtr_,AUTODB_STR("YOffsetLen"))
	,ZOffsetLen(ImpSPtr_,AUTODB_STR("ZOffsetLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_DecorBoardUnitInfoImp::GC_DecorBoardUnitInfoImp( const GC_DecorBoardUnitInfoImp& rhs ):Table(rhs)
	,DesignDecorBoardUnitID(rhs.DesignDecorBoardUnitID)
	,DesignDecorBoardID(rhs.DesignDecorBoardID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DecorBoardUnitID(rhs.DecorBoardUnitID)
	,DecorBoardID(rhs.DecorBoardID)
	,DecorBoardUnitIndex(rhs.DecorBoardUnitIndex)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsUseDoor(rhs.IsUseDoor)
	,DoorMatPlanID(rhs.DoorMatPlanID)
	,CabMatPlanID(rhs.CabMatPlanID)
	,DoorID(rhs.DoorID)
	,TargetType(rhs.TargetType)
	,MatID(rhs.MatID)
	,MatGType(rhs.MatGType)
	,SupplyType(rhs.SupplyType)
	,SealRuleID(rhs.SealRuleID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,XOffsetLen(rhs.XOffsetLen)
	,YOffsetLen(rhs.YOffsetLen)
	,ZOffsetLen(rhs.ZOffsetLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_DecorBoardUnitInfoImp::GC_DecorBoardUnitInfoImp( GC_DecorBoardUnitInfoImp&& rhs ):Table(rhs)
	,DesignDecorBoardUnitID(std::move(rhs.DesignDecorBoardUnitID))
	,DesignDecorBoardID(std::move(rhs.DesignDecorBoardID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DecorBoardUnitID(std::move(rhs.DecorBoardUnitID))
	,DecorBoardID(std::move(rhs.DecorBoardID))
	,DecorBoardUnitIndex(std::move(rhs.DecorBoardUnitIndex))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsUseDoor(std::move(rhs.IsUseDoor))
	,DoorMatPlanID(std::move(rhs.DoorMatPlanID))
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,DoorID(std::move(rhs.DoorID))
	,TargetType(std::move(rhs.TargetType))
	,MatID(std::move(rhs.MatID))
	,MatGType(std::move(rhs.MatGType))
	,SupplyType(std::move(rhs.SupplyType))
	,SealRuleID(std::move(rhs.SealRuleID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,XOffsetLen(std::move(rhs.XOffsetLen))
	,YOffsetLen(std::move(rhs.YOffsetLen))
	,ZOffsetLen(std::move(rhs.ZOffsetLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_DecorBoardUnitInfoImp	GC_DecorBoardUnitInfo("");



void	GC_DecorBoardUnitSealInfoImp::SData::SetAll(bool val)
{
	val ? DesignDecorBoardUnitSealID_.reset(boost::initialized_value) : DesignDecorBoardUnitSealID_=boost::none;
	val ? DesignDecorBoardUnitID_.reset(boost::initialized_value) : DesignDecorBoardUnitID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? DecorBoardUnitID_.reset(boost::initialized_value) : DecorBoardUnitID_=boost::none;
	val ? DecorBoardUnitSealID_.reset(boost::initialized_value) : DecorBoardUnitSealID_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? SealType_.reset(boost::initialized_value) : SealType_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? PreMill_.reset(boost::initialized_value) : PreMill_=boost::none;
}

void	GC_DecorBoardUnitSealInfoImp::SData::Flip()
{
	DesignDecorBoardUnitSealID_ ? DesignDecorBoardUnitSealID_=boost::none : DesignDecorBoardUnitSealID_.reset(boost::initialized_value);
	DesignDecorBoardUnitID_ ? DesignDecorBoardUnitID_=boost::none : DesignDecorBoardUnitID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	DecorBoardUnitID_ ? DecorBoardUnitID_=boost::none : DecorBoardUnitID_.reset(boost::initialized_value);
	DecorBoardUnitSealID_ ? DecorBoardUnitSealID_=boost::none : DecorBoardUnitSealID_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	SealType_ ? SealType_=boost::none : SealType_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	PreMill_ ? PreMill_=boost::none : PreMill_.reset(boost::initialized_value);
}

void	GC_DecorBoardUnitSealInfoImp::SData::Check()
{
	if ( !DesignDecorBoardUnitSealID_ )
	{
		DesignDecorBoardUnitSealID_.reset(boost::initialized_value);
	}
	if ( !DesignDecorBoardUnitID_ )
	{
		DesignDecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitID_ )
	{
		DecorBoardUnitID_.reset(boost::initialized_value);
	}
	if ( !DecorBoardUnitSealID_ )
	{
		DecorBoardUnitSealID_.reset(boost::initialized_value);
	}
	if ( !SealIndex_ )
	{
		SealIndex_.reset(boost::initialized_value);
	}
	if ( !SealType_ )
	{
		SealType_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !PreMill_ )
	{
		PreMill_.reset(boost::initialized_value);
	}
}

void	GC_DecorBoardUnitSealInfoImp::SData::ToUtf8()
{
}

void	GC_DecorBoardUnitSealInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_DecorBoardUnitSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignDecorBoardUnitSealID_ )
	{
		ret.With(DesignDecorBoardUnitSealID.Use(data.DesignDecorBoardUnitSealID_));
	}
	if ( data.DesignDecorBoardUnitID_ )
	{
		ret.With(DesignDecorBoardUnitID.Use(data.DesignDecorBoardUnitID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Use(data.DecorBoardUnitID_));
	}
	if ( data.DecorBoardUnitSealID_ )
	{
		ret.With(DecorBoardUnitSealID.Use(data.DecorBoardUnitSealID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Use(data.SealIndex_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Use(data.SealType_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Use(data.PreMill_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_DecorBoardUnitSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignDecorBoardUnitSealID_ )
	{
		ret.With(DesignDecorBoardUnitSealID.Into(data.DesignDecorBoardUnitSealID_));
	}
	if ( data.DesignDecorBoardUnitID_ )
	{
		ret.With(DesignDecorBoardUnitID.Into(data.DesignDecorBoardUnitID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.DecorBoardUnitID_ )
	{
		ret.With(DecorBoardUnitID.Into(data.DecorBoardUnitID_));
	}
	if ( data.DecorBoardUnitSealID_ )
	{
		ret.With(DecorBoardUnitSealID.Into(data.DecorBoardUnitSealID_));
	}
	if ( data.SealIndex_ )
	{
		ret.With(SealIndex.Into(data.SealIndex_));
	}
	if ( data.SealType_ )
	{
		ret.With(SealType.Into(data.SealType_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.PreMill_ )
	{
		ret.With(PreMill.Into(data.PreMill_));
	}
	return std::move(ret);
}


GC_DecorBoardUnitSealInfoImp	GC_DecorBoardUnitSealInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_DecorBoardUnitSealInfoImp(alias));
}

GC_DecorBoardUnitSealInfoImp::GC_DecorBoardUnitSealInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_DecorBoardUnitSealInfo"), alias)
	,DesignDecorBoardUnitSealID(ImpSPtr_,AUTODB_STR("DesignDecorBoardUnitSealID"))
	,DesignDecorBoardUnitID(ImpSPtr_,AUTODB_STR("DesignDecorBoardUnitID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,DecorBoardUnitID(ImpSPtr_,AUTODB_STR("DecorBoardUnitID"))
	,DecorBoardUnitSealID(ImpSPtr_,AUTODB_STR("DecorBoardUnitSealID"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,SealType(ImpSPtr_,AUTODB_STR("SealType"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,PreMill(ImpSPtr_,AUTODB_STR("PreMill"))
{}

GC_DecorBoardUnitSealInfoImp::GC_DecorBoardUnitSealInfoImp( const GC_DecorBoardUnitSealInfoImp& rhs ):Table(rhs)
	,DesignDecorBoardUnitSealID(rhs.DesignDecorBoardUnitSealID)
	,DesignDecorBoardUnitID(rhs.DesignDecorBoardUnitID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,DecorBoardUnitID(rhs.DecorBoardUnitID)
	,DecorBoardUnitSealID(rhs.DecorBoardUnitSealID)
	,SealIndex(rhs.SealIndex)
	,SealType(rhs.SealType)
	,MaterialID(rhs.MaterialID)
	,PreMill(rhs.PreMill)
{}

GC_DecorBoardUnitSealInfoImp::GC_DecorBoardUnitSealInfoImp( GC_DecorBoardUnitSealInfoImp&& rhs ):Table(rhs)
	,DesignDecorBoardUnitSealID(std::move(rhs.DesignDecorBoardUnitSealID))
	,DesignDecorBoardUnitID(std::move(rhs.DesignDecorBoardUnitID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,DecorBoardUnitID(std::move(rhs.DecorBoardUnitID))
	,DecorBoardUnitSealID(std::move(rhs.DecorBoardUnitSealID))
	,SealIndex(std::move(rhs.SealIndex))
	,SealType(std::move(rhs.SealType))
	,MaterialID(std::move(rhs.MaterialID))
	,PreMill(std::move(rhs.PreMill))
{}

GC_DecorBoardUnitSealInfoImp	GC_DecorBoardUnitSealInfo("");



void	GC_DecorInfoImp::SData::SetAll(bool val)
{
	val ? DesignDecorID_.reset(boost::initialized_value) : DesignDecorID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DecorID_.reset(boost::initialized_value) : DecorID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? YPos_.reset(boost::initialized_value) : YPos_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_DecorInfoImp::SData::Flip()
{
	DesignDecorID_ ? DesignDecorID_=boost::none : DesignDecorID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DecorID_ ? DecorID_=boost::none : DecorID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	YPos_ ? YPos_=boost::none : YPos_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_DecorInfoImp::SData::Check()
{
	if ( !DesignDecorID_ )
	{
		DesignDecorID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DecorID_ )
	{
		DecorID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !YPos_ )
	{
		YPos_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_DecorInfoImp::SData::ToUtf8()
{
}

void	GC_DecorInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_DecorInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignDecorID_ )
	{
		ret.With(DesignDecorID.Use(data.DesignDecorID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Use(data.DecorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Use(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_DecorInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignDecorID_ )
	{
		ret.With(DesignDecorID.Into(data.DesignDecorID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Into(data.DecorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Into(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_DecorInfoImp	GC_DecorInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_DecorInfoImp(alias));
}

GC_DecorInfoImp::GC_DecorInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_DecorInfo"), alias)
	,DesignDecorID(ImpSPtr_,AUTODB_STR("DesignDecorID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DecorID(ImpSPtr_,AUTODB_STR("DecorID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,YPos(ImpSPtr_,AUTODB_STR("YPos"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_DecorInfoImp::GC_DecorInfoImp( const GC_DecorInfoImp& rhs ):Table(rhs)
	,DesignDecorID(rhs.DesignDecorID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,DecorID(rhs.DecorID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,YPos(rhs.YPos)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_DecorInfoImp::GC_DecorInfoImp( GC_DecorInfoImp&& rhs ):Table(rhs)
	,DesignDecorID(std::move(rhs.DesignDecorID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,DecorID(std::move(rhs.DecorID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,YPos(std::move(rhs.YPos))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_DecorInfoImp	GC_DecorInfo("");



void	GC_DecorLineInfoImp::SData::SetAll(bool val)
{
	val ? DesignDecorLineID_.reset(boost::initialized_value) : DesignDecorLineID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DecorLineID_.reset(boost::initialized_value) : DecorLineID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_DecorLineInfoImp::SData::Flip()
{
	DesignDecorLineID_ ? DesignDecorLineID_=boost::none : DesignDecorLineID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DecorLineID_ ? DecorLineID_=boost::none : DecorLineID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_DecorLineInfoImp::SData::Check()
{
	if ( !DesignDecorLineID_ )
	{
		DesignDecorLineID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DecorLineID_ )
	{
		DecorLineID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_DecorLineInfoImp::SData::ToUtf8()
{
}

void	GC_DecorLineInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_DecorLineInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignDecorLineID_ )
	{
		ret.With(DesignDecorLineID.Use(data.DesignDecorLineID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Use(data.DecorLineID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_DecorLineInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignDecorLineID_ )
	{
		ret.With(DesignDecorLineID.Into(data.DesignDecorLineID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Into(data.DecorLineID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_DecorLineInfoImp	GC_DecorLineInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_DecorLineInfoImp(alias));
}

GC_DecorLineInfoImp::GC_DecorLineInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_DecorLineInfo"), alias)
	,DesignDecorLineID(ImpSPtr_,AUTODB_STR("DesignDecorLineID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DecorLineID(ImpSPtr_,AUTODB_STR("DecorLineID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_DecorLineInfoImp::GC_DecorLineInfoImp( const GC_DecorLineInfoImp& rhs ):Table(rhs)
	,DesignDecorLineID(rhs.DesignDecorLineID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,DecorLineID(rhs.DecorLineID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,GTypeID(rhs.GTypeID)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,MaterialID(rhs.MaterialID)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_DecorLineInfoImp::GC_DecorLineInfoImp( GC_DecorLineInfoImp&& rhs ):Table(rhs)
	,DesignDecorLineID(std::move(rhs.DesignDecorLineID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,DecorLineID(std::move(rhs.DecorLineID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,GTypeID(std::move(rhs.GTypeID))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,MaterialID(std::move(rhs.MaterialID))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_DecorLineInfoImp	GC_DecorLineInfo("");



void	GC_DesignPlanInfoImp::SData::SetAll(bool val)
{
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? CurScale_.reset(boost::initialized_value) : CurScale_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? SkyDecorID_.reset(boost::initialized_value) : SkyDecorID_=boost::none;
	val ? FloorDecorID_.reset(boost::initialized_value) : FloorDecorID_=boost::none;
	val ? WallDecorID_.reset(boost::initialized_value) : WallDecorID_=boost::none;
	val ? DesignerID_.reset(boost::initialized_value) : DesignerID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? DesignPlanName_.reset(boost::initialized_value) : DesignPlanName_=boost::none;
	val ? DesignPlanMemo_.reset(boost::initialized_value) : DesignPlanMemo_=boost::none;
}

void	GC_DesignPlanInfoImp::SData::Flip()
{
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	CurScale_ ? CurScale_=boost::none : CurScale_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	SkyDecorID_ ? SkyDecorID_=boost::none : SkyDecorID_.reset(boost::initialized_value);
	FloorDecorID_ ? FloorDecorID_=boost::none : FloorDecorID_.reset(boost::initialized_value);
	WallDecorID_ ? WallDecorID_=boost::none : WallDecorID_.reset(boost::initialized_value);
	DesignerID_ ? DesignerID_=boost::none : DesignerID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	DesignPlanName_ ? DesignPlanName_=boost::none : DesignPlanName_.reset(boost::initialized_value);
	DesignPlanMemo_ ? DesignPlanMemo_=boost::none : DesignPlanMemo_.reset(boost::initialized_value);
}

void	GC_DesignPlanInfoImp::SData::Check()
{
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !CurScale_ )
	{
		CurScale_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !SkyDecorID_ )
	{
		SkyDecorID_.reset(boost::initialized_value);
	}
	if ( !FloorDecorID_ )
	{
		FloorDecorID_.reset(boost::initialized_value);
	}
	if ( !WallDecorID_ )
	{
		WallDecorID_.reset(boost::initialized_value);
	}
	if ( !DesignerID_ )
	{
		DesignerID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !DesignPlanName_ )
	{
		DesignPlanName_.reset(boost::initialized_value);
	}
	if ( !DesignPlanMemo_ )
	{
		DesignPlanMemo_.reset(boost::initialized_value);
	}
}

void	GC_DesignPlanInfoImp::SData::ToUtf8()
{
	if ( DesignPlanName_ )
	{
		DesignPlanName_ = boost::locale::conv::to_utf<char>(*DesignPlanName_, "GBK");
	}
	if ( DesignPlanMemo_ )
	{
		DesignPlanMemo_ = boost::locale::conv::to_utf<char>(*DesignPlanMemo_, "GBK");
	}
}

void	GC_DesignPlanInfoImp::SData::ToAscii()
{
	if ( DesignPlanName_ )
	{
		DesignPlanName_ = boost::locale::conv::from_utf(*DesignPlanName_, "GBK");
	}
	if ( DesignPlanMemo_ )
	{
		DesignPlanMemo_ = boost::locale::conv::from_utf(*DesignPlanMemo_, "GBK");
	}
}

autoDB::SColumns GC_DesignPlanInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.CurScale_ )
	{
		ret.With(CurScale.Use(data.CurScale_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.SkyDecorID_ )
	{
		ret.With(SkyDecorID.Use(data.SkyDecorID_));
	}
	if ( data.FloorDecorID_ )
	{
		ret.With(FloorDecorID.Use(data.FloorDecorID_));
	}
	if ( data.WallDecorID_ )
	{
		ret.With(WallDecorID.Use(data.WallDecorID_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Use(data.DesignerID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.DesignPlanName_ )
	{
		ret.With(DesignPlanName.Use(data.DesignPlanName_));
	}
	if ( data.DesignPlanMemo_ )
	{
		ret.With(DesignPlanMemo.Use(data.DesignPlanMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_DesignPlanInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.CurScale_ )
	{
		ret.With(CurScale.Into(data.CurScale_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.SkyDecorID_ )
	{
		ret.With(SkyDecorID.Into(data.SkyDecorID_));
	}
	if ( data.FloorDecorID_ )
	{
		ret.With(FloorDecorID.Into(data.FloorDecorID_));
	}
	if ( data.WallDecorID_ )
	{
		ret.With(WallDecorID.Into(data.WallDecorID_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Into(data.DesignerID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.DesignPlanName_ )
	{
		ret.With(DesignPlanName.Into(data.DesignPlanName_));
	}
	if ( data.DesignPlanMemo_ )
	{
		ret.With(DesignPlanMemo.Into(data.DesignPlanMemo_));
	}
	return std::move(ret);
}


GC_DesignPlanInfoImp	GC_DesignPlanInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_DesignPlanInfoImp(alias));
}

GC_DesignPlanInfoImp::GC_DesignPlanInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_DesignPlanInfo"), alias)
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,CurScale(ImpSPtr_,AUTODB_STR("CurScale"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,SkyDecorID(ImpSPtr_,AUTODB_STR("SkyDecorID"))
	,FloorDecorID(ImpSPtr_,AUTODB_STR("FloorDecorID"))
	,WallDecorID(ImpSPtr_,AUTODB_STR("WallDecorID"))
	,DesignerID(ImpSPtr_,AUTODB_STR("DesignerID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,DesignPlanName(ImpSPtr_,AUTODB_STR("DesignPlanName"))
	,DesignPlanMemo(ImpSPtr_,AUTODB_STR("DesignPlanMemo"))
{}

GC_DesignPlanInfoImp::GC_DesignPlanInfoImp( const GC_DesignPlanInfoImp& rhs ):Table(rhs)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,CurScale(rhs.CurScale)
	,IsActive(rhs.IsActive)
	,SkyDecorID(rhs.SkyDecorID)
	,FloorDecorID(rhs.FloorDecorID)
	,WallDecorID(rhs.WallDecorID)
	,DesignerID(rhs.DesignerID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,DesignPlanName(rhs.DesignPlanName)
	,DesignPlanMemo(rhs.DesignPlanMemo)
{}

GC_DesignPlanInfoImp::GC_DesignPlanInfoImp( GC_DesignPlanInfoImp&& rhs ):Table(rhs)
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,CurScale(std::move(rhs.CurScale))
	,IsActive(std::move(rhs.IsActive))
	,SkyDecorID(std::move(rhs.SkyDecorID))
	,FloorDecorID(std::move(rhs.FloorDecorID))
	,WallDecorID(std::move(rhs.WallDecorID))
	,DesignerID(std::move(rhs.DesignerID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,DesignPlanName(std::move(rhs.DesignPlanName))
	,DesignPlanMemo(std::move(rhs.DesignPlanMemo))
{}

GC_DesignPlanInfoImp	GC_DesignPlanInfo("");



void	GC_FittingInfoImp::SData::SetAll(bool val)
{
	val ? DesignFittingID_.reset(boost::initialized_value) : DesignFittingID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? FittingID_.reset(boost::initialized_value) : FittingID_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? FittingCount_.reset(boost::initialized_value) : FittingCount_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_FittingInfoImp::SData::Flip()
{
	DesignFittingID_ ? DesignFittingID_=boost::none : DesignFittingID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	FittingID_ ? FittingID_=boost::none : FittingID_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	FittingCount_ ? FittingCount_=boost::none : FittingCount_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_FittingInfoImp::SData::Check()
{
	if ( !DesignFittingID_ )
	{
		DesignFittingID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !FittingID_ )
	{
		FittingID_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !FittingCount_ )
	{
		FittingCount_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_FittingInfoImp::SData::ToUtf8()
{
}

void	GC_FittingInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_FittingInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignFittingID_ )
	{
		ret.With(DesignFittingID.Use(data.DesignFittingID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Use(data.FittingID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.FittingCount_ )
	{
		ret.With(FittingCount.Use(data.FittingCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_FittingInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignFittingID_ )
	{
		ret.With(DesignFittingID.Into(data.DesignFittingID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.FittingID_ )
	{
		ret.With(FittingID.Into(data.FittingID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.FittingCount_ )
	{
		ret.With(FittingCount.Into(data.FittingCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_FittingInfoImp	GC_FittingInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_FittingInfoImp(alias));
}

GC_FittingInfoImp::GC_FittingInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_FittingInfo"), alias)
	,DesignFittingID(ImpSPtr_,AUTODB_STR("DesignFittingID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,FittingID(ImpSPtr_,AUTODB_STR("FittingID"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,FittingCount(ImpSPtr_,AUTODB_STR("FittingCount"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_FittingInfoImp::GC_FittingInfoImp( const GC_FittingInfoImp& rhs ):Table(rhs)
	,DesignFittingID(rhs.DesignFittingID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,FittingID(rhs.FittingID)
	,GTypeID(rhs.GTypeID)
	,SupplyType(rhs.SupplyType)
	,FittingCount(rhs.FittingCount)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_FittingInfoImp::GC_FittingInfoImp( GC_FittingInfoImp&& rhs ):Table(rhs)
	,DesignFittingID(std::move(rhs.DesignFittingID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,FittingID(std::move(rhs.FittingID))
	,GTypeID(std::move(rhs.GTypeID))
	,SupplyType(std::move(rhs.SupplyType))
	,FittingCount(std::move(rhs.FittingCount))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_FittingInfoImp	GC_FittingInfo("");



void	GC_HWFInfoImp::SData::SetAll(bool val)
{
	val ? DesignHWFID_.reset(boost::initialized_value) : DesignHWFID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? HWFittingID_.reset(boost::initialized_value) : HWFittingID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_HWFInfoImp::SData::Flip()
{
	DesignHWFID_ ? DesignHWFID_=boost::none : DesignHWFID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	HWFittingID_ ? HWFittingID_=boost::none : HWFittingID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_HWFInfoImp::SData::Check()
{
	if ( !DesignHWFID_ )
	{
		DesignHWFID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !HWFittingID_ )
	{
		HWFittingID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_HWFInfoImp::SData::ToUtf8()
{
}

void	GC_HWFInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_HWFInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignHWFID_ )
	{
		ret.With(DesignHWFID.Use(data.DesignHWFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Use(data.HWFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_HWFInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignHWFID_ )
	{
		ret.With(DesignHWFID.Into(data.DesignHWFID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.HWFittingID_ )
	{
		ret.With(HWFittingID.Into(data.HWFittingID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_HWFInfoImp	GC_HWFInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_HWFInfoImp(alias));
}

GC_HWFInfoImp::GC_HWFInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_HWFInfo"), alias)
	,DesignHWFID(ImpSPtr_,AUTODB_STR("DesignHWFID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,HWFittingID(ImpSPtr_,AUTODB_STR("HWFittingID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_HWFInfoImp::GC_HWFInfoImp( const GC_HWFInfoImp& rhs ):Table(rhs)
	,DesignHWFID(rhs.DesignHWFID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,HWFittingID(rhs.HWFittingID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,UseCount(rhs.UseCount)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_HWFInfoImp::GC_HWFInfoImp( GC_HWFInfoImp&& rhs ):Table(rhs)
	,DesignHWFID(std::move(rhs.DesignHWFID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,HWFittingID(std::move(rhs.HWFittingID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,UseCount(std::move(rhs.UseCount))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_HWFInfoImp	GC_HWFInfo("");



void	GC_MarkInfoImp::SData::SetAll(bool val)
{
	val ? DesignMarkID_.reset(boost::initialized_value) : DesignMarkID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? PrintID_.reset(boost::initialized_value) : PrintID_=boost::none;
	val ? ViewType_.reset(boost::initialized_value) : ViewType_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? MarkType_.reset(boost::initialized_value) : MarkType_=boost::none;
	val ? FontSize_.reset(boost::initialized_value) : FontSize_=boost::none;
	val ? StartX_.reset(boost::initialized_value) : StartX_=boost::none;
	val ? StartY_.reset(boost::initialized_value) : StartY_=boost::none;
	val ? OffsetX_.reset(boost::initialized_value) : OffsetX_=boost::none;
	val ? OffsetY_.reset(boost::initialized_value) : OffsetY_=boost::none;
	val ? StopX_.reset(boost::initialized_value) : StopX_=boost::none;
	val ? StopY_.reset(boost::initialized_value) : StopY_=boost::none;
	val ? TopLeftX_.reset(boost::initialized_value) : TopLeftX_=boost::none;
	val ? TopLeftY_.reset(boost::initialized_value) : TopLeftY_=boost::none;
	val ? Width_.reset(boost::initialized_value) : Width_=boost::none;
	val ? Height_.reset(boost::initialized_value) : Height_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? EditSign_.reset(boost::initialized_value) : EditSign_=boost::none;
	val ? StrickOut_.reset(boost::initialized_value) : StrickOut_=boost::none;
	val ? UnderLine_.reset(boost::initialized_value) : UnderLine_=boost::none;
	val ? Italic_.reset(boost::initialized_value) : Italic_=boost::none;
	val ? Bold_.reset(boost::initialized_value) : Bold_=boost::none;
	val ? BGColor_.reset(boost::initialized_value) : BGColor_=boost::none;
	val ? FontColor_.reset(boost::initialized_value) : FontColor_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? FaceName_.reset(boost::initialized_value) : FaceName_=boost::none;
	val ? RemarkText_.reset(boost::initialized_value) : RemarkText_=boost::none;
}

void	GC_MarkInfoImp::SData::Flip()
{
	DesignMarkID_ ? DesignMarkID_=boost::none : DesignMarkID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	PrintID_ ? PrintID_=boost::none : PrintID_.reset(boost::initialized_value);
	ViewType_ ? ViewType_=boost::none : ViewType_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	MarkType_ ? MarkType_=boost::none : MarkType_.reset(boost::initialized_value);
	FontSize_ ? FontSize_=boost::none : FontSize_.reset(boost::initialized_value);
	StartX_ ? StartX_=boost::none : StartX_.reset(boost::initialized_value);
	StartY_ ? StartY_=boost::none : StartY_.reset(boost::initialized_value);
	OffsetX_ ? OffsetX_=boost::none : OffsetX_.reset(boost::initialized_value);
	OffsetY_ ? OffsetY_=boost::none : OffsetY_.reset(boost::initialized_value);
	StopX_ ? StopX_=boost::none : StopX_.reset(boost::initialized_value);
	StopY_ ? StopY_=boost::none : StopY_.reset(boost::initialized_value);
	TopLeftX_ ? TopLeftX_=boost::none : TopLeftX_.reset(boost::initialized_value);
	TopLeftY_ ? TopLeftY_=boost::none : TopLeftY_.reset(boost::initialized_value);
	Width_ ? Width_=boost::none : Width_.reset(boost::initialized_value);
	Height_ ? Height_=boost::none : Height_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	EditSign_ ? EditSign_=boost::none : EditSign_.reset(boost::initialized_value);
	StrickOut_ ? StrickOut_=boost::none : StrickOut_.reset(boost::initialized_value);
	UnderLine_ ? UnderLine_=boost::none : UnderLine_.reset(boost::initialized_value);
	Italic_ ? Italic_=boost::none : Italic_.reset(boost::initialized_value);
	Bold_ ? Bold_=boost::none : Bold_.reset(boost::initialized_value);
	BGColor_ ? BGColor_=boost::none : BGColor_.reset(boost::initialized_value);
	FontColor_ ? FontColor_=boost::none : FontColor_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	FaceName_ ? FaceName_=boost::none : FaceName_.reset(boost::initialized_value);
	RemarkText_ ? RemarkText_=boost::none : RemarkText_.reset(boost::initialized_value);
}

void	GC_MarkInfoImp::SData::Check()
{
	if ( !DesignMarkID_ )
	{
		DesignMarkID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !PrintID_ )
	{
		PrintID_.reset(boost::initialized_value);
	}
	if ( !ViewType_ )
	{
		ViewType_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !MarkType_ )
	{
		MarkType_.reset(boost::initialized_value);
	}
	if ( !FontSize_ )
	{
		FontSize_.reset(boost::initialized_value);
	}
	if ( !StartX_ )
	{
		StartX_.reset(boost::initialized_value);
	}
	if ( !StartY_ )
	{
		StartY_.reset(boost::initialized_value);
	}
	if ( !OffsetX_ )
	{
		OffsetX_.reset(boost::initialized_value);
	}
	if ( !OffsetY_ )
	{
		OffsetY_.reset(boost::initialized_value);
	}
	if ( !StopX_ )
	{
		StopX_.reset(boost::initialized_value);
	}
	if ( !StopY_ )
	{
		StopY_.reset(boost::initialized_value);
	}
	if ( !TopLeftX_ )
	{
		TopLeftX_.reset(boost::initialized_value);
	}
	if ( !TopLeftY_ )
	{
		TopLeftY_.reset(boost::initialized_value);
	}
	if ( !Width_ )
	{
		Width_.reset(boost::initialized_value);
	}
	if ( !Height_ )
	{
		Height_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !EditSign_ )
	{
		EditSign_.reset(boost::initialized_value);
	}
	if ( !StrickOut_ )
	{
		StrickOut_.reset(boost::initialized_value);
	}
	if ( !UnderLine_ )
	{
		UnderLine_.reset(boost::initialized_value);
	}
	if ( !Italic_ )
	{
		Italic_.reset(boost::initialized_value);
	}
	if ( !Bold_ )
	{
		Bold_.reset(boost::initialized_value);
	}
	if ( !BGColor_ )
	{
		BGColor_.reset(boost::initialized_value);
	}
	if ( !FontColor_ )
	{
		FontColor_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !FaceName_ )
	{
		FaceName_.reset(boost::initialized_value);
	}
	if ( !RemarkText_ )
	{
		RemarkText_.reset(boost::initialized_value);
	}
}

void	GC_MarkInfoImp::SData::ToUtf8()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::to_utf<char>(*FaceName_, "GBK");
	}
	if ( RemarkText_ )
	{
		RemarkText_ = boost::locale::conv::to_utf<char>(*RemarkText_, "GBK");
	}
}

void	GC_MarkInfoImp::SData::ToAscii()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::from_utf(*FaceName_, "GBK");
	}
	if ( RemarkText_ )
	{
		RemarkText_ = boost::locale::conv::from_utf(*RemarkText_, "GBK");
	}
}

autoDB::SColumns GC_MarkInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignMarkID_ )
	{
		ret.With(DesignMarkID.Use(data.DesignMarkID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Use(data.PrintID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Use(data.ViewType_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.MarkType_ )
	{
		ret.With(MarkType.Use(data.MarkType_));
	}
	if ( data.FontSize_ )
	{
		ret.With(FontSize.Use(data.FontSize_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Use(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Use(data.StartY_));
	}
	if ( data.OffsetX_ )
	{
		ret.With(OffsetX.Use(data.OffsetX_));
	}
	if ( data.OffsetY_ )
	{
		ret.With(OffsetY.Use(data.OffsetY_));
	}
	if ( data.StopX_ )
	{
		ret.With(StopX.Use(data.StopX_));
	}
	if ( data.StopY_ )
	{
		ret.With(StopY.Use(data.StopY_));
	}
	if ( data.TopLeftX_ )
	{
		ret.With(TopLeftX.Use(data.TopLeftX_));
	}
	if ( data.TopLeftY_ )
	{
		ret.With(TopLeftY.Use(data.TopLeftY_));
	}
	if ( data.Width_ )
	{
		ret.With(Width.Use(data.Width_));
	}
	if ( data.Height_ )
	{
		ret.With(Height.Use(data.Height_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.EditSign_ )
	{
		ret.With(EditSign.Use(data.EditSign_));
	}
	if ( data.StrickOut_ )
	{
		ret.With(StrickOut.Use(data.StrickOut_));
	}
	if ( data.UnderLine_ )
	{
		ret.With(UnderLine.Use(data.UnderLine_));
	}
	if ( data.Italic_ )
	{
		ret.With(Italic.Use(data.Italic_));
	}
	if ( data.Bold_ )
	{
		ret.With(Bold.Use(data.Bold_));
	}
	if ( data.BGColor_ )
	{
		ret.With(BGColor.Use(data.BGColor_));
	}
	if ( data.FontColor_ )
	{
		ret.With(FontColor.Use(data.FontColor_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Use(data.FaceName_));
	}
	if ( data.RemarkText_ )
	{
		ret.With(RemarkText.Use(data.RemarkText_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_MarkInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignMarkID_ )
	{
		ret.With(DesignMarkID.Into(data.DesignMarkID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Into(data.PrintID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Into(data.ViewType_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.MarkType_ )
	{
		ret.With(MarkType.Into(data.MarkType_));
	}
	if ( data.FontSize_ )
	{
		ret.With(FontSize.Into(data.FontSize_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Into(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Into(data.StartY_));
	}
	if ( data.OffsetX_ )
	{
		ret.With(OffsetX.Into(data.OffsetX_));
	}
	if ( data.OffsetY_ )
	{
		ret.With(OffsetY.Into(data.OffsetY_));
	}
	if ( data.StopX_ )
	{
		ret.With(StopX.Into(data.StopX_));
	}
	if ( data.StopY_ )
	{
		ret.With(StopY.Into(data.StopY_));
	}
	if ( data.TopLeftX_ )
	{
		ret.With(TopLeftX.Into(data.TopLeftX_));
	}
	if ( data.TopLeftY_ )
	{
		ret.With(TopLeftY.Into(data.TopLeftY_));
	}
	if ( data.Width_ )
	{
		ret.With(Width.Into(data.Width_));
	}
	if ( data.Height_ )
	{
		ret.With(Height.Into(data.Height_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.EditSign_ )
	{
		ret.With(EditSign.Into(data.EditSign_));
	}
	if ( data.StrickOut_ )
	{
		ret.With(StrickOut.Into(data.StrickOut_));
	}
	if ( data.UnderLine_ )
	{
		ret.With(UnderLine.Into(data.UnderLine_));
	}
	if ( data.Italic_ )
	{
		ret.With(Italic.Into(data.Italic_));
	}
	if ( data.Bold_ )
	{
		ret.With(Bold.Into(data.Bold_));
	}
	if ( data.BGColor_ )
	{
		ret.With(BGColor.Into(data.BGColor_));
	}
	if ( data.FontColor_ )
	{
		ret.With(FontColor.Into(data.FontColor_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Into(data.FaceName_));
	}
	if ( data.RemarkText_ )
	{
		ret.With(RemarkText.Into(data.RemarkText_));
	}
	return std::move(ret);
}


GC_MarkInfoImp	GC_MarkInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_MarkInfoImp(alias));
}

GC_MarkInfoImp::GC_MarkInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_MarkInfo"), alias)
	,DesignMarkID(ImpSPtr_,AUTODB_STR("DesignMarkID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,PrintID(ImpSPtr_,AUTODB_STR("PrintID"))
	,ViewType(ImpSPtr_,AUTODB_STR("ViewType"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,MarkType(ImpSPtr_,AUTODB_STR("MarkType"))
	,FontSize(ImpSPtr_,AUTODB_STR("FontSize"))
	,StartX(ImpSPtr_,AUTODB_STR("StartX"))
	,StartY(ImpSPtr_,AUTODB_STR("StartY"))
	,OffsetX(ImpSPtr_,AUTODB_STR("OffsetX"))
	,OffsetY(ImpSPtr_,AUTODB_STR("OffsetY"))
	,StopX(ImpSPtr_,AUTODB_STR("StopX"))
	,StopY(ImpSPtr_,AUTODB_STR("StopY"))
	,TopLeftX(ImpSPtr_,AUTODB_STR("TopLeftX"))
	,TopLeftY(ImpSPtr_,AUTODB_STR("TopLeftY"))
	,Width(ImpSPtr_,AUTODB_STR("Width"))
	,Height(ImpSPtr_,AUTODB_STR("Height"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,EditSign(ImpSPtr_,AUTODB_STR("EditSign"))
	,StrickOut(ImpSPtr_,AUTODB_STR("StrickOut"))
	,UnderLine(ImpSPtr_,AUTODB_STR("UnderLine"))
	,Italic(ImpSPtr_,AUTODB_STR("Italic"))
	,Bold(ImpSPtr_,AUTODB_STR("Bold"))
	,BGColor(ImpSPtr_,AUTODB_STR("BGColor"))
	,FontColor(ImpSPtr_,AUTODB_STR("FontColor"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,FaceName(ImpSPtr_,AUTODB_STR("FaceName"))
	,RemarkText(ImpSPtr_,AUTODB_STR("RemarkText"))
{}

GC_MarkInfoImp::GC_MarkInfoImp( const GC_MarkInfoImp& rhs ):Table(rhs)
	,DesignMarkID(rhs.DesignMarkID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,DesignPrintID(rhs.DesignPrintID)
	,PrintID(rhs.PrintID)
	,ViewType(rhs.ViewType)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,MarkType(rhs.MarkType)
	,FontSize(rhs.FontSize)
	,StartX(rhs.StartX)
	,StartY(rhs.StartY)
	,OffsetX(rhs.OffsetX)
	,OffsetY(rhs.OffsetY)
	,StopX(rhs.StopX)
	,StopY(rhs.StopY)
	,TopLeftX(rhs.TopLeftX)
	,TopLeftY(rhs.TopLeftY)
	,Width(rhs.Width)
	,Height(rhs.Height)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,EditSign(rhs.EditSign)
	,StrickOut(rhs.StrickOut)
	,UnderLine(rhs.UnderLine)
	,Italic(rhs.Italic)
	,Bold(rhs.Bold)
	,BGColor(rhs.BGColor)
	,FontColor(rhs.FontColor)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,FaceName(rhs.FaceName)
	,RemarkText(rhs.RemarkText)
{}

GC_MarkInfoImp::GC_MarkInfoImp( GC_MarkInfoImp&& rhs ):Table(rhs)
	,DesignMarkID(std::move(rhs.DesignMarkID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,PrintID(std::move(rhs.PrintID))
	,ViewType(std::move(rhs.ViewType))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,MarkType(std::move(rhs.MarkType))
	,FontSize(std::move(rhs.FontSize))
	,StartX(std::move(rhs.StartX))
	,StartY(std::move(rhs.StartY))
	,OffsetX(std::move(rhs.OffsetX))
	,OffsetY(std::move(rhs.OffsetY))
	,StopX(std::move(rhs.StopX))
	,StopY(std::move(rhs.StopY))
	,TopLeftX(std::move(rhs.TopLeftX))
	,TopLeftY(std::move(rhs.TopLeftY))
	,Width(std::move(rhs.Width))
	,Height(std::move(rhs.Height))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,EditSign(std::move(rhs.EditSign))
	,StrickOut(std::move(rhs.StrickOut))
	,UnderLine(std::move(rhs.UnderLine))
	,Italic(std::move(rhs.Italic))
	,Bold(std::move(rhs.Bold))
	,BGColor(std::move(rhs.BGColor))
	,FontColor(std::move(rhs.FontColor))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,FaceName(std::move(rhs.FaceName))
	,RemarkText(std::move(rhs.RemarkText))
{}

GC_MarkInfoImp	GC_MarkInfo("");



void	GC_MatrixInfoImp::SData::SetAll(bool val)
{
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? TransObjID_.reset(boost::initialized_value) : TransObjID_=boost::none;
	val ? TransObjType_.reset(boost::initialized_value) : TransObjType_=boost::none;
	val ? MajorCurSel_.reset(boost::initialized_value) : MajorCurSel_=boost::none;
	val ? MinorCurSel_.reset(boost::initialized_value) : MinorCurSel_=boost::none;
	val ? MatCurIndex_.reset(boost::initialized_value) : MatCurIndex_=boost::none;
	val ? CabMatPlanID_.reset(boost::initialized_value) : CabMatPlanID_=boost::none;
	val ? M11_.reset(boost::initialized_value) : M11_=boost::none;
	val ? M12_.reset(boost::initialized_value) : M12_=boost::none;
	val ? M13_.reset(boost::initialized_value) : M13_=boost::none;
	val ? M21_.reset(boost::initialized_value) : M21_=boost::none;
	val ? M22_.reset(boost::initialized_value) : M22_=boost::none;
	val ? M23_.reset(boost::initialized_value) : M23_=boost::none;
	val ? M31_.reset(boost::initialized_value) : M31_=boost::none;
	val ? M32_.reset(boost::initialized_value) : M32_=boost::none;
	val ? M33_.reset(boost::initialized_value) : M33_=boost::none;
	val ? M41_.reset(boost::initialized_value) : M41_=boost::none;
	val ? M42_.reset(boost::initialized_value) : M42_=boost::none;
	val ? M43_.reset(boost::initialized_value) : M43_=boost::none;
	val ? M44_.reset(boost::initialized_value) : M44_=boost::none;
}

void	GC_MatrixInfoImp::SData::Flip()
{
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	TransObjID_ ? TransObjID_=boost::none : TransObjID_.reset(boost::initialized_value);
	TransObjType_ ? TransObjType_=boost::none : TransObjType_.reset(boost::initialized_value);
	MajorCurSel_ ? MajorCurSel_=boost::none : MajorCurSel_.reset(boost::initialized_value);
	MinorCurSel_ ? MinorCurSel_=boost::none : MinorCurSel_.reset(boost::initialized_value);
	MatCurIndex_ ? MatCurIndex_=boost::none : MatCurIndex_.reset(boost::initialized_value);
	CabMatPlanID_ ? CabMatPlanID_=boost::none : CabMatPlanID_.reset(boost::initialized_value);
	M11_ ? M11_=boost::none : M11_.reset(boost::initialized_value);
	M12_ ? M12_=boost::none : M12_.reset(boost::initialized_value);
	M13_ ? M13_=boost::none : M13_.reset(boost::initialized_value);
	M21_ ? M21_=boost::none : M21_.reset(boost::initialized_value);
	M22_ ? M22_=boost::none : M22_.reset(boost::initialized_value);
	M23_ ? M23_=boost::none : M23_.reset(boost::initialized_value);
	M31_ ? M31_=boost::none : M31_.reset(boost::initialized_value);
	M32_ ? M32_=boost::none : M32_.reset(boost::initialized_value);
	M33_ ? M33_=boost::none : M33_.reset(boost::initialized_value);
	M41_ ? M41_=boost::none : M41_.reset(boost::initialized_value);
	M42_ ? M42_=boost::none : M42_.reset(boost::initialized_value);
	M43_ ? M43_=boost::none : M43_.reset(boost::initialized_value);
	M44_ ? M44_=boost::none : M44_.reset(boost::initialized_value);
}

void	GC_MatrixInfoImp::SData::Check()
{
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !TransObjID_ )
	{
		TransObjID_.reset(boost::initialized_value);
	}
	if ( !TransObjType_ )
	{
		TransObjType_.reset(boost::initialized_value);
	}
	if ( !MajorCurSel_ )
	{
		MajorCurSel_.reset(boost::initialized_value);
	}
	if ( !MinorCurSel_ )
	{
		MinorCurSel_.reset(boost::initialized_value);
	}
	if ( !MatCurIndex_ )
	{
		MatCurIndex_.reset(boost::initialized_value);
	}
	if ( !CabMatPlanID_ )
	{
		CabMatPlanID_.reset(boost::initialized_value);
	}
	if ( !M11_ )
	{
		M11_.reset(boost::initialized_value);
	}
	if ( !M12_ )
	{
		M12_.reset(boost::initialized_value);
	}
	if ( !M13_ )
	{
		M13_.reset(boost::initialized_value);
	}
	if ( !M21_ )
	{
		M21_.reset(boost::initialized_value);
	}
	if ( !M22_ )
	{
		M22_.reset(boost::initialized_value);
	}
	if ( !M23_ )
	{
		M23_.reset(boost::initialized_value);
	}
	if ( !M31_ )
	{
		M31_.reset(boost::initialized_value);
	}
	if ( !M32_ )
	{
		M32_.reset(boost::initialized_value);
	}
	if ( !M33_ )
	{
		M33_.reset(boost::initialized_value);
	}
	if ( !M41_ )
	{
		M41_.reset(boost::initialized_value);
	}
	if ( !M42_ )
	{
		M42_.reset(boost::initialized_value);
	}
	if ( !M43_ )
	{
		M43_.reset(boost::initialized_value);
	}
	if ( !M44_ )
	{
		M44_.reset(boost::initialized_value);
	}
}

void	GC_MatrixInfoImp::SData::ToUtf8()
{
}

void	GC_MatrixInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_MatrixInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.TransObjID_ )
	{
		ret.With(TransObjID.Use(data.TransObjID_));
	}
	if ( data.TransObjType_ )
	{
		ret.With(TransObjType.Use(data.TransObjType_));
	}
	if ( data.MajorCurSel_ )
	{
		ret.With(MajorCurSel.Use(data.MajorCurSel_));
	}
	if ( data.MinorCurSel_ )
	{
		ret.With(MinorCurSel.Use(data.MinorCurSel_));
	}
	if ( data.MatCurIndex_ )
	{
		ret.With(MatCurIndex.Use(data.MatCurIndex_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Use(data.CabMatPlanID_));
	}
	if ( data.M11_ )
	{
		ret.With(M11.Use(data.M11_));
	}
	if ( data.M12_ )
	{
		ret.With(M12.Use(data.M12_));
	}
	if ( data.M13_ )
	{
		ret.With(M13.Use(data.M13_));
	}
	if ( data.M21_ )
	{
		ret.With(M21.Use(data.M21_));
	}
	if ( data.M22_ )
	{
		ret.With(M22.Use(data.M22_));
	}
	if ( data.M23_ )
	{
		ret.With(M23.Use(data.M23_));
	}
	if ( data.M31_ )
	{
		ret.With(M31.Use(data.M31_));
	}
	if ( data.M32_ )
	{
		ret.With(M32.Use(data.M32_));
	}
	if ( data.M33_ )
	{
		ret.With(M33.Use(data.M33_));
	}
	if ( data.M41_ )
	{
		ret.With(M41.Use(data.M41_));
	}
	if ( data.M42_ )
	{
		ret.With(M42.Use(data.M42_));
	}
	if ( data.M43_ )
	{
		ret.With(M43.Use(data.M43_));
	}
	if ( data.M44_ )
	{
		ret.With(M44.Use(data.M44_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_MatrixInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.TransObjID_ )
	{
		ret.With(TransObjID.Into(data.TransObjID_));
	}
	if ( data.TransObjType_ )
	{
		ret.With(TransObjType.Into(data.TransObjType_));
	}
	if ( data.MajorCurSel_ )
	{
		ret.With(MajorCurSel.Into(data.MajorCurSel_));
	}
	if ( data.MinorCurSel_ )
	{
		ret.With(MinorCurSel.Into(data.MinorCurSel_));
	}
	if ( data.MatCurIndex_ )
	{
		ret.With(MatCurIndex.Into(data.MatCurIndex_));
	}
	if ( data.CabMatPlanID_ )
	{
		ret.With(CabMatPlanID.Into(data.CabMatPlanID_));
	}
	if ( data.M11_ )
	{
		ret.With(M11.Into(data.M11_));
	}
	if ( data.M12_ )
	{
		ret.With(M12.Into(data.M12_));
	}
	if ( data.M13_ )
	{
		ret.With(M13.Into(data.M13_));
	}
	if ( data.M21_ )
	{
		ret.With(M21.Into(data.M21_));
	}
	if ( data.M22_ )
	{
		ret.With(M22.Into(data.M22_));
	}
	if ( data.M23_ )
	{
		ret.With(M23.Into(data.M23_));
	}
	if ( data.M31_ )
	{
		ret.With(M31.Into(data.M31_));
	}
	if ( data.M32_ )
	{
		ret.With(M32.Into(data.M32_));
	}
	if ( data.M33_ )
	{
		ret.With(M33.Into(data.M33_));
	}
	if ( data.M41_ )
	{
		ret.With(M41.Into(data.M41_));
	}
	if ( data.M42_ )
	{
		ret.With(M42.Into(data.M42_));
	}
	if ( data.M43_ )
	{
		ret.With(M43.Into(data.M43_));
	}
	if ( data.M44_ )
	{
		ret.With(M44.Into(data.M44_));
	}
	return std::move(ret);
}


GC_MatrixInfoImp	GC_MatrixInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_MatrixInfoImp(alias));
}

GC_MatrixInfoImp::GC_MatrixInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_MatrixInfo"), alias)
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,TransObjID(ImpSPtr_,AUTODB_STR("TransObjID"))
	,TransObjType(ImpSPtr_,AUTODB_STR("TransObjType"))
	,MajorCurSel(ImpSPtr_,AUTODB_STR("MajorCurSel"))
	,MinorCurSel(ImpSPtr_,AUTODB_STR("MinorCurSel"))
	,MatCurIndex(ImpSPtr_,AUTODB_STR("MatCurIndex"))
	,CabMatPlanID(ImpSPtr_,AUTODB_STR("CabMatPlanID"))
	,M11(ImpSPtr_,AUTODB_STR("M11"))
	,M12(ImpSPtr_,AUTODB_STR("M12"))
	,M13(ImpSPtr_,AUTODB_STR("M13"))
	,M21(ImpSPtr_,AUTODB_STR("M21"))
	,M22(ImpSPtr_,AUTODB_STR("M22"))
	,M23(ImpSPtr_,AUTODB_STR("M23"))
	,M31(ImpSPtr_,AUTODB_STR("M31"))
	,M32(ImpSPtr_,AUTODB_STR("M32"))
	,M33(ImpSPtr_,AUTODB_STR("M33"))
	,M41(ImpSPtr_,AUTODB_STR("M41"))
	,M42(ImpSPtr_,AUTODB_STR("M42"))
	,M43(ImpSPtr_,AUTODB_STR("M43"))
	,M44(ImpSPtr_,AUTODB_STR("M44"))
{}

GC_MatrixInfoImp::GC_MatrixInfoImp( const GC_MatrixInfoImp& rhs ):Table(rhs)
	,OrderID(rhs.OrderID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,TransObjID(rhs.TransObjID)
	,TransObjType(rhs.TransObjType)
	,MajorCurSel(rhs.MajorCurSel)
	,MinorCurSel(rhs.MinorCurSel)
	,MatCurIndex(rhs.MatCurIndex)
	,CabMatPlanID(rhs.CabMatPlanID)
	,M11(rhs.M11)
	,M12(rhs.M12)
	,M13(rhs.M13)
	,M21(rhs.M21)
	,M22(rhs.M22)
	,M23(rhs.M23)
	,M31(rhs.M31)
	,M32(rhs.M32)
	,M33(rhs.M33)
	,M41(rhs.M41)
	,M42(rhs.M42)
	,M43(rhs.M43)
	,M44(rhs.M44)
{}

GC_MatrixInfoImp::GC_MatrixInfoImp( GC_MatrixInfoImp&& rhs ):Table(rhs)
	,OrderID(std::move(rhs.OrderID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,TransObjID(std::move(rhs.TransObjID))
	,TransObjType(std::move(rhs.TransObjType))
	,MajorCurSel(std::move(rhs.MajorCurSel))
	,MinorCurSel(std::move(rhs.MinorCurSel))
	,MatCurIndex(std::move(rhs.MatCurIndex))
	,CabMatPlanID(std::move(rhs.CabMatPlanID))
	,M11(std::move(rhs.M11))
	,M12(std::move(rhs.M12))
	,M13(std::move(rhs.M13))
	,M21(std::move(rhs.M21))
	,M22(std::move(rhs.M22))
	,M23(std::move(rhs.M23))
	,M31(std::move(rhs.M31))
	,M32(std::move(rhs.M32))
	,M33(std::move(rhs.M33))
	,M41(std::move(rhs.M41))
	,M42(std::move(rhs.M42))
	,M43(std::move(rhs.M43))
	,M44(std::move(rhs.M44))
{}

GC_MatrixInfoImp	GC_MatrixInfo("");



void	GC_OrderAddedInfoImp::SData::SetAll(bool val)
{
	val ? OrderAddedID_.reset(boost::initialized_value) : OrderAddedID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? UnitPrice_.reset(boost::initialized_value) : UnitPrice_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? AddedName_.reset(boost::initialized_value) : AddedName_=boost::none;
	val ? MatName_.reset(boost::initialized_value) : MatName_=boost::none;
	val ? UnitName_.reset(boost::initialized_value) : UnitName_=boost::none;
	val ? SpecName_.reset(boost::initialized_value) : SpecName_=boost::none;
	val ? AttachFileName_.reset(boost::initialized_value) : AttachFileName_=boost::none;
}

void	GC_OrderAddedInfoImp::SData::Flip()
{
	OrderAddedID_ ? OrderAddedID_=boost::none : OrderAddedID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	UnitPrice_ ? UnitPrice_=boost::none : UnitPrice_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	AddedName_ ? AddedName_=boost::none : AddedName_.reset(boost::initialized_value);
	MatName_ ? MatName_=boost::none : MatName_.reset(boost::initialized_value);
	UnitName_ ? UnitName_=boost::none : UnitName_.reset(boost::initialized_value);
	SpecName_ ? SpecName_=boost::none : SpecName_.reset(boost::initialized_value);
	AttachFileName_ ? AttachFileName_=boost::none : AttachFileName_.reset(boost::initialized_value);
}

void	GC_OrderAddedInfoImp::SData::Check()
{
	if ( !OrderAddedID_ )
	{
		OrderAddedID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !UnitPrice_ )
	{
		UnitPrice_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !AddedName_ )
	{
		AddedName_.reset(boost::initialized_value);
	}
	if ( !MatName_ )
	{
		MatName_.reset(boost::initialized_value);
	}
	if ( !UnitName_ )
	{
		UnitName_.reset(boost::initialized_value);
	}
	if ( !SpecName_ )
	{
		SpecName_.reset(boost::initialized_value);
	}
	if ( !AttachFileName_ )
	{
		AttachFileName_.reset(boost::initialized_value);
	}
}

void	GC_OrderAddedInfoImp::SData::ToUtf8()
{
	if ( AddedName_ )
	{
		AddedName_ = boost::locale::conv::to_utf<char>(*AddedName_, "GBK");
	}
	if ( MatName_ )
	{
		MatName_ = boost::locale::conv::to_utf<char>(*MatName_, "GBK");
	}
	if ( UnitName_ )
	{
		UnitName_ = boost::locale::conv::to_utf<char>(*UnitName_, "GBK");
	}
	if ( SpecName_ )
	{
		SpecName_ = boost::locale::conv::to_utf<char>(*SpecName_, "GBK");
	}
	if ( AttachFileName_ )
	{
		AttachFileName_ = boost::locale::conv::to_utf<char>(*AttachFileName_, "GBK");
	}
}

void	GC_OrderAddedInfoImp::SData::ToAscii()
{
	if ( AddedName_ )
	{
		AddedName_ = boost::locale::conv::from_utf(*AddedName_, "GBK");
	}
	if ( MatName_ )
	{
		MatName_ = boost::locale::conv::from_utf(*MatName_, "GBK");
	}
	if ( UnitName_ )
	{
		UnitName_ = boost::locale::conv::from_utf(*UnitName_, "GBK");
	}
	if ( SpecName_ )
	{
		SpecName_ = boost::locale::conv::from_utf(*SpecName_, "GBK");
	}
	if ( AttachFileName_ )
	{
		AttachFileName_ = boost::locale::conv::from_utf(*AttachFileName_, "GBK");
	}
}

autoDB::SColumns GC_OrderAddedInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.OrderAddedID_ )
	{
		ret.With(OrderAddedID.Use(data.OrderAddedID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.UnitPrice_ )
	{
		ret.With(UnitPrice.Use(data.UnitPrice_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.AddedName_ )
	{
		ret.With(AddedName.Use(data.AddedName_));
	}
	if ( data.MatName_ )
	{
		ret.With(MatName.Use(data.MatName_));
	}
	if ( data.UnitName_ )
	{
		ret.With(UnitName.Use(data.UnitName_));
	}
	if ( data.SpecName_ )
	{
		ret.With(SpecName.Use(data.SpecName_));
	}
	if ( data.AttachFileName_ )
	{
		ret.With(AttachFileName.Use(data.AttachFileName_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_OrderAddedInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.OrderAddedID_ )
	{
		ret.With(OrderAddedID.Into(data.OrderAddedID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.UnitPrice_ )
	{
		ret.With(UnitPrice.Into(data.UnitPrice_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.AddedName_ )
	{
		ret.With(AddedName.Into(data.AddedName_));
	}
	if ( data.MatName_ )
	{
		ret.With(MatName.Into(data.MatName_));
	}
	if ( data.UnitName_ )
	{
		ret.With(UnitName.Into(data.UnitName_));
	}
	if ( data.SpecName_ )
	{
		ret.With(SpecName.Into(data.SpecName_));
	}
	if ( data.AttachFileName_ )
	{
		ret.With(AttachFileName.Into(data.AttachFileName_));
	}
	return std::move(ret);
}


GC_OrderAddedInfoImp	GC_OrderAddedInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_OrderAddedInfoImp(alias));
}

GC_OrderAddedInfoImp::GC_OrderAddedInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_OrderAddedInfo"), alias)
	,OrderAddedID(ImpSPtr_,AUTODB_STR("OrderAddedID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,UnitPrice(ImpSPtr_,AUTODB_STR("UnitPrice"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,AddedName(ImpSPtr_,AUTODB_STR("AddedName"))
	,MatName(ImpSPtr_,AUTODB_STR("MatName"))
	,UnitName(ImpSPtr_,AUTODB_STR("UnitName"))
	,SpecName(ImpSPtr_,AUTODB_STR("SpecName"))
	,AttachFileName(ImpSPtr_,AUTODB_STR("AttachFileName"))
{}

GC_OrderAddedInfoImp::GC_OrderAddedInfoImp( const GC_OrderAddedInfoImp& rhs ):Table(rhs)
	,OrderAddedID(rhs.OrderAddedID)
	,OrderID(rhs.OrderID)
	,OrderCate(rhs.OrderCate)
	,FactoryID(rhs.FactoryID)
	,UseCount(rhs.UseCount)
	,UnitPrice(rhs.UnitPrice)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,AddedName(rhs.AddedName)
	,MatName(rhs.MatName)
	,UnitName(rhs.UnitName)
	,SpecName(rhs.SpecName)
	,AttachFileName(rhs.AttachFileName)
{}

GC_OrderAddedInfoImp::GC_OrderAddedInfoImp( GC_OrderAddedInfoImp&& rhs ):Table(rhs)
	,OrderAddedID(std::move(rhs.OrderAddedID))
	,OrderID(std::move(rhs.OrderID))
	,OrderCate(std::move(rhs.OrderCate))
	,FactoryID(std::move(rhs.FactoryID))
	,UseCount(std::move(rhs.UseCount))
	,UnitPrice(std::move(rhs.UnitPrice))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,AddedName(std::move(rhs.AddedName))
	,MatName(std::move(rhs.MatName))
	,UnitName(std::move(rhs.UnitName))
	,SpecName(std::move(rhs.SpecName))
	,AttachFileName(std::move(rhs.AttachFileName))
{}

GC_OrderAddedInfoImp	GC_OrderAddedInfo("");



void	GC_OrderDataInfoImp::SData::SetAll(bool val)
{
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? MaxMetaID_.reset(boost::initialized_value) : MaxMetaID_=boost::none;
	val ? DesignerID_.reset(boost::initialized_value) : DesignerID_=boost::none;
	val ? SellerID_.reset(boost::initialized_value) : SellerID_=boost::none;
	val ? PreSurveyorID_.reset(boost::initialized_value) : PreSurveyorID_=boost::none;
	val ? ReSurveyorID_.reset(boost::initialized_value) : ReSurveyorID_=boost::none;
	val ? IsNew_.reset(boost::initialized_value) : IsNew_=boost::none;
	val ? IsShare_.reset(boost::initialized_value) : IsShare_=boost::none;
	val ? IsUpload_.reset(boost::initialized_value) : IsUpload_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? PreSurveyTime_ = DBTime(rawDate) : PreSurveyTime_=boost::none;
	val ? ReSurveyTime_ = DBTime(rawDate) : ReSurveyTime_=boost::none;
	val ? OrderTime_ = DBTime(rawDate) : OrderTime_=boost::none;
	val ? DeliveryTime_ = DBTime(rawDate) : DeliveryTime_=boost::none;
	val ? InstallTime_ = DBTime(rawDate) : InstallTime_=boost::none;
	val ? GeoCode_.reset(boost::initialized_value) : GeoCode_=boost::none;
	val ? OrderTitle_.reset(boost::initialized_value) : OrderTitle_=boost::none;
	val ? CustomerName_.reset(boost::initialized_value) : CustomerName_=boost::none;
	val ? CustomerTel_.reset(boost::initialized_value) : CustomerTel_=boost::none;
	val ? CustomerPostcode_.reset(boost::initialized_value) : CustomerPostcode_=boost::none;
	val ? CustomerQQ_.reset(boost::initialized_value) : CustomerQQ_=boost::none;
	val ? CustomerEmail_.reset(boost::initialized_value) : CustomerEmail_=boost::none;
	val ? InstallAddress_.reset(boost::initialized_value) : InstallAddress_=boost::none;
	val ? OrderMemo_.reset(boost::initialized_value) : OrderMemo_=boost::none;
	val ? AttachFilePath_.reset(boost::initialized_value) : AttachFilePath_=boost::none;
}

void	GC_OrderDataInfoImp::SData::Flip()
{
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	MaxMetaID_ ? MaxMetaID_=boost::none : MaxMetaID_.reset(boost::initialized_value);
	DesignerID_ ? DesignerID_=boost::none : DesignerID_.reset(boost::initialized_value);
	SellerID_ ? SellerID_=boost::none : SellerID_.reset(boost::initialized_value);
	PreSurveyorID_ ? PreSurveyorID_=boost::none : PreSurveyorID_.reset(boost::initialized_value);
	ReSurveyorID_ ? ReSurveyorID_=boost::none : ReSurveyorID_.reset(boost::initialized_value);
	IsNew_ ? IsNew_=boost::none : IsNew_.reset(boost::initialized_value);
	IsShare_ ? IsShare_=boost::none : IsShare_.reset(boost::initialized_value);
	IsUpload_ ? IsUpload_=boost::none : IsUpload_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	PreSurveyTime_ ? PreSurveyTime_=boost::none : PreSurveyTime_ = DBTime(rawDate);
	ReSurveyTime_ ? ReSurveyTime_=boost::none : ReSurveyTime_ = DBTime(rawDate);
	OrderTime_ ? OrderTime_=boost::none : OrderTime_ = DBTime(rawDate);
	DeliveryTime_ ? DeliveryTime_=boost::none : DeliveryTime_ = DBTime(rawDate);
	InstallTime_ ? InstallTime_=boost::none : InstallTime_ = DBTime(rawDate);
	GeoCode_ ? GeoCode_=boost::none : GeoCode_.reset(boost::initialized_value);
	OrderTitle_ ? OrderTitle_=boost::none : OrderTitle_.reset(boost::initialized_value);
	CustomerName_ ? CustomerName_=boost::none : CustomerName_.reset(boost::initialized_value);
	CustomerTel_ ? CustomerTel_=boost::none : CustomerTel_.reset(boost::initialized_value);
	CustomerPostcode_ ? CustomerPostcode_=boost::none : CustomerPostcode_.reset(boost::initialized_value);
	CustomerQQ_ ? CustomerQQ_=boost::none : CustomerQQ_.reset(boost::initialized_value);
	CustomerEmail_ ? CustomerEmail_=boost::none : CustomerEmail_.reset(boost::initialized_value);
	InstallAddress_ ? InstallAddress_=boost::none : InstallAddress_.reset(boost::initialized_value);
	OrderMemo_ ? OrderMemo_=boost::none : OrderMemo_.reset(boost::initialized_value);
	AttachFilePath_ ? AttachFilePath_=boost::none : AttachFilePath_.reset(boost::initialized_value);
}

void	GC_OrderDataInfoImp::SData::Check()
{
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !ShopID_ )
	{
		ShopID_.reset(boost::initialized_value);
	}
	if ( !MaxMetaID_ )
	{
		MaxMetaID_.reset(boost::initialized_value);
	}
	if ( !DesignerID_ )
	{
		DesignerID_.reset(boost::initialized_value);
	}
	if ( !SellerID_ )
	{
		SellerID_.reset(boost::initialized_value);
	}
	if ( !PreSurveyorID_ )
	{
		PreSurveyorID_.reset(boost::initialized_value);
	}
	if ( !ReSurveyorID_ )
	{
		ReSurveyorID_.reset(boost::initialized_value);
	}
	if ( !IsNew_ )
	{
		IsNew_.reset(boost::initialized_value);
	}
	if ( !IsShare_ )
	{
		IsShare_.reset(boost::initialized_value);
	}
	if ( !IsUpload_ )
	{
		IsUpload_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !PreSurveyTime_ )
	{
		PreSurveyTime_ = DBTime(rawDate);
	}
	if ( !ReSurveyTime_ )
	{
		ReSurveyTime_ = DBTime(rawDate);
	}
	if ( !OrderTime_ )
	{
		OrderTime_ = DBTime(rawDate);
	}
	if ( !DeliveryTime_ )
	{
		DeliveryTime_ = DBTime(rawDate);
	}
	if ( !InstallTime_ )
	{
		InstallTime_ = DBTime(rawDate);
	}
	if ( !GeoCode_ )
	{
		GeoCode_.reset(boost::initialized_value);
	}
	if ( !OrderTitle_ )
	{
		OrderTitle_.reset(boost::initialized_value);
	}
	if ( !CustomerName_ )
	{
		CustomerName_.reset(boost::initialized_value);
	}
	if ( !CustomerTel_ )
	{
		CustomerTel_.reset(boost::initialized_value);
	}
	if ( !CustomerPostcode_ )
	{
		CustomerPostcode_.reset(boost::initialized_value);
	}
	if ( !CustomerQQ_ )
	{
		CustomerQQ_.reset(boost::initialized_value);
	}
	if ( !CustomerEmail_ )
	{
		CustomerEmail_.reset(boost::initialized_value);
	}
	if ( !InstallAddress_ )
	{
		InstallAddress_.reset(boost::initialized_value);
	}
	if ( !OrderMemo_ )
	{
		OrderMemo_.reset(boost::initialized_value);
	}
	if ( !AttachFilePath_ )
	{
		AttachFilePath_.reset(boost::initialized_value);
	}
}

void	GC_OrderDataInfoImp::SData::ToUtf8()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::to_utf<char>(*GeoCode_, "GBK");
	}
	if ( OrderTitle_ )
	{
		OrderTitle_ = boost::locale::conv::to_utf<char>(*OrderTitle_, "GBK");
	}
	if ( CustomerName_ )
	{
		CustomerName_ = boost::locale::conv::to_utf<char>(*CustomerName_, "GBK");
	}
	if ( CustomerTel_ )
	{
		CustomerTel_ = boost::locale::conv::to_utf<char>(*CustomerTel_, "GBK");
	}
	if ( CustomerPostcode_ )
	{
		CustomerPostcode_ = boost::locale::conv::to_utf<char>(*CustomerPostcode_, "GBK");
	}
	if ( CustomerQQ_ )
	{
		CustomerQQ_ = boost::locale::conv::to_utf<char>(*CustomerQQ_, "GBK");
	}
	if ( CustomerEmail_ )
	{
		CustomerEmail_ = boost::locale::conv::to_utf<char>(*CustomerEmail_, "GBK");
	}
	if ( InstallAddress_ )
	{
		InstallAddress_ = boost::locale::conv::to_utf<char>(*InstallAddress_, "GBK");
	}
	if ( OrderMemo_ )
	{
		OrderMemo_ = boost::locale::conv::to_utf<char>(*OrderMemo_, "GBK");
	}
	if ( AttachFilePath_ )
	{
		AttachFilePath_ = boost::locale::conv::to_utf<char>(*AttachFilePath_, "GBK");
	}
}

void	GC_OrderDataInfoImp::SData::ToAscii()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::from_utf(*GeoCode_, "GBK");
	}
	if ( OrderTitle_ )
	{
		OrderTitle_ = boost::locale::conv::from_utf(*OrderTitle_, "GBK");
	}
	if ( CustomerName_ )
	{
		CustomerName_ = boost::locale::conv::from_utf(*CustomerName_, "GBK");
	}
	if ( CustomerTel_ )
	{
		CustomerTel_ = boost::locale::conv::from_utf(*CustomerTel_, "GBK");
	}
	if ( CustomerPostcode_ )
	{
		CustomerPostcode_ = boost::locale::conv::from_utf(*CustomerPostcode_, "GBK");
	}
	if ( CustomerQQ_ )
	{
		CustomerQQ_ = boost::locale::conv::from_utf(*CustomerQQ_, "GBK");
	}
	if ( CustomerEmail_ )
	{
		CustomerEmail_ = boost::locale::conv::from_utf(*CustomerEmail_, "GBK");
	}
	if ( InstallAddress_ )
	{
		InstallAddress_ = boost::locale::conv::from_utf(*InstallAddress_, "GBK");
	}
	if ( OrderMemo_ )
	{
		OrderMemo_ = boost::locale::conv::from_utf(*OrderMemo_, "GBK");
	}
	if ( AttachFilePath_ )
	{
		AttachFilePath_ = boost::locale::conv::from_utf(*AttachFilePath_, "GBK");
	}
}

autoDB::SColumns GC_OrderDataInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Use(data.ShopID_));
	}
	if ( data.MaxMetaID_ )
	{
		ret.With(MaxMetaID.Use(data.MaxMetaID_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Use(data.DesignerID_));
	}
	if ( data.SellerID_ )
	{
		ret.With(SellerID.Use(data.SellerID_));
	}
	if ( data.PreSurveyorID_ )
	{
		ret.With(PreSurveyorID.Use(data.PreSurveyorID_));
	}
	if ( data.ReSurveyorID_ )
	{
		ret.With(ReSurveyorID.Use(data.ReSurveyorID_));
	}
	if ( data.IsNew_ )
	{
		ret.With(IsNew.Use(data.IsNew_));
	}
	if ( data.IsShare_ )
	{
		ret.With(IsShare.Use(data.IsShare_));
	}
	if ( data.IsUpload_ )
	{
		ret.With(IsUpload.Use(data.IsUpload_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.PreSurveyTime_ )
	{
		ret.With(PreSurveyTime.Use(data.PreSurveyTime_));
	}
	if ( data.ReSurveyTime_ )
	{
		ret.With(ReSurveyTime.Use(data.ReSurveyTime_));
	}
	if ( data.OrderTime_ )
	{
		ret.With(OrderTime.Use(data.OrderTime_));
	}
	if ( data.DeliveryTime_ )
	{
		ret.With(DeliveryTime.Use(data.DeliveryTime_));
	}
	if ( data.InstallTime_ )
	{
		ret.With(InstallTime.Use(data.InstallTime_));
	}
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Use(data.GeoCode_));
	}
	if ( data.OrderTitle_ )
	{
		ret.With(OrderTitle.Use(data.OrderTitle_));
	}
	if ( data.CustomerName_ )
	{
		ret.With(CustomerName.Use(data.CustomerName_));
	}
	if ( data.CustomerTel_ )
	{
		ret.With(CustomerTel.Use(data.CustomerTel_));
	}
	if ( data.CustomerPostcode_ )
	{
		ret.With(CustomerPostcode.Use(data.CustomerPostcode_));
	}
	if ( data.CustomerQQ_ )
	{
		ret.With(CustomerQQ.Use(data.CustomerQQ_));
	}
	if ( data.CustomerEmail_ )
	{
		ret.With(CustomerEmail.Use(data.CustomerEmail_));
	}
	if ( data.InstallAddress_ )
	{
		ret.With(InstallAddress.Use(data.InstallAddress_));
	}
	if ( data.OrderMemo_ )
	{
		ret.With(OrderMemo.Use(data.OrderMemo_));
	}
	if ( data.AttachFilePath_ )
	{
		ret.With(AttachFilePath.Use(data.AttachFilePath_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_OrderDataInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Into(data.ShopID_));
	}
	if ( data.MaxMetaID_ )
	{
		ret.With(MaxMetaID.Into(data.MaxMetaID_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Into(data.DesignerID_));
	}
	if ( data.SellerID_ )
	{
		ret.With(SellerID.Into(data.SellerID_));
	}
	if ( data.PreSurveyorID_ )
	{
		ret.With(PreSurveyorID.Into(data.PreSurveyorID_));
	}
	if ( data.ReSurveyorID_ )
	{
		ret.With(ReSurveyorID.Into(data.ReSurveyorID_));
	}
	if ( data.IsNew_ )
	{
		ret.With(IsNew.Into(data.IsNew_));
	}
	if ( data.IsShare_ )
	{
		ret.With(IsShare.Into(data.IsShare_));
	}
	if ( data.IsUpload_ )
	{
		ret.With(IsUpload.Into(data.IsUpload_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.PreSurveyTime_ )
	{
		ret.With(PreSurveyTime.Into(data.PreSurveyTime_));
	}
	if ( data.ReSurveyTime_ )
	{
		ret.With(ReSurveyTime.Into(data.ReSurveyTime_));
	}
	if ( data.OrderTime_ )
	{
		ret.With(OrderTime.Into(data.OrderTime_));
	}
	if ( data.DeliveryTime_ )
	{
		ret.With(DeliveryTime.Into(data.DeliveryTime_));
	}
	if ( data.InstallTime_ )
	{
		ret.With(InstallTime.Into(data.InstallTime_));
	}
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Into(data.GeoCode_));
	}
	if ( data.OrderTitle_ )
	{
		ret.With(OrderTitle.Into(data.OrderTitle_));
	}
	if ( data.CustomerName_ )
	{
		ret.With(CustomerName.Into(data.CustomerName_));
	}
	if ( data.CustomerTel_ )
	{
		ret.With(CustomerTel.Into(data.CustomerTel_));
	}
	if ( data.CustomerPostcode_ )
	{
		ret.With(CustomerPostcode.Into(data.CustomerPostcode_));
	}
	if ( data.CustomerQQ_ )
	{
		ret.With(CustomerQQ.Into(data.CustomerQQ_));
	}
	if ( data.CustomerEmail_ )
	{
		ret.With(CustomerEmail.Into(data.CustomerEmail_));
	}
	if ( data.InstallAddress_ )
	{
		ret.With(InstallAddress.Into(data.InstallAddress_));
	}
	if ( data.OrderMemo_ )
	{
		ret.With(OrderMemo.Into(data.OrderMemo_));
	}
	if ( data.AttachFilePath_ )
	{
		ret.With(AttachFilePath.Into(data.AttachFilePath_));
	}
	return std::move(ret);
}


GC_OrderDataInfoImp	GC_OrderDataInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_OrderDataInfoImp(alias));
}

GC_OrderDataInfoImp::GC_OrderDataInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_OrderDataInfo"), alias)
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,MaxMetaID(ImpSPtr_,AUTODB_STR("MaxMetaID"))
	,DesignerID(ImpSPtr_,AUTODB_STR("DesignerID"))
	,SellerID(ImpSPtr_,AUTODB_STR("SellerID"))
	,PreSurveyorID(ImpSPtr_,AUTODB_STR("PreSurveyorID"))
	,ReSurveyorID(ImpSPtr_,AUTODB_STR("ReSurveyorID"))
	,IsNew(ImpSPtr_,AUTODB_STR("IsNew"))
	,IsShare(ImpSPtr_,AUTODB_STR("IsShare"))
	,IsUpload(ImpSPtr_,AUTODB_STR("IsUpload"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,PreSurveyTime(ImpSPtr_,AUTODB_STR("PreSurveyTime"))
	,ReSurveyTime(ImpSPtr_,AUTODB_STR("ReSurveyTime"))
	,OrderTime(ImpSPtr_,AUTODB_STR("OrderTime"))
	,DeliveryTime(ImpSPtr_,AUTODB_STR("DeliveryTime"))
	,InstallTime(ImpSPtr_,AUTODB_STR("InstallTime"))
	,GeoCode(ImpSPtr_,AUTODB_STR("GeoCode"))
	,OrderTitle(ImpSPtr_,AUTODB_STR("OrderTitle"))
	,CustomerName(ImpSPtr_,AUTODB_STR("CustomerName"))
	,CustomerTel(ImpSPtr_,AUTODB_STR("CustomerTel"))
	,CustomerPostcode(ImpSPtr_,AUTODB_STR("CustomerPostcode"))
	,CustomerQQ(ImpSPtr_,AUTODB_STR("CustomerQQ"))
	,CustomerEmail(ImpSPtr_,AUTODB_STR("CustomerEmail"))
	,InstallAddress(ImpSPtr_,AUTODB_STR("InstallAddress"))
	,OrderMemo(ImpSPtr_,AUTODB_STR("OrderMemo"))
	,AttachFilePath(ImpSPtr_,AUTODB_STR("AttachFilePath"))
{}

GC_OrderDataInfoImp::GC_OrderDataInfoImp( const GC_OrderDataInfoImp& rhs ):Table(rhs)
	,OrderID(rhs.OrderID)
	,OrderCate(rhs.OrderCate)
	,FactoryID(rhs.FactoryID)
	,ShopID(rhs.ShopID)
	,MaxMetaID(rhs.MaxMetaID)
	,DesignerID(rhs.DesignerID)
	,SellerID(rhs.SellerID)
	,PreSurveyorID(rhs.PreSurveyorID)
	,ReSurveyorID(rhs.ReSurveyorID)
	,IsNew(rhs.IsNew)
	,IsShare(rhs.IsShare)
	,IsUpload(rhs.IsUpload)
	,CreateTime(rhs.CreateTime)
	,PreSurveyTime(rhs.PreSurveyTime)
	,ReSurveyTime(rhs.ReSurveyTime)
	,OrderTime(rhs.OrderTime)
	,DeliveryTime(rhs.DeliveryTime)
	,InstallTime(rhs.InstallTime)
	,GeoCode(rhs.GeoCode)
	,OrderTitle(rhs.OrderTitle)
	,CustomerName(rhs.CustomerName)
	,CustomerTel(rhs.CustomerTel)
	,CustomerPostcode(rhs.CustomerPostcode)
	,CustomerQQ(rhs.CustomerQQ)
	,CustomerEmail(rhs.CustomerEmail)
	,InstallAddress(rhs.InstallAddress)
	,OrderMemo(rhs.OrderMemo)
	,AttachFilePath(rhs.AttachFilePath)
{}

GC_OrderDataInfoImp::GC_OrderDataInfoImp( GC_OrderDataInfoImp&& rhs ):Table(rhs)
	,OrderID(std::move(rhs.OrderID))
	,OrderCate(std::move(rhs.OrderCate))
	,FactoryID(std::move(rhs.FactoryID))
	,ShopID(std::move(rhs.ShopID))
	,MaxMetaID(std::move(rhs.MaxMetaID))
	,DesignerID(std::move(rhs.DesignerID))
	,SellerID(std::move(rhs.SellerID))
	,PreSurveyorID(std::move(rhs.PreSurveyorID))
	,ReSurveyorID(std::move(rhs.ReSurveyorID))
	,IsNew(std::move(rhs.IsNew))
	,IsShare(std::move(rhs.IsShare))
	,IsUpload(std::move(rhs.IsUpload))
	,CreateTime(std::move(rhs.CreateTime))
	,PreSurveyTime(std::move(rhs.PreSurveyTime))
	,ReSurveyTime(std::move(rhs.ReSurveyTime))
	,OrderTime(std::move(rhs.OrderTime))
	,DeliveryTime(std::move(rhs.DeliveryTime))
	,InstallTime(std::move(rhs.InstallTime))
	,GeoCode(std::move(rhs.GeoCode))
	,OrderTitle(std::move(rhs.OrderTitle))
	,CustomerName(std::move(rhs.CustomerName))
	,CustomerTel(std::move(rhs.CustomerTel))
	,CustomerPostcode(std::move(rhs.CustomerPostcode))
	,CustomerQQ(std::move(rhs.CustomerQQ))
	,CustomerEmail(std::move(rhs.CustomerEmail))
	,InstallAddress(std::move(rhs.InstallAddress))
	,OrderMemo(std::move(rhs.OrderMemo))
	,AttachFilePath(std::move(rhs.AttachFilePath))
{}

GC_OrderDataInfoImp	GC_OrderDataInfo("");



void	GC_PackInfoImp::SData::SetAll(bool val)
{
	val ? DesignPackID_.reset(boost::initialized_value) : DesignPackID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FittingPackID_.reset(boost::initialized_value) : FittingPackID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsSeparate_.reset(boost::initialized_value) : IsSeparate_=boost::none;
	val ? UseCount_.reset(boost::initialized_value) : UseCount_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_PackInfoImp::SData::Flip()
{
	DesignPackID_ ? DesignPackID_=boost::none : DesignPackID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FittingPackID_ ? FittingPackID_=boost::none : FittingPackID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsSeparate_ ? IsSeparate_=boost::none : IsSeparate_.reset(boost::initialized_value);
	UseCount_ ? UseCount_=boost::none : UseCount_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_PackInfoImp::SData::Check()
{
	if ( !DesignPackID_ )
	{
		DesignPackID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !FittingPackID_ )
	{
		FittingPackID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsSeparate_ )
	{
		IsSeparate_.reset(boost::initialized_value);
	}
	if ( !UseCount_ )
	{
		UseCount_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_PackInfoImp::SData::ToUtf8()
{
}

void	GC_PackInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_PackInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPackID_ )
	{
		ret.With(DesignPackID.Use(data.DesignPackID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.FittingPackID_ )
	{
		ret.With(FittingPackID.Use(data.FittingPackID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsSeparate_ )
	{
		ret.With(IsSeparate.Use(data.IsSeparate_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Use(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PackInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPackID_ )
	{
		ret.With(DesignPackID.Into(data.DesignPackID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.FittingPackID_ )
	{
		ret.With(FittingPackID.Into(data.FittingPackID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsSeparate_ )
	{
		ret.With(IsSeparate.Into(data.IsSeparate_));
	}
	if ( data.UseCount_ )
	{
		ret.With(UseCount.Into(data.UseCount_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_PackInfoImp	GC_PackInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PackInfoImp(alias));
}

GC_PackInfoImp::GC_PackInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PackInfo"), alias)
	,DesignPackID(ImpSPtr_,AUTODB_STR("DesignPackID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FittingPackID(ImpSPtr_,AUTODB_STR("FittingPackID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsSeparate(ImpSPtr_,AUTODB_STR("IsSeparate"))
	,UseCount(ImpSPtr_,AUTODB_STR("UseCount"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_PackInfoImp::GC_PackInfoImp( const GC_PackInfoImp& rhs ):Table(rhs)
	,DesignPackID(rhs.DesignPackID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,FittingPackID(rhs.FittingPackID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsSeparate(rhs.IsSeparate)
	,UseCount(rhs.UseCount)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_PackInfoImp::GC_PackInfoImp( GC_PackInfoImp&& rhs ):Table(rhs)
	,DesignPackID(std::move(rhs.DesignPackID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,FittingPackID(std::move(rhs.FittingPackID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsSeparate(std::move(rhs.IsSeparate))
	,UseCount(std::move(rhs.UseCount))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_PackInfoImp	GC_PackInfo("");



void	GC_PointInfoImp::SData::SetAll(bool val)
{
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? TransObjID_.reset(boost::initialized_value) : TransObjID_=boost::none;
	val ? TransObjType_.reset(boost::initialized_value) : TransObjType_=boost::none;
	val ? PointIndex_.reset(boost::initialized_value) : PointIndex_=boost::none;
	val ? CoordX_.reset(boost::initialized_value) : CoordX_=boost::none;
	val ? CoordY_.reset(boost::initialized_value) : CoordY_=boost::none;
	val ? CoordZ_.reset(boost::initialized_value) : CoordZ_=boost::none;
}

void	GC_PointInfoImp::SData::Flip()
{
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	TransObjID_ ? TransObjID_=boost::none : TransObjID_.reset(boost::initialized_value);
	TransObjType_ ? TransObjType_=boost::none : TransObjType_.reset(boost::initialized_value);
	PointIndex_ ? PointIndex_=boost::none : PointIndex_.reset(boost::initialized_value);
	CoordX_ ? CoordX_=boost::none : CoordX_.reset(boost::initialized_value);
	CoordY_ ? CoordY_=boost::none : CoordY_.reset(boost::initialized_value);
	CoordZ_ ? CoordZ_=boost::none : CoordZ_.reset(boost::initialized_value);
}

void	GC_PointInfoImp::SData::Check()
{
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !TransObjID_ )
	{
		TransObjID_.reset(boost::initialized_value);
	}
	if ( !TransObjType_ )
	{
		TransObjType_.reset(boost::initialized_value);
	}
	if ( !PointIndex_ )
	{
		PointIndex_.reset(boost::initialized_value);
	}
	if ( !CoordX_ )
	{
		CoordX_.reset(boost::initialized_value);
	}
	if ( !CoordY_ )
	{
		CoordY_.reset(boost::initialized_value);
	}
	if ( !CoordZ_ )
	{
		CoordZ_.reset(boost::initialized_value);
	}
}

void	GC_PointInfoImp::SData::ToUtf8()
{
}

void	GC_PointInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_PointInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.TransObjID_ )
	{
		ret.With(TransObjID.Use(data.TransObjID_));
	}
	if ( data.TransObjType_ )
	{
		ret.With(TransObjType.Use(data.TransObjType_));
	}
	if ( data.PointIndex_ )
	{
		ret.With(PointIndex.Use(data.PointIndex_));
	}
	if ( data.CoordX_ )
	{
		ret.With(CoordX.Use(data.CoordX_));
	}
	if ( data.CoordY_ )
	{
		ret.With(CoordY.Use(data.CoordY_));
	}
	if ( data.CoordZ_ )
	{
		ret.With(CoordZ.Use(data.CoordZ_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PointInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.TransObjID_ )
	{
		ret.With(TransObjID.Into(data.TransObjID_));
	}
	if ( data.TransObjType_ )
	{
		ret.With(TransObjType.Into(data.TransObjType_));
	}
	if ( data.PointIndex_ )
	{
		ret.With(PointIndex.Into(data.PointIndex_));
	}
	if ( data.CoordX_ )
	{
		ret.With(CoordX.Into(data.CoordX_));
	}
	if ( data.CoordY_ )
	{
		ret.With(CoordY.Into(data.CoordY_));
	}
	if ( data.CoordZ_ )
	{
		ret.With(CoordZ.Into(data.CoordZ_));
	}
	return std::move(ret);
}


GC_PointInfoImp	GC_PointInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PointInfoImp(alias));
}

GC_PointInfoImp::GC_PointInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PointInfo"), alias)
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,TransObjID(ImpSPtr_,AUTODB_STR("TransObjID"))
	,TransObjType(ImpSPtr_,AUTODB_STR("TransObjType"))
	,PointIndex(ImpSPtr_,AUTODB_STR("PointIndex"))
	,CoordX(ImpSPtr_,AUTODB_STR("CoordX"))
	,CoordY(ImpSPtr_,AUTODB_STR("CoordY"))
	,CoordZ(ImpSPtr_,AUTODB_STR("CoordZ"))
{}

GC_PointInfoImp::GC_PointInfoImp( const GC_PointInfoImp& rhs ):Table(rhs)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,TransObjID(rhs.TransObjID)
	,TransObjType(rhs.TransObjType)
	,PointIndex(rhs.PointIndex)
	,CoordX(rhs.CoordX)
	,CoordY(rhs.CoordY)
	,CoordZ(rhs.CoordZ)
{}

GC_PointInfoImp::GC_PointInfoImp( GC_PointInfoImp&& rhs ):Table(rhs)
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,TransObjID(std::move(rhs.TransObjID))
	,TransObjType(std::move(rhs.TransObjType))
	,PointIndex(std::move(rhs.PointIndex))
	,CoordX(std::move(rhs.CoordX))
	,CoordY(std::move(rhs.CoordY))
	,CoordZ(std::move(rhs.CoordZ))
{}

GC_PointInfoImp	GC_PointInfo("");



void	GC_PrintElementInfoImp::SData::SetAll(bool val)
{
	val ? DesignPrintElementID_.reset(boost::initialized_value) : DesignPrintElementID_=boost::none;
	val ? DesignPrintGroupID_.reset(boost::initialized_value) : DesignPrintGroupID_=boost::none;
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? ObjType_.reset(boost::initialized_value) : ObjType_=boost::none;
	val ? ObjID_.reset(boost::initialized_value) : ObjID_=boost::none;
	val ? PrintGroupID_.reset(boost::initialized_value) : PrintGroupID_=boost::none;
	val ? ViewType_.reset(boost::initialized_value) : ViewType_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_PrintElementInfoImp::SData::Flip()
{
	DesignPrintElementID_ ? DesignPrintElementID_=boost::none : DesignPrintElementID_.reset(boost::initialized_value);
	DesignPrintGroupID_ ? DesignPrintGroupID_=boost::none : DesignPrintGroupID_.reset(boost::initialized_value);
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	ObjType_ ? ObjType_=boost::none : ObjType_.reset(boost::initialized_value);
	ObjID_ ? ObjID_=boost::none : ObjID_.reset(boost::initialized_value);
	PrintGroupID_ ? PrintGroupID_=boost::none : PrintGroupID_.reset(boost::initialized_value);
	ViewType_ ? ViewType_=boost::none : ViewType_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_PrintElementInfoImp::SData::Check()
{
	if ( !DesignPrintElementID_ )
	{
		DesignPrintElementID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintGroupID_ )
	{
		DesignPrintGroupID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !ObjType_ )
	{
		ObjType_.reset(boost::initialized_value);
	}
	if ( !ObjID_ )
	{
		ObjID_.reset(boost::initialized_value);
	}
	if ( !PrintGroupID_ )
	{
		PrintGroupID_.reset(boost::initialized_value);
	}
	if ( !ViewType_ )
	{
		ViewType_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_PrintElementInfoImp::SData::ToUtf8()
{
}

void	GC_PrintElementInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_PrintElementInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPrintElementID_ )
	{
		ret.With(DesignPrintElementID.Use(data.DesignPrintElementID_));
	}
	if ( data.DesignPrintGroupID_ )
	{
		ret.With(DesignPrintGroupID.Use(data.DesignPrintGroupID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.ObjType_ )
	{
		ret.With(ObjType.Use(data.ObjType_));
	}
	if ( data.ObjID_ )
	{
		ret.With(ObjID.Use(data.ObjID_));
	}
	if ( data.PrintGroupID_ )
	{
		ret.With(PrintGroupID.Use(data.PrintGroupID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Use(data.ViewType_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PrintElementInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPrintElementID_ )
	{
		ret.With(DesignPrintElementID.Into(data.DesignPrintElementID_));
	}
	if ( data.DesignPrintGroupID_ )
	{
		ret.With(DesignPrintGroupID.Into(data.DesignPrintGroupID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.ObjType_ )
	{
		ret.With(ObjType.Into(data.ObjType_));
	}
	if ( data.ObjID_ )
	{
		ret.With(ObjID.Into(data.ObjID_));
	}
	if ( data.PrintGroupID_ )
	{
		ret.With(PrintGroupID.Into(data.PrintGroupID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Into(data.ViewType_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_PrintElementInfoImp	GC_PrintElementInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PrintElementInfoImp(alias));
}

GC_PrintElementInfoImp::GC_PrintElementInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PrintElementInfo"), alias)
	,DesignPrintElementID(ImpSPtr_,AUTODB_STR("DesignPrintElementID"))
	,DesignPrintGroupID(ImpSPtr_,AUTODB_STR("DesignPrintGroupID"))
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,ObjType(ImpSPtr_,AUTODB_STR("ObjType"))
	,ObjID(ImpSPtr_,AUTODB_STR("ObjID"))
	,PrintGroupID(ImpSPtr_,AUTODB_STR("PrintGroupID"))
	,ViewType(ImpSPtr_,AUTODB_STR("ViewType"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_PrintElementInfoImp::GC_PrintElementInfoImp( const GC_PrintElementInfoImp& rhs ):Table(rhs)
	,DesignPrintElementID(rhs.DesignPrintElementID)
	,DesignPrintGroupID(rhs.DesignPrintGroupID)
	,DesignPrintID(rhs.DesignPrintID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,ObjType(rhs.ObjType)
	,ObjID(rhs.ObjID)
	,PrintGroupID(rhs.PrintGroupID)
	,ViewType(rhs.ViewType)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_PrintElementInfoImp::GC_PrintElementInfoImp( GC_PrintElementInfoImp&& rhs ):Table(rhs)
	,DesignPrintElementID(std::move(rhs.DesignPrintElementID))
	,DesignPrintGroupID(std::move(rhs.DesignPrintGroupID))
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,ObjType(std::move(rhs.ObjType))
	,ObjID(std::move(rhs.ObjID))
	,PrintGroupID(std::move(rhs.PrintGroupID))
	,ViewType(std::move(rhs.ViewType))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_PrintElementInfoImp	GC_PrintElementInfo("");



void	GC_PrintGroupInfoImp::SData::SetAll(bool val)
{
	val ? DesignPrintGroupID_.reset(boost::initialized_value) : DesignPrintGroupID_=boost::none;
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? PrintID_.reset(boost::initialized_value) : PrintID_=boost::none;
	val ? PrintGroupID_.reset(boost::initialized_value) : PrintGroupID_=boost::none;
	val ? ManyViewPort_.reset(boost::initialized_value) : ManyViewPort_=boost::none;
	val ? FrameStyle_.reset(boost::initialized_value) : FrameStyle_=boost::none;
	val ? FrameColorR_.reset(boost::initialized_value) : FrameColorR_=boost::none;
	val ? FrameColorG_.reset(boost::initialized_value) : FrameColorG_=boost::none;
	val ? FrameColorB_.reset(boost::initialized_value) : FrameColorB_=boost::none;
	val ? FrameColorA_.reset(boost::initialized_value) : FrameColorA_=boost::none;
	val ? FrameWidth_.reset(boost::initialized_value) : FrameWidth_=boost::none;
	val ? LeftX_.reset(boost::initialized_value) : LeftX_=boost::none;
	val ? RightY_.reset(boost::initialized_value) : RightY_=boost::none;
	val ? ScaleX_.reset(boost::initialized_value) : ScaleX_=boost::none;
	val ? ScaleY_.reset(boost::initialized_value) : ScaleY_=boost::none;
	val ? ScaleOffsetX_.reset(boost::initialized_value) : ScaleOffsetX_=boost::none;
	val ? ScaleOffsetY_.reset(boost::initialized_value) : ScaleOffsetY_=boost::none;
	val ? ScaleFactor_.reset(boost::initialized_value) : ScaleFactor_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_PrintGroupInfoImp::SData::Flip()
{
	DesignPrintGroupID_ ? DesignPrintGroupID_=boost::none : DesignPrintGroupID_.reset(boost::initialized_value);
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	PrintID_ ? PrintID_=boost::none : PrintID_.reset(boost::initialized_value);
	PrintGroupID_ ? PrintGroupID_=boost::none : PrintGroupID_.reset(boost::initialized_value);
	ManyViewPort_ ? ManyViewPort_=boost::none : ManyViewPort_.reset(boost::initialized_value);
	FrameStyle_ ? FrameStyle_=boost::none : FrameStyle_.reset(boost::initialized_value);
	FrameColorR_ ? FrameColorR_=boost::none : FrameColorR_.reset(boost::initialized_value);
	FrameColorG_ ? FrameColorG_=boost::none : FrameColorG_.reset(boost::initialized_value);
	FrameColorB_ ? FrameColorB_=boost::none : FrameColorB_.reset(boost::initialized_value);
	FrameColorA_ ? FrameColorA_=boost::none : FrameColorA_.reset(boost::initialized_value);
	FrameWidth_ ? FrameWidth_=boost::none : FrameWidth_.reset(boost::initialized_value);
	LeftX_ ? LeftX_=boost::none : LeftX_.reset(boost::initialized_value);
	RightY_ ? RightY_=boost::none : RightY_.reset(boost::initialized_value);
	ScaleX_ ? ScaleX_=boost::none : ScaleX_.reset(boost::initialized_value);
	ScaleY_ ? ScaleY_=boost::none : ScaleY_.reset(boost::initialized_value);
	ScaleOffsetX_ ? ScaleOffsetX_=boost::none : ScaleOffsetX_.reset(boost::initialized_value);
	ScaleOffsetY_ ? ScaleOffsetY_=boost::none : ScaleOffsetY_.reset(boost::initialized_value);
	ScaleFactor_ ? ScaleFactor_=boost::none : ScaleFactor_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_PrintGroupInfoImp::SData::Check()
{
	if ( !DesignPrintGroupID_ )
	{
		DesignPrintGroupID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !PrintID_ )
	{
		PrintID_.reset(boost::initialized_value);
	}
	if ( !PrintGroupID_ )
	{
		PrintGroupID_.reset(boost::initialized_value);
	}
	if ( !ManyViewPort_ )
	{
		ManyViewPort_.reset(boost::initialized_value);
	}
	if ( !FrameStyle_ )
	{
		FrameStyle_.reset(boost::initialized_value);
	}
	if ( !FrameColorR_ )
	{
		FrameColorR_.reset(boost::initialized_value);
	}
	if ( !FrameColorG_ )
	{
		FrameColorG_.reset(boost::initialized_value);
	}
	if ( !FrameColorB_ )
	{
		FrameColorB_.reset(boost::initialized_value);
	}
	if ( !FrameColorA_ )
	{
		FrameColorA_.reset(boost::initialized_value);
	}
	if ( !FrameWidth_ )
	{
		FrameWidth_.reset(boost::initialized_value);
	}
	if ( !LeftX_ )
	{
		LeftX_.reset(boost::initialized_value);
	}
	if ( !RightY_ )
	{
		RightY_.reset(boost::initialized_value);
	}
	if ( !ScaleX_ )
	{
		ScaleX_.reset(boost::initialized_value);
	}
	if ( !ScaleY_ )
	{
		ScaleY_.reset(boost::initialized_value);
	}
	if ( !ScaleOffsetX_ )
	{
		ScaleOffsetX_.reset(boost::initialized_value);
	}
	if ( !ScaleOffsetY_ )
	{
		ScaleOffsetY_.reset(boost::initialized_value);
	}
	if ( !ScaleFactor_ )
	{
		ScaleFactor_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_PrintGroupInfoImp::SData::ToUtf8()
{
}

void	GC_PrintGroupInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_PrintGroupInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPrintGroupID_ )
	{
		ret.With(DesignPrintGroupID.Use(data.DesignPrintGroupID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Use(data.PrintID_));
	}
	if ( data.PrintGroupID_ )
	{
		ret.With(PrintGroupID.Use(data.PrintGroupID_));
	}
	if ( data.ManyViewPort_ )
	{
		ret.With(ManyViewPort.Use(data.ManyViewPort_));
	}
	if ( data.FrameStyle_ )
	{
		ret.With(FrameStyle.Use(data.FrameStyle_));
	}
	if ( data.FrameColorR_ )
	{
		ret.With(FrameColorR.Use(data.FrameColorR_));
	}
	if ( data.FrameColorG_ )
	{
		ret.With(FrameColorG.Use(data.FrameColorG_));
	}
	if ( data.FrameColorB_ )
	{
		ret.With(FrameColorB.Use(data.FrameColorB_));
	}
	if ( data.FrameColorA_ )
	{
		ret.With(FrameColorA.Use(data.FrameColorA_));
	}
	if ( data.FrameWidth_ )
	{
		ret.With(FrameWidth.Use(data.FrameWidth_));
	}
	if ( data.LeftX_ )
	{
		ret.With(LeftX.Use(data.LeftX_));
	}
	if ( data.RightY_ )
	{
		ret.With(RightY.Use(data.RightY_));
	}
	if ( data.ScaleX_ )
	{
		ret.With(ScaleX.Use(data.ScaleX_));
	}
	if ( data.ScaleY_ )
	{
		ret.With(ScaleY.Use(data.ScaleY_));
	}
	if ( data.ScaleOffsetX_ )
	{
		ret.With(ScaleOffsetX.Use(data.ScaleOffsetX_));
	}
	if ( data.ScaleOffsetY_ )
	{
		ret.With(ScaleOffsetY.Use(data.ScaleOffsetY_));
	}
	if ( data.ScaleFactor_ )
	{
		ret.With(ScaleFactor.Use(data.ScaleFactor_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PrintGroupInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPrintGroupID_ )
	{
		ret.With(DesignPrintGroupID.Into(data.DesignPrintGroupID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Into(data.PrintID_));
	}
	if ( data.PrintGroupID_ )
	{
		ret.With(PrintGroupID.Into(data.PrintGroupID_));
	}
	if ( data.ManyViewPort_ )
	{
		ret.With(ManyViewPort.Into(data.ManyViewPort_));
	}
	if ( data.FrameStyle_ )
	{
		ret.With(FrameStyle.Into(data.FrameStyle_));
	}
	if ( data.FrameColorR_ )
	{
		ret.With(FrameColorR.Into(data.FrameColorR_));
	}
	if ( data.FrameColorG_ )
	{
		ret.With(FrameColorG.Into(data.FrameColorG_));
	}
	if ( data.FrameColorB_ )
	{
		ret.With(FrameColorB.Into(data.FrameColorB_));
	}
	if ( data.FrameColorA_ )
	{
		ret.With(FrameColorA.Into(data.FrameColorA_));
	}
	if ( data.FrameWidth_ )
	{
		ret.With(FrameWidth.Into(data.FrameWidth_));
	}
	if ( data.LeftX_ )
	{
		ret.With(LeftX.Into(data.LeftX_));
	}
	if ( data.RightY_ )
	{
		ret.With(RightY.Into(data.RightY_));
	}
	if ( data.ScaleX_ )
	{
		ret.With(ScaleX.Into(data.ScaleX_));
	}
	if ( data.ScaleY_ )
	{
		ret.With(ScaleY.Into(data.ScaleY_));
	}
	if ( data.ScaleOffsetX_ )
	{
		ret.With(ScaleOffsetX.Into(data.ScaleOffsetX_));
	}
	if ( data.ScaleOffsetY_ )
	{
		ret.With(ScaleOffsetY.Into(data.ScaleOffsetY_));
	}
	if ( data.ScaleFactor_ )
	{
		ret.With(ScaleFactor.Into(data.ScaleFactor_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_PrintGroupInfoImp	GC_PrintGroupInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PrintGroupInfoImp(alias));
}

GC_PrintGroupInfoImp::GC_PrintGroupInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PrintGroupInfo"), alias)
	,DesignPrintGroupID(ImpSPtr_,AUTODB_STR("DesignPrintGroupID"))
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,PrintID(ImpSPtr_,AUTODB_STR("PrintID"))
	,PrintGroupID(ImpSPtr_,AUTODB_STR("PrintGroupID"))
	,ManyViewPort(ImpSPtr_,AUTODB_STR("ManyViewPort"))
	,FrameStyle(ImpSPtr_,AUTODB_STR("FrameStyle"))
	,FrameColorR(ImpSPtr_,AUTODB_STR("FrameColorR"))
	,FrameColorG(ImpSPtr_,AUTODB_STR("FrameColorG"))
	,FrameColorB(ImpSPtr_,AUTODB_STR("FrameColorB"))
	,FrameColorA(ImpSPtr_,AUTODB_STR("FrameColorA"))
	,FrameWidth(ImpSPtr_,AUTODB_STR("FrameWidth"))
	,LeftX(ImpSPtr_,AUTODB_STR("LeftX"))
	,RightY(ImpSPtr_,AUTODB_STR("RightY"))
	,ScaleX(ImpSPtr_,AUTODB_STR("ScaleX"))
	,ScaleY(ImpSPtr_,AUTODB_STR("ScaleY"))
	,ScaleOffsetX(ImpSPtr_,AUTODB_STR("ScaleOffsetX"))
	,ScaleOffsetY(ImpSPtr_,AUTODB_STR("ScaleOffsetY"))
	,ScaleFactor(ImpSPtr_,AUTODB_STR("ScaleFactor"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_PrintGroupInfoImp::GC_PrintGroupInfoImp( const GC_PrintGroupInfoImp& rhs ):Table(rhs)
	,DesignPrintGroupID(rhs.DesignPrintGroupID)
	,DesignPrintID(rhs.DesignPrintID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,PrintID(rhs.PrintID)
	,PrintGroupID(rhs.PrintGroupID)
	,ManyViewPort(rhs.ManyViewPort)
	,FrameStyle(rhs.FrameStyle)
	,FrameColorR(rhs.FrameColorR)
	,FrameColorG(rhs.FrameColorG)
	,FrameColorB(rhs.FrameColorB)
	,FrameColorA(rhs.FrameColorA)
	,FrameWidth(rhs.FrameWidth)
	,LeftX(rhs.LeftX)
	,RightY(rhs.RightY)
	,ScaleX(rhs.ScaleX)
	,ScaleY(rhs.ScaleY)
	,ScaleOffsetX(rhs.ScaleOffsetX)
	,ScaleOffsetY(rhs.ScaleOffsetY)
	,ScaleFactor(rhs.ScaleFactor)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_PrintGroupInfoImp::GC_PrintGroupInfoImp( GC_PrintGroupInfoImp&& rhs ):Table(rhs)
	,DesignPrintGroupID(std::move(rhs.DesignPrintGroupID))
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,PrintID(std::move(rhs.PrintID))
	,PrintGroupID(std::move(rhs.PrintGroupID))
	,ManyViewPort(std::move(rhs.ManyViewPort))
	,FrameStyle(std::move(rhs.FrameStyle))
	,FrameColorR(std::move(rhs.FrameColorR))
	,FrameColorG(std::move(rhs.FrameColorG))
	,FrameColorB(std::move(rhs.FrameColorB))
	,FrameColorA(std::move(rhs.FrameColorA))
	,FrameWidth(std::move(rhs.FrameWidth))
	,LeftX(std::move(rhs.LeftX))
	,RightY(std::move(rhs.RightY))
	,ScaleX(std::move(rhs.ScaleX))
	,ScaleY(std::move(rhs.ScaleY))
	,ScaleOffsetX(std::move(rhs.ScaleOffsetX))
	,ScaleOffsetY(std::move(rhs.ScaleOffsetY))
	,ScaleFactor(std::move(rhs.ScaleFactor))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_PrintGroupInfoImp	GC_PrintGroupInfo("");



void	GC_PrintInfoImp::SData::SetAll(bool val)
{
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? PrintID_.reset(boost::initialized_value) : PrintID_=boost::none;
	val ? PageBorderStyle_.reset(boost::initialized_value) : PageBorderStyle_=boost::none;
	val ? PageBorderColor_.reset(boost::initialized_value) : PageBorderColor_=boost::none;
	val ? PageBorderWidth_.reset(boost::initialized_value) : PageBorderWidth_=boost::none;
	val ? ShaderPicTopX_.reset(boost::initialized_value) : ShaderPicTopX_=boost::none;
	val ? ShaderPicTopY_.reset(boost::initialized_value) : ShaderPicTopY_=boost::none;
	val ? ShaderPicHeight_.reset(boost::initialized_value) : ShaderPicHeight_=boost::none;
	val ? ShaderPicWidth_.reset(boost::initialized_value) : ShaderPicWidth_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? PrintName_.reset(boost::initialized_value) : PrintName_=boost::none;
	val ? ShaderPicPath_.reset(boost::initialized_value) : ShaderPicPath_=boost::none;
}

void	GC_PrintInfoImp::SData::Flip()
{
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	PrintID_ ? PrintID_=boost::none : PrintID_.reset(boost::initialized_value);
	PageBorderStyle_ ? PageBorderStyle_=boost::none : PageBorderStyle_.reset(boost::initialized_value);
	PageBorderColor_ ? PageBorderColor_=boost::none : PageBorderColor_.reset(boost::initialized_value);
	PageBorderWidth_ ? PageBorderWidth_=boost::none : PageBorderWidth_.reset(boost::initialized_value);
	ShaderPicTopX_ ? ShaderPicTopX_=boost::none : ShaderPicTopX_.reset(boost::initialized_value);
	ShaderPicTopY_ ? ShaderPicTopY_=boost::none : ShaderPicTopY_.reset(boost::initialized_value);
	ShaderPicHeight_ ? ShaderPicHeight_=boost::none : ShaderPicHeight_.reset(boost::initialized_value);
	ShaderPicWidth_ ? ShaderPicWidth_=boost::none : ShaderPicWidth_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	PrintName_ ? PrintName_=boost::none : PrintName_.reset(boost::initialized_value);
	ShaderPicPath_ ? ShaderPicPath_=boost::none : ShaderPicPath_.reset(boost::initialized_value);
}

void	GC_PrintInfoImp::SData::Check()
{
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !PrintID_ )
	{
		PrintID_.reset(boost::initialized_value);
	}
	if ( !PageBorderStyle_ )
	{
		PageBorderStyle_.reset(boost::initialized_value);
	}
	if ( !PageBorderColor_ )
	{
		PageBorderColor_.reset(boost::initialized_value);
	}
	if ( !PageBorderWidth_ )
	{
		PageBorderWidth_.reset(boost::initialized_value);
	}
	if ( !ShaderPicTopX_ )
	{
		ShaderPicTopX_.reset(boost::initialized_value);
	}
	if ( !ShaderPicTopY_ )
	{
		ShaderPicTopY_.reset(boost::initialized_value);
	}
	if ( !ShaderPicHeight_ )
	{
		ShaderPicHeight_.reset(boost::initialized_value);
	}
	if ( !ShaderPicWidth_ )
	{
		ShaderPicWidth_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !PrintName_ )
	{
		PrintName_.reset(boost::initialized_value);
	}
	if ( !ShaderPicPath_ )
	{
		ShaderPicPath_.reset(boost::initialized_value);
	}
}

void	GC_PrintInfoImp::SData::ToUtf8()
{
	if ( PrintName_ )
	{
		PrintName_ = boost::locale::conv::to_utf<char>(*PrintName_, "GBK");
	}
	if ( ShaderPicPath_ )
	{
		ShaderPicPath_ = boost::locale::conv::to_utf<char>(*ShaderPicPath_, "GBK");
	}
}

void	GC_PrintInfoImp::SData::ToAscii()
{
	if ( PrintName_ )
	{
		PrintName_ = boost::locale::conv::from_utf(*PrintName_, "GBK");
	}
	if ( ShaderPicPath_ )
	{
		ShaderPicPath_ = boost::locale::conv::from_utf(*ShaderPicPath_, "GBK");
	}
}

autoDB::SColumns GC_PrintInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Use(data.PrintID_));
	}
	if ( data.PageBorderStyle_ )
	{
		ret.With(PageBorderStyle.Use(data.PageBorderStyle_));
	}
	if ( data.PageBorderColor_ )
	{
		ret.With(PageBorderColor.Use(data.PageBorderColor_));
	}
	if ( data.PageBorderWidth_ )
	{
		ret.With(PageBorderWidth.Use(data.PageBorderWidth_));
	}
	if ( data.ShaderPicTopX_ )
	{
		ret.With(ShaderPicTopX.Use(data.ShaderPicTopX_));
	}
	if ( data.ShaderPicTopY_ )
	{
		ret.With(ShaderPicTopY.Use(data.ShaderPicTopY_));
	}
	if ( data.ShaderPicHeight_ )
	{
		ret.With(ShaderPicHeight.Use(data.ShaderPicHeight_));
	}
	if ( data.ShaderPicWidth_ )
	{
		ret.With(ShaderPicWidth.Use(data.ShaderPicWidth_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.PrintName_ )
	{
		ret.With(PrintName.Use(data.PrintName_));
	}
	if ( data.ShaderPicPath_ )
	{
		ret.With(ShaderPicPath.Use(data.ShaderPicPath_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PrintInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Into(data.PrintID_));
	}
	if ( data.PageBorderStyle_ )
	{
		ret.With(PageBorderStyle.Into(data.PageBorderStyle_));
	}
	if ( data.PageBorderColor_ )
	{
		ret.With(PageBorderColor.Into(data.PageBorderColor_));
	}
	if ( data.PageBorderWidth_ )
	{
		ret.With(PageBorderWidth.Into(data.PageBorderWidth_));
	}
	if ( data.ShaderPicTopX_ )
	{
		ret.With(ShaderPicTopX.Into(data.ShaderPicTopX_));
	}
	if ( data.ShaderPicTopY_ )
	{
		ret.With(ShaderPicTopY.Into(data.ShaderPicTopY_));
	}
	if ( data.ShaderPicHeight_ )
	{
		ret.With(ShaderPicHeight.Into(data.ShaderPicHeight_));
	}
	if ( data.ShaderPicWidth_ )
	{
		ret.With(ShaderPicWidth.Into(data.ShaderPicWidth_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.PrintName_ )
	{
		ret.With(PrintName.Into(data.PrintName_));
	}
	if ( data.ShaderPicPath_ )
	{
		ret.With(ShaderPicPath.Into(data.ShaderPicPath_));
	}
	return std::move(ret);
}


GC_PrintInfoImp	GC_PrintInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PrintInfoImp(alias));
}

GC_PrintInfoImp::GC_PrintInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PrintInfo"), alias)
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,PrintID(ImpSPtr_,AUTODB_STR("PrintID"))
	,PageBorderStyle(ImpSPtr_,AUTODB_STR("PageBorderStyle"))
	,PageBorderColor(ImpSPtr_,AUTODB_STR("PageBorderColor"))
	,PageBorderWidth(ImpSPtr_,AUTODB_STR("PageBorderWidth"))
	,ShaderPicTopX(ImpSPtr_,AUTODB_STR("ShaderPicTopX"))
	,ShaderPicTopY(ImpSPtr_,AUTODB_STR("ShaderPicTopY"))
	,ShaderPicHeight(ImpSPtr_,AUTODB_STR("ShaderPicHeight"))
	,ShaderPicWidth(ImpSPtr_,AUTODB_STR("ShaderPicWidth"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,PrintName(ImpSPtr_,AUTODB_STR("PrintName"))
	,ShaderPicPath(ImpSPtr_,AUTODB_STR("ShaderPicPath"))
{}

GC_PrintInfoImp::GC_PrintInfoImp( const GC_PrintInfoImp& rhs ):Table(rhs)
	,DesignPrintID(rhs.DesignPrintID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,PrintID(rhs.PrintID)
	,PageBorderStyle(rhs.PageBorderStyle)
	,PageBorderColor(rhs.PageBorderColor)
	,PageBorderWidth(rhs.PageBorderWidth)
	,ShaderPicTopX(rhs.ShaderPicTopX)
	,ShaderPicTopY(rhs.ShaderPicTopY)
	,ShaderPicHeight(rhs.ShaderPicHeight)
	,ShaderPicWidth(rhs.ShaderPicWidth)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,PrintName(rhs.PrintName)
	,ShaderPicPath(rhs.ShaderPicPath)
{}

GC_PrintInfoImp::GC_PrintInfoImp( GC_PrintInfoImp&& rhs ):Table(rhs)
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,PrintID(std::move(rhs.PrintID))
	,PageBorderStyle(std::move(rhs.PageBorderStyle))
	,PageBorderColor(std::move(rhs.PageBorderColor))
	,PageBorderWidth(std::move(rhs.PageBorderWidth))
	,ShaderPicTopX(std::move(rhs.ShaderPicTopX))
	,ShaderPicTopY(std::move(rhs.ShaderPicTopY))
	,ShaderPicHeight(std::move(rhs.ShaderPicHeight))
	,ShaderPicWidth(std::move(rhs.ShaderPicWidth))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,PrintName(std::move(rhs.PrintName))
	,ShaderPicPath(std::move(rhs.ShaderPicPath))
{}

GC_PrintInfoImp	GC_PrintInfo("");



void	GC_PrintTableInfoImp::SData::SetAll(bool val)
{
	val ? DesignPrintTableID_.reset(boost::initialized_value) : DesignPrintTableID_=boost::none;
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? TableSign_.reset(boost::initialized_value) : TableSign_=boost::none;
	val ? WhichLine_.reset(boost::initialized_value) : WhichLine_=boost::none;
	val ? Align_.reset(boost::initialized_value) : Align_=boost::none;
	val ? LogoSign_.reset(boost::initialized_value) : LogoSign_=boost::none;
	val ? TextPos_.reset(boost::initialized_value) : TextPos_=boost::none;
	val ? SetLine_.reset(boost::initialized_value) : SetLine_=boost::none;
	val ? HasLogo_.reset(boost::initialized_value) : HasLogo_=boost::none;
	val ? IsSelected_.reset(boost::initialized_value) : IsSelected_=boost::none;
	val ? LineUp_.reset(boost::initialized_value) : LineUp_=boost::none;
	val ? LineDown_.reset(boost::initialized_value) : LineDown_=boost::none;
	val ? LineLeft_.reset(boost::initialized_value) : LineLeft_=boost::none;
	val ? LineRight_.reset(boost::initialized_value) : LineRight_=boost::none;
	val ? LineUpSign_.reset(boost::initialized_value) : LineUpSign_=boost::none;
	val ? LineDownSign_.reset(boost::initialized_value) : LineDownSign_=boost::none;
	val ? LineLeftSign_.reset(boost::initialized_value) : LineLeftSign_=boost::none;
	val ? LineRightSign_.reset(boost::initialized_value) : LineRightSign_=boost::none;
	val ? LineWidth_.reset(boost::initialized_value) : LineWidth_=boost::none;
	val ? LeftTopX_.reset(boost::initialized_value) : LeftTopX_=boost::none;
	val ? LeftTopY_.reset(boost::initialized_value) : LeftTopY_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? LineUpWidth_.reset(boost::initialized_value) : LineUpWidth_=boost::none;
	val ? LineDownWidth_.reset(boost::initialized_value) : LineDownWidth_=boost::none;
	val ? LineRightWidth_.reset(boost::initialized_value) : LineRightWidth_=boost::none;
	val ? LineLeftWidth_.reset(boost::initialized_value) : LineLeftWidth_=boost::none;
	val ? FaceName_.reset(boost::initialized_value) : FaceName_=boost::none;
	val ? LogoPath_.reset(boost::initialized_value) : LogoPath_=boost::none;
	val ? SerialPath_.reset(boost::initialized_value) : SerialPath_=boost::none;
	val ? TextValue_.reset(boost::initialized_value) : TextValue_=boost::none;
}

void	GC_PrintTableInfoImp::SData::Flip()
{
	DesignPrintTableID_ ? DesignPrintTableID_=boost::none : DesignPrintTableID_.reset(boost::initialized_value);
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	TableSign_ ? TableSign_=boost::none : TableSign_.reset(boost::initialized_value);
	WhichLine_ ? WhichLine_=boost::none : WhichLine_.reset(boost::initialized_value);
	Align_ ? Align_=boost::none : Align_.reset(boost::initialized_value);
	LogoSign_ ? LogoSign_=boost::none : LogoSign_.reset(boost::initialized_value);
	TextPos_ ? TextPos_=boost::none : TextPos_.reset(boost::initialized_value);
	SetLine_ ? SetLine_=boost::none : SetLine_.reset(boost::initialized_value);
	HasLogo_ ? HasLogo_=boost::none : HasLogo_.reset(boost::initialized_value);
	IsSelected_ ? IsSelected_=boost::none : IsSelected_.reset(boost::initialized_value);
	LineUp_ ? LineUp_=boost::none : LineUp_.reset(boost::initialized_value);
	LineDown_ ? LineDown_=boost::none : LineDown_.reset(boost::initialized_value);
	LineLeft_ ? LineLeft_=boost::none : LineLeft_.reset(boost::initialized_value);
	LineRight_ ? LineRight_=boost::none : LineRight_.reset(boost::initialized_value);
	LineUpSign_ ? LineUpSign_=boost::none : LineUpSign_.reset(boost::initialized_value);
	LineDownSign_ ? LineDownSign_=boost::none : LineDownSign_.reset(boost::initialized_value);
	LineLeftSign_ ? LineLeftSign_=boost::none : LineLeftSign_.reset(boost::initialized_value);
	LineRightSign_ ? LineRightSign_=boost::none : LineRightSign_.reset(boost::initialized_value);
	LineWidth_ ? LineWidth_=boost::none : LineWidth_.reset(boost::initialized_value);
	LeftTopX_ ? LeftTopX_=boost::none : LeftTopX_.reset(boost::initialized_value);
	LeftTopY_ ? LeftTopY_=boost::none : LeftTopY_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	LineUpWidth_ ? LineUpWidth_=boost::none : LineUpWidth_.reset(boost::initialized_value);
	LineDownWidth_ ? LineDownWidth_=boost::none : LineDownWidth_.reset(boost::initialized_value);
	LineRightWidth_ ? LineRightWidth_=boost::none : LineRightWidth_.reset(boost::initialized_value);
	LineLeftWidth_ ? LineLeftWidth_=boost::none : LineLeftWidth_.reset(boost::initialized_value);
	FaceName_ ? FaceName_=boost::none : FaceName_.reset(boost::initialized_value);
	LogoPath_ ? LogoPath_=boost::none : LogoPath_.reset(boost::initialized_value);
	SerialPath_ ? SerialPath_=boost::none : SerialPath_.reset(boost::initialized_value);
	TextValue_ ? TextValue_=boost::none : TextValue_.reset(boost::initialized_value);
}

void	GC_PrintTableInfoImp::SData::Check()
{
	if ( !DesignPrintTableID_ )
	{
		DesignPrintTableID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !TableSign_ )
	{
		TableSign_.reset(boost::initialized_value);
	}
	if ( !WhichLine_ )
	{
		WhichLine_.reset(boost::initialized_value);
	}
	if ( !Align_ )
	{
		Align_.reset(boost::initialized_value);
	}
	if ( !LogoSign_ )
	{
		LogoSign_.reset(boost::initialized_value);
	}
	if ( !TextPos_ )
	{
		TextPos_.reset(boost::initialized_value);
	}
	if ( !SetLine_ )
	{
		SetLine_.reset(boost::initialized_value);
	}
	if ( !HasLogo_ )
	{
		HasLogo_.reset(boost::initialized_value);
	}
	if ( !IsSelected_ )
	{
		IsSelected_.reset(boost::initialized_value);
	}
	if ( !LineUp_ )
	{
		LineUp_.reset(boost::initialized_value);
	}
	if ( !LineDown_ )
	{
		LineDown_.reset(boost::initialized_value);
	}
	if ( !LineLeft_ )
	{
		LineLeft_.reset(boost::initialized_value);
	}
	if ( !LineRight_ )
	{
		LineRight_.reset(boost::initialized_value);
	}
	if ( !LineUpSign_ )
	{
		LineUpSign_.reset(boost::initialized_value);
	}
	if ( !LineDownSign_ )
	{
		LineDownSign_.reset(boost::initialized_value);
	}
	if ( !LineLeftSign_ )
	{
		LineLeftSign_.reset(boost::initialized_value);
	}
	if ( !LineRightSign_ )
	{
		LineRightSign_.reset(boost::initialized_value);
	}
	if ( !LineWidth_ )
	{
		LineWidth_.reset(boost::initialized_value);
	}
	if ( !LeftTopX_ )
	{
		LeftTopX_.reset(boost::initialized_value);
	}
	if ( !LeftTopY_ )
	{
		LeftTopY_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !LineUpWidth_ )
	{
		LineUpWidth_.reset(boost::initialized_value);
	}
	if ( !LineDownWidth_ )
	{
		LineDownWidth_.reset(boost::initialized_value);
	}
	if ( !LineRightWidth_ )
	{
		LineRightWidth_.reset(boost::initialized_value);
	}
	if ( !LineLeftWidth_ )
	{
		LineLeftWidth_.reset(boost::initialized_value);
	}
	if ( !FaceName_ )
	{
		FaceName_.reset(boost::initialized_value);
	}
	if ( !LogoPath_ )
	{
		LogoPath_.reset(boost::initialized_value);
	}
	if ( !SerialPath_ )
	{
		SerialPath_.reset(boost::initialized_value);
	}
	if ( !TextValue_ )
	{
		TextValue_.reset(boost::initialized_value);
	}
}

void	GC_PrintTableInfoImp::SData::ToUtf8()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::to_utf<char>(*FaceName_, "GBK");
	}
	if ( LogoPath_ )
	{
		LogoPath_ = boost::locale::conv::to_utf<char>(*LogoPath_, "GBK");
	}
	if ( SerialPath_ )
	{
		SerialPath_ = boost::locale::conv::to_utf<char>(*SerialPath_, "GBK");
	}
	if ( TextValue_ )
	{
		TextValue_ = boost::locale::conv::to_utf<char>(*TextValue_, "GBK");
	}
}

void	GC_PrintTableInfoImp::SData::ToAscii()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::from_utf(*FaceName_, "GBK");
	}
	if ( LogoPath_ )
	{
		LogoPath_ = boost::locale::conv::from_utf(*LogoPath_, "GBK");
	}
	if ( SerialPath_ )
	{
		SerialPath_ = boost::locale::conv::from_utf(*SerialPath_, "GBK");
	}
	if ( TextValue_ )
	{
		TextValue_ = boost::locale::conv::from_utf(*TextValue_, "GBK");
	}
}

autoDB::SColumns GC_PrintTableInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPrintTableID_ )
	{
		ret.With(DesignPrintTableID.Use(data.DesignPrintTableID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.TableSign_ )
	{
		ret.With(TableSign.Use(data.TableSign_));
	}
	if ( data.WhichLine_ )
	{
		ret.With(WhichLine.Use(data.WhichLine_));
	}
	if ( data.Align_ )
	{
		ret.With(Align.Use(data.Align_));
	}
	if ( data.LogoSign_ )
	{
		ret.With(LogoSign.Use(data.LogoSign_));
	}
	if ( data.TextPos_ )
	{
		ret.With(TextPos.Use(data.TextPos_));
	}
	if ( data.SetLine_ )
	{
		ret.With(SetLine.Use(data.SetLine_));
	}
	if ( data.HasLogo_ )
	{
		ret.With(HasLogo.Use(data.HasLogo_));
	}
	if ( data.IsSelected_ )
	{
		ret.With(IsSelected.Use(data.IsSelected_));
	}
	if ( data.LineUp_ )
	{
		ret.With(LineUp.Use(data.LineUp_));
	}
	if ( data.LineDown_ )
	{
		ret.With(LineDown.Use(data.LineDown_));
	}
	if ( data.LineLeft_ )
	{
		ret.With(LineLeft.Use(data.LineLeft_));
	}
	if ( data.LineRight_ )
	{
		ret.With(LineRight.Use(data.LineRight_));
	}
	if ( data.LineUpSign_ )
	{
		ret.With(LineUpSign.Use(data.LineUpSign_));
	}
	if ( data.LineDownSign_ )
	{
		ret.With(LineDownSign.Use(data.LineDownSign_));
	}
	if ( data.LineLeftSign_ )
	{
		ret.With(LineLeftSign.Use(data.LineLeftSign_));
	}
	if ( data.LineRightSign_ )
	{
		ret.With(LineRightSign.Use(data.LineRightSign_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Use(data.LineWidth_));
	}
	if ( data.LeftTopX_ )
	{
		ret.With(LeftTopX.Use(data.LeftTopX_));
	}
	if ( data.LeftTopY_ )
	{
		ret.With(LeftTopY.Use(data.LeftTopY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.LineUpWidth_ )
	{
		ret.With(LineUpWidth.Use(data.LineUpWidth_));
	}
	if ( data.LineDownWidth_ )
	{
		ret.With(LineDownWidth.Use(data.LineDownWidth_));
	}
	if ( data.LineRightWidth_ )
	{
		ret.With(LineRightWidth.Use(data.LineRightWidth_));
	}
	if ( data.LineLeftWidth_ )
	{
		ret.With(LineLeftWidth.Use(data.LineLeftWidth_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Use(data.FaceName_));
	}
	if ( data.LogoPath_ )
	{
		ret.With(LogoPath.Use(data.LogoPath_));
	}
	if ( data.SerialPath_ )
	{
		ret.With(SerialPath.Use(data.SerialPath_));
	}
	if ( data.TextValue_ )
	{
		ret.With(TextValue.Use(data.TextValue_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PrintTableInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPrintTableID_ )
	{
		ret.With(DesignPrintTableID.Into(data.DesignPrintTableID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.TableSign_ )
	{
		ret.With(TableSign.Into(data.TableSign_));
	}
	if ( data.WhichLine_ )
	{
		ret.With(WhichLine.Into(data.WhichLine_));
	}
	if ( data.Align_ )
	{
		ret.With(Align.Into(data.Align_));
	}
	if ( data.LogoSign_ )
	{
		ret.With(LogoSign.Into(data.LogoSign_));
	}
	if ( data.TextPos_ )
	{
		ret.With(TextPos.Into(data.TextPos_));
	}
	if ( data.SetLine_ )
	{
		ret.With(SetLine.Into(data.SetLine_));
	}
	if ( data.HasLogo_ )
	{
		ret.With(HasLogo.Into(data.HasLogo_));
	}
	if ( data.IsSelected_ )
	{
		ret.With(IsSelected.Into(data.IsSelected_));
	}
	if ( data.LineUp_ )
	{
		ret.With(LineUp.Into(data.LineUp_));
	}
	if ( data.LineDown_ )
	{
		ret.With(LineDown.Into(data.LineDown_));
	}
	if ( data.LineLeft_ )
	{
		ret.With(LineLeft.Into(data.LineLeft_));
	}
	if ( data.LineRight_ )
	{
		ret.With(LineRight.Into(data.LineRight_));
	}
	if ( data.LineUpSign_ )
	{
		ret.With(LineUpSign.Into(data.LineUpSign_));
	}
	if ( data.LineDownSign_ )
	{
		ret.With(LineDownSign.Into(data.LineDownSign_));
	}
	if ( data.LineLeftSign_ )
	{
		ret.With(LineLeftSign.Into(data.LineLeftSign_));
	}
	if ( data.LineRightSign_ )
	{
		ret.With(LineRightSign.Into(data.LineRightSign_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Into(data.LineWidth_));
	}
	if ( data.LeftTopX_ )
	{
		ret.With(LeftTopX.Into(data.LeftTopX_));
	}
	if ( data.LeftTopY_ )
	{
		ret.With(LeftTopY.Into(data.LeftTopY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.LineUpWidth_ )
	{
		ret.With(LineUpWidth.Into(data.LineUpWidth_));
	}
	if ( data.LineDownWidth_ )
	{
		ret.With(LineDownWidth.Into(data.LineDownWidth_));
	}
	if ( data.LineRightWidth_ )
	{
		ret.With(LineRightWidth.Into(data.LineRightWidth_));
	}
	if ( data.LineLeftWidth_ )
	{
		ret.With(LineLeftWidth.Into(data.LineLeftWidth_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Into(data.FaceName_));
	}
	if ( data.LogoPath_ )
	{
		ret.With(LogoPath.Into(data.LogoPath_));
	}
	if ( data.SerialPath_ )
	{
		ret.With(SerialPath.Into(data.SerialPath_));
	}
	if ( data.TextValue_ )
	{
		ret.With(TextValue.Into(data.TextValue_));
	}
	return std::move(ret);
}


GC_PrintTableInfoImp	GC_PrintTableInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PrintTableInfoImp(alias));
}

GC_PrintTableInfoImp::GC_PrintTableInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PrintTableInfo"), alias)
	,DesignPrintTableID(ImpSPtr_,AUTODB_STR("DesignPrintTableID"))
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,TableSign(ImpSPtr_,AUTODB_STR("TableSign"))
	,WhichLine(ImpSPtr_,AUTODB_STR("WhichLine"))
	,Align(ImpSPtr_,AUTODB_STR("Align"))
	,LogoSign(ImpSPtr_,AUTODB_STR("LogoSign"))
	,TextPos(ImpSPtr_,AUTODB_STR("TextPos"))
	,SetLine(ImpSPtr_,AUTODB_STR("SetLine"))
	,HasLogo(ImpSPtr_,AUTODB_STR("HasLogo"))
	,IsSelected(ImpSPtr_,AUTODB_STR("IsSelected"))
	,LineUp(ImpSPtr_,AUTODB_STR("LineUp"))
	,LineDown(ImpSPtr_,AUTODB_STR("LineDown"))
	,LineLeft(ImpSPtr_,AUTODB_STR("LineLeft"))
	,LineRight(ImpSPtr_,AUTODB_STR("LineRight"))
	,LineUpSign(ImpSPtr_,AUTODB_STR("LineUpSign"))
	,LineDownSign(ImpSPtr_,AUTODB_STR("LineDownSign"))
	,LineLeftSign(ImpSPtr_,AUTODB_STR("LineLeftSign"))
	,LineRightSign(ImpSPtr_,AUTODB_STR("LineRightSign"))
	,LineWidth(ImpSPtr_,AUTODB_STR("LineWidth"))
	,LeftTopX(ImpSPtr_,AUTODB_STR("LeftTopX"))
	,LeftTopY(ImpSPtr_,AUTODB_STR("LeftTopY"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,LineUpWidth(ImpSPtr_,AUTODB_STR("LineUpWidth"))
	,LineDownWidth(ImpSPtr_,AUTODB_STR("LineDownWidth"))
	,LineRightWidth(ImpSPtr_,AUTODB_STR("LineRightWidth"))
	,LineLeftWidth(ImpSPtr_,AUTODB_STR("LineLeftWidth"))
	,FaceName(ImpSPtr_,AUTODB_STR("FaceName"))
	,LogoPath(ImpSPtr_,AUTODB_STR("LogoPath"))
	,SerialPath(ImpSPtr_,AUTODB_STR("SerialPath"))
	,TextValue(ImpSPtr_,AUTODB_STR("TextValue"))
{}

GC_PrintTableInfoImp::GC_PrintTableInfoImp( const GC_PrintTableInfoImp& rhs ):Table(rhs)
	,DesignPrintTableID(rhs.DesignPrintTableID)
	,DesignPrintID(rhs.DesignPrintID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,TableSign(rhs.TableSign)
	,WhichLine(rhs.WhichLine)
	,Align(rhs.Align)
	,LogoSign(rhs.LogoSign)
	,TextPos(rhs.TextPos)
	,SetLine(rhs.SetLine)
	,HasLogo(rhs.HasLogo)
	,IsSelected(rhs.IsSelected)
	,LineUp(rhs.LineUp)
	,LineDown(rhs.LineDown)
	,LineLeft(rhs.LineLeft)
	,LineRight(rhs.LineRight)
	,LineUpSign(rhs.LineUpSign)
	,LineDownSign(rhs.LineDownSign)
	,LineLeftSign(rhs.LineLeftSign)
	,LineRightSign(rhs.LineRightSign)
	,LineWidth(rhs.LineWidth)
	,LeftTopX(rhs.LeftTopX)
	,LeftTopY(rhs.LeftTopY)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,LineUpWidth(rhs.LineUpWidth)
	,LineDownWidth(rhs.LineDownWidth)
	,LineRightWidth(rhs.LineRightWidth)
	,LineLeftWidth(rhs.LineLeftWidth)
	,FaceName(rhs.FaceName)
	,LogoPath(rhs.LogoPath)
	,SerialPath(rhs.SerialPath)
	,TextValue(rhs.TextValue)
{}

GC_PrintTableInfoImp::GC_PrintTableInfoImp( GC_PrintTableInfoImp&& rhs ):Table(rhs)
	,DesignPrintTableID(std::move(rhs.DesignPrintTableID))
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,TableSign(std::move(rhs.TableSign))
	,WhichLine(std::move(rhs.WhichLine))
	,Align(std::move(rhs.Align))
	,LogoSign(std::move(rhs.LogoSign))
	,TextPos(std::move(rhs.TextPos))
	,SetLine(std::move(rhs.SetLine))
	,HasLogo(std::move(rhs.HasLogo))
	,IsSelected(std::move(rhs.IsSelected))
	,LineUp(std::move(rhs.LineUp))
	,LineDown(std::move(rhs.LineDown))
	,LineLeft(std::move(rhs.LineLeft))
	,LineRight(std::move(rhs.LineRight))
	,LineUpSign(std::move(rhs.LineUpSign))
	,LineDownSign(std::move(rhs.LineDownSign))
	,LineLeftSign(std::move(rhs.LineLeftSign))
	,LineRightSign(std::move(rhs.LineRightSign))
	,LineWidth(std::move(rhs.LineWidth))
	,LeftTopX(std::move(rhs.LeftTopX))
	,LeftTopY(std::move(rhs.LeftTopY))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,LineUpWidth(std::move(rhs.LineUpWidth))
	,LineDownWidth(std::move(rhs.LineDownWidth))
	,LineRightWidth(std::move(rhs.LineRightWidth))
	,LineLeftWidth(std::move(rhs.LineLeftWidth))
	,FaceName(std::move(rhs.FaceName))
	,LogoPath(std::move(rhs.LogoPath))
	,SerialPath(std::move(rhs.SerialPath))
	,TextValue(std::move(rhs.TextValue))
{}

GC_PrintTableInfoImp	GC_PrintTableInfo("");



void	GC_PrintTableRowColInfoImp::SData::SetAll(bool val)
{
	val ? DesignPrintTableRowColID_.reset(boost::initialized_value) : DesignPrintTableRowColID_=boost::none;
	val ? DesignPrintTableRowID_.reset(boost::initialized_value) : DesignPrintTableRowID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? TableSign_.reset(boost::initialized_value) : TableSign_=boost::none;
	val ? RowNumber_.reset(boost::initialized_value) : RowNumber_=boost::none;
	val ? ColNumber_.reset(boost::initialized_value) : ColNumber_=boost::none;
	val ? WhichLine_.reset(boost::initialized_value) : WhichLine_=boost::none;
	val ? Align_.reset(boost::initialized_value) : Align_=boost::none;
	val ? LogoSign_.reset(boost::initialized_value) : LogoSign_=boost::none;
	val ? TextPos_.reset(boost::initialized_value) : TextPos_=boost::none;
	val ? SetLine_.reset(boost::initialized_value) : SetLine_=boost::none;
	val ? HasLogo_.reset(boost::initialized_value) : HasLogo_=boost::none;
	val ? IsSelected_.reset(boost::initialized_value) : IsSelected_=boost::none;
	val ? LineUp_.reset(boost::initialized_value) : LineUp_=boost::none;
	val ? LineDown_.reset(boost::initialized_value) : LineDown_=boost::none;
	val ? LineLeft_.reset(boost::initialized_value) : LineLeft_=boost::none;
	val ? LineRight_.reset(boost::initialized_value) : LineRight_=boost::none;
	val ? LineUpSign_.reset(boost::initialized_value) : LineUpSign_=boost::none;
	val ? LineDownSign_.reset(boost::initialized_value) : LineDownSign_=boost::none;
	val ? LineLeftSign_.reset(boost::initialized_value) : LineLeftSign_=boost::none;
	val ? LineRightSign_.reset(boost::initialized_value) : LineRightSign_=boost::none;
	val ? LineWidth_.reset(boost::initialized_value) : LineWidth_=boost::none;
	val ? LeftTopX_.reset(boost::initialized_value) : LeftTopX_=boost::none;
	val ? LeftTopY_.reset(boost::initialized_value) : LeftTopY_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? LineUpWidth_.reset(boost::initialized_value) : LineUpWidth_=boost::none;
	val ? LineDownWidth_.reset(boost::initialized_value) : LineDownWidth_=boost::none;
	val ? LineRightWidth_.reset(boost::initialized_value) : LineRightWidth_=boost::none;
	val ? LineLeftWidth_.reset(boost::initialized_value) : LineLeftWidth_=boost::none;
	val ? FaceName_.reset(boost::initialized_value) : FaceName_=boost::none;
	val ? LogoPath_.reset(boost::initialized_value) : LogoPath_=boost::none;
	val ? SerialPath_.reset(boost::initialized_value) : SerialPath_=boost::none;
	val ? TextValue_.reset(boost::initialized_value) : TextValue_=boost::none;
}

void	GC_PrintTableRowColInfoImp::SData::Flip()
{
	DesignPrintTableRowColID_ ? DesignPrintTableRowColID_=boost::none : DesignPrintTableRowColID_.reset(boost::initialized_value);
	DesignPrintTableRowID_ ? DesignPrintTableRowID_=boost::none : DesignPrintTableRowID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	TableSign_ ? TableSign_=boost::none : TableSign_.reset(boost::initialized_value);
	RowNumber_ ? RowNumber_=boost::none : RowNumber_.reset(boost::initialized_value);
	ColNumber_ ? ColNumber_=boost::none : ColNumber_.reset(boost::initialized_value);
	WhichLine_ ? WhichLine_=boost::none : WhichLine_.reset(boost::initialized_value);
	Align_ ? Align_=boost::none : Align_.reset(boost::initialized_value);
	LogoSign_ ? LogoSign_=boost::none : LogoSign_.reset(boost::initialized_value);
	TextPos_ ? TextPos_=boost::none : TextPos_.reset(boost::initialized_value);
	SetLine_ ? SetLine_=boost::none : SetLine_.reset(boost::initialized_value);
	HasLogo_ ? HasLogo_=boost::none : HasLogo_.reset(boost::initialized_value);
	IsSelected_ ? IsSelected_=boost::none : IsSelected_.reset(boost::initialized_value);
	LineUp_ ? LineUp_=boost::none : LineUp_.reset(boost::initialized_value);
	LineDown_ ? LineDown_=boost::none : LineDown_.reset(boost::initialized_value);
	LineLeft_ ? LineLeft_=boost::none : LineLeft_.reset(boost::initialized_value);
	LineRight_ ? LineRight_=boost::none : LineRight_.reset(boost::initialized_value);
	LineUpSign_ ? LineUpSign_=boost::none : LineUpSign_.reset(boost::initialized_value);
	LineDownSign_ ? LineDownSign_=boost::none : LineDownSign_.reset(boost::initialized_value);
	LineLeftSign_ ? LineLeftSign_=boost::none : LineLeftSign_.reset(boost::initialized_value);
	LineRightSign_ ? LineRightSign_=boost::none : LineRightSign_.reset(boost::initialized_value);
	LineWidth_ ? LineWidth_=boost::none : LineWidth_.reset(boost::initialized_value);
	LeftTopX_ ? LeftTopX_=boost::none : LeftTopX_.reset(boost::initialized_value);
	LeftTopY_ ? LeftTopY_=boost::none : LeftTopY_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	LineUpWidth_ ? LineUpWidth_=boost::none : LineUpWidth_.reset(boost::initialized_value);
	LineDownWidth_ ? LineDownWidth_=boost::none : LineDownWidth_.reset(boost::initialized_value);
	LineRightWidth_ ? LineRightWidth_=boost::none : LineRightWidth_.reset(boost::initialized_value);
	LineLeftWidth_ ? LineLeftWidth_=boost::none : LineLeftWidth_.reset(boost::initialized_value);
	FaceName_ ? FaceName_=boost::none : FaceName_.reset(boost::initialized_value);
	LogoPath_ ? LogoPath_=boost::none : LogoPath_.reset(boost::initialized_value);
	SerialPath_ ? SerialPath_=boost::none : SerialPath_.reset(boost::initialized_value);
	TextValue_ ? TextValue_=boost::none : TextValue_.reset(boost::initialized_value);
}

void	GC_PrintTableRowColInfoImp::SData::Check()
{
	if ( !DesignPrintTableRowColID_ )
	{
		DesignPrintTableRowColID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintTableRowID_ )
	{
		DesignPrintTableRowID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !TableSign_ )
	{
		TableSign_.reset(boost::initialized_value);
	}
	if ( !RowNumber_ )
	{
		RowNumber_.reset(boost::initialized_value);
	}
	if ( !ColNumber_ )
	{
		ColNumber_.reset(boost::initialized_value);
	}
	if ( !WhichLine_ )
	{
		WhichLine_.reset(boost::initialized_value);
	}
	if ( !Align_ )
	{
		Align_.reset(boost::initialized_value);
	}
	if ( !LogoSign_ )
	{
		LogoSign_.reset(boost::initialized_value);
	}
	if ( !TextPos_ )
	{
		TextPos_.reset(boost::initialized_value);
	}
	if ( !SetLine_ )
	{
		SetLine_.reset(boost::initialized_value);
	}
	if ( !HasLogo_ )
	{
		HasLogo_.reset(boost::initialized_value);
	}
	if ( !IsSelected_ )
	{
		IsSelected_.reset(boost::initialized_value);
	}
	if ( !LineUp_ )
	{
		LineUp_.reset(boost::initialized_value);
	}
	if ( !LineDown_ )
	{
		LineDown_.reset(boost::initialized_value);
	}
	if ( !LineLeft_ )
	{
		LineLeft_.reset(boost::initialized_value);
	}
	if ( !LineRight_ )
	{
		LineRight_.reset(boost::initialized_value);
	}
	if ( !LineUpSign_ )
	{
		LineUpSign_.reset(boost::initialized_value);
	}
	if ( !LineDownSign_ )
	{
		LineDownSign_.reset(boost::initialized_value);
	}
	if ( !LineLeftSign_ )
	{
		LineLeftSign_.reset(boost::initialized_value);
	}
	if ( !LineRightSign_ )
	{
		LineRightSign_.reset(boost::initialized_value);
	}
	if ( !LineWidth_ )
	{
		LineWidth_.reset(boost::initialized_value);
	}
	if ( !LeftTopX_ )
	{
		LeftTopX_.reset(boost::initialized_value);
	}
	if ( !LeftTopY_ )
	{
		LeftTopY_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !LineUpWidth_ )
	{
		LineUpWidth_.reset(boost::initialized_value);
	}
	if ( !LineDownWidth_ )
	{
		LineDownWidth_.reset(boost::initialized_value);
	}
	if ( !LineRightWidth_ )
	{
		LineRightWidth_.reset(boost::initialized_value);
	}
	if ( !LineLeftWidth_ )
	{
		LineLeftWidth_.reset(boost::initialized_value);
	}
	if ( !FaceName_ )
	{
		FaceName_.reset(boost::initialized_value);
	}
	if ( !LogoPath_ )
	{
		LogoPath_.reset(boost::initialized_value);
	}
	if ( !SerialPath_ )
	{
		SerialPath_.reset(boost::initialized_value);
	}
	if ( !TextValue_ )
	{
		TextValue_.reset(boost::initialized_value);
	}
}

void	GC_PrintTableRowColInfoImp::SData::ToUtf8()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::to_utf<char>(*FaceName_, "GBK");
	}
	if ( LogoPath_ )
	{
		LogoPath_ = boost::locale::conv::to_utf<char>(*LogoPath_, "GBK");
	}
	if ( SerialPath_ )
	{
		SerialPath_ = boost::locale::conv::to_utf<char>(*SerialPath_, "GBK");
	}
	if ( TextValue_ )
	{
		TextValue_ = boost::locale::conv::to_utf<char>(*TextValue_, "GBK");
	}
}

void	GC_PrintTableRowColInfoImp::SData::ToAscii()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::from_utf(*FaceName_, "GBK");
	}
	if ( LogoPath_ )
	{
		LogoPath_ = boost::locale::conv::from_utf(*LogoPath_, "GBK");
	}
	if ( SerialPath_ )
	{
		SerialPath_ = boost::locale::conv::from_utf(*SerialPath_, "GBK");
	}
	if ( TextValue_ )
	{
		TextValue_ = boost::locale::conv::from_utf(*TextValue_, "GBK");
	}
}

autoDB::SColumns GC_PrintTableRowColInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPrintTableRowColID_ )
	{
		ret.With(DesignPrintTableRowColID.Use(data.DesignPrintTableRowColID_));
	}
	if ( data.DesignPrintTableRowID_ )
	{
		ret.With(DesignPrintTableRowID.Use(data.DesignPrintTableRowID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.TableSign_ )
	{
		ret.With(TableSign.Use(data.TableSign_));
	}
	if ( data.RowNumber_ )
	{
		ret.With(RowNumber.Use(data.RowNumber_));
	}
	if ( data.ColNumber_ )
	{
		ret.With(ColNumber.Use(data.ColNumber_));
	}
	if ( data.WhichLine_ )
	{
		ret.With(WhichLine.Use(data.WhichLine_));
	}
	if ( data.Align_ )
	{
		ret.With(Align.Use(data.Align_));
	}
	if ( data.LogoSign_ )
	{
		ret.With(LogoSign.Use(data.LogoSign_));
	}
	if ( data.TextPos_ )
	{
		ret.With(TextPos.Use(data.TextPos_));
	}
	if ( data.SetLine_ )
	{
		ret.With(SetLine.Use(data.SetLine_));
	}
	if ( data.HasLogo_ )
	{
		ret.With(HasLogo.Use(data.HasLogo_));
	}
	if ( data.IsSelected_ )
	{
		ret.With(IsSelected.Use(data.IsSelected_));
	}
	if ( data.LineUp_ )
	{
		ret.With(LineUp.Use(data.LineUp_));
	}
	if ( data.LineDown_ )
	{
		ret.With(LineDown.Use(data.LineDown_));
	}
	if ( data.LineLeft_ )
	{
		ret.With(LineLeft.Use(data.LineLeft_));
	}
	if ( data.LineRight_ )
	{
		ret.With(LineRight.Use(data.LineRight_));
	}
	if ( data.LineUpSign_ )
	{
		ret.With(LineUpSign.Use(data.LineUpSign_));
	}
	if ( data.LineDownSign_ )
	{
		ret.With(LineDownSign.Use(data.LineDownSign_));
	}
	if ( data.LineLeftSign_ )
	{
		ret.With(LineLeftSign.Use(data.LineLeftSign_));
	}
	if ( data.LineRightSign_ )
	{
		ret.With(LineRightSign.Use(data.LineRightSign_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Use(data.LineWidth_));
	}
	if ( data.LeftTopX_ )
	{
		ret.With(LeftTopX.Use(data.LeftTopX_));
	}
	if ( data.LeftTopY_ )
	{
		ret.With(LeftTopY.Use(data.LeftTopY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.LineUpWidth_ )
	{
		ret.With(LineUpWidth.Use(data.LineUpWidth_));
	}
	if ( data.LineDownWidth_ )
	{
		ret.With(LineDownWidth.Use(data.LineDownWidth_));
	}
	if ( data.LineRightWidth_ )
	{
		ret.With(LineRightWidth.Use(data.LineRightWidth_));
	}
	if ( data.LineLeftWidth_ )
	{
		ret.With(LineLeftWidth.Use(data.LineLeftWidth_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Use(data.FaceName_));
	}
	if ( data.LogoPath_ )
	{
		ret.With(LogoPath.Use(data.LogoPath_));
	}
	if ( data.SerialPath_ )
	{
		ret.With(SerialPath.Use(data.SerialPath_));
	}
	if ( data.TextValue_ )
	{
		ret.With(TextValue.Use(data.TextValue_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PrintTableRowColInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPrintTableRowColID_ )
	{
		ret.With(DesignPrintTableRowColID.Into(data.DesignPrintTableRowColID_));
	}
	if ( data.DesignPrintTableRowID_ )
	{
		ret.With(DesignPrintTableRowID.Into(data.DesignPrintTableRowID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.TableSign_ )
	{
		ret.With(TableSign.Into(data.TableSign_));
	}
	if ( data.RowNumber_ )
	{
		ret.With(RowNumber.Into(data.RowNumber_));
	}
	if ( data.ColNumber_ )
	{
		ret.With(ColNumber.Into(data.ColNumber_));
	}
	if ( data.WhichLine_ )
	{
		ret.With(WhichLine.Into(data.WhichLine_));
	}
	if ( data.Align_ )
	{
		ret.With(Align.Into(data.Align_));
	}
	if ( data.LogoSign_ )
	{
		ret.With(LogoSign.Into(data.LogoSign_));
	}
	if ( data.TextPos_ )
	{
		ret.With(TextPos.Into(data.TextPos_));
	}
	if ( data.SetLine_ )
	{
		ret.With(SetLine.Into(data.SetLine_));
	}
	if ( data.HasLogo_ )
	{
		ret.With(HasLogo.Into(data.HasLogo_));
	}
	if ( data.IsSelected_ )
	{
		ret.With(IsSelected.Into(data.IsSelected_));
	}
	if ( data.LineUp_ )
	{
		ret.With(LineUp.Into(data.LineUp_));
	}
	if ( data.LineDown_ )
	{
		ret.With(LineDown.Into(data.LineDown_));
	}
	if ( data.LineLeft_ )
	{
		ret.With(LineLeft.Into(data.LineLeft_));
	}
	if ( data.LineRight_ )
	{
		ret.With(LineRight.Into(data.LineRight_));
	}
	if ( data.LineUpSign_ )
	{
		ret.With(LineUpSign.Into(data.LineUpSign_));
	}
	if ( data.LineDownSign_ )
	{
		ret.With(LineDownSign.Into(data.LineDownSign_));
	}
	if ( data.LineLeftSign_ )
	{
		ret.With(LineLeftSign.Into(data.LineLeftSign_));
	}
	if ( data.LineRightSign_ )
	{
		ret.With(LineRightSign.Into(data.LineRightSign_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Into(data.LineWidth_));
	}
	if ( data.LeftTopX_ )
	{
		ret.With(LeftTopX.Into(data.LeftTopX_));
	}
	if ( data.LeftTopY_ )
	{
		ret.With(LeftTopY.Into(data.LeftTopY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.LineUpWidth_ )
	{
		ret.With(LineUpWidth.Into(data.LineUpWidth_));
	}
	if ( data.LineDownWidth_ )
	{
		ret.With(LineDownWidth.Into(data.LineDownWidth_));
	}
	if ( data.LineRightWidth_ )
	{
		ret.With(LineRightWidth.Into(data.LineRightWidth_));
	}
	if ( data.LineLeftWidth_ )
	{
		ret.With(LineLeftWidth.Into(data.LineLeftWidth_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Into(data.FaceName_));
	}
	if ( data.LogoPath_ )
	{
		ret.With(LogoPath.Into(data.LogoPath_));
	}
	if ( data.SerialPath_ )
	{
		ret.With(SerialPath.Into(data.SerialPath_));
	}
	if ( data.TextValue_ )
	{
		ret.With(TextValue.Into(data.TextValue_));
	}
	return std::move(ret);
}


GC_PrintTableRowColInfoImp	GC_PrintTableRowColInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PrintTableRowColInfoImp(alias));
}

GC_PrintTableRowColInfoImp::GC_PrintTableRowColInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PrintTableRowColInfo"), alias)
	,DesignPrintTableRowColID(ImpSPtr_,AUTODB_STR("DesignPrintTableRowColID"))
	,DesignPrintTableRowID(ImpSPtr_,AUTODB_STR("DesignPrintTableRowID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,TableSign(ImpSPtr_,AUTODB_STR("TableSign"))
	,RowNumber(ImpSPtr_,AUTODB_STR("RowNumber"))
	,ColNumber(ImpSPtr_,AUTODB_STR("ColNumber"))
	,WhichLine(ImpSPtr_,AUTODB_STR("WhichLine"))
	,Align(ImpSPtr_,AUTODB_STR("Align"))
	,LogoSign(ImpSPtr_,AUTODB_STR("LogoSign"))
	,TextPos(ImpSPtr_,AUTODB_STR("TextPos"))
	,SetLine(ImpSPtr_,AUTODB_STR("SetLine"))
	,HasLogo(ImpSPtr_,AUTODB_STR("HasLogo"))
	,IsSelected(ImpSPtr_,AUTODB_STR("IsSelected"))
	,LineUp(ImpSPtr_,AUTODB_STR("LineUp"))
	,LineDown(ImpSPtr_,AUTODB_STR("LineDown"))
	,LineLeft(ImpSPtr_,AUTODB_STR("LineLeft"))
	,LineRight(ImpSPtr_,AUTODB_STR("LineRight"))
	,LineUpSign(ImpSPtr_,AUTODB_STR("LineUpSign"))
	,LineDownSign(ImpSPtr_,AUTODB_STR("LineDownSign"))
	,LineLeftSign(ImpSPtr_,AUTODB_STR("LineLeftSign"))
	,LineRightSign(ImpSPtr_,AUTODB_STR("LineRightSign"))
	,LineWidth(ImpSPtr_,AUTODB_STR("LineWidth"))
	,LeftTopX(ImpSPtr_,AUTODB_STR("LeftTopX"))
	,LeftTopY(ImpSPtr_,AUTODB_STR("LeftTopY"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,LineUpWidth(ImpSPtr_,AUTODB_STR("LineUpWidth"))
	,LineDownWidth(ImpSPtr_,AUTODB_STR("LineDownWidth"))
	,LineRightWidth(ImpSPtr_,AUTODB_STR("LineRightWidth"))
	,LineLeftWidth(ImpSPtr_,AUTODB_STR("LineLeftWidth"))
	,FaceName(ImpSPtr_,AUTODB_STR("FaceName"))
	,LogoPath(ImpSPtr_,AUTODB_STR("LogoPath"))
	,SerialPath(ImpSPtr_,AUTODB_STR("SerialPath"))
	,TextValue(ImpSPtr_,AUTODB_STR("TextValue"))
{}

GC_PrintTableRowColInfoImp::GC_PrintTableRowColInfoImp( const GC_PrintTableRowColInfoImp& rhs ):Table(rhs)
	,DesignPrintTableRowColID(rhs.DesignPrintTableRowColID)
	,DesignPrintTableRowID(rhs.DesignPrintTableRowID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,TableSign(rhs.TableSign)
	,RowNumber(rhs.RowNumber)
	,ColNumber(rhs.ColNumber)
	,WhichLine(rhs.WhichLine)
	,Align(rhs.Align)
	,LogoSign(rhs.LogoSign)
	,TextPos(rhs.TextPos)
	,SetLine(rhs.SetLine)
	,HasLogo(rhs.HasLogo)
	,IsSelected(rhs.IsSelected)
	,LineUp(rhs.LineUp)
	,LineDown(rhs.LineDown)
	,LineLeft(rhs.LineLeft)
	,LineRight(rhs.LineRight)
	,LineUpSign(rhs.LineUpSign)
	,LineDownSign(rhs.LineDownSign)
	,LineLeftSign(rhs.LineLeftSign)
	,LineRightSign(rhs.LineRightSign)
	,LineWidth(rhs.LineWidth)
	,LeftTopX(rhs.LeftTopX)
	,LeftTopY(rhs.LeftTopY)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,LineUpWidth(rhs.LineUpWidth)
	,LineDownWidth(rhs.LineDownWidth)
	,LineRightWidth(rhs.LineRightWidth)
	,LineLeftWidth(rhs.LineLeftWidth)
	,FaceName(rhs.FaceName)
	,LogoPath(rhs.LogoPath)
	,SerialPath(rhs.SerialPath)
	,TextValue(rhs.TextValue)
{}

GC_PrintTableRowColInfoImp::GC_PrintTableRowColInfoImp( GC_PrintTableRowColInfoImp&& rhs ):Table(rhs)
	,DesignPrintTableRowColID(std::move(rhs.DesignPrintTableRowColID))
	,DesignPrintTableRowID(std::move(rhs.DesignPrintTableRowID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,TableSign(std::move(rhs.TableSign))
	,RowNumber(std::move(rhs.RowNumber))
	,ColNumber(std::move(rhs.ColNumber))
	,WhichLine(std::move(rhs.WhichLine))
	,Align(std::move(rhs.Align))
	,LogoSign(std::move(rhs.LogoSign))
	,TextPos(std::move(rhs.TextPos))
	,SetLine(std::move(rhs.SetLine))
	,HasLogo(std::move(rhs.HasLogo))
	,IsSelected(std::move(rhs.IsSelected))
	,LineUp(std::move(rhs.LineUp))
	,LineDown(std::move(rhs.LineDown))
	,LineLeft(std::move(rhs.LineLeft))
	,LineRight(std::move(rhs.LineRight))
	,LineUpSign(std::move(rhs.LineUpSign))
	,LineDownSign(std::move(rhs.LineDownSign))
	,LineLeftSign(std::move(rhs.LineLeftSign))
	,LineRightSign(std::move(rhs.LineRightSign))
	,LineWidth(std::move(rhs.LineWidth))
	,LeftTopX(std::move(rhs.LeftTopX))
	,LeftTopY(std::move(rhs.LeftTopY))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,LineUpWidth(std::move(rhs.LineUpWidth))
	,LineDownWidth(std::move(rhs.LineDownWidth))
	,LineRightWidth(std::move(rhs.LineRightWidth))
	,LineLeftWidth(std::move(rhs.LineLeftWidth))
	,FaceName(std::move(rhs.FaceName))
	,LogoPath(std::move(rhs.LogoPath))
	,SerialPath(std::move(rhs.SerialPath))
	,TextValue(std::move(rhs.TextValue))
{}

GC_PrintTableRowColInfoImp	GC_PrintTableRowColInfo("");



void	GC_PrintTableRowInfoImp::SData::SetAll(bool val)
{
	val ? DesignPrintTableRowID_.reset(boost::initialized_value) : DesignPrintTableRowID_=boost::none;
	val ? DesignPrintTableID_.reset(boost::initialized_value) : DesignPrintTableID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? TableSign_.reset(boost::initialized_value) : TableSign_=boost::none;
	val ? RowNumber_.reset(boost::initialized_value) : RowNumber_=boost::none;
	val ? WhichLine_.reset(boost::initialized_value) : WhichLine_=boost::none;
	val ? Align_.reset(boost::initialized_value) : Align_=boost::none;
	val ? LogoSign_.reset(boost::initialized_value) : LogoSign_=boost::none;
	val ? TextPos_.reset(boost::initialized_value) : TextPos_=boost::none;
	val ? SetLine_.reset(boost::initialized_value) : SetLine_=boost::none;
	val ? HasLogo_.reset(boost::initialized_value) : HasLogo_=boost::none;
	val ? IsSelected_.reset(boost::initialized_value) : IsSelected_=boost::none;
	val ? LineUp_.reset(boost::initialized_value) : LineUp_=boost::none;
	val ? LineDown_.reset(boost::initialized_value) : LineDown_=boost::none;
	val ? LineLeft_.reset(boost::initialized_value) : LineLeft_=boost::none;
	val ? LineRight_.reset(boost::initialized_value) : LineRight_=boost::none;
	val ? LineUpSign_.reset(boost::initialized_value) : LineUpSign_=boost::none;
	val ? LineDownSign_.reset(boost::initialized_value) : LineDownSign_=boost::none;
	val ? LineLeftSign_.reset(boost::initialized_value) : LineLeftSign_=boost::none;
	val ? LineRightSign_.reset(boost::initialized_value) : LineRightSign_=boost::none;
	val ? LineWidth_.reset(boost::initialized_value) : LineWidth_=boost::none;
	val ? LeftTopX_.reset(boost::initialized_value) : LeftTopX_=boost::none;
	val ? LeftTopY_.reset(boost::initialized_value) : LeftTopY_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? LineUpWidth_.reset(boost::initialized_value) : LineUpWidth_=boost::none;
	val ? LineDownWidth_.reset(boost::initialized_value) : LineDownWidth_=boost::none;
	val ? LineRightWidth_.reset(boost::initialized_value) : LineRightWidth_=boost::none;
	val ? LineLeftWidth_.reset(boost::initialized_value) : LineLeftWidth_=boost::none;
	val ? FaceName_.reset(boost::initialized_value) : FaceName_=boost::none;
	val ? LogoPath_.reset(boost::initialized_value) : LogoPath_=boost::none;
	val ? SerialPath_.reset(boost::initialized_value) : SerialPath_=boost::none;
	val ? TextValue_.reset(boost::initialized_value) : TextValue_=boost::none;
}

void	GC_PrintTableRowInfoImp::SData::Flip()
{
	DesignPrintTableRowID_ ? DesignPrintTableRowID_=boost::none : DesignPrintTableRowID_.reset(boost::initialized_value);
	DesignPrintTableID_ ? DesignPrintTableID_=boost::none : DesignPrintTableID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	TableSign_ ? TableSign_=boost::none : TableSign_.reset(boost::initialized_value);
	RowNumber_ ? RowNumber_=boost::none : RowNumber_.reset(boost::initialized_value);
	WhichLine_ ? WhichLine_=boost::none : WhichLine_.reset(boost::initialized_value);
	Align_ ? Align_=boost::none : Align_.reset(boost::initialized_value);
	LogoSign_ ? LogoSign_=boost::none : LogoSign_.reset(boost::initialized_value);
	TextPos_ ? TextPos_=boost::none : TextPos_.reset(boost::initialized_value);
	SetLine_ ? SetLine_=boost::none : SetLine_.reset(boost::initialized_value);
	HasLogo_ ? HasLogo_=boost::none : HasLogo_.reset(boost::initialized_value);
	IsSelected_ ? IsSelected_=boost::none : IsSelected_.reset(boost::initialized_value);
	LineUp_ ? LineUp_=boost::none : LineUp_.reset(boost::initialized_value);
	LineDown_ ? LineDown_=boost::none : LineDown_.reset(boost::initialized_value);
	LineLeft_ ? LineLeft_=boost::none : LineLeft_.reset(boost::initialized_value);
	LineRight_ ? LineRight_=boost::none : LineRight_.reset(boost::initialized_value);
	LineUpSign_ ? LineUpSign_=boost::none : LineUpSign_.reset(boost::initialized_value);
	LineDownSign_ ? LineDownSign_=boost::none : LineDownSign_.reset(boost::initialized_value);
	LineLeftSign_ ? LineLeftSign_=boost::none : LineLeftSign_.reset(boost::initialized_value);
	LineRightSign_ ? LineRightSign_=boost::none : LineRightSign_.reset(boost::initialized_value);
	LineWidth_ ? LineWidth_=boost::none : LineWidth_.reset(boost::initialized_value);
	LeftTopX_ ? LeftTopX_=boost::none : LeftTopX_.reset(boost::initialized_value);
	LeftTopY_ ? LeftTopY_=boost::none : LeftTopY_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	LineUpWidth_ ? LineUpWidth_=boost::none : LineUpWidth_.reset(boost::initialized_value);
	LineDownWidth_ ? LineDownWidth_=boost::none : LineDownWidth_.reset(boost::initialized_value);
	LineRightWidth_ ? LineRightWidth_=boost::none : LineRightWidth_.reset(boost::initialized_value);
	LineLeftWidth_ ? LineLeftWidth_=boost::none : LineLeftWidth_.reset(boost::initialized_value);
	FaceName_ ? FaceName_=boost::none : FaceName_.reset(boost::initialized_value);
	LogoPath_ ? LogoPath_=boost::none : LogoPath_.reset(boost::initialized_value);
	SerialPath_ ? SerialPath_=boost::none : SerialPath_.reset(boost::initialized_value);
	TextValue_ ? TextValue_=boost::none : TextValue_.reset(boost::initialized_value);
}

void	GC_PrintTableRowInfoImp::SData::Check()
{
	if ( !DesignPrintTableRowID_ )
	{
		DesignPrintTableRowID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintTableID_ )
	{
		DesignPrintTableID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !TableSign_ )
	{
		TableSign_.reset(boost::initialized_value);
	}
	if ( !RowNumber_ )
	{
		RowNumber_.reset(boost::initialized_value);
	}
	if ( !WhichLine_ )
	{
		WhichLine_.reset(boost::initialized_value);
	}
	if ( !Align_ )
	{
		Align_.reset(boost::initialized_value);
	}
	if ( !LogoSign_ )
	{
		LogoSign_.reset(boost::initialized_value);
	}
	if ( !TextPos_ )
	{
		TextPos_.reset(boost::initialized_value);
	}
	if ( !SetLine_ )
	{
		SetLine_.reset(boost::initialized_value);
	}
	if ( !HasLogo_ )
	{
		HasLogo_.reset(boost::initialized_value);
	}
	if ( !IsSelected_ )
	{
		IsSelected_.reset(boost::initialized_value);
	}
	if ( !LineUp_ )
	{
		LineUp_.reset(boost::initialized_value);
	}
	if ( !LineDown_ )
	{
		LineDown_.reset(boost::initialized_value);
	}
	if ( !LineLeft_ )
	{
		LineLeft_.reset(boost::initialized_value);
	}
	if ( !LineRight_ )
	{
		LineRight_.reset(boost::initialized_value);
	}
	if ( !LineUpSign_ )
	{
		LineUpSign_.reset(boost::initialized_value);
	}
	if ( !LineDownSign_ )
	{
		LineDownSign_.reset(boost::initialized_value);
	}
	if ( !LineLeftSign_ )
	{
		LineLeftSign_.reset(boost::initialized_value);
	}
	if ( !LineRightSign_ )
	{
		LineRightSign_.reset(boost::initialized_value);
	}
	if ( !LineWidth_ )
	{
		LineWidth_.reset(boost::initialized_value);
	}
	if ( !LeftTopX_ )
	{
		LeftTopX_.reset(boost::initialized_value);
	}
	if ( !LeftTopY_ )
	{
		LeftTopY_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !LineUpWidth_ )
	{
		LineUpWidth_.reset(boost::initialized_value);
	}
	if ( !LineDownWidth_ )
	{
		LineDownWidth_.reset(boost::initialized_value);
	}
	if ( !LineRightWidth_ )
	{
		LineRightWidth_.reset(boost::initialized_value);
	}
	if ( !LineLeftWidth_ )
	{
		LineLeftWidth_.reset(boost::initialized_value);
	}
	if ( !FaceName_ )
	{
		FaceName_.reset(boost::initialized_value);
	}
	if ( !LogoPath_ )
	{
		LogoPath_.reset(boost::initialized_value);
	}
	if ( !SerialPath_ )
	{
		SerialPath_.reset(boost::initialized_value);
	}
	if ( !TextValue_ )
	{
		TextValue_.reset(boost::initialized_value);
	}
}

void	GC_PrintTableRowInfoImp::SData::ToUtf8()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::to_utf<char>(*FaceName_, "GBK");
	}
	if ( LogoPath_ )
	{
		LogoPath_ = boost::locale::conv::to_utf<char>(*LogoPath_, "GBK");
	}
	if ( SerialPath_ )
	{
		SerialPath_ = boost::locale::conv::to_utf<char>(*SerialPath_, "GBK");
	}
	if ( TextValue_ )
	{
		TextValue_ = boost::locale::conv::to_utf<char>(*TextValue_, "GBK");
	}
}

void	GC_PrintTableRowInfoImp::SData::ToAscii()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::from_utf(*FaceName_, "GBK");
	}
	if ( LogoPath_ )
	{
		LogoPath_ = boost::locale::conv::from_utf(*LogoPath_, "GBK");
	}
	if ( SerialPath_ )
	{
		SerialPath_ = boost::locale::conv::from_utf(*SerialPath_, "GBK");
	}
	if ( TextValue_ )
	{
		TextValue_ = boost::locale::conv::from_utf(*TextValue_, "GBK");
	}
}

autoDB::SColumns GC_PrintTableRowInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignPrintTableRowID_ )
	{
		ret.With(DesignPrintTableRowID.Use(data.DesignPrintTableRowID_));
	}
	if ( data.DesignPrintTableID_ )
	{
		ret.With(DesignPrintTableID.Use(data.DesignPrintTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.TableSign_ )
	{
		ret.With(TableSign.Use(data.TableSign_));
	}
	if ( data.RowNumber_ )
	{
		ret.With(RowNumber.Use(data.RowNumber_));
	}
	if ( data.WhichLine_ )
	{
		ret.With(WhichLine.Use(data.WhichLine_));
	}
	if ( data.Align_ )
	{
		ret.With(Align.Use(data.Align_));
	}
	if ( data.LogoSign_ )
	{
		ret.With(LogoSign.Use(data.LogoSign_));
	}
	if ( data.TextPos_ )
	{
		ret.With(TextPos.Use(data.TextPos_));
	}
	if ( data.SetLine_ )
	{
		ret.With(SetLine.Use(data.SetLine_));
	}
	if ( data.HasLogo_ )
	{
		ret.With(HasLogo.Use(data.HasLogo_));
	}
	if ( data.IsSelected_ )
	{
		ret.With(IsSelected.Use(data.IsSelected_));
	}
	if ( data.LineUp_ )
	{
		ret.With(LineUp.Use(data.LineUp_));
	}
	if ( data.LineDown_ )
	{
		ret.With(LineDown.Use(data.LineDown_));
	}
	if ( data.LineLeft_ )
	{
		ret.With(LineLeft.Use(data.LineLeft_));
	}
	if ( data.LineRight_ )
	{
		ret.With(LineRight.Use(data.LineRight_));
	}
	if ( data.LineUpSign_ )
	{
		ret.With(LineUpSign.Use(data.LineUpSign_));
	}
	if ( data.LineDownSign_ )
	{
		ret.With(LineDownSign.Use(data.LineDownSign_));
	}
	if ( data.LineLeftSign_ )
	{
		ret.With(LineLeftSign.Use(data.LineLeftSign_));
	}
	if ( data.LineRightSign_ )
	{
		ret.With(LineRightSign.Use(data.LineRightSign_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Use(data.LineWidth_));
	}
	if ( data.LeftTopX_ )
	{
		ret.With(LeftTopX.Use(data.LeftTopX_));
	}
	if ( data.LeftTopY_ )
	{
		ret.With(LeftTopY.Use(data.LeftTopY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.LineUpWidth_ )
	{
		ret.With(LineUpWidth.Use(data.LineUpWidth_));
	}
	if ( data.LineDownWidth_ )
	{
		ret.With(LineDownWidth.Use(data.LineDownWidth_));
	}
	if ( data.LineRightWidth_ )
	{
		ret.With(LineRightWidth.Use(data.LineRightWidth_));
	}
	if ( data.LineLeftWidth_ )
	{
		ret.With(LineLeftWidth.Use(data.LineLeftWidth_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Use(data.FaceName_));
	}
	if ( data.LogoPath_ )
	{
		ret.With(LogoPath.Use(data.LogoPath_));
	}
	if ( data.SerialPath_ )
	{
		ret.With(SerialPath.Use(data.SerialPath_));
	}
	if ( data.TextValue_ )
	{
		ret.With(TextValue.Use(data.TextValue_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_PrintTableRowInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignPrintTableRowID_ )
	{
		ret.With(DesignPrintTableRowID.Into(data.DesignPrintTableRowID_));
	}
	if ( data.DesignPrintTableID_ )
	{
		ret.With(DesignPrintTableID.Into(data.DesignPrintTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.TableSign_ )
	{
		ret.With(TableSign.Into(data.TableSign_));
	}
	if ( data.RowNumber_ )
	{
		ret.With(RowNumber.Into(data.RowNumber_));
	}
	if ( data.WhichLine_ )
	{
		ret.With(WhichLine.Into(data.WhichLine_));
	}
	if ( data.Align_ )
	{
		ret.With(Align.Into(data.Align_));
	}
	if ( data.LogoSign_ )
	{
		ret.With(LogoSign.Into(data.LogoSign_));
	}
	if ( data.TextPos_ )
	{
		ret.With(TextPos.Into(data.TextPos_));
	}
	if ( data.SetLine_ )
	{
		ret.With(SetLine.Into(data.SetLine_));
	}
	if ( data.HasLogo_ )
	{
		ret.With(HasLogo.Into(data.HasLogo_));
	}
	if ( data.IsSelected_ )
	{
		ret.With(IsSelected.Into(data.IsSelected_));
	}
	if ( data.LineUp_ )
	{
		ret.With(LineUp.Into(data.LineUp_));
	}
	if ( data.LineDown_ )
	{
		ret.With(LineDown.Into(data.LineDown_));
	}
	if ( data.LineLeft_ )
	{
		ret.With(LineLeft.Into(data.LineLeft_));
	}
	if ( data.LineRight_ )
	{
		ret.With(LineRight.Into(data.LineRight_));
	}
	if ( data.LineUpSign_ )
	{
		ret.With(LineUpSign.Into(data.LineUpSign_));
	}
	if ( data.LineDownSign_ )
	{
		ret.With(LineDownSign.Into(data.LineDownSign_));
	}
	if ( data.LineLeftSign_ )
	{
		ret.With(LineLeftSign.Into(data.LineLeftSign_));
	}
	if ( data.LineRightSign_ )
	{
		ret.With(LineRightSign.Into(data.LineRightSign_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Into(data.LineWidth_));
	}
	if ( data.LeftTopX_ )
	{
		ret.With(LeftTopX.Into(data.LeftTopX_));
	}
	if ( data.LeftTopY_ )
	{
		ret.With(LeftTopY.Into(data.LeftTopY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.LineUpWidth_ )
	{
		ret.With(LineUpWidth.Into(data.LineUpWidth_));
	}
	if ( data.LineDownWidth_ )
	{
		ret.With(LineDownWidth.Into(data.LineDownWidth_));
	}
	if ( data.LineRightWidth_ )
	{
		ret.With(LineRightWidth.Into(data.LineRightWidth_));
	}
	if ( data.LineLeftWidth_ )
	{
		ret.With(LineLeftWidth.Into(data.LineLeftWidth_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Into(data.FaceName_));
	}
	if ( data.LogoPath_ )
	{
		ret.With(LogoPath.Into(data.LogoPath_));
	}
	if ( data.SerialPath_ )
	{
		ret.With(SerialPath.Into(data.SerialPath_));
	}
	if ( data.TextValue_ )
	{
		ret.With(TextValue.Into(data.TextValue_));
	}
	return std::move(ret);
}


GC_PrintTableRowInfoImp	GC_PrintTableRowInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_PrintTableRowInfoImp(alias));
}

GC_PrintTableRowInfoImp::GC_PrintTableRowInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_PrintTableRowInfo"), alias)
	,DesignPrintTableRowID(ImpSPtr_,AUTODB_STR("DesignPrintTableRowID"))
	,DesignPrintTableID(ImpSPtr_,AUTODB_STR("DesignPrintTableID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,TableSign(ImpSPtr_,AUTODB_STR("TableSign"))
	,RowNumber(ImpSPtr_,AUTODB_STR("RowNumber"))
	,WhichLine(ImpSPtr_,AUTODB_STR("WhichLine"))
	,Align(ImpSPtr_,AUTODB_STR("Align"))
	,LogoSign(ImpSPtr_,AUTODB_STR("LogoSign"))
	,TextPos(ImpSPtr_,AUTODB_STR("TextPos"))
	,SetLine(ImpSPtr_,AUTODB_STR("SetLine"))
	,HasLogo(ImpSPtr_,AUTODB_STR("HasLogo"))
	,IsSelected(ImpSPtr_,AUTODB_STR("IsSelected"))
	,LineUp(ImpSPtr_,AUTODB_STR("LineUp"))
	,LineDown(ImpSPtr_,AUTODB_STR("LineDown"))
	,LineLeft(ImpSPtr_,AUTODB_STR("LineLeft"))
	,LineRight(ImpSPtr_,AUTODB_STR("LineRight"))
	,LineUpSign(ImpSPtr_,AUTODB_STR("LineUpSign"))
	,LineDownSign(ImpSPtr_,AUTODB_STR("LineDownSign"))
	,LineLeftSign(ImpSPtr_,AUTODB_STR("LineLeftSign"))
	,LineRightSign(ImpSPtr_,AUTODB_STR("LineRightSign"))
	,LineWidth(ImpSPtr_,AUTODB_STR("LineWidth"))
	,LeftTopX(ImpSPtr_,AUTODB_STR("LeftTopX"))
	,LeftTopY(ImpSPtr_,AUTODB_STR("LeftTopY"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,LineUpWidth(ImpSPtr_,AUTODB_STR("LineUpWidth"))
	,LineDownWidth(ImpSPtr_,AUTODB_STR("LineDownWidth"))
	,LineRightWidth(ImpSPtr_,AUTODB_STR("LineRightWidth"))
	,LineLeftWidth(ImpSPtr_,AUTODB_STR("LineLeftWidth"))
	,FaceName(ImpSPtr_,AUTODB_STR("FaceName"))
	,LogoPath(ImpSPtr_,AUTODB_STR("LogoPath"))
	,SerialPath(ImpSPtr_,AUTODB_STR("SerialPath"))
	,TextValue(ImpSPtr_,AUTODB_STR("TextValue"))
{}

GC_PrintTableRowInfoImp::GC_PrintTableRowInfoImp( const GC_PrintTableRowInfoImp& rhs ):Table(rhs)
	,DesignPrintTableRowID(rhs.DesignPrintTableRowID)
	,DesignPrintTableID(rhs.DesignPrintTableID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,TableSign(rhs.TableSign)
	,RowNumber(rhs.RowNumber)
	,WhichLine(rhs.WhichLine)
	,Align(rhs.Align)
	,LogoSign(rhs.LogoSign)
	,TextPos(rhs.TextPos)
	,SetLine(rhs.SetLine)
	,HasLogo(rhs.HasLogo)
	,IsSelected(rhs.IsSelected)
	,LineUp(rhs.LineUp)
	,LineDown(rhs.LineDown)
	,LineLeft(rhs.LineLeft)
	,LineRight(rhs.LineRight)
	,LineUpSign(rhs.LineUpSign)
	,LineDownSign(rhs.LineDownSign)
	,LineLeftSign(rhs.LineLeftSign)
	,LineRightSign(rhs.LineRightSign)
	,LineWidth(rhs.LineWidth)
	,LeftTopX(rhs.LeftTopX)
	,LeftTopY(rhs.LeftTopY)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,LineUpWidth(rhs.LineUpWidth)
	,LineDownWidth(rhs.LineDownWidth)
	,LineRightWidth(rhs.LineRightWidth)
	,LineLeftWidth(rhs.LineLeftWidth)
	,FaceName(rhs.FaceName)
	,LogoPath(rhs.LogoPath)
	,SerialPath(rhs.SerialPath)
	,TextValue(rhs.TextValue)
{}

GC_PrintTableRowInfoImp::GC_PrintTableRowInfoImp( GC_PrintTableRowInfoImp&& rhs ):Table(rhs)
	,DesignPrintTableRowID(std::move(rhs.DesignPrintTableRowID))
	,DesignPrintTableID(std::move(rhs.DesignPrintTableID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,TableSign(std::move(rhs.TableSign))
	,RowNumber(std::move(rhs.RowNumber))
	,WhichLine(std::move(rhs.WhichLine))
	,Align(std::move(rhs.Align))
	,LogoSign(std::move(rhs.LogoSign))
	,TextPos(std::move(rhs.TextPos))
	,SetLine(std::move(rhs.SetLine))
	,HasLogo(std::move(rhs.HasLogo))
	,IsSelected(std::move(rhs.IsSelected))
	,LineUp(std::move(rhs.LineUp))
	,LineDown(std::move(rhs.LineDown))
	,LineLeft(std::move(rhs.LineLeft))
	,LineRight(std::move(rhs.LineRight))
	,LineUpSign(std::move(rhs.LineUpSign))
	,LineDownSign(std::move(rhs.LineDownSign))
	,LineLeftSign(std::move(rhs.LineLeftSign))
	,LineRightSign(std::move(rhs.LineRightSign))
	,LineWidth(std::move(rhs.LineWidth))
	,LeftTopX(std::move(rhs.LeftTopX))
	,LeftTopY(std::move(rhs.LeftTopY))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,LineUpWidth(std::move(rhs.LineUpWidth))
	,LineDownWidth(std::move(rhs.LineDownWidth))
	,LineRightWidth(std::move(rhs.LineRightWidth))
	,LineLeftWidth(std::move(rhs.LineLeftWidth))
	,FaceName(std::move(rhs.FaceName))
	,LogoPath(std::move(rhs.LogoPath))
	,SerialPath(std::move(rhs.SerialPath))
	,TextValue(std::move(rhs.TextValue))
{}

GC_PrintTableRowInfoImp	GC_PrintTableRowInfo("");



void	GC_ProductInfoImp::SData::SetAll(bool val)
{
	val ? DesignProductID_.reset(boost::initialized_value) : DesignProductID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? ProductID_.reset(boost::initialized_value) : ProductID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockObjType_.reset(boost::initialized_value) : DockObjType_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? YPos_.reset(boost::initialized_value) : YPos_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_ProductInfoImp::SData::Flip()
{
	DesignProductID_ ? DesignProductID_=boost::none : DesignProductID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	ProductID_ ? ProductID_=boost::none : ProductID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockObjType_ ? DockObjType_=boost::none : DockObjType_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	YPos_ ? YPos_=boost::none : YPos_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_ProductInfoImp::SData::Check()
{
	if ( !DesignProductID_ )
	{
		DesignProductID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !ProductID_ )
	{
		ProductID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockObjType_ )
	{
		DockObjType_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !YPos_ )
	{
		YPos_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_ProductInfoImp::SData::ToUtf8()
{
}

void	GC_ProductInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_ProductInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignProductID_ )
	{
		ret.With(DesignProductID.Use(data.DesignProductID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.ProductID_ )
	{
		ret.With(ProductID.Use(data.ProductID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Use(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Use(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_ProductInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignProductID_ )
	{
		ret.With(DesignProductID.Into(data.DesignProductID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.ProductID_ )
	{
		ret.With(ProductID.Into(data.ProductID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockObjType_ )
	{
		ret.With(DockObjType.Into(data.DockObjType_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Into(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_ProductInfoImp	GC_ProductInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_ProductInfoImp(alias));
}

GC_ProductInfoImp::GC_ProductInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_ProductInfo"), alias)
	,DesignProductID(ImpSPtr_,AUTODB_STR("DesignProductID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,ProductID(ImpSPtr_,AUTODB_STR("ProductID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockObjType(ImpSPtr_,AUTODB_STR("DockObjType"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,YPos(ImpSPtr_,AUTODB_STR("YPos"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_ProductInfoImp::GC_ProductInfoImp( const GC_ProductInfoImp& rhs ):Table(rhs)
	,DesignProductID(rhs.DesignProductID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,ProductID(rhs.ProductID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,DockObjID(rhs.DockObjID)
	,DockObjType(rhs.DockObjType)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,YPos(rhs.YPos)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_ProductInfoImp::GC_ProductInfoImp( GC_ProductInfoImp&& rhs ):Table(rhs)
	,DesignProductID(std::move(rhs.DesignProductID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,ProductID(std::move(rhs.ProductID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,DockObjID(std::move(rhs.DockObjID))
	,DockObjType(std::move(rhs.DockObjType))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,YPos(std::move(rhs.YPos))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_ProductInfoImp	GC_ProductInfo("");



void	GC_RemarkInfoImp::SData::SetAll(bool val)
{
	val ? DesignRemarkID_.reset(boost::initialized_value) : DesignRemarkID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? PrintID_.reset(boost::initialized_value) : PrintID_=boost::none;
	val ? ViewType_.reset(boost::initialized_value) : ViewType_=boost::none;
	val ? BGColor_.reset(boost::initialized_value) : BGColor_=boost::none;
	val ? ForeColor_.reset(boost::initialized_value) : ForeColor_=boost::none;
	val ? FontSize_.reset(boost::initialized_value) : FontSize_=boost::none;
	val ? FontStyle_.reset(boost::initialized_value) : FontStyle_=boost::none;
	val ? LineSpace_.reset(boost::initialized_value) : LineSpace_=boost::none;
	val ? ArrowID_.reset(boost::initialized_value) : ArrowID_=boost::none;
	val ? ArrowStyle_.reset(boost::initialized_value) : ArrowStyle_=boost::none;
	val ? FrameStyle_.reset(boost::initialized_value) : FrameStyle_=boost::none;
	val ? FrameColor_.reset(boost::initialized_value) : FrameColor_=boost::none;
	val ? DirectLine_.reset(boost::initialized_value) : DirectLine_=boost::none;
	val ? DirectStyle_.reset(boost::initialized_value) : DirectStyle_=boost::none;
	val ? DirectLineStyle_.reset(boost::initialized_value) : DirectLineStyle_=boost::none;
	val ? CommentFrameStyle_.reset(boost::initialized_value) : CommentFrameStyle_=boost::none;
	val ? IsSingleMode_.reset(boost::initialized_value) : IsSingleMode_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? StrickOut_.reset(boost::initialized_value) : StrickOut_=boost::none;
	val ? UnderLine_.reset(boost::initialized_value) : UnderLine_=boost::none;
	val ? Italic_.reset(boost::initialized_value) : Italic_=boost::none;
	val ? Bold_.reset(boost::initialized_value) : Bold_=boost::none;
	val ? FrameWidth_.reset(boost::initialized_value) : FrameWidth_=boost::none;
	val ? ArrowX_.reset(boost::initialized_value) : ArrowX_=boost::none;
	val ? ArrowY_.reset(boost::initialized_value) : ArrowY_=boost::none;
	val ? StartX_.reset(boost::initialized_value) : StartX_=boost::none;
	val ? StartY_.reset(boost::initialized_value) : StartY_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? FaceName_.reset(boost::initialized_value) : FaceName_=boost::none;
	val ? RemarkText_.reset(boost::initialized_value) : RemarkText_=boost::none;
}

void	GC_RemarkInfoImp::SData::Flip()
{
	DesignRemarkID_ ? DesignRemarkID_=boost::none : DesignRemarkID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	PrintID_ ? PrintID_=boost::none : PrintID_.reset(boost::initialized_value);
	ViewType_ ? ViewType_=boost::none : ViewType_.reset(boost::initialized_value);
	BGColor_ ? BGColor_=boost::none : BGColor_.reset(boost::initialized_value);
	ForeColor_ ? ForeColor_=boost::none : ForeColor_.reset(boost::initialized_value);
	FontSize_ ? FontSize_=boost::none : FontSize_.reset(boost::initialized_value);
	FontStyle_ ? FontStyle_=boost::none : FontStyle_.reset(boost::initialized_value);
	LineSpace_ ? LineSpace_=boost::none : LineSpace_.reset(boost::initialized_value);
	ArrowID_ ? ArrowID_=boost::none : ArrowID_.reset(boost::initialized_value);
	ArrowStyle_ ? ArrowStyle_=boost::none : ArrowStyle_.reset(boost::initialized_value);
	FrameStyle_ ? FrameStyle_=boost::none : FrameStyle_.reset(boost::initialized_value);
	FrameColor_ ? FrameColor_=boost::none : FrameColor_.reset(boost::initialized_value);
	DirectLine_ ? DirectLine_=boost::none : DirectLine_.reset(boost::initialized_value);
	DirectStyle_ ? DirectStyle_=boost::none : DirectStyle_.reset(boost::initialized_value);
	DirectLineStyle_ ? DirectLineStyle_=boost::none : DirectLineStyle_.reset(boost::initialized_value);
	CommentFrameStyle_ ? CommentFrameStyle_=boost::none : CommentFrameStyle_.reset(boost::initialized_value);
	IsSingleMode_ ? IsSingleMode_=boost::none : IsSingleMode_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	StrickOut_ ? StrickOut_=boost::none : StrickOut_.reset(boost::initialized_value);
	UnderLine_ ? UnderLine_=boost::none : UnderLine_.reset(boost::initialized_value);
	Italic_ ? Italic_=boost::none : Italic_.reset(boost::initialized_value);
	Bold_ ? Bold_=boost::none : Bold_.reset(boost::initialized_value);
	FrameWidth_ ? FrameWidth_=boost::none : FrameWidth_.reset(boost::initialized_value);
	ArrowX_ ? ArrowX_=boost::none : ArrowX_.reset(boost::initialized_value);
	ArrowY_ ? ArrowY_=boost::none : ArrowY_.reset(boost::initialized_value);
	StartX_ ? StartX_=boost::none : StartX_.reset(boost::initialized_value);
	StartY_ ? StartY_=boost::none : StartY_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	FaceName_ ? FaceName_=boost::none : FaceName_.reset(boost::initialized_value);
	RemarkText_ ? RemarkText_=boost::none : RemarkText_.reset(boost::initialized_value);
}

void	GC_RemarkInfoImp::SData::Check()
{
	if ( !DesignRemarkID_ )
	{
		DesignRemarkID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !PrintID_ )
	{
		PrintID_.reset(boost::initialized_value);
	}
	if ( !ViewType_ )
	{
		ViewType_.reset(boost::initialized_value);
	}
	if ( !BGColor_ )
	{
		BGColor_.reset(boost::initialized_value);
	}
	if ( !ForeColor_ )
	{
		ForeColor_.reset(boost::initialized_value);
	}
	if ( !FontSize_ )
	{
		FontSize_.reset(boost::initialized_value);
	}
	if ( !FontStyle_ )
	{
		FontStyle_.reset(boost::initialized_value);
	}
	if ( !LineSpace_ )
	{
		LineSpace_.reset(boost::initialized_value);
	}
	if ( !ArrowID_ )
	{
		ArrowID_.reset(boost::initialized_value);
	}
	if ( !ArrowStyle_ )
	{
		ArrowStyle_.reset(boost::initialized_value);
	}
	if ( !FrameStyle_ )
	{
		FrameStyle_.reset(boost::initialized_value);
	}
	if ( !FrameColor_ )
	{
		FrameColor_.reset(boost::initialized_value);
	}
	if ( !DirectLine_ )
	{
		DirectLine_.reset(boost::initialized_value);
	}
	if ( !DirectStyle_ )
	{
		DirectStyle_.reset(boost::initialized_value);
	}
	if ( !DirectLineStyle_ )
	{
		DirectLineStyle_.reset(boost::initialized_value);
	}
	if ( !CommentFrameStyle_ )
	{
		CommentFrameStyle_.reset(boost::initialized_value);
	}
	if ( !IsSingleMode_ )
	{
		IsSingleMode_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !StrickOut_ )
	{
		StrickOut_.reset(boost::initialized_value);
	}
	if ( !UnderLine_ )
	{
		UnderLine_.reset(boost::initialized_value);
	}
	if ( !Italic_ )
	{
		Italic_.reset(boost::initialized_value);
	}
	if ( !Bold_ )
	{
		Bold_.reset(boost::initialized_value);
	}
	if ( !FrameWidth_ )
	{
		FrameWidth_.reset(boost::initialized_value);
	}
	if ( !ArrowX_ )
	{
		ArrowX_.reset(boost::initialized_value);
	}
	if ( !ArrowY_ )
	{
		ArrowY_.reset(boost::initialized_value);
	}
	if ( !StartX_ )
	{
		StartX_.reset(boost::initialized_value);
	}
	if ( !StartY_ )
	{
		StartY_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !FaceName_ )
	{
		FaceName_.reset(boost::initialized_value);
	}
	if ( !RemarkText_ )
	{
		RemarkText_.reset(boost::initialized_value);
	}
}

void	GC_RemarkInfoImp::SData::ToUtf8()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::to_utf<char>(*FaceName_, "GBK");
	}
	if ( RemarkText_ )
	{
		RemarkText_ = boost::locale::conv::to_utf<char>(*RemarkText_, "GBK");
	}
}

void	GC_RemarkInfoImp::SData::ToAscii()
{
	if ( FaceName_ )
	{
		FaceName_ = boost::locale::conv::from_utf(*FaceName_, "GBK");
	}
	if ( RemarkText_ )
	{
		RemarkText_ = boost::locale::conv::from_utf(*RemarkText_, "GBK");
	}
}

autoDB::SColumns GC_RemarkInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignRemarkID_ )
	{
		ret.With(DesignRemarkID.Use(data.DesignRemarkID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Use(data.PrintID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Use(data.ViewType_));
	}
	if ( data.BGColor_ )
	{
		ret.With(BGColor.Use(data.BGColor_));
	}
	if ( data.ForeColor_ )
	{
		ret.With(ForeColor.Use(data.ForeColor_));
	}
	if ( data.FontSize_ )
	{
		ret.With(FontSize.Use(data.FontSize_));
	}
	if ( data.FontStyle_ )
	{
		ret.With(FontStyle.Use(data.FontStyle_));
	}
	if ( data.LineSpace_ )
	{
		ret.With(LineSpace.Use(data.LineSpace_));
	}
	if ( data.ArrowID_ )
	{
		ret.With(ArrowID.Use(data.ArrowID_));
	}
	if ( data.ArrowStyle_ )
	{
		ret.With(ArrowStyle.Use(data.ArrowStyle_));
	}
	if ( data.FrameStyle_ )
	{
		ret.With(FrameStyle.Use(data.FrameStyle_));
	}
	if ( data.FrameColor_ )
	{
		ret.With(FrameColor.Use(data.FrameColor_));
	}
	if ( data.DirectLine_ )
	{
		ret.With(DirectLine.Use(data.DirectLine_));
	}
	if ( data.DirectStyle_ )
	{
		ret.With(DirectStyle.Use(data.DirectStyle_));
	}
	if ( data.DirectLineStyle_ )
	{
		ret.With(DirectLineStyle.Use(data.DirectLineStyle_));
	}
	if ( data.CommentFrameStyle_ )
	{
		ret.With(CommentFrameStyle.Use(data.CommentFrameStyle_));
	}
	if ( data.IsSingleMode_ )
	{
		ret.With(IsSingleMode.Use(data.IsSingleMode_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.StrickOut_ )
	{
		ret.With(StrickOut.Use(data.StrickOut_));
	}
	if ( data.UnderLine_ )
	{
		ret.With(UnderLine.Use(data.UnderLine_));
	}
	if ( data.Italic_ )
	{
		ret.With(Italic.Use(data.Italic_));
	}
	if ( data.Bold_ )
	{
		ret.With(Bold.Use(data.Bold_));
	}
	if ( data.FrameWidth_ )
	{
		ret.With(FrameWidth.Use(data.FrameWidth_));
	}
	if ( data.ArrowX_ )
	{
		ret.With(ArrowX.Use(data.ArrowX_));
	}
	if ( data.ArrowY_ )
	{
		ret.With(ArrowY.Use(data.ArrowY_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Use(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Use(data.StartY_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Use(data.FaceName_));
	}
	if ( data.RemarkText_ )
	{
		ret.With(RemarkText.Use(data.RemarkText_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_RemarkInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignRemarkID_ )
	{
		ret.With(DesignRemarkID.Into(data.DesignRemarkID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Into(data.PrintID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Into(data.ViewType_));
	}
	if ( data.BGColor_ )
	{
		ret.With(BGColor.Into(data.BGColor_));
	}
	if ( data.ForeColor_ )
	{
		ret.With(ForeColor.Into(data.ForeColor_));
	}
	if ( data.FontSize_ )
	{
		ret.With(FontSize.Into(data.FontSize_));
	}
	if ( data.FontStyle_ )
	{
		ret.With(FontStyle.Into(data.FontStyle_));
	}
	if ( data.LineSpace_ )
	{
		ret.With(LineSpace.Into(data.LineSpace_));
	}
	if ( data.ArrowID_ )
	{
		ret.With(ArrowID.Into(data.ArrowID_));
	}
	if ( data.ArrowStyle_ )
	{
		ret.With(ArrowStyle.Into(data.ArrowStyle_));
	}
	if ( data.FrameStyle_ )
	{
		ret.With(FrameStyle.Into(data.FrameStyle_));
	}
	if ( data.FrameColor_ )
	{
		ret.With(FrameColor.Into(data.FrameColor_));
	}
	if ( data.DirectLine_ )
	{
		ret.With(DirectLine.Into(data.DirectLine_));
	}
	if ( data.DirectStyle_ )
	{
		ret.With(DirectStyle.Into(data.DirectStyle_));
	}
	if ( data.DirectLineStyle_ )
	{
		ret.With(DirectLineStyle.Into(data.DirectLineStyle_));
	}
	if ( data.CommentFrameStyle_ )
	{
		ret.With(CommentFrameStyle.Into(data.CommentFrameStyle_));
	}
	if ( data.IsSingleMode_ )
	{
		ret.With(IsSingleMode.Into(data.IsSingleMode_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.StrickOut_ )
	{
		ret.With(StrickOut.Into(data.StrickOut_));
	}
	if ( data.UnderLine_ )
	{
		ret.With(UnderLine.Into(data.UnderLine_));
	}
	if ( data.Italic_ )
	{
		ret.With(Italic.Into(data.Italic_));
	}
	if ( data.Bold_ )
	{
		ret.With(Bold.Into(data.Bold_));
	}
	if ( data.FrameWidth_ )
	{
		ret.With(FrameWidth.Into(data.FrameWidth_));
	}
	if ( data.ArrowX_ )
	{
		ret.With(ArrowX.Into(data.ArrowX_));
	}
	if ( data.ArrowY_ )
	{
		ret.With(ArrowY.Into(data.ArrowY_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Into(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Into(data.StartY_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.FaceName_ )
	{
		ret.With(FaceName.Into(data.FaceName_));
	}
	if ( data.RemarkText_ )
	{
		ret.With(RemarkText.Into(data.RemarkText_));
	}
	return std::move(ret);
}


GC_RemarkInfoImp	GC_RemarkInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_RemarkInfoImp(alias));
}

GC_RemarkInfoImp::GC_RemarkInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_RemarkInfo"), alias)
	,DesignRemarkID(ImpSPtr_,AUTODB_STR("DesignRemarkID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,PrintID(ImpSPtr_,AUTODB_STR("PrintID"))
	,ViewType(ImpSPtr_,AUTODB_STR("ViewType"))
	,BGColor(ImpSPtr_,AUTODB_STR("BGColor"))
	,ForeColor(ImpSPtr_,AUTODB_STR("ForeColor"))
	,FontSize(ImpSPtr_,AUTODB_STR("FontSize"))
	,FontStyle(ImpSPtr_,AUTODB_STR("FontStyle"))
	,LineSpace(ImpSPtr_,AUTODB_STR("LineSpace"))
	,ArrowID(ImpSPtr_,AUTODB_STR("ArrowID"))
	,ArrowStyle(ImpSPtr_,AUTODB_STR("ArrowStyle"))
	,FrameStyle(ImpSPtr_,AUTODB_STR("FrameStyle"))
	,FrameColor(ImpSPtr_,AUTODB_STR("FrameColor"))
	,DirectLine(ImpSPtr_,AUTODB_STR("DirectLine"))
	,DirectStyle(ImpSPtr_,AUTODB_STR("DirectStyle"))
	,DirectLineStyle(ImpSPtr_,AUTODB_STR("DirectLineStyle"))
	,CommentFrameStyle(ImpSPtr_,AUTODB_STR("CommentFrameStyle"))
	,IsSingleMode(ImpSPtr_,AUTODB_STR("IsSingleMode"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,StrickOut(ImpSPtr_,AUTODB_STR("StrickOut"))
	,UnderLine(ImpSPtr_,AUTODB_STR("UnderLine"))
	,Italic(ImpSPtr_,AUTODB_STR("Italic"))
	,Bold(ImpSPtr_,AUTODB_STR("Bold"))
	,FrameWidth(ImpSPtr_,AUTODB_STR("FrameWidth"))
	,ArrowX(ImpSPtr_,AUTODB_STR("ArrowX"))
	,ArrowY(ImpSPtr_,AUTODB_STR("ArrowY"))
	,StartX(ImpSPtr_,AUTODB_STR("StartX"))
	,StartY(ImpSPtr_,AUTODB_STR("StartY"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,FaceName(ImpSPtr_,AUTODB_STR("FaceName"))
	,RemarkText(ImpSPtr_,AUTODB_STR("RemarkText"))
{}

GC_RemarkInfoImp::GC_RemarkInfoImp( const GC_RemarkInfoImp& rhs ):Table(rhs)
	,DesignRemarkID(rhs.DesignRemarkID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,DesignPrintID(rhs.DesignPrintID)
	,PrintID(rhs.PrintID)
	,ViewType(rhs.ViewType)
	,BGColor(rhs.BGColor)
	,ForeColor(rhs.ForeColor)
	,FontSize(rhs.FontSize)
	,FontStyle(rhs.FontStyle)
	,LineSpace(rhs.LineSpace)
	,ArrowID(rhs.ArrowID)
	,ArrowStyle(rhs.ArrowStyle)
	,FrameStyle(rhs.FrameStyle)
	,FrameColor(rhs.FrameColor)
	,DirectLine(rhs.DirectLine)
	,DirectStyle(rhs.DirectStyle)
	,DirectLineStyle(rhs.DirectLineStyle)
	,CommentFrameStyle(rhs.CommentFrameStyle)
	,IsSingleMode(rhs.IsSingleMode)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,StrickOut(rhs.StrickOut)
	,UnderLine(rhs.UnderLine)
	,Italic(rhs.Italic)
	,Bold(rhs.Bold)
	,FrameWidth(rhs.FrameWidth)
	,ArrowX(rhs.ArrowX)
	,ArrowY(rhs.ArrowY)
	,StartX(rhs.StartX)
	,StartY(rhs.StartY)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,FaceName(rhs.FaceName)
	,RemarkText(rhs.RemarkText)
{}

GC_RemarkInfoImp::GC_RemarkInfoImp( GC_RemarkInfoImp&& rhs ):Table(rhs)
	,DesignRemarkID(std::move(rhs.DesignRemarkID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,PrintID(std::move(rhs.PrintID))
	,ViewType(std::move(rhs.ViewType))
	,BGColor(std::move(rhs.BGColor))
	,ForeColor(std::move(rhs.ForeColor))
	,FontSize(std::move(rhs.FontSize))
	,FontStyle(std::move(rhs.FontStyle))
	,LineSpace(std::move(rhs.LineSpace))
	,ArrowID(std::move(rhs.ArrowID))
	,ArrowStyle(std::move(rhs.ArrowStyle))
	,FrameStyle(std::move(rhs.FrameStyle))
	,FrameColor(std::move(rhs.FrameColor))
	,DirectLine(std::move(rhs.DirectLine))
	,DirectStyle(std::move(rhs.DirectStyle))
	,DirectLineStyle(std::move(rhs.DirectLineStyle))
	,CommentFrameStyle(std::move(rhs.CommentFrameStyle))
	,IsSingleMode(std::move(rhs.IsSingleMode))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,StrickOut(std::move(rhs.StrickOut))
	,UnderLine(std::move(rhs.UnderLine))
	,Italic(std::move(rhs.Italic))
	,Bold(std::move(rhs.Bold))
	,FrameWidth(std::move(rhs.FrameWidth))
	,ArrowX(std::move(rhs.ArrowX))
	,ArrowY(std::move(rhs.ArrowY))
	,StartX(std::move(rhs.StartX))
	,StartY(std::move(rhs.StartY))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,FaceName(std::move(rhs.FaceName))
	,RemarkText(std::move(rhs.RemarkText))
{}

GC_RemarkInfoImp	GC_RemarkInfo("");



void	GC_ShapeInfoImp::SData::SetAll(bool val)
{
	val ? DesignShapeID_.reset(boost::initialized_value) : DesignShapeID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPrintID_.reset(boost::initialized_value) : DesignPrintID_=boost::none;
	val ? PrintID_.reset(boost::initialized_value) : PrintID_=boost::none;
	val ? ViewType_.reset(boost::initialized_value) : ViewType_=boost::none;
	val ? ShapeType_.reset(boost::initialized_value) : ShapeType_=boost::none;
	val ? LineWidth_.reset(boost::initialized_value) : LineWidth_=boost::none;
	val ? LineStyle_.reset(boost::initialized_value) : LineStyle_=boost::none;
	val ? StartX_.reset(boost::initialized_value) : StartX_=boost::none;
	val ? StartY_.reset(boost::initialized_value) : StartY_=boost::none;
	val ? StopX_.reset(boost::initialized_value) : StopX_=boost::none;
	val ? StopY_.reset(boost::initialized_value) : StopY_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? AttachFilePath_.reset(boost::initialized_value) : AttachFilePath_=boost::none;
}

void	GC_ShapeInfoImp::SData::Flip()
{
	DesignShapeID_ ? DesignShapeID_=boost::none : DesignShapeID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPrintID_ ? DesignPrintID_=boost::none : DesignPrintID_.reset(boost::initialized_value);
	PrintID_ ? PrintID_=boost::none : PrintID_.reset(boost::initialized_value);
	ViewType_ ? ViewType_=boost::none : ViewType_.reset(boost::initialized_value);
	ShapeType_ ? ShapeType_=boost::none : ShapeType_.reset(boost::initialized_value);
	LineWidth_ ? LineWidth_=boost::none : LineWidth_.reset(boost::initialized_value);
	LineStyle_ ? LineStyle_=boost::none : LineStyle_.reset(boost::initialized_value);
	StartX_ ? StartX_=boost::none : StartX_.reset(boost::initialized_value);
	StartY_ ? StartY_=boost::none : StartY_.reset(boost::initialized_value);
	StopX_ ? StopX_=boost::none : StopX_.reset(boost::initialized_value);
	StopY_ ? StopY_=boost::none : StopY_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	AttachFilePath_ ? AttachFilePath_=boost::none : AttachFilePath_.reset(boost::initialized_value);
}

void	GC_ShapeInfoImp::SData::Check()
{
	if ( !DesignShapeID_ )
	{
		DesignShapeID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPrintID_ )
	{
		DesignPrintID_.reset(boost::initialized_value);
	}
	if ( !PrintID_ )
	{
		PrintID_.reset(boost::initialized_value);
	}
	if ( !ViewType_ )
	{
		ViewType_.reset(boost::initialized_value);
	}
	if ( !ShapeType_ )
	{
		ShapeType_.reset(boost::initialized_value);
	}
	if ( !LineWidth_ )
	{
		LineWidth_.reset(boost::initialized_value);
	}
	if ( !LineStyle_ )
	{
		LineStyle_.reset(boost::initialized_value);
	}
	if ( !StartX_ )
	{
		StartX_.reset(boost::initialized_value);
	}
	if ( !StartY_ )
	{
		StartY_.reset(boost::initialized_value);
	}
	if ( !StopX_ )
	{
		StopX_.reset(boost::initialized_value);
	}
	if ( !StopY_ )
	{
		StopY_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
	if ( !AttachFilePath_ )
	{
		AttachFilePath_.reset(boost::initialized_value);
	}
}

void	GC_ShapeInfoImp::SData::ToUtf8()
{
	if ( AttachFilePath_ )
	{
		AttachFilePath_ = boost::locale::conv::to_utf<char>(*AttachFilePath_, "GBK");
	}
}

void	GC_ShapeInfoImp::SData::ToAscii()
{
	if ( AttachFilePath_ )
	{
		AttachFilePath_ = boost::locale::conv::from_utf(*AttachFilePath_, "GBK");
	}
}

autoDB::SColumns GC_ShapeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignShapeID_ )
	{
		ret.With(DesignShapeID.Use(data.DesignShapeID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Use(data.DesignPrintID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Use(data.PrintID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Use(data.ViewType_));
	}
	if ( data.ShapeType_ )
	{
		ret.With(ShapeType.Use(data.ShapeType_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Use(data.LineWidth_));
	}
	if ( data.LineStyle_ )
	{
		ret.With(LineStyle.Use(data.LineStyle_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Use(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Use(data.StartY_));
	}
	if ( data.StopX_ )
	{
		ret.With(StopX.Use(data.StopX_));
	}
	if ( data.StopY_ )
	{
		ret.With(StopY.Use(data.StopY_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	if ( data.AttachFilePath_ )
	{
		ret.With(AttachFilePath.Use(data.AttachFilePath_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_ShapeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignShapeID_ )
	{
		ret.With(DesignShapeID.Into(data.DesignShapeID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPrintID_ )
	{
		ret.With(DesignPrintID.Into(data.DesignPrintID_));
	}
	if ( data.PrintID_ )
	{
		ret.With(PrintID.Into(data.PrintID_));
	}
	if ( data.ViewType_ )
	{
		ret.With(ViewType.Into(data.ViewType_));
	}
	if ( data.ShapeType_ )
	{
		ret.With(ShapeType.Into(data.ShapeType_));
	}
	if ( data.LineWidth_ )
	{
		ret.With(LineWidth.Into(data.LineWidth_));
	}
	if ( data.LineStyle_ )
	{
		ret.With(LineStyle.Into(data.LineStyle_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Into(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Into(data.StartY_));
	}
	if ( data.StopX_ )
	{
		ret.With(StopX.Into(data.StopX_));
	}
	if ( data.StopY_ )
	{
		ret.With(StopY.Into(data.StopY_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	if ( data.AttachFilePath_ )
	{
		ret.With(AttachFilePath.Into(data.AttachFilePath_));
	}
	return std::move(ret);
}


GC_ShapeInfoImp	GC_ShapeInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_ShapeInfoImp(alias));
}

GC_ShapeInfoImp::GC_ShapeInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_ShapeInfo"), alias)
	,DesignShapeID(ImpSPtr_,AUTODB_STR("DesignShapeID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPrintID(ImpSPtr_,AUTODB_STR("DesignPrintID"))
	,PrintID(ImpSPtr_,AUTODB_STR("PrintID"))
	,ViewType(ImpSPtr_,AUTODB_STR("ViewType"))
	,ShapeType(ImpSPtr_,AUTODB_STR("ShapeType"))
	,LineWidth(ImpSPtr_,AUTODB_STR("LineWidth"))
	,LineStyle(ImpSPtr_,AUTODB_STR("LineStyle"))
	,StartX(ImpSPtr_,AUTODB_STR("StartX"))
	,StartY(ImpSPtr_,AUTODB_STR("StartY"))
	,StopX(ImpSPtr_,AUTODB_STR("StopX"))
	,StopY(ImpSPtr_,AUTODB_STR("StopY"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,AttachFilePath(ImpSPtr_,AUTODB_STR("AttachFilePath"))
{}

GC_ShapeInfoImp::GC_ShapeInfoImp( const GC_ShapeInfoImp& rhs ):Table(rhs)
	,DesignShapeID(rhs.DesignShapeID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,DesignPrintID(rhs.DesignPrintID)
	,PrintID(rhs.PrintID)
	,ViewType(rhs.ViewType)
	,ShapeType(rhs.ShapeType)
	,LineWidth(rhs.LineWidth)
	,LineStyle(rhs.LineStyle)
	,StartX(rhs.StartX)
	,StartY(rhs.StartY)
	,StopX(rhs.StopX)
	,StopY(rhs.StopY)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,AttachFilePath(rhs.AttachFilePath)
{}

GC_ShapeInfoImp::GC_ShapeInfoImp( GC_ShapeInfoImp&& rhs ):Table(rhs)
	,DesignShapeID(std::move(rhs.DesignShapeID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,DesignPrintID(std::move(rhs.DesignPrintID))
	,PrintID(std::move(rhs.PrintID))
	,ViewType(std::move(rhs.ViewType))
	,ShapeType(std::move(rhs.ShapeType))
	,LineWidth(std::move(rhs.LineWidth))
	,LineStyle(std::move(rhs.LineStyle))
	,StartX(std::move(rhs.StartX))
	,StartY(std::move(rhs.StartY))
	,StopX(std::move(rhs.StopX))
	,StopY(std::move(rhs.StopY))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,AttachFilePath(std::move(rhs.AttachFilePath))
{}

GC_ShapeInfoImp	GC_ShapeInfo("");



void	GC_SkinInfoImp::SData::SetAll(bool val)
{
	val ? DesignSkinID_.reset(boost::initialized_value) : DesignSkinID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DecorID_.reset(boost::initialized_value) : DecorID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? GroundLen_.reset(boost::initialized_value) : GroundLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_SkinInfoImp::SData::Flip()
{
	DesignSkinID_ ? DesignSkinID_=boost::none : DesignSkinID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DecorID_ ? DecorID_=boost::none : DecorID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	GroundLen_ ? GroundLen_=boost::none : GroundLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_SkinInfoImp::SData::Check()
{
	if ( !DesignSkinID_ )
	{
		DesignSkinID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DecorID_ )
	{
		DecorID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !GroundLen_ )
	{
		GroundLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_SkinInfoImp::SData::ToUtf8()
{
}

void	GC_SkinInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_SkinInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignSkinID_ )
	{
		ret.With(DesignSkinID.Use(data.DesignSkinID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Use(data.DecorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.GroundLen_ )
	{
		ret.With(GroundLen.Use(data.GroundLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_SkinInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignSkinID_ )
	{
		ret.With(DesignSkinID.Into(data.DesignSkinID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Into(data.DecorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.GroundLen_ )
	{
		ret.With(GroundLen.Into(data.GroundLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_SkinInfoImp	GC_SkinInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_SkinInfoImp(alias));
}

GC_SkinInfoImp::GC_SkinInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_SkinInfo"), alias)
	,DesignSkinID(ImpSPtr_,AUTODB_STR("DesignSkinID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DecorID(ImpSPtr_,AUTODB_STR("DecorID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,GroundLen(ImpSPtr_,AUTODB_STR("GroundLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_SkinInfoImp::GC_SkinInfoImp( const GC_SkinInfoImp& rhs ):Table(rhs)
	,DesignSkinID(rhs.DesignSkinID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,DecorID(rhs.DecorID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,GTypeID(rhs.GTypeID)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,GroundLen(rhs.GroundLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_SkinInfoImp::GC_SkinInfoImp( GC_SkinInfoImp&& rhs ):Table(rhs)
	,DesignSkinID(std::move(rhs.DesignSkinID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,DecorID(std::move(rhs.DecorID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,GTypeID(std::move(rhs.GTypeID))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,GroundLen(std::move(rhs.GroundLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_SkinInfoImp	GC_SkinInfo("");



void	GC_TableInfoImp::SData::SetAll(bool val)
{
	val ? DesignTableID_.reset(boost::initialized_value) : DesignTableID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? TableID_.reset(boost::initialized_value) : TableID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? TableIndex_.reset(boost::initialized_value) : TableIndex_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? YPos_.reset(boost::initialized_value) : YPos_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_TableInfoImp::SData::Flip()
{
	DesignTableID_ ? DesignTableID_=boost::none : DesignTableID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	TableID_ ? TableID_=boost::none : TableID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	TableIndex_ ? TableIndex_=boost::none : TableIndex_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	YPos_ ? YPos_=boost::none : YPos_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_TableInfoImp::SData::Check()
{
	if ( !DesignTableID_ )
	{
		DesignTableID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !TableID_ )
	{
		TableID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !TableIndex_ )
	{
		TableIndex_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !YPos_ )
	{
		YPos_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_TableInfoImp::SData::ToUtf8()
{
}

void	GC_TableInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_TableInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignTableID_ )
	{
		ret.With(DesignTableID.Use(data.DesignTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.TableID_ )
	{
		ret.With(TableID.Use(data.TableID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.TableIndex_ )
	{
		ret.With(TableIndex.Use(data.TableIndex_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Use(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_TableInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignTableID_ )
	{
		ret.With(DesignTableID.Into(data.DesignTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.TableID_ )
	{
		ret.With(TableID.Into(data.TableID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.TableIndex_ )
	{
		ret.With(TableIndex.Into(data.TableIndex_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.YPos_ )
	{
		ret.With(YPos.Into(data.YPos_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_TableInfoImp	GC_TableInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_TableInfoImp(alias));
}

GC_TableInfoImp::GC_TableInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_TableInfo"), alias)
	,DesignTableID(ImpSPtr_,AUTODB_STR("DesignTableID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,TableID(ImpSPtr_,AUTODB_STR("TableID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,TableIndex(ImpSPtr_,AUTODB_STR("TableIndex"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,YPos(ImpSPtr_,AUTODB_STR("YPos"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_TableInfoImp::GC_TableInfoImp( const GC_TableInfoImp& rhs ):Table(rhs)
	,DesignTableID(rhs.DesignTableID)
	,OrderCate(rhs.OrderCate)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderID(rhs.OrderID)
	,TableID(rhs.TableID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,TableIndex(rhs.TableIndex)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,ZLen(rhs.ZLen)
	,YPos(rhs.YPos)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_TableInfoImp::GC_TableInfoImp( GC_TableInfoImp&& rhs ):Table(rhs)
	,DesignTableID(std::move(rhs.DesignTableID))
	,OrderCate(std::move(rhs.OrderCate))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderID(std::move(rhs.OrderID))
	,TableID(std::move(rhs.TableID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,TableIndex(std::move(rhs.TableIndex))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,ZLen(std::move(rhs.ZLen))
	,YPos(std::move(rhs.YPos))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_TableInfoImp	GC_TableInfo("");



void	GC_TablePartInfoImp::SData::SetAll(bool val)
{
	val ? DesignTablePartID_.reset(boost::initialized_value) : DesignTablePartID_=boost::none;
	val ? DesignTableID_.reset(boost::initialized_value) : DesignTableID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DecorLineID_.reset(boost::initialized_value) : DecorLineID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? TableSideIndex_.reset(boost::initialized_value) : TableSideIndex_=boost::none;
	val ? IsUserSetYLen_.reset(boost::initialized_value) : IsUserSetYLen_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? ModelID_.reset(boost::initialized_value) : ModelID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? DefaultYLen_.reset(boost::initialized_value) : DefaultYLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_TablePartInfoImp::SData::Flip()
{
	DesignTablePartID_ ? DesignTablePartID_=boost::none : DesignTablePartID_.reset(boost::initialized_value);
	DesignTableID_ ? DesignTableID_=boost::none : DesignTableID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DecorLineID_ ? DecorLineID_=boost::none : DecorLineID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	TableSideIndex_ ? TableSideIndex_=boost::none : TableSideIndex_.reset(boost::initialized_value);
	IsUserSetYLen_ ? IsUserSetYLen_=boost::none : IsUserSetYLen_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	ModelID_ ? ModelID_=boost::none : ModelID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	DefaultYLen_ ? DefaultYLen_=boost::none : DefaultYLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_TablePartInfoImp::SData::Check()
{
	if ( !DesignTablePartID_ )
	{
		DesignTablePartID_.reset(boost::initialized_value);
	}
	if ( !DesignTableID_ )
	{
		DesignTableID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DecorLineID_ )
	{
		DecorLineID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !TableSideIndex_ )
	{
		TableSideIndex_.reset(boost::initialized_value);
	}
	if ( !IsUserSetYLen_ )
	{
		IsUserSetYLen_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !ModelID_ )
	{
		ModelID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !DefaultYLen_ )
	{
		DefaultYLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_TablePartInfoImp::SData::ToUtf8()
{
}

void	GC_TablePartInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_TablePartInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignTablePartID_ )
	{
		ret.With(DesignTablePartID.Use(data.DesignTablePartID_));
	}
	if ( data.DesignTableID_ )
	{
		ret.With(DesignTableID.Use(data.DesignTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Use(data.DecorLineID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.TableSideIndex_ )
	{
		ret.With(TableSideIndex.Use(data.TableSideIndex_));
	}
	if ( data.IsUserSetYLen_ )
	{
		ret.With(IsUserSetYLen.Use(data.IsUserSetYLen_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Use(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.DefaultYLen_ )
	{
		ret.With(DefaultYLen.Use(data.DefaultYLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_TablePartInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignTablePartID_ )
	{
		ret.With(DesignTablePartID.Into(data.DesignTablePartID_));
	}
	if ( data.DesignTableID_ )
	{
		ret.With(DesignTableID.Into(data.DesignTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DecorLineID_ )
	{
		ret.With(DecorLineID.Into(data.DecorLineID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.TableSideIndex_ )
	{
		ret.With(TableSideIndex.Into(data.TableSideIndex_));
	}
	if ( data.IsUserSetYLen_ )
	{
		ret.With(IsUserSetYLen.Into(data.IsUserSetYLen_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.ModelID_ )
	{
		ret.With(ModelID.Into(data.ModelID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.DefaultYLen_ )
	{
		ret.With(DefaultYLen.Into(data.DefaultYLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_TablePartInfoImp	GC_TablePartInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_TablePartInfoImp(alias));
}

GC_TablePartInfoImp::GC_TablePartInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_TablePartInfo"), alias)
	,DesignTablePartID(ImpSPtr_,AUTODB_STR("DesignTablePartID"))
	,DesignTableID(ImpSPtr_,AUTODB_STR("DesignTableID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DecorLineID(ImpSPtr_,AUTODB_STR("DecorLineID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,TableSideIndex(ImpSPtr_,AUTODB_STR("TableSideIndex"))
	,IsUserSetYLen(ImpSPtr_,AUTODB_STR("IsUserSetYLen"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,ModelID(ImpSPtr_,AUTODB_STR("ModelID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,DefaultYLen(ImpSPtr_,AUTODB_STR("DefaultYLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_TablePartInfoImp::GC_TablePartInfoImp( const GC_TablePartInfoImp& rhs ):Table(rhs)
	,DesignTablePartID(rhs.DesignTablePartID)
	,DesignTableID(rhs.DesignTableID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DecorLineID(rhs.DecorLineID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,TableSideIndex(rhs.TableSideIndex)
	,IsUserSetYLen(rhs.IsUserSetYLen)
	,GTypeID(rhs.GTypeID)
	,MaterialID(rhs.MaterialID)
	,ModelID(rhs.ModelID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,DefaultYLen(rhs.DefaultYLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_TablePartInfoImp::GC_TablePartInfoImp( GC_TablePartInfoImp&& rhs ):Table(rhs)
	,DesignTablePartID(std::move(rhs.DesignTablePartID))
	,DesignTableID(std::move(rhs.DesignTableID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DecorLineID(std::move(rhs.DecorLineID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,TableSideIndex(std::move(rhs.TableSideIndex))
	,IsUserSetYLen(std::move(rhs.IsUserSetYLen))
	,GTypeID(std::move(rhs.GTypeID))
	,MaterialID(std::move(rhs.MaterialID))
	,ModelID(std::move(rhs.ModelID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,DefaultYLen(std::move(rhs.DefaultYLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_TablePartInfoImp	GC_TablePartInfo("");



void	GC_TableSideInfoImp::SData::SetAll(bool val)
{
	val ? DesignTableSideID_.reset(boost::initialized_value) : DesignTableSideID_=boost::none;
	val ? DesignTableID_.reset(boost::initialized_value) : DesignTableID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? TableTopID_.reset(boost::initialized_value) : TableTopID_=boost::none;
	val ? TableTopSideID_.reset(boost::initialized_value) : TableTopSideID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? TableSideIndex_.reset(boost::initialized_value) : TableSideIndex_=boost::none;
	val ? IsUseTableMat_.reset(boost::initialized_value) : IsUseTableMat_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_TableSideInfoImp::SData::Flip()
{
	DesignTableSideID_ ? DesignTableSideID_=boost::none : DesignTableSideID_.reset(boost::initialized_value);
	DesignTableID_ ? DesignTableID_=boost::none : DesignTableID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	TableTopID_ ? TableTopID_=boost::none : TableTopID_.reset(boost::initialized_value);
	TableTopSideID_ ? TableTopSideID_=boost::none : TableTopSideID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	TableSideIndex_ ? TableSideIndex_=boost::none : TableSideIndex_.reset(boost::initialized_value);
	IsUseTableMat_ ? IsUseTableMat_=boost::none : IsUseTableMat_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_TableSideInfoImp::SData::Check()
{
	if ( !DesignTableSideID_ )
	{
		DesignTableSideID_.reset(boost::initialized_value);
	}
	if ( !DesignTableID_ )
	{
		DesignTableID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !TableTopID_ )
	{
		TableTopID_.reset(boost::initialized_value);
	}
	if ( !TableTopSideID_ )
	{
		TableTopSideID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !TableSideIndex_ )
	{
		TableSideIndex_.reset(boost::initialized_value);
	}
	if ( !IsUseTableMat_ )
	{
		IsUseTableMat_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_TableSideInfoImp::SData::ToUtf8()
{
}

void	GC_TableSideInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_TableSideInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignTableSideID_ )
	{
		ret.With(DesignTableSideID.Use(data.DesignTableSideID_));
	}
	if ( data.DesignTableID_ )
	{
		ret.With(DesignTableID.Use(data.DesignTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.TableTopID_ )
	{
		ret.With(TableTopID.Use(data.TableTopID_));
	}
	if ( data.TableTopSideID_ )
	{
		ret.With(TableTopSideID.Use(data.TableTopSideID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.TableSideIndex_ )
	{
		ret.With(TableSideIndex.Use(data.TableSideIndex_));
	}
	if ( data.IsUseTableMat_ )
	{
		ret.With(IsUseTableMat.Use(data.IsUseTableMat_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_TableSideInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignTableSideID_ )
	{
		ret.With(DesignTableSideID.Into(data.DesignTableSideID_));
	}
	if ( data.DesignTableID_ )
	{
		ret.With(DesignTableID.Into(data.DesignTableID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.TableTopID_ )
	{
		ret.With(TableTopID.Into(data.TableTopID_));
	}
	if ( data.TableTopSideID_ )
	{
		ret.With(TableTopSideID.Into(data.TableTopSideID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.TableSideIndex_ )
	{
		ret.With(TableSideIndex.Into(data.TableSideIndex_));
	}
	if ( data.IsUseTableMat_ )
	{
		ret.With(IsUseTableMat.Into(data.IsUseTableMat_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_TableSideInfoImp	GC_TableSideInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_TableSideInfoImp(alias));
}

GC_TableSideInfoImp::GC_TableSideInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_TableSideInfo"), alias)
	,DesignTableSideID(ImpSPtr_,AUTODB_STR("DesignTableSideID"))
	,DesignTableID(ImpSPtr_,AUTODB_STR("DesignTableID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,TableTopID(ImpSPtr_,AUTODB_STR("TableTopID"))
	,TableTopSideID(ImpSPtr_,AUTODB_STR("TableTopSideID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,TableSideIndex(ImpSPtr_,AUTODB_STR("TableSideIndex"))
	,IsUseTableMat(ImpSPtr_,AUTODB_STR("IsUseTableMat"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_TableSideInfoImp::GC_TableSideInfoImp( const GC_TableSideInfoImp& rhs ):Table(rhs)
	,DesignTableSideID(rhs.DesignTableSideID)
	,DesignTableID(rhs.DesignTableID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,TableTopID(rhs.TableTopID)
	,TableTopSideID(rhs.TableTopSideID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,TableSideIndex(rhs.TableSideIndex)
	,IsUseTableMat(rhs.IsUseTableMat)
	,MaterialID(rhs.MaterialID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_TableSideInfoImp::GC_TableSideInfoImp( GC_TableSideInfoImp&& rhs ):Table(rhs)
	,DesignTableSideID(std::move(rhs.DesignTableSideID))
	,DesignTableID(std::move(rhs.DesignTableID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,TableTopID(std::move(rhs.TableTopID))
	,TableTopSideID(std::move(rhs.TableTopSideID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,TableSideIndex(std::move(rhs.TableSideIndex))
	,IsUseTableMat(std::move(rhs.IsUseTableMat))
	,MaterialID(std::move(rhs.MaterialID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_TableSideInfoImp	GC_TableSideInfo("");



void	GC_WallDecorInfoImp::SData::SetAll(bool val)
{
	val ? DesignWallDecorID_.reset(boost::initialized_value) : DesignWallDecorID_=boost::none;
	val ? DesignWallID_.reset(boost::initialized_value) : DesignWallID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? DecorID_.reset(boost::initialized_value) : DecorID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? IsModelRevers_.reset(boost::initialized_value) : IsModelRevers_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? SupplyType_.reset(boost::initialized_value) : SupplyType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? OffsetXLen_.reset(boost::initialized_value) : OffsetXLen_=boost::none;
	val ? OffsetYLen_.reset(boost::initialized_value) : OffsetYLen_=boost::none;
	val ? OffsetZLen_.reset(boost::initialized_value) : OffsetZLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_WallDecorInfoImp::SData::Flip()
{
	DesignWallDecorID_ ? DesignWallDecorID_=boost::none : DesignWallDecorID_.reset(boost::initialized_value);
	DesignWallID_ ? DesignWallID_=boost::none : DesignWallID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	DecorID_ ? DecorID_=boost::none : DecorID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	IsModelRevers_ ? IsModelRevers_=boost::none : IsModelRevers_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	SupplyType_ ? SupplyType_=boost::none : SupplyType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	OffsetXLen_ ? OffsetXLen_=boost::none : OffsetXLen_.reset(boost::initialized_value);
	OffsetYLen_ ? OffsetYLen_=boost::none : OffsetYLen_.reset(boost::initialized_value);
	OffsetZLen_ ? OffsetZLen_=boost::none : OffsetZLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_WallDecorInfoImp::SData::Check()
{
	if ( !DesignWallDecorID_ )
	{
		DesignWallDecorID_.reset(boost::initialized_value);
	}
	if ( !DesignWallID_ )
	{
		DesignWallID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !DecorID_ )
	{
		DecorID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !IsModelRevers_ )
	{
		IsModelRevers_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !SupplyType_ )
	{
		SupplyType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !OffsetXLen_ )
	{
		OffsetXLen_.reset(boost::initialized_value);
	}
	if ( !OffsetYLen_ )
	{
		OffsetYLen_.reset(boost::initialized_value);
	}
	if ( !OffsetZLen_ )
	{
		OffsetZLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_WallDecorInfoImp::SData::ToUtf8()
{
}

void	GC_WallDecorInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_WallDecorInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignWallDecorID_ )
	{
		ret.With(DesignWallDecorID.Use(data.DesignWallDecorID_));
	}
	if ( data.DesignWallID_ )
	{
		ret.With(DesignWallID.Use(data.DesignWallID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Use(data.DecorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.IsModelRevers_ )
	{
		ret.With(IsModelRevers.Use(data.IsModelRevers_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Use(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.OffsetXLen_ )
	{
		ret.With(OffsetXLen.Use(data.OffsetXLen_));
	}
	if ( data.OffsetYLen_ )
	{
		ret.With(OffsetYLen.Use(data.OffsetYLen_));
	}
	if ( data.OffsetZLen_ )
	{
		ret.With(OffsetZLen.Use(data.OffsetZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_WallDecorInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignWallDecorID_ )
	{
		ret.With(DesignWallDecorID.Into(data.DesignWallDecorID_));
	}
	if ( data.DesignWallID_ )
	{
		ret.With(DesignWallID.Into(data.DesignWallID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Into(data.DecorID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.IsModelRevers_ )
	{
		ret.With(IsModelRevers.Into(data.IsModelRevers_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.SupplyType_ )
	{
		ret.With(SupplyType.Into(data.SupplyType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.OffsetXLen_ )
	{
		ret.With(OffsetXLen.Into(data.OffsetXLen_));
	}
	if ( data.OffsetYLen_ )
	{
		ret.With(OffsetYLen.Into(data.OffsetYLen_));
	}
	if ( data.OffsetZLen_ )
	{
		ret.With(OffsetZLen.Into(data.OffsetZLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_WallDecorInfoImp	GC_WallDecorInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_WallDecorInfoImp(alias));
}

GC_WallDecorInfoImp::GC_WallDecorInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_WallDecorInfo"), alias)
	,DesignWallDecorID(ImpSPtr_,AUTODB_STR("DesignWallDecorID"))
	,DesignWallID(ImpSPtr_,AUTODB_STR("DesignWallID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,DecorID(ImpSPtr_,AUTODB_STR("DecorID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,IsModelRevers(ImpSPtr_,AUTODB_STR("IsModelRevers"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,SupplyType(ImpSPtr_,AUTODB_STR("SupplyType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,OffsetXLen(ImpSPtr_,AUTODB_STR("OffsetXLen"))
	,OffsetYLen(ImpSPtr_,AUTODB_STR("OffsetYLen"))
	,OffsetZLen(ImpSPtr_,AUTODB_STR("OffsetZLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_WallDecorInfoImp::GC_WallDecorInfoImp( const GC_WallDecorInfoImp& rhs ):Table(rhs)
	,DesignWallDecorID(rhs.DesignWallDecorID)
	,DesignWallID(rhs.DesignWallID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,DesignPlanID(rhs.DesignPlanID)
	,DecorID(rhs.DecorID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,IsModelRevers(rhs.IsModelRevers)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,SupplyType(rhs.SupplyType)
	,GTypeID(rhs.GTypeID)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,OffsetXLen(rhs.OffsetXLen)
	,OffsetYLen(rhs.OffsetYLen)
	,OffsetZLen(rhs.OffsetZLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_WallDecorInfoImp::GC_WallDecorInfoImp( GC_WallDecorInfoImp&& rhs ):Table(rhs)
	,DesignWallDecorID(std::move(rhs.DesignWallDecorID))
	,DesignWallID(std::move(rhs.DesignWallID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,DecorID(std::move(rhs.DecorID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,IsModelRevers(std::move(rhs.IsModelRevers))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,SupplyType(std::move(rhs.SupplyType))
	,GTypeID(std::move(rhs.GTypeID))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,OffsetXLen(std::move(rhs.OffsetXLen))
	,OffsetYLen(std::move(rhs.OffsetYLen))
	,OffsetZLen(std::move(rhs.OffsetZLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_WallDecorInfoImp	GC_WallDecorInfo("");



void	GC_WallInfoImp::SData::SetAll(bool val)
{
	val ? DesignWallID_.reset(boost::initialized_value) : DesignWallID_=boost::none;
	val ? DesignPlanID_.reset(boost::initialized_value) : DesignPlanID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? WallType_.reset(boost::initialized_value) : WallType_=boost::none;
	val ? WallIndex_.reset(boost::initialized_value) : WallIndex_=boost::none;
	val ? GroupID_.reset(boost::initialized_value) : GroupID_=boost::none;
	val ? DockObjID_.reset(boost::initialized_value) : DockObjID_=boost::none;
	val ? DockXPos_.reset(boost::initialized_value) : DockXPos_=boost::none;
	val ? DockYPos_.reset(boost::initialized_value) : DockYPos_=boost::none;
	val ? DecorID_.reset(boost::initialized_value) : DecorID_=boost::none;
	val ? GridStyle_.reset(boost::initialized_value) : GridStyle_=boost::none;
	val ? HasMark_.reset(boost::initialized_value) : HasMark_=boost::none;
	val ? IsVisible_.reset(boost::initialized_value) : IsVisible_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
	val ? StartX_.reset(boost::initialized_value) : StartX_=boost::none;
	val ? StartY_.reset(boost::initialized_value) : StartY_=boost::none;
	val ? EndX_.reset(boost::initialized_value) : EndX_=boost::none;
	val ? EndY_.reset(boost::initialized_value) : EndY_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? ZLen_.reset(boost::initialized_value) : ZLen_=boost::none;
	val ? GroundLen_.reset(boost::initialized_value) : GroundLen_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GC_WallInfoImp::SData::Flip()
{
	DesignWallID_ ? DesignWallID_=boost::none : DesignWallID_.reset(boost::initialized_value);
	DesignPlanID_ ? DesignPlanID_=boost::none : DesignPlanID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	WallType_ ? WallType_=boost::none : WallType_.reset(boost::initialized_value);
	WallIndex_ ? WallIndex_=boost::none : WallIndex_.reset(boost::initialized_value);
	GroupID_ ? GroupID_=boost::none : GroupID_.reset(boost::initialized_value);
	DockObjID_ ? DockObjID_=boost::none : DockObjID_.reset(boost::initialized_value);
	DockXPos_ ? DockXPos_=boost::none : DockXPos_.reset(boost::initialized_value);
	DockYPos_ ? DockYPos_=boost::none : DockYPos_.reset(boost::initialized_value);
	DecorID_ ? DecorID_=boost::none : DecorID_.reset(boost::initialized_value);
	GridStyle_ ? GridStyle_=boost::none : GridStyle_.reset(boost::initialized_value);
	HasMark_ ? HasMark_=boost::none : HasMark_.reset(boost::initialized_value);
	IsVisible_ ? IsVisible_=boost::none : IsVisible_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
	StartX_ ? StartX_=boost::none : StartX_.reset(boost::initialized_value);
	StartY_ ? StartY_=boost::none : StartY_.reset(boost::initialized_value);
	EndX_ ? EndX_=boost::none : EndX_.reset(boost::initialized_value);
	EndY_ ? EndY_=boost::none : EndY_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	ZLen_ ? ZLen_=boost::none : ZLen_.reset(boost::initialized_value);
	GroundLen_ ? GroundLen_=boost::none : GroundLen_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GC_WallInfoImp::SData::Check()
{
	if ( !DesignWallID_ )
	{
		DesignWallID_.reset(boost::initialized_value);
	}
	if ( !DesignPlanID_ )
	{
		DesignPlanID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !WallType_ )
	{
		WallType_.reset(boost::initialized_value);
	}
	if ( !WallIndex_ )
	{
		WallIndex_.reset(boost::initialized_value);
	}
	if ( !GroupID_ )
	{
		GroupID_.reset(boost::initialized_value);
	}
	if ( !DockObjID_ )
	{
		DockObjID_.reset(boost::initialized_value);
	}
	if ( !DockXPos_ )
	{
		DockXPos_.reset(boost::initialized_value);
	}
	if ( !DockYPos_ )
	{
		DockYPos_.reset(boost::initialized_value);
	}
	if ( !DecorID_ )
	{
		DecorID_.reset(boost::initialized_value);
	}
	if ( !GridStyle_ )
	{
		GridStyle_.reset(boost::initialized_value);
	}
	if ( !HasMark_ )
	{
		HasMark_.reset(boost::initialized_value);
	}
	if ( !IsVisible_ )
	{
		IsVisible_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
	if ( !StartX_ )
	{
		StartX_.reset(boost::initialized_value);
	}
	if ( !StartY_ )
	{
		StartY_.reset(boost::initialized_value);
	}
	if ( !EndX_ )
	{
		EndX_.reset(boost::initialized_value);
	}
	if ( !EndY_ )
	{
		EndY_.reset(boost::initialized_value);
	}
	if ( !XLen_ )
	{
		XLen_.reset(boost::initialized_value);
	}
	if ( !YLen_ )
	{
		YLen_.reset(boost::initialized_value);
	}
	if ( !ZLen_ )
	{
		ZLen_.reset(boost::initialized_value);
	}
	if ( !GroundLen_ )
	{
		GroundLen_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !UpdaterID_ )
	{
		UpdaterID_.reset(boost::initialized_value);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !UpdateTime_ )
	{
		UpdateTime_ = DBTime(rawDate);
	}
}

void	GC_WallInfoImp::SData::ToUtf8()
{
}

void	GC_WallInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GC_WallInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DesignWallID_ )
	{
		ret.With(DesignWallID.Use(data.DesignWallID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Use(data.DesignPlanID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.WallType_ )
	{
		ret.With(WallType.Use(data.WallType_));
	}
	if ( data.WallIndex_ )
	{
		ret.With(WallIndex.Use(data.WallIndex_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Use(data.GroupID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Use(data.DockObjID_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Use(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Use(data.DockYPos_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Use(data.DecorID_));
	}
	if ( data.GridStyle_ )
	{
		ret.With(GridStyle.Use(data.GridStyle_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Use(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Use(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Use(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Use(data.StartY_));
	}
	if ( data.EndX_ )
	{
		ret.With(EndX.Use(data.EndX_));
	}
	if ( data.EndY_ )
	{
		ret.With(EndY.Use(data.EndY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Use(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Use(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Use(data.ZLen_));
	}
	if ( data.GroundLen_ )
	{
		ret.With(GroundLen.Use(data.GroundLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Use(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Use(data.UpdateTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GC_WallInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DesignWallID_ )
	{
		ret.With(DesignWallID.Into(data.DesignWallID_));
	}
	if ( data.DesignPlanID_ )
	{
		ret.With(DesignPlanID.Into(data.DesignPlanID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.WallType_ )
	{
		ret.With(WallType.Into(data.WallType_));
	}
	if ( data.WallIndex_ )
	{
		ret.With(WallIndex.Into(data.WallIndex_));
	}
	if ( data.GroupID_ )
	{
		ret.With(GroupID.Into(data.GroupID_));
	}
	if ( data.DockObjID_ )
	{
		ret.With(DockObjID.Into(data.DockObjID_));
	}
	if ( data.DockXPos_ )
	{
		ret.With(DockXPos.Into(data.DockXPos_));
	}
	if ( data.DockYPos_ )
	{
		ret.With(DockYPos.Into(data.DockYPos_));
	}
	if ( data.DecorID_ )
	{
		ret.With(DecorID.Into(data.DecorID_));
	}
	if ( data.GridStyle_ )
	{
		ret.With(GridStyle.Into(data.GridStyle_));
	}
	if ( data.HasMark_ )
	{
		ret.With(HasMark.Into(data.HasMark_));
	}
	if ( data.IsVisible_ )
	{
		ret.With(IsVisible.Into(data.IsVisible_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	if ( data.StartX_ )
	{
		ret.With(StartX.Into(data.StartX_));
	}
	if ( data.StartY_ )
	{
		ret.With(StartY.Into(data.StartY_));
	}
	if ( data.EndX_ )
	{
		ret.With(EndX.Into(data.EndX_));
	}
	if ( data.EndY_ )
	{
		ret.With(EndY.Into(data.EndY_));
	}
	if ( data.XLen_ )
	{
		ret.With(XLen.Into(data.XLen_));
	}
	if ( data.YLen_ )
	{
		ret.With(YLen.Into(data.YLen_));
	}
	if ( data.ZLen_ )
	{
		ret.With(ZLen.Into(data.ZLen_));
	}
	if ( data.GroundLen_ )
	{
		ret.With(GroundLen.Into(data.GroundLen_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.UpdaterID_ )
	{
		ret.With(UpdaterID.Into(data.UpdaterID_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.UpdateTime_ )
	{
		ret.With(UpdateTime.Into(data.UpdateTime_));
	}
	return std::move(ret);
}


GC_WallInfoImp	GC_WallInfoImp::operator() (const StringType& alias)
{
	return std::move(GC_WallInfoImp(alias));
}

GC_WallInfoImp::GC_WallInfoImp( const StringType& alias ):Table(AUTODB_STR("GC_WallInfo"), alias)
	,DesignWallID(ImpSPtr_,AUTODB_STR("DesignWallID"))
	,DesignPlanID(ImpSPtr_,AUTODB_STR("DesignPlanID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,WallType(ImpSPtr_,AUTODB_STR("WallType"))
	,WallIndex(ImpSPtr_,AUTODB_STR("WallIndex"))
	,GroupID(ImpSPtr_,AUTODB_STR("GroupID"))
	,DockObjID(ImpSPtr_,AUTODB_STR("DockObjID"))
	,DockXPos(ImpSPtr_,AUTODB_STR("DockXPos"))
	,DockYPos(ImpSPtr_,AUTODB_STR("DockYPos"))
	,DecorID(ImpSPtr_,AUTODB_STR("DecorID"))
	,GridStyle(ImpSPtr_,AUTODB_STR("GridStyle"))
	,HasMark(ImpSPtr_,AUTODB_STR("HasMark"))
	,IsVisible(ImpSPtr_,AUTODB_STR("IsVisible"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
	,StartX(ImpSPtr_,AUTODB_STR("StartX"))
	,StartY(ImpSPtr_,AUTODB_STR("StartY"))
	,EndX(ImpSPtr_,AUTODB_STR("EndX"))
	,EndY(ImpSPtr_,AUTODB_STR("EndY"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,ZLen(ImpSPtr_,AUTODB_STR("ZLen"))
	,GroundLen(ImpSPtr_,AUTODB_STR("GroundLen"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GC_WallInfoImp::GC_WallInfoImp( const GC_WallInfoImp& rhs ):Table(rhs)
	,DesignWallID(rhs.DesignWallID)
	,DesignPlanID(rhs.DesignPlanID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,WallType(rhs.WallType)
	,WallIndex(rhs.WallIndex)
	,GroupID(rhs.GroupID)
	,DockObjID(rhs.DockObjID)
	,DockXPos(rhs.DockXPos)
	,DockYPos(rhs.DockYPos)
	,DecorID(rhs.DecorID)
	,GridStyle(rhs.GridStyle)
	,HasMark(rhs.HasMark)
	,IsVisible(rhs.IsVisible)
	,IsLocked(rhs.IsLocked)
	,StartX(rhs.StartX)
	,StartY(rhs.StartY)
	,EndX(rhs.EndX)
	,EndY(rhs.EndY)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,ZLen(rhs.ZLen)
	,GroundLen(rhs.GroundLen)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GC_WallInfoImp::GC_WallInfoImp( GC_WallInfoImp&& rhs ):Table(rhs)
	,DesignWallID(std::move(rhs.DesignWallID))
	,DesignPlanID(std::move(rhs.DesignPlanID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,WallType(std::move(rhs.WallType))
	,WallIndex(std::move(rhs.WallIndex))
	,GroupID(std::move(rhs.GroupID))
	,DockObjID(std::move(rhs.DockObjID))
	,DockXPos(std::move(rhs.DockXPos))
	,DockYPos(std::move(rhs.DockYPos))
	,DecorID(std::move(rhs.DecorID))
	,GridStyle(std::move(rhs.GridStyle))
	,HasMark(std::move(rhs.HasMark))
	,IsVisible(std::move(rhs.IsVisible))
	,IsLocked(std::move(rhs.IsLocked))
	,StartX(std::move(rhs.StartX))
	,StartY(std::move(rhs.StartY))
	,EndX(std::move(rhs.EndX))
	,EndY(std::move(rhs.EndY))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,ZLen(std::move(rhs.ZLen))
	,GroundLen(std::move(rhs.GroundLen))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GC_WallInfoImp	GC_WallInfo("");



}
