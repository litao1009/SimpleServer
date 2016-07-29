#include"msg-ZB.h"

#include <boost\locale\encoding.hpp>

namespace autoDB
{
void	ZB_BoardGapInfoImp::SData::SetAll(bool val)
{
	val ? ItemID_.reset(boost::initialized_value) : ItemID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? BoardID_.reset(boost::initialized_value) : BoardID_=boost::none;
	val ? GapIndex_.reset(boost::initialized_value) : GapIndex_=boost::none;
	val ? GapShape_.reset(boost::initialized_value) : GapShape_=boost::none;
	val ? XLen_.reset(boost::initialized_value) : XLen_=boost::none;
	val ? YLen_.reset(boost::initialized_value) : YLen_=boost::none;
	val ? Square_.reset(boost::initialized_value) : Square_=boost::none;
	val ? XOffset_.reset(boost::initialized_value) : XOffset_=boost::none;
	val ? YOffset_.reset(boost::initialized_value) : YOffset_=boost::none;
	val ? ZOffset_.reset(boost::initialized_value) : ZOffset_=boost::none;
	val ? OrderCode_.reset(boost::initialized_value) : OrderCode_=boost::none;
	val ? OldTableName_.reset(boost::initialized_value) : OldTableName_=boost::none;
	val ? OldID_.reset(boost::initialized_value) : OldID_=boost::none;
}

void	ZB_BoardGapInfoImp::SData::Flip()
{
	ItemID_ ? ItemID_=boost::none : ItemID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	BoardID_ ? BoardID_=boost::none : BoardID_.reset(boost::initialized_value);
	GapIndex_ ? GapIndex_=boost::none : GapIndex_.reset(boost::initialized_value);
	GapShape_ ? GapShape_=boost::none : GapShape_.reset(boost::initialized_value);
	XLen_ ? XLen_=boost::none : XLen_.reset(boost::initialized_value);
	YLen_ ? YLen_=boost::none : YLen_.reset(boost::initialized_value);
	Square_ ? Square_=boost::none : Square_.reset(boost::initialized_value);
	XOffset_ ? XOffset_=boost::none : XOffset_.reset(boost::initialized_value);
	YOffset_ ? YOffset_=boost::none : YOffset_.reset(boost::initialized_value);
	ZOffset_ ? ZOffset_=boost::none : ZOffset_.reset(boost::initialized_value);
	OrderCode_ ? OrderCode_=boost::none : OrderCode_.reset(boost::initialized_value);
	OldTableName_ ? OldTableName_=boost::none : OldTableName_.reset(boost::initialized_value);
	OldID_ ? OldID_=boost::none : OldID_.reset(boost::initialized_value);
}

void	ZB_BoardGapInfoImp::SData::Check()
{
	if ( !ItemID_ )
	{
		ItemID_.reset(boost::initialized_value);
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
	if ( !BoardID_ )
	{
		BoardID_.reset(boost::initialized_value);
	}
	if ( !GapIndex_ )
	{
		GapIndex_.reset(boost::initialized_value);
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
	if ( !Square_ )
	{
		Square_.reset(boost::initialized_value);
	}
	if ( !XOffset_ )
	{
		XOffset_.reset(boost::initialized_value);
	}
	if ( !YOffset_ )
	{
		YOffset_.reset(boost::initialized_value);
	}
	if ( !ZOffset_ )
	{
		ZOffset_.reset(boost::initialized_value);
	}
	if ( !OrderCode_ )
	{
		OrderCode_.reset(boost::initialized_value);
	}
	if ( !OldTableName_ )
	{
		OldTableName_.reset(boost::initialized_value);
	}
	if ( !OldID_ )
	{
		OldID_.reset(boost::initialized_value);
	}
}

void	ZB_BoardGapInfoImp::SData::ToUtf8()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::to_utf<char>(*OrderCode_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::to_utf<char>(*OldTableName_, "GBK");
	}
}

void	ZB_BoardGapInfoImp::SData::ToAscii()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::from_utf(*OrderCode_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::from_utf(*OldTableName_, "GBK");
	}
}

autoDB::SColumns ZB_BoardGapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Use(data.ItemID_));
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
	if ( data.BoardID_ )
	{
		ret.With(BoardID.Use(data.BoardID_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Use(data.GapIndex_));
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
	if ( data.Square_ )
	{
		ret.With(Square.Use(data.Square_));
	}
	if ( data.XOffset_ )
	{
		ret.With(XOffset.Use(data.XOffset_));
	}
	if ( data.YOffset_ )
	{
		ret.With(YOffset.Use(data.YOffset_));
	}
	if ( data.ZOffset_ )
	{
		ret.With(ZOffset.Use(data.ZOffset_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Use(data.OrderCode_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Use(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Use(data.OldID_));
	}
	return std::move(ret);
}

autoDB::SColumns ZB_BoardGapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Into(data.ItemID_));
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
	if ( data.BoardID_ )
	{
		ret.With(BoardID.Into(data.BoardID_));
	}
	if ( data.GapIndex_ )
	{
		ret.With(GapIndex.Into(data.GapIndex_));
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
	if ( data.Square_ )
	{
		ret.With(Square.Into(data.Square_));
	}
	if ( data.XOffset_ )
	{
		ret.With(XOffset.Into(data.XOffset_));
	}
	if ( data.YOffset_ )
	{
		ret.With(YOffset.Into(data.YOffset_));
	}
	if ( data.ZOffset_ )
	{
		ret.With(ZOffset.Into(data.ZOffset_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Into(data.OrderCode_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Into(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Into(data.OldID_));
	}
	return std::move(ret);
}


ZB_BoardGapInfoImp	ZB_BoardGapInfoImp::operator() (const StringType& alias)
{
	return std::move(ZB_BoardGapInfoImp(alias));
}

ZB_BoardGapInfoImp::ZB_BoardGapInfoImp( const StringType& alias ):Table(AUTODB_STR("ZB_BoardGapInfo"), alias)
	,ItemID(ImpSPtr_,AUTODB_STR("ItemID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,BoardID(ImpSPtr_,AUTODB_STR("BoardID"))
	,GapIndex(ImpSPtr_,AUTODB_STR("GapIndex"))
	,GapShape(ImpSPtr_,AUTODB_STR("GapShape"))
	,XLen(ImpSPtr_,AUTODB_STR("XLen"))
	,YLen(ImpSPtr_,AUTODB_STR("YLen"))
	,Square(ImpSPtr_,AUTODB_STR("Square"))
	,XOffset(ImpSPtr_,AUTODB_STR("XOffset"))
	,YOffset(ImpSPtr_,AUTODB_STR("YOffset"))
	,ZOffset(ImpSPtr_,AUTODB_STR("ZOffset"))
	,OrderCode(ImpSPtr_,AUTODB_STR("OrderCode"))
	,OldTableName(ImpSPtr_,AUTODB_STR("OldTableName"))
	,OldID(ImpSPtr_,AUTODB_STR("OldID"))
{}

ZB_BoardGapInfoImp::ZB_BoardGapInfoImp( const ZB_BoardGapInfoImp& rhs ):Table(rhs)
	,ItemID(rhs.ItemID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,BoardID(rhs.BoardID)
	,GapIndex(rhs.GapIndex)
	,GapShape(rhs.GapShape)
	,XLen(rhs.XLen)
	,YLen(rhs.YLen)
	,Square(rhs.Square)
	,XOffset(rhs.XOffset)
	,YOffset(rhs.YOffset)
	,ZOffset(rhs.ZOffset)
	,OrderCode(rhs.OrderCode)
	,OldTableName(rhs.OldTableName)
	,OldID(rhs.OldID)
{}

ZB_BoardGapInfoImp::ZB_BoardGapInfoImp( ZB_BoardGapInfoImp&& rhs ):Table(rhs)
	,ItemID(std::move(rhs.ItemID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,BoardID(std::move(rhs.BoardID))
	,GapIndex(std::move(rhs.GapIndex))
	,GapShape(std::move(rhs.GapShape))
	,XLen(std::move(rhs.XLen))
	,YLen(std::move(rhs.YLen))
	,Square(std::move(rhs.Square))
	,XOffset(std::move(rhs.XOffset))
	,YOffset(std::move(rhs.YOffset))
	,ZOffset(std::move(rhs.ZOffset))
	,OrderCode(std::move(rhs.OrderCode))
	,OldTableName(std::move(rhs.OldTableName))
	,OldID(std::move(rhs.OldID))
{}

ZB_BoardGapInfoImp	ZB_BoardGapInfo("");



void	ZB_BoardInfoImp::SData::SetAll(bool val)
{
	val ? ItemID_.reset(boost::initialized_value) : ItemID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? BoardType_.reset(boost::initialized_value) : BoardType_=boost::none;
	val ? ObjectID_.reset(boost::initialized_value) : ObjectID_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? CabinetID_.reset(boost::initialized_value) : CabinetID_=boost::none;
	val ? Grain_.reset(boost::initialized_value) : Grain_=boost::none;
	val ? IsUserAdd_.reset(boost::initialized_value) : IsUserAdd_=boost::none;
	val ? XLength_.reset(boost::initialized_value) : XLength_=boost::none;
	val ? YLength_.reset(boost::initialized_value) : YLength_=boost::none;
	val ? ZLength_.reset(boost::initialized_value) : ZLength_=boost::none;
	val ? Square_.reset(boost::initialized_value) : Square_=boost::none;
	val ? CutXLength_.reset(boost::initialized_value) : CutXLength_=boost::none;
	val ? CutYLength_.reset(boost::initialized_value) : CutYLength_=boost::none;
	val ? OrderCode_.reset(boost::initialized_value) : OrderCode_=boost::none;
	val ? Name_.reset(boost::initialized_value) : Name_=boost::none;
	val ? ObjectName_.reset(boost::initialized_value) : ObjectName_=boost::none;
	val ? ObjectCode_.reset(boost::initialized_value) : ObjectCode_=boost::none;
	val ? MaterialName_.reset(boost::initialized_value) : MaterialName_=boost::none;
	val ? CabinetName_.reset(boost::initialized_value) : CabinetName_=boost::none;
	val ? CabinetCode_.reset(boost::initialized_value) : CabinetCode_=boost::none;
	val ? OldTableName_.reset(boost::initialized_value) : OldTableName_=boost::none;
	val ? OldID_.reset(boost::initialized_value) : OldID_=boost::none;
}

void	ZB_BoardInfoImp::SData::Flip()
{
	ItemID_ ? ItemID_=boost::none : ItemID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	BoardType_ ? BoardType_=boost::none : BoardType_.reset(boost::initialized_value);
	ObjectID_ ? ObjectID_=boost::none : ObjectID_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	CabinetID_ ? CabinetID_=boost::none : CabinetID_.reset(boost::initialized_value);
	Grain_ ? Grain_=boost::none : Grain_.reset(boost::initialized_value);
	IsUserAdd_ ? IsUserAdd_=boost::none : IsUserAdd_.reset(boost::initialized_value);
	XLength_ ? XLength_=boost::none : XLength_.reset(boost::initialized_value);
	YLength_ ? YLength_=boost::none : YLength_.reset(boost::initialized_value);
	ZLength_ ? ZLength_=boost::none : ZLength_.reset(boost::initialized_value);
	Square_ ? Square_=boost::none : Square_.reset(boost::initialized_value);
	CutXLength_ ? CutXLength_=boost::none : CutXLength_.reset(boost::initialized_value);
	CutYLength_ ? CutYLength_=boost::none : CutYLength_.reset(boost::initialized_value);
	OrderCode_ ? OrderCode_=boost::none : OrderCode_.reset(boost::initialized_value);
	Name_ ? Name_=boost::none : Name_.reset(boost::initialized_value);
	ObjectName_ ? ObjectName_=boost::none : ObjectName_.reset(boost::initialized_value);
	ObjectCode_ ? ObjectCode_=boost::none : ObjectCode_.reset(boost::initialized_value);
	MaterialName_ ? MaterialName_=boost::none : MaterialName_.reset(boost::initialized_value);
	CabinetName_ ? CabinetName_=boost::none : CabinetName_.reset(boost::initialized_value);
	CabinetCode_ ? CabinetCode_=boost::none : CabinetCode_.reset(boost::initialized_value);
	OldTableName_ ? OldTableName_=boost::none : OldTableName_.reset(boost::initialized_value);
	OldID_ ? OldID_=boost::none : OldID_.reset(boost::initialized_value);
}

void	ZB_BoardInfoImp::SData::Check()
{
	if ( !ItemID_ )
	{
		ItemID_.reset(boost::initialized_value);
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
	if ( !BoardType_ )
	{
		BoardType_.reset(boost::initialized_value);
	}
	if ( !ObjectID_ )
	{
		ObjectID_.reset(boost::initialized_value);
	}
	if ( !MaterialID_ )
	{
		MaterialID_.reset(boost::initialized_value);
	}
	if ( !CabinetID_ )
	{
		CabinetID_.reset(boost::initialized_value);
	}
	if ( !Grain_ )
	{
		Grain_.reset(boost::initialized_value);
	}
	if ( !IsUserAdd_ )
	{
		IsUserAdd_.reset(boost::initialized_value);
	}
	if ( !XLength_ )
	{
		XLength_.reset(boost::initialized_value);
	}
	if ( !YLength_ )
	{
		YLength_.reset(boost::initialized_value);
	}
	if ( !ZLength_ )
	{
		ZLength_.reset(boost::initialized_value);
	}
	if ( !Square_ )
	{
		Square_.reset(boost::initialized_value);
	}
	if ( !CutXLength_ )
	{
		CutXLength_.reset(boost::initialized_value);
	}
	if ( !CutYLength_ )
	{
		CutYLength_.reset(boost::initialized_value);
	}
	if ( !OrderCode_ )
	{
		OrderCode_.reset(boost::initialized_value);
	}
	if ( !Name_ )
	{
		Name_.reset(boost::initialized_value);
	}
	if ( !ObjectName_ )
	{
		ObjectName_.reset(boost::initialized_value);
	}
	if ( !ObjectCode_ )
	{
		ObjectCode_.reset(boost::initialized_value);
	}
	if ( !MaterialName_ )
	{
		MaterialName_.reset(boost::initialized_value);
	}
	if ( !CabinetName_ )
	{
		CabinetName_.reset(boost::initialized_value);
	}
	if ( !CabinetCode_ )
	{
		CabinetCode_.reset(boost::initialized_value);
	}
	if ( !OldTableName_ )
	{
		OldTableName_.reset(boost::initialized_value);
	}
	if ( !OldID_ )
	{
		OldID_.reset(boost::initialized_value);
	}
}

void	ZB_BoardInfoImp::SData::ToUtf8()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::to_utf<char>(*OrderCode_, "GBK");
	}
	if ( Name_ )
	{
		Name_ = boost::locale::conv::to_utf<char>(*Name_, "GBK");
	}
	if ( ObjectName_ )
	{
		ObjectName_ = boost::locale::conv::to_utf<char>(*ObjectName_, "GBK");
	}
	if ( ObjectCode_ )
	{
		ObjectCode_ = boost::locale::conv::to_utf<char>(*ObjectCode_, "GBK");
	}
	if ( MaterialName_ )
	{
		MaterialName_ = boost::locale::conv::to_utf<char>(*MaterialName_, "GBK");
	}
	if ( CabinetName_ )
	{
		CabinetName_ = boost::locale::conv::to_utf<char>(*CabinetName_, "GBK");
	}
	if ( CabinetCode_ )
	{
		CabinetCode_ = boost::locale::conv::to_utf<char>(*CabinetCode_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::to_utf<char>(*OldTableName_, "GBK");
	}
}

void	ZB_BoardInfoImp::SData::ToAscii()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::from_utf(*OrderCode_, "GBK");
	}
	if ( Name_ )
	{
		Name_ = boost::locale::conv::from_utf(*Name_, "GBK");
	}
	if ( ObjectName_ )
	{
		ObjectName_ = boost::locale::conv::from_utf(*ObjectName_, "GBK");
	}
	if ( ObjectCode_ )
	{
		ObjectCode_ = boost::locale::conv::from_utf(*ObjectCode_, "GBK");
	}
	if ( MaterialName_ )
	{
		MaterialName_ = boost::locale::conv::from_utf(*MaterialName_, "GBK");
	}
	if ( CabinetName_ )
	{
		CabinetName_ = boost::locale::conv::from_utf(*CabinetName_, "GBK");
	}
	if ( CabinetCode_ )
	{
		CabinetCode_ = boost::locale::conv::from_utf(*CabinetCode_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::from_utf(*OldTableName_, "GBK");
	}
}

autoDB::SColumns ZB_BoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Use(data.ItemID_));
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
	if ( data.BoardType_ )
	{
		ret.With(BoardType.Use(data.BoardType_));
	}
	if ( data.ObjectID_ )
	{
		ret.With(ObjectID.Use(data.ObjectID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Use(data.MaterialID_));
	}
	if ( data.CabinetID_ )
	{
		ret.With(CabinetID.Use(data.CabinetID_));
	}
	if ( data.Grain_ )
	{
		ret.With(Grain.Use(data.Grain_));
	}
	if ( data.IsUserAdd_ )
	{
		ret.With(IsUserAdd.Use(data.IsUserAdd_));
	}
	if ( data.XLength_ )
	{
		ret.With(XLength.Use(data.XLength_));
	}
	if ( data.YLength_ )
	{
		ret.With(YLength.Use(data.YLength_));
	}
	if ( data.ZLength_ )
	{
		ret.With(ZLength.Use(data.ZLength_));
	}
	if ( data.Square_ )
	{
		ret.With(Square.Use(data.Square_));
	}
	if ( data.CutXLength_ )
	{
		ret.With(CutXLength.Use(data.CutXLength_));
	}
	if ( data.CutYLength_ )
	{
		ret.With(CutYLength.Use(data.CutYLength_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Use(data.OrderCode_));
	}
	if ( data.Name_ )
	{
		ret.With(Name.Use(data.Name_));
	}
	if ( data.ObjectName_ )
	{
		ret.With(ObjectName.Use(data.ObjectName_));
	}
	if ( data.ObjectCode_ )
	{
		ret.With(ObjectCode.Use(data.ObjectCode_));
	}
	if ( data.MaterialName_ )
	{
		ret.With(MaterialName.Use(data.MaterialName_));
	}
	if ( data.CabinetName_ )
	{
		ret.With(CabinetName.Use(data.CabinetName_));
	}
	if ( data.CabinetCode_ )
	{
		ret.With(CabinetCode.Use(data.CabinetCode_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Use(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Use(data.OldID_));
	}
	return std::move(ret);
}

autoDB::SColumns ZB_BoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Into(data.ItemID_));
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
	if ( data.BoardType_ )
	{
		ret.With(BoardType.Into(data.BoardType_));
	}
	if ( data.ObjectID_ )
	{
		ret.With(ObjectID.Into(data.ObjectID_));
	}
	if ( data.MaterialID_ )
	{
		ret.With(MaterialID.Into(data.MaterialID_));
	}
	if ( data.CabinetID_ )
	{
		ret.With(CabinetID.Into(data.CabinetID_));
	}
	if ( data.Grain_ )
	{
		ret.With(Grain.Into(data.Grain_));
	}
	if ( data.IsUserAdd_ )
	{
		ret.With(IsUserAdd.Into(data.IsUserAdd_));
	}
	if ( data.XLength_ )
	{
		ret.With(XLength.Into(data.XLength_));
	}
	if ( data.YLength_ )
	{
		ret.With(YLength.Into(data.YLength_));
	}
	if ( data.ZLength_ )
	{
		ret.With(ZLength.Into(data.ZLength_));
	}
	if ( data.Square_ )
	{
		ret.With(Square.Into(data.Square_));
	}
	if ( data.CutXLength_ )
	{
		ret.With(CutXLength.Into(data.CutXLength_));
	}
	if ( data.CutYLength_ )
	{
		ret.With(CutYLength.Into(data.CutYLength_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Into(data.OrderCode_));
	}
	if ( data.Name_ )
	{
		ret.With(Name.Into(data.Name_));
	}
	if ( data.ObjectName_ )
	{
		ret.With(ObjectName.Into(data.ObjectName_));
	}
	if ( data.ObjectCode_ )
	{
		ret.With(ObjectCode.Into(data.ObjectCode_));
	}
	if ( data.MaterialName_ )
	{
		ret.With(MaterialName.Into(data.MaterialName_));
	}
	if ( data.CabinetName_ )
	{
		ret.With(CabinetName.Into(data.CabinetName_));
	}
	if ( data.CabinetCode_ )
	{
		ret.With(CabinetCode.Into(data.CabinetCode_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Into(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Into(data.OldID_));
	}
	return std::move(ret);
}


ZB_BoardInfoImp	ZB_BoardInfoImp::operator() (const StringType& alias)
{
	return std::move(ZB_BoardInfoImp(alias));
}

ZB_BoardInfoImp::ZB_BoardInfoImp( const StringType& alias ):Table(AUTODB_STR("ZB_BoardInfo"), alias)
	,ItemID(ImpSPtr_,AUTODB_STR("ItemID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,BoardType(ImpSPtr_,AUTODB_STR("BoardType"))
	,ObjectID(ImpSPtr_,AUTODB_STR("ObjectID"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,CabinetID(ImpSPtr_,AUTODB_STR("CabinetID"))
	,Grain(ImpSPtr_,AUTODB_STR("Grain"))
	,IsUserAdd(ImpSPtr_,AUTODB_STR("IsUserAdd"))
	,XLength(ImpSPtr_,AUTODB_STR("XLength"))
	,YLength(ImpSPtr_,AUTODB_STR("YLength"))
	,ZLength(ImpSPtr_,AUTODB_STR("ZLength"))
	,Square(ImpSPtr_,AUTODB_STR("Square"))
	,CutXLength(ImpSPtr_,AUTODB_STR("CutXLength"))
	,CutYLength(ImpSPtr_,AUTODB_STR("CutYLength"))
	,OrderCode(ImpSPtr_,AUTODB_STR("OrderCode"))
	,Name(ImpSPtr_,AUTODB_STR("Name"))
	,ObjectName(ImpSPtr_,AUTODB_STR("ObjectName"))
	,ObjectCode(ImpSPtr_,AUTODB_STR("ObjectCode"))
	,MaterialName(ImpSPtr_,AUTODB_STR("MaterialName"))
	,CabinetName(ImpSPtr_,AUTODB_STR("CabinetName"))
	,CabinetCode(ImpSPtr_,AUTODB_STR("CabinetCode"))
	,OldTableName(ImpSPtr_,AUTODB_STR("OldTableName"))
	,OldID(ImpSPtr_,AUTODB_STR("OldID"))
{}

ZB_BoardInfoImp::ZB_BoardInfoImp( const ZB_BoardInfoImp& rhs ):Table(rhs)
	,ItemID(rhs.ItemID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,BoardType(rhs.BoardType)
	,ObjectID(rhs.ObjectID)
	,MaterialID(rhs.MaterialID)
	,CabinetID(rhs.CabinetID)
	,Grain(rhs.Grain)
	,IsUserAdd(rhs.IsUserAdd)
	,XLength(rhs.XLength)
	,YLength(rhs.YLength)
	,ZLength(rhs.ZLength)
	,Square(rhs.Square)
	,CutXLength(rhs.CutXLength)
	,CutYLength(rhs.CutYLength)
	,OrderCode(rhs.OrderCode)
	,Name(rhs.Name)
	,ObjectName(rhs.ObjectName)
	,ObjectCode(rhs.ObjectCode)
	,MaterialName(rhs.MaterialName)
	,CabinetName(rhs.CabinetName)
	,CabinetCode(rhs.CabinetCode)
	,OldTableName(rhs.OldTableName)
	,OldID(rhs.OldID)
{}

ZB_BoardInfoImp::ZB_BoardInfoImp( ZB_BoardInfoImp&& rhs ):Table(rhs)
	,ItemID(std::move(rhs.ItemID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,BoardType(std::move(rhs.BoardType))
	,ObjectID(std::move(rhs.ObjectID))
	,MaterialID(std::move(rhs.MaterialID))
	,CabinetID(std::move(rhs.CabinetID))
	,Grain(std::move(rhs.Grain))
	,IsUserAdd(std::move(rhs.IsUserAdd))
	,XLength(std::move(rhs.XLength))
	,YLength(std::move(rhs.YLength))
	,ZLength(std::move(rhs.ZLength))
	,Square(std::move(rhs.Square))
	,CutXLength(std::move(rhs.CutXLength))
	,CutYLength(std::move(rhs.CutYLength))
	,OrderCode(std::move(rhs.OrderCode))
	,Name(std::move(rhs.Name))
	,ObjectName(std::move(rhs.ObjectName))
	,ObjectCode(std::move(rhs.ObjectCode))
	,MaterialName(std::move(rhs.MaterialName))
	,CabinetName(std::move(rhs.CabinetName))
	,CabinetCode(std::move(rhs.CabinetCode))
	,OldTableName(std::move(rhs.OldTableName))
	,OldID(std::move(rhs.OldID))
{}

ZB_BoardInfoImp	ZB_BoardInfo("");



void	ZB_BoardSealInfoImp::SData::SetAll(bool val)
{
	val ? ItemID_.reset(boost::initialized_value) : ItemID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? BoardID_.reset(boost::initialized_value) : BoardID_=boost::none;
	val ? SealIndex_.reset(boost::initialized_value) : SealIndex_=boost::none;
	val ? MaterialID_.reset(boost::initialized_value) : MaterialID_=boost::none;
	val ? PreMill_.reset(boost::initialized_value) : PreMill_=boost::none;
	val ? OrderCode_.reset(boost::initialized_value) : OrderCode_=boost::none;
	val ? MaterialCode_.reset(boost::initialized_value) : MaterialCode_=boost::none;
	val ? MaterialName_.reset(boost::initialized_value) : MaterialName_=boost::none;
	val ? OldTableName_.reset(boost::initialized_value) : OldTableName_=boost::none;
	val ? OldID_.reset(boost::initialized_value) : OldID_=boost::none;
}

void	ZB_BoardSealInfoImp::SData::Flip()
{
	ItemID_ ? ItemID_=boost::none : ItemID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	BoardID_ ? BoardID_=boost::none : BoardID_.reset(boost::initialized_value);
	SealIndex_ ? SealIndex_=boost::none : SealIndex_.reset(boost::initialized_value);
	MaterialID_ ? MaterialID_=boost::none : MaterialID_.reset(boost::initialized_value);
	PreMill_ ? PreMill_=boost::none : PreMill_.reset(boost::initialized_value);
	OrderCode_ ? OrderCode_=boost::none : OrderCode_.reset(boost::initialized_value);
	MaterialCode_ ? MaterialCode_=boost::none : MaterialCode_.reset(boost::initialized_value);
	MaterialName_ ? MaterialName_=boost::none : MaterialName_.reset(boost::initialized_value);
	OldTableName_ ? OldTableName_=boost::none : OldTableName_.reset(boost::initialized_value);
	OldID_ ? OldID_=boost::none : OldID_.reset(boost::initialized_value);
}

void	ZB_BoardSealInfoImp::SData::Check()
{
	if ( !ItemID_ )
	{
		ItemID_.reset(boost::initialized_value);
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
	if ( !BoardID_ )
	{
		BoardID_.reset(boost::initialized_value);
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
	if ( !OrderCode_ )
	{
		OrderCode_.reset(boost::initialized_value);
	}
	if ( !MaterialCode_ )
	{
		MaterialCode_.reset(boost::initialized_value);
	}
	if ( !MaterialName_ )
	{
		MaterialName_.reset(boost::initialized_value);
	}
	if ( !OldTableName_ )
	{
		OldTableName_.reset(boost::initialized_value);
	}
	if ( !OldID_ )
	{
		OldID_.reset(boost::initialized_value);
	}
}

void	ZB_BoardSealInfoImp::SData::ToUtf8()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::to_utf<char>(*OrderCode_, "GBK");
	}
	if ( MaterialCode_ )
	{
		MaterialCode_ = boost::locale::conv::to_utf<char>(*MaterialCode_, "GBK");
	}
	if ( MaterialName_ )
	{
		MaterialName_ = boost::locale::conv::to_utf<char>(*MaterialName_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::to_utf<char>(*OldTableName_, "GBK");
	}
}

void	ZB_BoardSealInfoImp::SData::ToAscii()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::from_utf(*OrderCode_, "GBK");
	}
	if ( MaterialCode_ )
	{
		MaterialCode_ = boost::locale::conv::from_utf(*MaterialCode_, "GBK");
	}
	if ( MaterialName_ )
	{
		MaterialName_ = boost::locale::conv::from_utf(*MaterialName_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::from_utf(*OldTableName_, "GBK");
	}
}

autoDB::SColumns ZB_BoardSealInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Use(data.ItemID_));
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
	if ( data.BoardID_ )
	{
		ret.With(BoardID.Use(data.BoardID_));
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
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Use(data.OrderCode_));
	}
	if ( data.MaterialCode_ )
	{
		ret.With(MaterialCode.Use(data.MaterialCode_));
	}
	if ( data.MaterialName_ )
	{
		ret.With(MaterialName.Use(data.MaterialName_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Use(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Use(data.OldID_));
	}
	return std::move(ret);
}

autoDB::SColumns ZB_BoardSealInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Into(data.ItemID_));
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
	if ( data.BoardID_ )
	{
		ret.With(BoardID.Into(data.BoardID_));
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
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Into(data.OrderCode_));
	}
	if ( data.MaterialCode_ )
	{
		ret.With(MaterialCode.Into(data.MaterialCode_));
	}
	if ( data.MaterialName_ )
	{
		ret.With(MaterialName.Into(data.MaterialName_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Into(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Into(data.OldID_));
	}
	return std::move(ret);
}


ZB_BoardSealInfoImp	ZB_BoardSealInfoImp::operator() (const StringType& alias)
{
	return std::move(ZB_BoardSealInfoImp(alias));
}

ZB_BoardSealInfoImp::ZB_BoardSealInfoImp( const StringType& alias ):Table(AUTODB_STR("ZB_BoardSealInfo"), alias)
	,ItemID(ImpSPtr_,AUTODB_STR("ItemID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,BoardID(ImpSPtr_,AUTODB_STR("BoardID"))
	,SealIndex(ImpSPtr_,AUTODB_STR("SealIndex"))
	,MaterialID(ImpSPtr_,AUTODB_STR("MaterialID"))
	,PreMill(ImpSPtr_,AUTODB_STR("PreMill"))
	,OrderCode(ImpSPtr_,AUTODB_STR("OrderCode"))
	,MaterialCode(ImpSPtr_,AUTODB_STR("MaterialCode"))
	,MaterialName(ImpSPtr_,AUTODB_STR("MaterialName"))
	,OldTableName(ImpSPtr_,AUTODB_STR("OldTableName"))
	,OldID(ImpSPtr_,AUTODB_STR("OldID"))
{}

ZB_BoardSealInfoImp::ZB_BoardSealInfoImp( const ZB_BoardSealInfoImp& rhs ):Table(rhs)
	,ItemID(rhs.ItemID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,BoardID(rhs.BoardID)
	,SealIndex(rhs.SealIndex)
	,MaterialID(rhs.MaterialID)
	,PreMill(rhs.PreMill)
	,OrderCode(rhs.OrderCode)
	,MaterialCode(rhs.MaterialCode)
	,MaterialName(rhs.MaterialName)
	,OldTableName(rhs.OldTableName)
	,OldID(rhs.OldID)
{}

ZB_BoardSealInfoImp::ZB_BoardSealInfoImp( ZB_BoardSealInfoImp&& rhs ):Table(rhs)
	,ItemID(std::move(rhs.ItemID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,BoardID(std::move(rhs.BoardID))
	,SealIndex(std::move(rhs.SealIndex))
	,MaterialID(std::move(rhs.MaterialID))
	,PreMill(std::move(rhs.PreMill))
	,OrderCode(std::move(rhs.OrderCode))
	,MaterialCode(std::move(rhs.MaterialCode))
	,MaterialName(std::move(rhs.MaterialName))
	,OldTableName(std::move(rhs.OldTableName))
	,OldID(std::move(rhs.OldID))
{}

ZB_BoardSealInfoImp	ZB_BoardSealInfo("");



void	ZB_ObjectsImp::SData::SetAll(bool val)
{
	val ? ItemID_.reset(boost::initialized_value) : ItemID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ObjectType_.reset(boost::initialized_value) : ObjectType_=boost::none;
	val ? ParentID_.reset(boost::initialized_value) : ParentID_=boost::none;
	val ? GType_.reset(boost::initialized_value) : GType_=boost::none;
	val ? XLength_.reset(boost::initialized_value) : XLength_=boost::none;
	val ? YLength_.reset(boost::initialized_value) : YLength_=boost::none;
	val ? ZLength_.reset(boost::initialized_value) : ZLength_=boost::none;
	val ? ShapeXLength_.reset(boost::initialized_value) : ShapeXLength_=boost::none;
	val ? ShapeZLength_.reset(boost::initialized_value) : ShapeZLength_=boost::none;
	val ? GapXLength_.reset(boost::initialized_value) : GapXLength_=boost::none;
	val ? GapYLength_.reset(boost::initialized_value) : GapYLength_=boost::none;
	val ? GapZLength_.reset(boost::initialized_value) : GapZLength_=boost::none;
	val ? Amount_.reset(boost::initialized_value) : Amount_=boost::none;
	val ? IsStandard_.reset(boost::initialized_value) : IsStandard_=boost::none;
	val ? IsUserAdd_.reset(boost::initialized_value) : IsUserAdd_=boost::none;
	val ? MaterialPlanID_.reset(boost::initialized_value) : MaterialPlanID_=boost::none;
	val ? CabGapType_.reset(boost::initialized_value) : CabGapType_=boost::none;
	val ? CabShape_.reset(boost::initialized_value) : CabShape_=boost::none;
	val ? OrderCode_.reset(boost::initialized_value) : OrderCode_=boost::none;
	val ? Name_.reset(boost::initialized_value) : Name_=boost::none;
	val ? Code_.reset(boost::initialized_value) : Code_=boost::none;
	val ? MaterialPlanName_.reset(boost::initialized_value) : MaterialPlanName_=boost::none;
	val ? BarCode_.reset(boost::initialized_value) : BarCode_=boost::none;
	val ? Remarks_.reset(boost::initialized_value) : Remarks_=boost::none;
	val ? OldTableName_.reset(boost::initialized_value) : OldTableName_=boost::none;
	val ? OldID_.reset(boost::initialized_value) : OldID_=boost::none;
}

void	ZB_ObjectsImp::SData::Flip()
{
	ItemID_ ? ItemID_=boost::none : ItemID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ObjectType_ ? ObjectType_=boost::none : ObjectType_.reset(boost::initialized_value);
	ParentID_ ? ParentID_=boost::none : ParentID_.reset(boost::initialized_value);
	GType_ ? GType_=boost::none : GType_.reset(boost::initialized_value);
	XLength_ ? XLength_=boost::none : XLength_.reset(boost::initialized_value);
	YLength_ ? YLength_=boost::none : YLength_.reset(boost::initialized_value);
	ZLength_ ? ZLength_=boost::none : ZLength_.reset(boost::initialized_value);
	ShapeXLength_ ? ShapeXLength_=boost::none : ShapeXLength_.reset(boost::initialized_value);
	ShapeZLength_ ? ShapeZLength_=boost::none : ShapeZLength_.reset(boost::initialized_value);
	GapXLength_ ? GapXLength_=boost::none : GapXLength_.reset(boost::initialized_value);
	GapYLength_ ? GapYLength_=boost::none : GapYLength_.reset(boost::initialized_value);
	GapZLength_ ? GapZLength_=boost::none : GapZLength_.reset(boost::initialized_value);
	Amount_ ? Amount_=boost::none : Amount_.reset(boost::initialized_value);
	IsStandard_ ? IsStandard_=boost::none : IsStandard_.reset(boost::initialized_value);
	IsUserAdd_ ? IsUserAdd_=boost::none : IsUserAdd_.reset(boost::initialized_value);
	MaterialPlanID_ ? MaterialPlanID_=boost::none : MaterialPlanID_.reset(boost::initialized_value);
	CabGapType_ ? CabGapType_=boost::none : CabGapType_.reset(boost::initialized_value);
	CabShape_ ? CabShape_=boost::none : CabShape_.reset(boost::initialized_value);
	OrderCode_ ? OrderCode_=boost::none : OrderCode_.reset(boost::initialized_value);
	Name_ ? Name_=boost::none : Name_.reset(boost::initialized_value);
	Code_ ? Code_=boost::none : Code_.reset(boost::initialized_value);
	MaterialPlanName_ ? MaterialPlanName_=boost::none : MaterialPlanName_.reset(boost::initialized_value);
	BarCode_ ? BarCode_=boost::none : BarCode_.reset(boost::initialized_value);
	Remarks_ ? Remarks_=boost::none : Remarks_.reset(boost::initialized_value);
	OldTableName_ ? OldTableName_=boost::none : OldTableName_.reset(boost::initialized_value);
	OldID_ ? OldID_=boost::none : OldID_.reset(boost::initialized_value);
}

void	ZB_ObjectsImp::SData::Check()
{
	if ( !ItemID_ )
	{
		ItemID_.reset(boost::initialized_value);
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
	if ( !ObjectType_ )
	{
		ObjectType_.reset(boost::initialized_value);
	}
	if ( !ParentID_ )
	{
		ParentID_.reset(boost::initialized_value);
	}
	if ( !GType_ )
	{
		GType_.reset(boost::initialized_value);
	}
	if ( !XLength_ )
	{
		XLength_.reset(boost::initialized_value);
	}
	if ( !YLength_ )
	{
		YLength_.reset(boost::initialized_value);
	}
	if ( !ZLength_ )
	{
		ZLength_.reset(boost::initialized_value);
	}
	if ( !ShapeXLength_ )
	{
		ShapeXLength_.reset(boost::initialized_value);
	}
	if ( !ShapeZLength_ )
	{
		ShapeZLength_.reset(boost::initialized_value);
	}
	if ( !GapXLength_ )
	{
		GapXLength_.reset(boost::initialized_value);
	}
	if ( !GapYLength_ )
	{
		GapYLength_.reset(boost::initialized_value);
	}
	if ( !GapZLength_ )
	{
		GapZLength_.reset(boost::initialized_value);
	}
	if ( !Amount_ )
	{
		Amount_.reset(boost::initialized_value);
	}
	if ( !IsStandard_ )
	{
		IsStandard_.reset(boost::initialized_value);
	}
	if ( !IsUserAdd_ )
	{
		IsUserAdd_.reset(boost::initialized_value);
	}
	if ( !MaterialPlanID_ )
	{
		MaterialPlanID_.reset(boost::initialized_value);
	}
	if ( !CabGapType_ )
	{
		CabGapType_.reset(boost::initialized_value);
	}
	if ( !CabShape_ )
	{
		CabShape_.reset(boost::initialized_value);
	}
	if ( !OrderCode_ )
	{
		OrderCode_.reset(boost::initialized_value);
	}
	if ( !Name_ )
	{
		Name_.reset(boost::initialized_value);
	}
	if ( !Code_ )
	{
		Code_.reset(boost::initialized_value);
	}
	if ( !MaterialPlanName_ )
	{
		MaterialPlanName_.reset(boost::initialized_value);
	}
	if ( !BarCode_ )
	{
		BarCode_.reset(boost::initialized_value);
	}
	if ( !Remarks_ )
	{
		Remarks_.reset(boost::initialized_value);
	}
	if ( !OldTableName_ )
	{
		OldTableName_.reset(boost::initialized_value);
	}
	if ( !OldID_ )
	{
		OldID_.reset(boost::initialized_value);
	}
}

void	ZB_ObjectsImp::SData::ToUtf8()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::to_utf<char>(*OrderCode_, "GBK");
	}
	if ( Name_ )
	{
		Name_ = boost::locale::conv::to_utf<char>(*Name_, "GBK");
	}
	if ( Code_ )
	{
		Code_ = boost::locale::conv::to_utf<char>(*Code_, "GBK");
	}
	if ( MaterialPlanName_ )
	{
		MaterialPlanName_ = boost::locale::conv::to_utf<char>(*MaterialPlanName_, "GBK");
	}
	if ( BarCode_ )
	{
		BarCode_ = boost::locale::conv::to_utf<char>(*BarCode_, "GBK");
	}
	if ( Remarks_ )
	{
		Remarks_ = boost::locale::conv::to_utf<char>(*Remarks_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::to_utf<char>(*OldTableName_, "GBK");
	}
}

void	ZB_ObjectsImp::SData::ToAscii()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::from_utf(*OrderCode_, "GBK");
	}
	if ( Name_ )
	{
		Name_ = boost::locale::conv::from_utf(*Name_, "GBK");
	}
	if ( Code_ )
	{
		Code_ = boost::locale::conv::from_utf(*Code_, "GBK");
	}
	if ( MaterialPlanName_ )
	{
		MaterialPlanName_ = boost::locale::conv::from_utf(*MaterialPlanName_, "GBK");
	}
	if ( BarCode_ )
	{
		BarCode_ = boost::locale::conv::from_utf(*BarCode_, "GBK");
	}
	if ( Remarks_ )
	{
		Remarks_ = boost::locale::conv::from_utf(*Remarks_, "GBK");
	}
	if ( OldTableName_ )
	{
		OldTableName_ = boost::locale::conv::from_utf(*OldTableName_, "GBK");
	}
}

autoDB::SColumns ZB_ObjectsImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Use(data.ItemID_));
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
	if ( data.ObjectType_ )
	{
		ret.With(ObjectType.Use(data.ObjectType_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Use(data.ParentID_));
	}
	if ( data.GType_ )
	{
		ret.With(GType.Use(data.GType_));
	}
	if ( data.XLength_ )
	{
		ret.With(XLength.Use(data.XLength_));
	}
	if ( data.YLength_ )
	{
		ret.With(YLength.Use(data.YLength_));
	}
	if ( data.ZLength_ )
	{
		ret.With(ZLength.Use(data.ZLength_));
	}
	if ( data.ShapeXLength_ )
	{
		ret.With(ShapeXLength.Use(data.ShapeXLength_));
	}
	if ( data.ShapeZLength_ )
	{
		ret.With(ShapeZLength.Use(data.ShapeZLength_));
	}
	if ( data.GapXLength_ )
	{
		ret.With(GapXLength.Use(data.GapXLength_));
	}
	if ( data.GapYLength_ )
	{
		ret.With(GapYLength.Use(data.GapYLength_));
	}
	if ( data.GapZLength_ )
	{
		ret.With(GapZLength.Use(data.GapZLength_));
	}
	if ( data.Amount_ )
	{
		ret.With(Amount.Use(data.Amount_));
	}
	if ( data.IsStandard_ )
	{
		ret.With(IsStandard.Use(data.IsStandard_));
	}
	if ( data.IsUserAdd_ )
	{
		ret.With(IsUserAdd.Use(data.IsUserAdd_));
	}
	if ( data.MaterialPlanID_ )
	{
		ret.With(MaterialPlanID.Use(data.MaterialPlanID_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Use(data.CabGapType_));
	}
	if ( data.CabShape_ )
	{
		ret.With(CabShape.Use(data.CabShape_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Use(data.OrderCode_));
	}
	if ( data.Name_ )
	{
		ret.With(Name.Use(data.Name_));
	}
	if ( data.Code_ )
	{
		ret.With(Code.Use(data.Code_));
	}
	if ( data.MaterialPlanName_ )
	{
		ret.With(MaterialPlanName.Use(data.MaterialPlanName_));
	}
	if ( data.BarCode_ )
	{
		ret.With(BarCode.Use(data.BarCode_));
	}
	if ( data.Remarks_ )
	{
		ret.With(Remarks.Use(data.Remarks_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Use(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Use(data.OldID_));
	}
	return std::move(ret);
}

autoDB::SColumns ZB_ObjectsImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Into(data.ItemID_));
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
	if ( data.ObjectType_ )
	{
		ret.With(ObjectType.Into(data.ObjectType_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Into(data.ParentID_));
	}
	if ( data.GType_ )
	{
		ret.With(GType.Into(data.GType_));
	}
	if ( data.XLength_ )
	{
		ret.With(XLength.Into(data.XLength_));
	}
	if ( data.YLength_ )
	{
		ret.With(YLength.Into(data.YLength_));
	}
	if ( data.ZLength_ )
	{
		ret.With(ZLength.Into(data.ZLength_));
	}
	if ( data.ShapeXLength_ )
	{
		ret.With(ShapeXLength.Into(data.ShapeXLength_));
	}
	if ( data.ShapeZLength_ )
	{
		ret.With(ShapeZLength.Into(data.ShapeZLength_));
	}
	if ( data.GapXLength_ )
	{
		ret.With(GapXLength.Into(data.GapXLength_));
	}
	if ( data.GapYLength_ )
	{
		ret.With(GapYLength.Into(data.GapYLength_));
	}
	if ( data.GapZLength_ )
	{
		ret.With(GapZLength.Into(data.GapZLength_));
	}
	if ( data.Amount_ )
	{
		ret.With(Amount.Into(data.Amount_));
	}
	if ( data.IsStandard_ )
	{
		ret.With(IsStandard.Into(data.IsStandard_));
	}
	if ( data.IsUserAdd_ )
	{
		ret.With(IsUserAdd.Into(data.IsUserAdd_));
	}
	if ( data.MaterialPlanID_ )
	{
		ret.With(MaterialPlanID.Into(data.MaterialPlanID_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Into(data.CabGapType_));
	}
	if ( data.CabShape_ )
	{
		ret.With(CabShape.Into(data.CabShape_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Into(data.OrderCode_));
	}
	if ( data.Name_ )
	{
		ret.With(Name.Into(data.Name_));
	}
	if ( data.Code_ )
	{
		ret.With(Code.Into(data.Code_));
	}
	if ( data.MaterialPlanName_ )
	{
		ret.With(MaterialPlanName.Into(data.MaterialPlanName_));
	}
	if ( data.BarCode_ )
	{
		ret.With(BarCode.Into(data.BarCode_));
	}
	if ( data.Remarks_ )
	{
		ret.With(Remarks.Into(data.Remarks_));
	}
	if ( data.OldTableName_ )
	{
		ret.With(OldTableName.Into(data.OldTableName_));
	}
	if ( data.OldID_ )
	{
		ret.With(OldID.Into(data.OldID_));
	}
	return std::move(ret);
}


ZB_ObjectsImp	ZB_ObjectsImp::operator() (const StringType& alias)
{
	return std::move(ZB_ObjectsImp(alias));
}

ZB_ObjectsImp::ZB_ObjectsImp( const StringType& alias ):Table(AUTODB_STR("ZB_Objects"), alias)
	,ItemID(ImpSPtr_,AUTODB_STR("ItemID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ObjectType(ImpSPtr_,AUTODB_STR("ObjectType"))
	,ParentID(ImpSPtr_,AUTODB_STR("ParentID"))
	,GType(ImpSPtr_,AUTODB_STR("GType"))
	,XLength(ImpSPtr_,AUTODB_STR("XLength"))
	,YLength(ImpSPtr_,AUTODB_STR("YLength"))
	,ZLength(ImpSPtr_,AUTODB_STR("ZLength"))
	,ShapeXLength(ImpSPtr_,AUTODB_STR("ShapeXLength"))
	,ShapeZLength(ImpSPtr_,AUTODB_STR("ShapeZLength"))
	,GapXLength(ImpSPtr_,AUTODB_STR("GapXLength"))
	,GapYLength(ImpSPtr_,AUTODB_STR("GapYLength"))
	,GapZLength(ImpSPtr_,AUTODB_STR("GapZLength"))
	,Amount(ImpSPtr_,AUTODB_STR("Amount"))
	,IsStandard(ImpSPtr_,AUTODB_STR("IsStandard"))
	,IsUserAdd(ImpSPtr_,AUTODB_STR("IsUserAdd"))
	,MaterialPlanID(ImpSPtr_,AUTODB_STR("MaterialPlanID"))
	,CabGapType(ImpSPtr_,AUTODB_STR("CabGapType"))
	,CabShape(ImpSPtr_,AUTODB_STR("CabShape"))
	,OrderCode(ImpSPtr_,AUTODB_STR("OrderCode"))
	,Name(ImpSPtr_,AUTODB_STR("Name"))
	,Code(ImpSPtr_,AUTODB_STR("Code"))
	,MaterialPlanName(ImpSPtr_,AUTODB_STR("MaterialPlanName"))
	,BarCode(ImpSPtr_,AUTODB_STR("BarCode"))
	,Remarks(ImpSPtr_,AUTODB_STR("Remarks"))
	,OldTableName(ImpSPtr_,AUTODB_STR("OldTableName"))
	,OldID(ImpSPtr_,AUTODB_STR("OldID"))
{}

ZB_ObjectsImp::ZB_ObjectsImp( const ZB_ObjectsImp& rhs ):Table(rhs)
	,ItemID(rhs.ItemID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,FactoryID(rhs.FactoryID)
	,ObjectType(rhs.ObjectType)
	,ParentID(rhs.ParentID)
	,GType(rhs.GType)
	,XLength(rhs.XLength)
	,YLength(rhs.YLength)
	,ZLength(rhs.ZLength)
	,ShapeXLength(rhs.ShapeXLength)
	,ShapeZLength(rhs.ShapeZLength)
	,GapXLength(rhs.GapXLength)
	,GapYLength(rhs.GapYLength)
	,GapZLength(rhs.GapZLength)
	,Amount(rhs.Amount)
	,IsStandard(rhs.IsStandard)
	,IsUserAdd(rhs.IsUserAdd)
	,MaterialPlanID(rhs.MaterialPlanID)
	,CabGapType(rhs.CabGapType)
	,CabShape(rhs.CabShape)
	,OrderCode(rhs.OrderCode)
	,Name(rhs.Name)
	,Code(rhs.Code)
	,MaterialPlanName(rhs.MaterialPlanName)
	,BarCode(rhs.BarCode)
	,Remarks(rhs.Remarks)
	,OldTableName(rhs.OldTableName)
	,OldID(rhs.OldID)
{}

ZB_ObjectsImp::ZB_ObjectsImp( ZB_ObjectsImp&& rhs ):Table(rhs)
	,ItemID(std::move(rhs.ItemID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,FactoryID(std::move(rhs.FactoryID))
	,ObjectType(std::move(rhs.ObjectType))
	,ParentID(std::move(rhs.ParentID))
	,GType(std::move(rhs.GType))
	,XLength(std::move(rhs.XLength))
	,YLength(std::move(rhs.YLength))
	,ZLength(std::move(rhs.ZLength))
	,ShapeXLength(std::move(rhs.ShapeXLength))
	,ShapeZLength(std::move(rhs.ShapeZLength))
	,GapXLength(std::move(rhs.GapXLength))
	,GapYLength(std::move(rhs.GapYLength))
	,GapZLength(std::move(rhs.GapZLength))
	,Amount(std::move(rhs.Amount))
	,IsStandard(std::move(rhs.IsStandard))
	,IsUserAdd(std::move(rhs.IsUserAdd))
	,MaterialPlanID(std::move(rhs.MaterialPlanID))
	,CabGapType(std::move(rhs.CabGapType))
	,CabShape(std::move(rhs.CabShape))
	,OrderCode(std::move(rhs.OrderCode))
	,Name(std::move(rhs.Name))
	,Code(std::move(rhs.Code))
	,MaterialPlanName(std::move(rhs.MaterialPlanName))
	,BarCode(std::move(rhs.BarCode))
	,Remarks(std::move(rhs.Remarks))
	,OldTableName(std::move(rhs.OldTableName))
	,OldID(std::move(rhs.OldID))
{}

ZB_ObjectsImp	ZB_Objects("");



void	ZB_OrderInfoImp::SData::SetAll(bool val)
{
	val ? ItemID_.reset(boost::initialized_value) : ItemID_=boost::none;
	val ? OrderCate_.reset(boost::initialized_value) : OrderCate_=boost::none;
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? ParentID_.reset(boost::initialized_value) : ParentID_=boost::none;
	val ? OrderType_.reset(boost::initialized_value) : OrderType_=boost::none;
	val ? OrderIndex_.reset(boost::initialized_value) : OrderIndex_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? PreSurveyorID_.reset(boost::initialized_value) : PreSurveyorID_=boost::none;
	val ? ReSurveyorID_.reset(boost::initialized_value) : ReSurveyorID_=boost::none;
	val ? DesignerID_.reset(boost::initialized_value) : DesignerID_=boost::none;
	val ? SellerID_.reset(boost::initialized_value) : SellerID_=boost::none;
	val ? AuditorID_.reset(boost::initialized_value) : AuditorID_=boost::none;
	val ? Square_.reset(boost::initialized_value) : Square_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? PreSurveyTime_ = DBTime(rawDate) : PreSurveyTime_=boost::none;
	val ? ReSurveyTime_ = DBTime(rawDate) : ReSurveyTime_=boost::none;
	val ? OrderTime_ = DBTime(rawDate) : OrderTime_=boost::none;
	val ? DeliveryTime_ = DBTime(rawDate) : DeliveryTime_=boost::none;
	val ? InstallTime_ = DBTime(rawDate) : InstallTime_=boost::none;
	val ? ShopName_.reset(boost::initialized_value) : ShopName_=boost::none;
	val ? ShopCode_.reset(boost::initialized_value) : ShopCode_=boost::none;
	val ? OrderCode_.reset(boost::initialized_value) : OrderCode_=boost::none;
	val ? DesignerName_.reset(boost::initialized_value) : DesignerName_=boost::none;
	val ? DesignerUserCode_.reset(boost::initialized_value) : DesignerUserCode_=boost::none;
	val ? PreSurveyorName_.reset(boost::initialized_value) : PreSurveyorName_=boost::none;
	val ? PreSurveyorCode_.reset(boost::initialized_value) : PreSurveyorCode_=boost::none;
	val ? ReSurveyorName_.reset(boost::initialized_value) : ReSurveyorName_=boost::none;
	val ? ReSurveyorCode_.reset(boost::initialized_value) : ReSurveyorCode_=boost::none;
	val ? SellerName_.reset(boost::initialized_value) : SellerName_=boost::none;
	val ? SellerUserCode_.reset(boost::initialized_value) : SellerUserCode_=boost::none;
	val ? AuditorName_.reset(boost::initialized_value) : AuditorName_=boost::none;
	val ? AuditorUserCode_.reset(boost::initialized_value) : AuditorUserCode_=boost::none;
	val ? GeoCode_.reset(boost::initialized_value) : GeoCode_=boost::none;
	val ? GeoName_.reset(boost::initialized_value) : GeoName_=boost::none;
	val ? OrderTitle_.reset(boost::initialized_value) : OrderTitle_=boost::none;
	val ? CustomerName_.reset(boost::initialized_value) : CustomerName_=boost::none;
	val ? CustomerTel_.reset(boost::initialized_value) : CustomerTel_=boost::none;
	val ? CustomerPostCode_.reset(boost::initialized_value) : CustomerPostCode_=boost::none;
	val ? CustomerQQ_.reset(boost::initialized_value) : CustomerQQ_=boost::none;
	val ? CustomerEmail_.reset(boost::initialized_value) : CustomerEmail_=boost::none;
	val ? InstallAddress_.reset(boost::initialized_value) : InstallAddress_=boost::none;
	val ? OrderRemarks_.reset(boost::initialized_value) : OrderRemarks_=boost::none;
	val ? PlanName_.reset(boost::initialized_value) : PlanName_=boost::none;
	val ? PlanRemarks_.reset(boost::initialized_value) : PlanRemarks_=boost::none;
	val ? AttachFilePath_.reset(boost::initialized_value) : AttachFilePath_=boost::none;
}

void	ZB_OrderInfoImp::SData::Flip()
{
	ItemID_ ? ItemID_=boost::none : ItemID_.reset(boost::initialized_value);
	OrderCate_ ? OrderCate_=boost::none : OrderCate_.reset(boost::initialized_value);
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	ParentID_ ? ParentID_=boost::none : ParentID_.reset(boost::initialized_value);
	OrderType_ ? OrderType_=boost::none : OrderType_.reset(boost::initialized_value);
	OrderIndex_ ? OrderIndex_=boost::none : OrderIndex_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	PreSurveyorID_ ? PreSurveyorID_=boost::none : PreSurveyorID_.reset(boost::initialized_value);
	ReSurveyorID_ ? ReSurveyorID_=boost::none : ReSurveyorID_.reset(boost::initialized_value);
	DesignerID_ ? DesignerID_=boost::none : DesignerID_.reset(boost::initialized_value);
	SellerID_ ? SellerID_=boost::none : SellerID_.reset(boost::initialized_value);
	AuditorID_ ? AuditorID_=boost::none : AuditorID_.reset(boost::initialized_value);
	Square_ ? Square_=boost::none : Square_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	PreSurveyTime_ ? PreSurveyTime_=boost::none : PreSurveyTime_ = DBTime(rawDate);
	ReSurveyTime_ ? ReSurveyTime_=boost::none : ReSurveyTime_ = DBTime(rawDate);
	OrderTime_ ? OrderTime_=boost::none : OrderTime_ = DBTime(rawDate);
	DeliveryTime_ ? DeliveryTime_=boost::none : DeliveryTime_ = DBTime(rawDate);
	InstallTime_ ? InstallTime_=boost::none : InstallTime_ = DBTime(rawDate);
	ShopName_ ? ShopName_=boost::none : ShopName_.reset(boost::initialized_value);
	ShopCode_ ? ShopCode_=boost::none : ShopCode_.reset(boost::initialized_value);
	OrderCode_ ? OrderCode_=boost::none : OrderCode_.reset(boost::initialized_value);
	DesignerName_ ? DesignerName_=boost::none : DesignerName_.reset(boost::initialized_value);
	DesignerUserCode_ ? DesignerUserCode_=boost::none : DesignerUserCode_.reset(boost::initialized_value);
	PreSurveyorName_ ? PreSurveyorName_=boost::none : PreSurveyorName_.reset(boost::initialized_value);
	PreSurveyorCode_ ? PreSurveyorCode_=boost::none : PreSurveyorCode_.reset(boost::initialized_value);
	ReSurveyorName_ ? ReSurveyorName_=boost::none : ReSurveyorName_.reset(boost::initialized_value);
	ReSurveyorCode_ ? ReSurveyorCode_=boost::none : ReSurveyorCode_.reset(boost::initialized_value);
	SellerName_ ? SellerName_=boost::none : SellerName_.reset(boost::initialized_value);
	SellerUserCode_ ? SellerUserCode_=boost::none : SellerUserCode_.reset(boost::initialized_value);
	AuditorName_ ? AuditorName_=boost::none : AuditorName_.reset(boost::initialized_value);
	AuditorUserCode_ ? AuditorUserCode_=boost::none : AuditorUserCode_.reset(boost::initialized_value);
	GeoCode_ ? GeoCode_=boost::none : GeoCode_.reset(boost::initialized_value);
	GeoName_ ? GeoName_=boost::none : GeoName_.reset(boost::initialized_value);
	OrderTitle_ ? OrderTitle_=boost::none : OrderTitle_.reset(boost::initialized_value);
	CustomerName_ ? CustomerName_=boost::none : CustomerName_.reset(boost::initialized_value);
	CustomerTel_ ? CustomerTel_=boost::none : CustomerTel_.reset(boost::initialized_value);
	CustomerPostCode_ ? CustomerPostCode_=boost::none : CustomerPostCode_.reset(boost::initialized_value);
	CustomerQQ_ ? CustomerQQ_=boost::none : CustomerQQ_.reset(boost::initialized_value);
	CustomerEmail_ ? CustomerEmail_=boost::none : CustomerEmail_.reset(boost::initialized_value);
	InstallAddress_ ? InstallAddress_=boost::none : InstallAddress_.reset(boost::initialized_value);
	OrderRemarks_ ? OrderRemarks_=boost::none : OrderRemarks_.reset(boost::initialized_value);
	PlanName_ ? PlanName_=boost::none : PlanName_.reset(boost::initialized_value);
	PlanRemarks_ ? PlanRemarks_=boost::none : PlanRemarks_.reset(boost::initialized_value);
	AttachFilePath_ ? AttachFilePath_=boost::none : AttachFilePath_.reset(boost::initialized_value);
}

void	ZB_OrderInfoImp::SData::Check()
{
	if ( !ItemID_ )
	{
		ItemID_.reset(boost::initialized_value);
	}
	if ( !OrderCate_ )
	{
		OrderCate_.reset(boost::initialized_value);
	}
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !ParentID_ )
	{
		ParentID_.reset(boost::initialized_value);
	}
	if ( !OrderType_ )
	{
		OrderType_.reset(boost::initialized_value);
	}
	if ( !OrderIndex_ )
	{
		OrderIndex_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !ShopID_ )
	{
		ShopID_.reset(boost::initialized_value);
	}
	if ( !PreSurveyorID_ )
	{
		PreSurveyorID_.reset(boost::initialized_value);
	}
	if ( !ReSurveyorID_ )
	{
		ReSurveyorID_.reset(boost::initialized_value);
	}
	if ( !DesignerID_ )
	{
		DesignerID_.reset(boost::initialized_value);
	}
	if ( !SellerID_ )
	{
		SellerID_.reset(boost::initialized_value);
	}
	if ( !AuditorID_ )
	{
		AuditorID_.reset(boost::initialized_value);
	}
	if ( !Square_ )
	{
		Square_.reset(boost::initialized_value);
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
	if ( !ShopName_ )
	{
		ShopName_.reset(boost::initialized_value);
	}
	if ( !ShopCode_ )
	{
		ShopCode_.reset(boost::initialized_value);
	}
	if ( !OrderCode_ )
	{
		OrderCode_.reset(boost::initialized_value);
	}
	if ( !DesignerName_ )
	{
		DesignerName_.reset(boost::initialized_value);
	}
	if ( !DesignerUserCode_ )
	{
		DesignerUserCode_.reset(boost::initialized_value);
	}
	if ( !PreSurveyorName_ )
	{
		PreSurveyorName_.reset(boost::initialized_value);
	}
	if ( !PreSurveyorCode_ )
	{
		PreSurveyorCode_.reset(boost::initialized_value);
	}
	if ( !ReSurveyorName_ )
	{
		ReSurveyorName_.reset(boost::initialized_value);
	}
	if ( !ReSurveyorCode_ )
	{
		ReSurveyorCode_.reset(boost::initialized_value);
	}
	if ( !SellerName_ )
	{
		SellerName_.reset(boost::initialized_value);
	}
	if ( !SellerUserCode_ )
	{
		SellerUserCode_.reset(boost::initialized_value);
	}
	if ( !AuditorName_ )
	{
		AuditorName_.reset(boost::initialized_value);
	}
	if ( !AuditorUserCode_ )
	{
		AuditorUserCode_.reset(boost::initialized_value);
	}
	if ( !GeoCode_ )
	{
		GeoCode_.reset(boost::initialized_value);
	}
	if ( !GeoName_ )
	{
		GeoName_.reset(boost::initialized_value);
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
	if ( !CustomerPostCode_ )
	{
		CustomerPostCode_.reset(boost::initialized_value);
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
	if ( !OrderRemarks_ )
	{
		OrderRemarks_.reset(boost::initialized_value);
	}
	if ( !PlanName_ )
	{
		PlanName_.reset(boost::initialized_value);
	}
	if ( !PlanRemarks_ )
	{
		PlanRemarks_.reset(boost::initialized_value);
	}
	if ( !AttachFilePath_ )
	{
		AttachFilePath_.reset(boost::initialized_value);
	}
}

void	ZB_OrderInfoImp::SData::ToUtf8()
{
	if ( ShopName_ )
	{
		ShopName_ = boost::locale::conv::to_utf<char>(*ShopName_, "GBK");
	}
	if ( ShopCode_ )
	{
		ShopCode_ = boost::locale::conv::to_utf<char>(*ShopCode_, "GBK");
	}
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::to_utf<char>(*OrderCode_, "GBK");
	}
	if ( DesignerName_ )
	{
		DesignerName_ = boost::locale::conv::to_utf<char>(*DesignerName_, "GBK");
	}
	if ( DesignerUserCode_ )
	{
		DesignerUserCode_ = boost::locale::conv::to_utf<char>(*DesignerUserCode_, "GBK");
	}
	if ( PreSurveyorName_ )
	{
		PreSurveyorName_ = boost::locale::conv::to_utf<char>(*PreSurveyorName_, "GBK");
	}
	if ( PreSurveyorCode_ )
	{
		PreSurveyorCode_ = boost::locale::conv::to_utf<char>(*PreSurveyorCode_, "GBK");
	}
	if ( ReSurveyorName_ )
	{
		ReSurveyorName_ = boost::locale::conv::to_utf<char>(*ReSurveyorName_, "GBK");
	}
	if ( ReSurveyorCode_ )
	{
		ReSurveyorCode_ = boost::locale::conv::to_utf<char>(*ReSurveyorCode_, "GBK");
	}
	if ( SellerName_ )
	{
		SellerName_ = boost::locale::conv::to_utf<char>(*SellerName_, "GBK");
	}
	if ( SellerUserCode_ )
	{
		SellerUserCode_ = boost::locale::conv::to_utf<char>(*SellerUserCode_, "GBK");
	}
	if ( AuditorName_ )
	{
		AuditorName_ = boost::locale::conv::to_utf<char>(*AuditorName_, "GBK");
	}
	if ( AuditorUserCode_ )
	{
		AuditorUserCode_ = boost::locale::conv::to_utf<char>(*AuditorUserCode_, "GBK");
	}
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::to_utf<char>(*GeoCode_, "GBK");
	}
	if ( GeoName_ )
	{
		GeoName_ = boost::locale::conv::to_utf<char>(*GeoName_, "GBK");
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
	if ( CustomerPostCode_ )
	{
		CustomerPostCode_ = boost::locale::conv::to_utf<char>(*CustomerPostCode_, "GBK");
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
	if ( OrderRemarks_ )
	{
		OrderRemarks_ = boost::locale::conv::to_utf<char>(*OrderRemarks_, "GBK");
	}
	if ( PlanName_ )
	{
		PlanName_ = boost::locale::conv::to_utf<char>(*PlanName_, "GBK");
	}
	if ( PlanRemarks_ )
	{
		PlanRemarks_ = boost::locale::conv::to_utf<char>(*PlanRemarks_, "GBK");
	}
	if ( AttachFilePath_ )
	{
		AttachFilePath_ = boost::locale::conv::to_utf<char>(*AttachFilePath_, "GBK");
	}
}

void	ZB_OrderInfoImp::SData::ToAscii()
{
	if ( ShopName_ )
	{
		ShopName_ = boost::locale::conv::from_utf(*ShopName_, "GBK");
	}
	if ( ShopCode_ )
	{
		ShopCode_ = boost::locale::conv::from_utf(*ShopCode_, "GBK");
	}
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::from_utf(*OrderCode_, "GBK");
	}
	if ( DesignerName_ )
	{
		DesignerName_ = boost::locale::conv::from_utf(*DesignerName_, "GBK");
	}
	if ( DesignerUserCode_ )
	{
		DesignerUserCode_ = boost::locale::conv::from_utf(*DesignerUserCode_, "GBK");
	}
	if ( PreSurveyorName_ )
	{
		PreSurveyorName_ = boost::locale::conv::from_utf(*PreSurveyorName_, "GBK");
	}
	if ( PreSurveyorCode_ )
	{
		PreSurveyorCode_ = boost::locale::conv::from_utf(*PreSurveyorCode_, "GBK");
	}
	if ( ReSurveyorName_ )
	{
		ReSurveyorName_ = boost::locale::conv::from_utf(*ReSurveyorName_, "GBK");
	}
	if ( ReSurveyorCode_ )
	{
		ReSurveyorCode_ = boost::locale::conv::from_utf(*ReSurveyorCode_, "GBK");
	}
	if ( SellerName_ )
	{
		SellerName_ = boost::locale::conv::from_utf(*SellerName_, "GBK");
	}
	if ( SellerUserCode_ )
	{
		SellerUserCode_ = boost::locale::conv::from_utf(*SellerUserCode_, "GBK");
	}
	if ( AuditorName_ )
	{
		AuditorName_ = boost::locale::conv::from_utf(*AuditorName_, "GBK");
	}
	if ( AuditorUserCode_ )
	{
		AuditorUserCode_ = boost::locale::conv::from_utf(*AuditorUserCode_, "GBK");
	}
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::from_utf(*GeoCode_, "GBK");
	}
	if ( GeoName_ )
	{
		GeoName_ = boost::locale::conv::from_utf(*GeoName_, "GBK");
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
	if ( CustomerPostCode_ )
	{
		CustomerPostCode_ = boost::locale::conv::from_utf(*CustomerPostCode_, "GBK");
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
	if ( OrderRemarks_ )
	{
		OrderRemarks_ = boost::locale::conv::from_utf(*OrderRemarks_, "GBK");
	}
	if ( PlanName_ )
	{
		PlanName_ = boost::locale::conv::from_utf(*PlanName_, "GBK");
	}
	if ( PlanRemarks_ )
	{
		PlanRemarks_ = boost::locale::conv::from_utf(*PlanRemarks_, "GBK");
	}
	if ( AttachFilePath_ )
	{
		AttachFilePath_ = boost::locale::conv::from_utf(*AttachFilePath_, "GBK");
	}
}

autoDB::SColumns ZB_OrderInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Use(data.ItemID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Use(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Use(data.ParentID_));
	}
	if ( data.OrderType_ )
	{
		ret.With(OrderType.Use(data.OrderType_));
	}
	if ( data.OrderIndex_ )
	{
		ret.With(OrderIndex.Use(data.OrderIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Use(data.ShopID_));
	}
	if ( data.PreSurveyorID_ )
	{
		ret.With(PreSurveyorID.Use(data.PreSurveyorID_));
	}
	if ( data.ReSurveyorID_ )
	{
		ret.With(ReSurveyorID.Use(data.ReSurveyorID_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Use(data.DesignerID_));
	}
	if ( data.SellerID_ )
	{
		ret.With(SellerID.Use(data.SellerID_));
	}
	if ( data.AuditorID_ )
	{
		ret.With(AuditorID.Use(data.AuditorID_));
	}
	if ( data.Square_ )
	{
		ret.With(Square.Use(data.Square_));
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
	if ( data.ShopName_ )
	{
		ret.With(ShopName.Use(data.ShopName_));
	}
	if ( data.ShopCode_ )
	{
		ret.With(ShopCode.Use(data.ShopCode_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Use(data.OrderCode_));
	}
	if ( data.DesignerName_ )
	{
		ret.With(DesignerName.Use(data.DesignerName_));
	}
	if ( data.DesignerUserCode_ )
	{
		ret.With(DesignerUserCode.Use(data.DesignerUserCode_));
	}
	if ( data.PreSurveyorName_ )
	{
		ret.With(PreSurveyorName.Use(data.PreSurveyorName_));
	}
	if ( data.PreSurveyorCode_ )
	{
		ret.With(PreSurveyorCode.Use(data.PreSurveyorCode_));
	}
	if ( data.ReSurveyorName_ )
	{
		ret.With(ReSurveyorName.Use(data.ReSurveyorName_));
	}
	if ( data.ReSurveyorCode_ )
	{
		ret.With(ReSurveyorCode.Use(data.ReSurveyorCode_));
	}
	if ( data.SellerName_ )
	{
		ret.With(SellerName.Use(data.SellerName_));
	}
	if ( data.SellerUserCode_ )
	{
		ret.With(SellerUserCode.Use(data.SellerUserCode_));
	}
	if ( data.AuditorName_ )
	{
		ret.With(AuditorName.Use(data.AuditorName_));
	}
	if ( data.AuditorUserCode_ )
	{
		ret.With(AuditorUserCode.Use(data.AuditorUserCode_));
	}
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Use(data.GeoCode_));
	}
	if ( data.GeoName_ )
	{
		ret.With(GeoName.Use(data.GeoName_));
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
	if ( data.CustomerPostCode_ )
	{
		ret.With(CustomerPostCode.Use(data.CustomerPostCode_));
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
	if ( data.OrderRemarks_ )
	{
		ret.With(OrderRemarks.Use(data.OrderRemarks_));
	}
	if ( data.PlanName_ )
	{
		ret.With(PlanName.Use(data.PlanName_));
	}
	if ( data.PlanRemarks_ )
	{
		ret.With(PlanRemarks.Use(data.PlanRemarks_));
	}
	if ( data.AttachFilePath_ )
	{
		ret.With(AttachFilePath.Use(data.AttachFilePath_));
	}
	return std::move(ret);
}

autoDB::SColumns ZB_OrderInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Into(data.ItemID_));
	}
	if ( data.OrderCate_ )
	{
		ret.With(OrderCate.Into(data.OrderCate_));
	}
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Into(data.ParentID_));
	}
	if ( data.OrderType_ )
	{
		ret.With(OrderType.Into(data.OrderType_));
	}
	if ( data.OrderIndex_ )
	{
		ret.With(OrderIndex.Into(data.OrderIndex_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Into(data.ShopID_));
	}
	if ( data.PreSurveyorID_ )
	{
		ret.With(PreSurveyorID.Into(data.PreSurveyorID_));
	}
	if ( data.ReSurveyorID_ )
	{
		ret.With(ReSurveyorID.Into(data.ReSurveyorID_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Into(data.DesignerID_));
	}
	if ( data.SellerID_ )
	{
		ret.With(SellerID.Into(data.SellerID_));
	}
	if ( data.AuditorID_ )
	{
		ret.With(AuditorID.Into(data.AuditorID_));
	}
	if ( data.Square_ )
	{
		ret.With(Square.Into(data.Square_));
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
	if ( data.ShopName_ )
	{
		ret.With(ShopName.Into(data.ShopName_));
	}
	if ( data.ShopCode_ )
	{
		ret.With(ShopCode.Into(data.ShopCode_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Into(data.OrderCode_));
	}
	if ( data.DesignerName_ )
	{
		ret.With(DesignerName.Into(data.DesignerName_));
	}
	if ( data.DesignerUserCode_ )
	{
		ret.With(DesignerUserCode.Into(data.DesignerUserCode_));
	}
	if ( data.PreSurveyorName_ )
	{
		ret.With(PreSurveyorName.Into(data.PreSurveyorName_));
	}
	if ( data.PreSurveyorCode_ )
	{
		ret.With(PreSurveyorCode.Into(data.PreSurveyorCode_));
	}
	if ( data.ReSurveyorName_ )
	{
		ret.With(ReSurveyorName.Into(data.ReSurveyorName_));
	}
	if ( data.ReSurveyorCode_ )
	{
		ret.With(ReSurveyorCode.Into(data.ReSurveyorCode_));
	}
	if ( data.SellerName_ )
	{
		ret.With(SellerName.Into(data.SellerName_));
	}
	if ( data.SellerUserCode_ )
	{
		ret.With(SellerUserCode.Into(data.SellerUserCode_));
	}
	if ( data.AuditorName_ )
	{
		ret.With(AuditorName.Into(data.AuditorName_));
	}
	if ( data.AuditorUserCode_ )
	{
		ret.With(AuditorUserCode.Into(data.AuditorUserCode_));
	}
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Into(data.GeoCode_));
	}
	if ( data.GeoName_ )
	{
		ret.With(GeoName.Into(data.GeoName_));
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
	if ( data.CustomerPostCode_ )
	{
		ret.With(CustomerPostCode.Into(data.CustomerPostCode_));
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
	if ( data.OrderRemarks_ )
	{
		ret.With(OrderRemarks.Into(data.OrderRemarks_));
	}
	if ( data.PlanName_ )
	{
		ret.With(PlanName.Into(data.PlanName_));
	}
	if ( data.PlanRemarks_ )
	{
		ret.With(PlanRemarks.Into(data.PlanRemarks_));
	}
	if ( data.AttachFilePath_ )
	{
		ret.With(AttachFilePath.Into(data.AttachFilePath_));
	}
	return std::move(ret);
}


ZB_OrderInfoImp	ZB_OrderInfoImp::operator() (const StringType& alias)
{
	return std::move(ZB_OrderInfoImp(alias));
}

ZB_OrderInfoImp::ZB_OrderInfoImp( const StringType& alias ):Table(AUTODB_STR("ZB_OrderInfo"), alias)
	,ItemID(ImpSPtr_,AUTODB_STR("ItemID"))
	,OrderCate(ImpSPtr_,AUTODB_STR("OrderCate"))
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,ParentID(ImpSPtr_,AUTODB_STR("ParentID"))
	,OrderType(ImpSPtr_,AUTODB_STR("OrderType"))
	,OrderIndex(ImpSPtr_,AUTODB_STR("OrderIndex"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,PreSurveyorID(ImpSPtr_,AUTODB_STR("PreSurveyorID"))
	,ReSurveyorID(ImpSPtr_,AUTODB_STR("ReSurveyorID"))
	,DesignerID(ImpSPtr_,AUTODB_STR("DesignerID"))
	,SellerID(ImpSPtr_,AUTODB_STR("SellerID"))
	,AuditorID(ImpSPtr_,AUTODB_STR("AuditorID"))
	,Square(ImpSPtr_,AUTODB_STR("Square"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,PreSurveyTime(ImpSPtr_,AUTODB_STR("PreSurveyTime"))
	,ReSurveyTime(ImpSPtr_,AUTODB_STR("ReSurveyTime"))
	,OrderTime(ImpSPtr_,AUTODB_STR("OrderTime"))
	,DeliveryTime(ImpSPtr_,AUTODB_STR("DeliveryTime"))
	,InstallTime(ImpSPtr_,AUTODB_STR("InstallTime"))
	,ShopName(ImpSPtr_,AUTODB_STR("ShopName"))
	,ShopCode(ImpSPtr_,AUTODB_STR("ShopCode"))
	,OrderCode(ImpSPtr_,AUTODB_STR("OrderCode"))
	,DesignerName(ImpSPtr_,AUTODB_STR("DesignerName"))
	,DesignerUserCode(ImpSPtr_,AUTODB_STR("DesignerUserCode"))
	,PreSurveyorName(ImpSPtr_,AUTODB_STR("PreSurveyorName"))
	,PreSurveyorCode(ImpSPtr_,AUTODB_STR("PreSurveyorCode"))
	,ReSurveyorName(ImpSPtr_,AUTODB_STR("ReSurveyorName"))
	,ReSurveyorCode(ImpSPtr_,AUTODB_STR("ReSurveyorCode"))
	,SellerName(ImpSPtr_,AUTODB_STR("SellerName"))
	,SellerUserCode(ImpSPtr_,AUTODB_STR("SellerUserCode"))
	,AuditorName(ImpSPtr_,AUTODB_STR("AuditorName"))
	,AuditorUserCode(ImpSPtr_,AUTODB_STR("AuditorUserCode"))
	,GeoCode(ImpSPtr_,AUTODB_STR("GeoCode"))
	,GeoName(ImpSPtr_,AUTODB_STR("GeoName"))
	,OrderTitle(ImpSPtr_,AUTODB_STR("OrderTitle"))
	,CustomerName(ImpSPtr_,AUTODB_STR("CustomerName"))
	,CustomerTel(ImpSPtr_,AUTODB_STR("CustomerTel"))
	,CustomerPostCode(ImpSPtr_,AUTODB_STR("CustomerPostCode"))
	,CustomerQQ(ImpSPtr_,AUTODB_STR("CustomerQQ"))
	,CustomerEmail(ImpSPtr_,AUTODB_STR("CustomerEmail"))
	,InstallAddress(ImpSPtr_,AUTODB_STR("InstallAddress"))
	,OrderRemarks(ImpSPtr_,AUTODB_STR("OrderRemarks"))
	,PlanName(ImpSPtr_,AUTODB_STR("PlanName"))
	,PlanRemarks(ImpSPtr_,AUTODB_STR("PlanRemarks"))
	,AttachFilePath(ImpSPtr_,AUTODB_STR("AttachFilePath"))
{}

ZB_OrderInfoImp::ZB_OrderInfoImp( const ZB_OrderInfoImp& rhs ):Table(rhs)
	,ItemID(rhs.ItemID)
	,OrderCate(rhs.OrderCate)
	,OrderID(rhs.OrderID)
	,ParentID(rhs.ParentID)
	,OrderType(rhs.OrderType)
	,OrderIndex(rhs.OrderIndex)
	,FactoryID(rhs.FactoryID)
	,VerCode(rhs.VerCode)
	,ShopID(rhs.ShopID)
	,PreSurveyorID(rhs.PreSurveyorID)
	,ReSurveyorID(rhs.ReSurveyorID)
	,DesignerID(rhs.DesignerID)
	,SellerID(rhs.SellerID)
	,AuditorID(rhs.AuditorID)
	,Square(rhs.Square)
	,CreateTime(rhs.CreateTime)
	,PreSurveyTime(rhs.PreSurveyTime)
	,ReSurveyTime(rhs.ReSurveyTime)
	,OrderTime(rhs.OrderTime)
	,DeliveryTime(rhs.DeliveryTime)
	,InstallTime(rhs.InstallTime)
	,ShopName(rhs.ShopName)
	,ShopCode(rhs.ShopCode)
	,OrderCode(rhs.OrderCode)
	,DesignerName(rhs.DesignerName)
	,DesignerUserCode(rhs.DesignerUserCode)
	,PreSurveyorName(rhs.PreSurveyorName)
	,PreSurveyorCode(rhs.PreSurveyorCode)
	,ReSurveyorName(rhs.ReSurveyorName)
	,ReSurveyorCode(rhs.ReSurveyorCode)
	,SellerName(rhs.SellerName)
	,SellerUserCode(rhs.SellerUserCode)
	,AuditorName(rhs.AuditorName)
	,AuditorUserCode(rhs.AuditorUserCode)
	,GeoCode(rhs.GeoCode)
	,GeoName(rhs.GeoName)
	,OrderTitle(rhs.OrderTitle)
	,CustomerName(rhs.CustomerName)
	,CustomerTel(rhs.CustomerTel)
	,CustomerPostCode(rhs.CustomerPostCode)
	,CustomerQQ(rhs.CustomerQQ)
	,CustomerEmail(rhs.CustomerEmail)
	,InstallAddress(rhs.InstallAddress)
	,OrderRemarks(rhs.OrderRemarks)
	,PlanName(rhs.PlanName)
	,PlanRemarks(rhs.PlanRemarks)
	,AttachFilePath(rhs.AttachFilePath)
{}

ZB_OrderInfoImp::ZB_OrderInfoImp( ZB_OrderInfoImp&& rhs ):Table(rhs)
	,ItemID(std::move(rhs.ItemID))
	,OrderCate(std::move(rhs.OrderCate))
	,OrderID(std::move(rhs.OrderID))
	,ParentID(std::move(rhs.ParentID))
	,OrderType(std::move(rhs.OrderType))
	,OrderIndex(std::move(rhs.OrderIndex))
	,FactoryID(std::move(rhs.FactoryID))
	,VerCode(std::move(rhs.VerCode))
	,ShopID(std::move(rhs.ShopID))
	,PreSurveyorID(std::move(rhs.PreSurveyorID))
	,ReSurveyorID(std::move(rhs.ReSurveyorID))
	,DesignerID(std::move(rhs.DesignerID))
	,SellerID(std::move(rhs.SellerID))
	,AuditorID(std::move(rhs.AuditorID))
	,Square(std::move(rhs.Square))
	,CreateTime(std::move(rhs.CreateTime))
	,PreSurveyTime(std::move(rhs.PreSurveyTime))
	,ReSurveyTime(std::move(rhs.ReSurveyTime))
	,OrderTime(std::move(rhs.OrderTime))
	,DeliveryTime(std::move(rhs.DeliveryTime))
	,InstallTime(std::move(rhs.InstallTime))
	,ShopName(std::move(rhs.ShopName))
	,ShopCode(std::move(rhs.ShopCode))
	,OrderCode(std::move(rhs.OrderCode))
	,DesignerName(std::move(rhs.DesignerName))
	,DesignerUserCode(std::move(rhs.DesignerUserCode))
	,PreSurveyorName(std::move(rhs.PreSurveyorName))
	,PreSurveyorCode(std::move(rhs.PreSurveyorCode))
	,ReSurveyorName(std::move(rhs.ReSurveyorName))
	,ReSurveyorCode(std::move(rhs.ReSurveyorCode))
	,SellerName(std::move(rhs.SellerName))
	,SellerUserCode(std::move(rhs.SellerUserCode))
	,AuditorName(std::move(rhs.AuditorName))
	,AuditorUserCode(std::move(rhs.AuditorUserCode))
	,GeoCode(std::move(rhs.GeoCode))
	,GeoName(std::move(rhs.GeoName))
	,OrderTitle(std::move(rhs.OrderTitle))
	,CustomerName(std::move(rhs.CustomerName))
	,CustomerTel(std::move(rhs.CustomerTel))
	,CustomerPostCode(std::move(rhs.CustomerPostCode))
	,CustomerQQ(std::move(rhs.CustomerQQ))
	,CustomerEmail(std::move(rhs.CustomerEmail))
	,InstallAddress(std::move(rhs.InstallAddress))
	,OrderRemarks(std::move(rhs.OrderRemarks))
	,PlanName(std::move(rhs.PlanName))
	,PlanRemarks(std::move(rhs.PlanRemarks))
	,AttachFilePath(std::move(rhs.AttachFilePath))
{}

ZB_OrderInfoImp	ZB_OrderInfo("");



}
