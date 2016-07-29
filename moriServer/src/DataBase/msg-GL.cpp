#include"msg-GL.h"

#include <boost\locale\encoding.hpp>

namespace autoDB
{
void	GL_AppVerInfoImp::SData::SetAll(bool val)
{
	val ? AppVerID_.reset(boost::initialized_value) : AppVerID_=boost::none;
	val ? ClientType_.reset(boost::initialized_value) : ClientType_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? FileSize_.reset(boost::initialized_value) : FileSize_=boost::none;
	val ? AppVerCode_.reset(boost::initialized_value) : AppVerCode_=boost::none;
	val ? HashCode_.reset(boost::initialized_value) : HashCode_=boost::none;
	val ? FilePath_.reset(boost::initialized_value) : FilePath_=boost::none;
}

void	GL_AppVerInfoImp::SData::Flip()
{
	AppVerID_ ? AppVerID_=boost::none : AppVerID_.reset(boost::initialized_value);
	ClientType_ ? ClientType_=boost::none : ClientType_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	FileSize_ ? FileSize_=boost::none : FileSize_.reset(boost::initialized_value);
	AppVerCode_ ? AppVerCode_=boost::none : AppVerCode_.reset(boost::initialized_value);
	HashCode_ ? HashCode_=boost::none : HashCode_.reset(boost::initialized_value);
	FilePath_ ? FilePath_=boost::none : FilePath_.reset(boost::initialized_value);
}

void	GL_AppVerInfoImp::SData::Check()
{
	if ( !AppVerID_ )
	{
		AppVerID_.reset(boost::initialized_value);
	}
	if ( !ClientType_ )
	{
		ClientType_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !FileSize_ )
	{
		FileSize_.reset(boost::initialized_value);
	}
	if ( !AppVerCode_ )
	{
		AppVerCode_.reset(boost::initialized_value);
	}
	if ( !HashCode_ )
	{
		HashCode_.reset(boost::initialized_value);
	}
	if ( !FilePath_ )
	{
		FilePath_.reset(boost::initialized_value);
	}
}

void	GL_AppVerInfoImp::SData::ToUtf8()
{
	if ( AppVerCode_ )
	{
		AppVerCode_ = boost::locale::conv::to_utf<char>(*AppVerCode_, "GBK");
	}
	if ( HashCode_ )
	{
		HashCode_ = boost::locale::conv::to_utf<char>(*HashCode_, "GBK");
	}
	if ( FilePath_ )
	{
		FilePath_ = boost::locale::conv::to_utf<char>(*FilePath_, "GBK");
	}
}

void	GL_AppVerInfoImp::SData::ToAscii()
{
	if ( AppVerCode_ )
	{
		AppVerCode_ = boost::locale::conv::from_utf(*AppVerCode_, "GBK");
	}
	if ( HashCode_ )
	{
		HashCode_ = boost::locale::conv::from_utf(*HashCode_, "GBK");
	}
	if ( FilePath_ )
	{
		FilePath_ = boost::locale::conv::from_utf(*FilePath_, "GBK");
	}
}

autoDB::SColumns GL_AppVerInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.AppVerID_ )
	{
		ret.With(AppVerID.Use(data.AppVerID_));
	}
	if ( data.ClientType_ )
	{
		ret.With(ClientType.Use(data.ClientType_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.FileSize_ )
	{
		ret.With(FileSize.Use(data.FileSize_));
	}
	if ( data.AppVerCode_ )
	{
		ret.With(AppVerCode.Use(data.AppVerCode_));
	}
	if ( data.HashCode_ )
	{
		ret.With(HashCode.Use(data.HashCode_));
	}
	if ( data.FilePath_ )
	{
		ret.With(FilePath.Use(data.FilePath_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_AppVerInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.AppVerID_ )
	{
		ret.With(AppVerID.Into(data.AppVerID_));
	}
	if ( data.ClientType_ )
	{
		ret.With(ClientType.Into(data.ClientType_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.FileSize_ )
	{
		ret.With(FileSize.Into(data.FileSize_));
	}
	if ( data.AppVerCode_ )
	{
		ret.With(AppVerCode.Into(data.AppVerCode_));
	}
	if ( data.HashCode_ )
	{
		ret.With(HashCode.Into(data.HashCode_));
	}
	if ( data.FilePath_ )
	{
		ret.With(FilePath.Into(data.FilePath_));
	}
	return std::move(ret);
}


GL_AppVerInfoImp	GL_AppVerInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_AppVerInfoImp(alias));
}

GL_AppVerInfoImp::GL_AppVerInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_AppVerInfo"), alias)
	,AppVerID(ImpSPtr_,AUTODB_STR("AppVerID"))
	,ClientType(ImpSPtr_,AUTODB_STR("ClientType"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,FileSize(ImpSPtr_,AUTODB_STR("FileSize"))
	,AppVerCode(ImpSPtr_,AUTODB_STR("AppVerCode"))
	,HashCode(ImpSPtr_,AUTODB_STR("HashCode"))
	,FilePath(ImpSPtr_,AUTODB_STR("FilePath"))
{}

GL_AppVerInfoImp::GL_AppVerInfoImp( const GL_AppVerInfoImp& rhs ):Table(rhs)
	,AppVerID(rhs.AppVerID)
	,ClientType(rhs.ClientType)
	,IsActive(rhs.IsActive)
	,FileSize(rhs.FileSize)
	,AppVerCode(rhs.AppVerCode)
	,HashCode(rhs.HashCode)
	,FilePath(rhs.FilePath)
{}

GL_AppVerInfoImp::GL_AppVerInfoImp( GL_AppVerInfoImp&& rhs ):Table(rhs)
	,AppVerID(std::move(rhs.AppVerID))
	,ClientType(std::move(rhs.ClientType))
	,IsActive(std::move(rhs.IsActive))
	,FileSize(std::move(rhs.FileSize))
	,AppVerCode(std::move(rhs.AppVerCode))
	,HashCode(std::move(rhs.HashCode))
	,FilePath(std::move(rhs.FilePath))
{}

GL_AppVerInfoImp	GL_AppVerInfo("");



void	GL_AppleseedInfoImp::SData::SetAll(bool val)
{
	val ? ItemID_.reset(boost::initialized_value) : ItemID_=boost::none;
	val ? ItemName_.reset(boost::initialized_value) : ItemName_=boost::none;
	val ? ItemData_.reset(boost::initialized_value) : ItemData_=boost::none;
}

void	GL_AppleseedInfoImp::SData::Flip()
{
	ItemID_ ? ItemID_=boost::none : ItemID_.reset(boost::initialized_value);
	ItemName_ ? ItemName_=boost::none : ItemName_.reset(boost::initialized_value);
	ItemData_ ? ItemData_=boost::none : ItemData_.reset(boost::initialized_value);
}

void	GL_AppleseedInfoImp::SData::Check()
{
	if ( !ItemID_ )
	{
		ItemID_.reset(boost::initialized_value);
	}
	if ( !ItemName_ )
	{
		ItemName_.reset(boost::initialized_value);
	}
	if ( !ItemData_ )
	{
		ItemData_.reset(boost::initialized_value);
	}
}

void	GL_AppleseedInfoImp::SData::ToUtf8()
{
	if ( ItemName_ )
	{
		ItemName_ = boost::locale::conv::to_utf<char>(*ItemName_, "GBK");
	}
	if ( ItemData_ )
	{
		ItemData_ = boost::locale::conv::to_utf<char>(*ItemData_, "GBK");
	}
}

void	GL_AppleseedInfoImp::SData::ToAscii()
{
	if ( ItemName_ )
	{
		ItemName_ = boost::locale::conv::from_utf(*ItemName_, "GBK");
	}
	if ( ItemData_ )
	{
		ItemData_ = boost::locale::conv::from_utf(*ItemData_, "GBK");
	}
}

autoDB::SColumns GL_AppleseedInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Use(data.ItemID_));
	}
	if ( data.ItemName_ )
	{
		ret.With(ItemName.Use(data.ItemName_));
	}
	if ( data.ItemData_ )
	{
		ret.With(ItemData.Use(data.ItemData_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_AppleseedInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.ItemID_ )
	{
		ret.With(ItemID.Into(data.ItemID_));
	}
	if ( data.ItemName_ )
	{
		ret.With(ItemName.Into(data.ItemName_));
	}
	if ( data.ItemData_ )
	{
		ret.With(ItemData.Into(data.ItemData_));
	}
	return std::move(ret);
}


GL_AppleseedInfoImp	GL_AppleseedInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_AppleseedInfoImp(alias));
}

GL_AppleseedInfoImp::GL_AppleseedInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_AppleseedInfo"), alias)
	,ItemID(ImpSPtr_,AUTODB_STR("ItemID"))
	,ItemName(ImpSPtr_,AUTODB_STR("ItemName"))
	,ItemData(ImpSPtr_,AUTODB_STR("ItemData"))
{}

GL_AppleseedInfoImp::GL_AppleseedInfoImp( const GL_AppleseedInfoImp& rhs ):Table(rhs)
	,ItemID(rhs.ItemID)
	,ItemName(rhs.ItemName)
	,ItemData(rhs.ItemData)
{}

GL_AppleseedInfoImp::GL_AppleseedInfoImp( GL_AppleseedInfoImp&& rhs ):Table(rhs)
	,ItemID(std::move(rhs.ItemID))
	,ItemName(std::move(rhs.ItemName))
	,ItemData(std::move(rhs.ItemData))
{}

GL_AppleseedInfoImp	GL_AppleseedInfo("");



void	GL_AreaGeoMapInfoImp::SData::SetAll(bool val)
{
	val ? AreaID_.reset(boost::initialized_value) : AreaID_=boost::none;
	val ? GeoCode_.reset(boost::initialized_value) : GeoCode_=boost::none;
}

void	GL_AreaGeoMapInfoImp::SData::Flip()
{
	AreaID_ ? AreaID_=boost::none : AreaID_.reset(boost::initialized_value);
	GeoCode_ ? GeoCode_=boost::none : GeoCode_.reset(boost::initialized_value);
}

void	GL_AreaGeoMapInfoImp::SData::Check()
{
	if ( !AreaID_ )
	{
		AreaID_.reset(boost::initialized_value);
	}
	if ( !GeoCode_ )
	{
		GeoCode_.reset(boost::initialized_value);
	}
}

void	GL_AreaGeoMapInfoImp::SData::ToUtf8()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::to_utf<char>(*GeoCode_, "GBK");
	}
}

void	GL_AreaGeoMapInfoImp::SData::ToAscii()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::from_utf(*GeoCode_, "GBK");
	}
}

autoDB::SColumns GL_AreaGeoMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.AreaID_ )
	{
		ret.With(AreaID.Use(data.AreaID_));
	}
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Use(data.GeoCode_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_AreaGeoMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.AreaID_ )
	{
		ret.With(AreaID.Into(data.AreaID_));
	}
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Into(data.GeoCode_));
	}
	return std::move(ret);
}


GL_AreaGeoMapInfoImp	GL_AreaGeoMapInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_AreaGeoMapInfoImp(alias));
}

GL_AreaGeoMapInfoImp::GL_AreaGeoMapInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_AreaGeoMapInfo"), alias)
	,AreaID(ImpSPtr_,AUTODB_STR("AreaID"))
	,GeoCode(ImpSPtr_,AUTODB_STR("GeoCode"))
{}

GL_AreaGeoMapInfoImp::GL_AreaGeoMapInfoImp( const GL_AreaGeoMapInfoImp& rhs ):Table(rhs)
	,AreaID(rhs.AreaID)
	,GeoCode(rhs.GeoCode)
{}

GL_AreaGeoMapInfoImp::GL_AreaGeoMapInfoImp( GL_AreaGeoMapInfoImp&& rhs ):Table(rhs)
	,AreaID(std::move(rhs.AreaID))
	,GeoCode(std::move(rhs.GeoCode))
{}

GL_AreaGeoMapInfoImp	GL_AreaGeoMapInfo("");



void	GL_AreaInfoImp::SData::SetAll(bool val)
{
	val ? AreaID_.reset(boost::initialized_value) : AreaID_=boost::none;
	val ? DeptID_.reset(boost::initialized_value) : DeptID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? AreaName_.reset(boost::initialized_value) : AreaName_=boost::none;
}

void	GL_AreaInfoImp::SData::Flip()
{
	AreaID_ ? AreaID_=boost::none : AreaID_.reset(boost::initialized_value);
	DeptID_ ? DeptID_=boost::none : DeptID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	AreaName_ ? AreaName_=boost::none : AreaName_.reset(boost::initialized_value);
}

void	GL_AreaInfoImp::SData::Check()
{
	if ( !AreaID_ )
	{
		AreaID_.reset(boost::initialized_value);
	}
	if ( !DeptID_ )
	{
		DeptID_.reset(boost::initialized_value);
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
	if ( !AreaName_ )
	{
		AreaName_.reset(boost::initialized_value);
	}
}

void	GL_AreaInfoImp::SData::ToUtf8()
{
	if ( AreaName_ )
	{
		AreaName_ = boost::locale::conv::to_utf<char>(*AreaName_, "GBK");
	}
}

void	GL_AreaInfoImp::SData::ToAscii()
{
	if ( AreaName_ )
	{
		AreaName_ = boost::locale::conv::from_utf(*AreaName_, "GBK");
	}
}

autoDB::SColumns GL_AreaInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.AreaID_ )
	{
		ret.With(AreaID.Use(data.AreaID_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Use(data.DeptID_));
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
	if ( data.AreaName_ )
	{
		ret.With(AreaName.Use(data.AreaName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_AreaInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.AreaID_ )
	{
		ret.With(AreaID.Into(data.AreaID_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Into(data.DeptID_));
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
	if ( data.AreaName_ )
	{
		ret.With(AreaName.Into(data.AreaName_));
	}
	return std::move(ret);
}


GL_AreaInfoImp	GL_AreaInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_AreaInfoImp(alias));
}

GL_AreaInfoImp::GL_AreaInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_AreaInfo"), alias)
	,AreaID(ImpSPtr_,AUTODB_STR("AreaID"))
	,DeptID(ImpSPtr_,AUTODB_STR("DeptID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,AreaName(ImpSPtr_,AUTODB_STR("AreaName"))
{}

GL_AreaInfoImp::GL_AreaInfoImp( const GL_AreaInfoImp& rhs ):Table(rhs)
	,AreaID(rhs.AreaID)
	,DeptID(rhs.DeptID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,AreaName(rhs.AreaName)
{}

GL_AreaInfoImp::GL_AreaInfoImp( GL_AreaInfoImp&& rhs ):Table(rhs)
	,AreaID(std::move(rhs.AreaID))
	,DeptID(std::move(rhs.DeptID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,AreaName(std::move(rhs.AreaName))
{}

GL_AreaInfoImp	GL_AreaInfo("");



void	GL_BaseBoardInfoImp::SData::SetAll(bool val)
{
	val ? CabShape_.reset(boost::initialized_value) : CabShape_=boost::none;
	val ? CabGapType_.reset(boost::initialized_value) : CabGapType_=boost::none;
	val ? BoardType_.reset(boost::initialized_value) : BoardType_=boost::none;
	val ? BoardPosition_.reset(boost::initialized_value) : BoardPosition_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? XFormula_.reset(boost::initialized_value) : XFormula_=boost::none;
	val ? YFormula_.reset(boost::initialized_value) : YFormula_=boost::none;
	val ? XDock_.reset(boost::initialized_value) : XDock_=boost::none;
	val ? YDock_.reset(boost::initialized_value) : YDock_=boost::none;
	val ? ZDock_.reset(boost::initialized_value) : ZDock_=boost::none;
	val ? XOffset_.reset(boost::initialized_value) : XOffset_=boost::none;
	val ? YOffset_.reset(boost::initialized_value) : YOffset_=boost::none;
	val ? ZOffset_.reset(boost::initialized_value) : ZOffset_=boost::none;
	val ? ArcX_.reset(boost::initialized_value) : ArcX_=boost::none;
	val ? ArcY_.reset(boost::initialized_value) : ArcY_=boost::none;
	val ? ArcZ_.reset(boost::initialized_value) : ArcZ_=boost::none;
	val ? Name_.reset(boost::initialized_value) : Name_=boost::none;
}

void	GL_BaseBoardInfoImp::SData::Flip()
{
	CabShape_ ? CabShape_=boost::none : CabShape_.reset(boost::initialized_value);
	CabGapType_ ? CabGapType_=boost::none : CabGapType_.reset(boost::initialized_value);
	BoardType_ ? BoardType_=boost::none : BoardType_.reset(boost::initialized_value);
	BoardPosition_ ? BoardPosition_=boost::none : BoardPosition_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	XFormula_ ? XFormula_=boost::none : XFormula_.reset(boost::initialized_value);
	YFormula_ ? YFormula_=boost::none : YFormula_.reset(boost::initialized_value);
	XDock_ ? XDock_=boost::none : XDock_.reset(boost::initialized_value);
	YDock_ ? YDock_=boost::none : YDock_.reset(boost::initialized_value);
	ZDock_ ? ZDock_=boost::none : ZDock_.reset(boost::initialized_value);
	XOffset_ ? XOffset_=boost::none : XOffset_.reset(boost::initialized_value);
	YOffset_ ? YOffset_=boost::none : YOffset_.reset(boost::initialized_value);
	ZOffset_ ? ZOffset_=boost::none : ZOffset_.reset(boost::initialized_value);
	ArcX_ ? ArcX_=boost::none : ArcX_.reset(boost::initialized_value);
	ArcY_ ? ArcY_=boost::none : ArcY_.reset(boost::initialized_value);
	ArcZ_ ? ArcZ_=boost::none : ArcZ_.reset(boost::initialized_value);
	Name_ ? Name_=boost::none : Name_.reset(boost::initialized_value);
}

void	GL_BaseBoardInfoImp::SData::Check()
{
	if ( !CabShape_ )
	{
		CabShape_.reset(boost::initialized_value);
	}
	if ( !CabGapType_ )
	{
		CabGapType_.reset(boost::initialized_value);
	}
	if ( !BoardType_ )
	{
		BoardType_.reset(boost::initialized_value);
	}
	if ( !BoardPosition_ )
	{
		BoardPosition_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !XFormula_ )
	{
		XFormula_.reset(boost::initialized_value);
	}
	if ( !YFormula_ )
	{
		YFormula_.reset(boost::initialized_value);
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
	if ( !ArcX_ )
	{
		ArcX_.reset(boost::initialized_value);
	}
	if ( !ArcY_ )
	{
		ArcY_.reset(boost::initialized_value);
	}
	if ( !ArcZ_ )
	{
		ArcZ_.reset(boost::initialized_value);
	}
	if ( !Name_ )
	{
		Name_.reset(boost::initialized_value);
	}
}

void	GL_BaseBoardInfoImp::SData::ToUtf8()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::to_utf<char>(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::to_utf<char>(*YFormula_, "GBK");
	}
	if ( XOffset_ )
	{
		XOffset_ = boost::locale::conv::to_utf<char>(*XOffset_, "GBK");
	}
	if ( YOffset_ )
	{
		YOffset_ = boost::locale::conv::to_utf<char>(*YOffset_, "GBK");
	}
	if ( ZOffset_ )
	{
		ZOffset_ = boost::locale::conv::to_utf<char>(*ZOffset_, "GBK");
	}
	if ( Name_ )
	{
		Name_ = boost::locale::conv::to_utf<char>(*Name_, "GBK");
	}
}

void	GL_BaseBoardInfoImp::SData::ToAscii()
{
	if ( XFormula_ )
	{
		XFormula_ = boost::locale::conv::from_utf(*XFormula_, "GBK");
	}
	if ( YFormula_ )
	{
		YFormula_ = boost::locale::conv::from_utf(*YFormula_, "GBK");
	}
	if ( XOffset_ )
	{
		XOffset_ = boost::locale::conv::from_utf(*XOffset_, "GBK");
	}
	if ( YOffset_ )
	{
		YOffset_ = boost::locale::conv::from_utf(*YOffset_, "GBK");
	}
	if ( ZOffset_ )
	{
		ZOffset_ = boost::locale::conv::from_utf(*ZOffset_, "GBK");
	}
	if ( Name_ )
	{
		Name_ = boost::locale::conv::from_utf(*Name_, "GBK");
	}
}

autoDB::SColumns GL_BaseBoardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CabShape_ )
	{
		ret.With(CabShape.Use(data.CabShape_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Use(data.CabGapType_));
	}
	if ( data.BoardType_ )
	{
		ret.With(BoardType.Use(data.BoardType_));
	}
	if ( data.BoardPosition_ )
	{
		ret.With(BoardPosition.Use(data.BoardPosition_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Use(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Use(data.YFormula_));
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
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Use(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Use(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Use(data.ArcZ_));
	}
	if ( data.Name_ )
	{
		ret.With(Name.Use(data.Name_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_BaseBoardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CabShape_ )
	{
		ret.With(CabShape.Into(data.CabShape_));
	}
	if ( data.CabGapType_ )
	{
		ret.With(CabGapType.Into(data.CabGapType_));
	}
	if ( data.BoardType_ )
	{
		ret.With(BoardType.Into(data.BoardType_));
	}
	if ( data.BoardPosition_ )
	{
		ret.With(BoardPosition.Into(data.BoardPosition_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.XFormula_ )
	{
		ret.With(XFormula.Into(data.XFormula_));
	}
	if ( data.YFormula_ )
	{
		ret.With(YFormula.Into(data.YFormula_));
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
	if ( data.ArcX_ )
	{
		ret.With(ArcX.Into(data.ArcX_));
	}
	if ( data.ArcY_ )
	{
		ret.With(ArcY.Into(data.ArcY_));
	}
	if ( data.ArcZ_ )
	{
		ret.With(ArcZ.Into(data.ArcZ_));
	}
	if ( data.Name_ )
	{
		ret.With(Name.Into(data.Name_));
	}
	return std::move(ret);
}


GL_BaseBoardInfoImp	GL_BaseBoardInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_BaseBoardInfoImp(alias));
}

GL_BaseBoardInfoImp::GL_BaseBoardInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_BaseBoardInfo"), alias)
	,CabShape(ImpSPtr_,AUTODB_STR("CabShape"))
	,CabGapType(ImpSPtr_,AUTODB_STR("CabGapType"))
	,BoardType(ImpSPtr_,AUTODB_STR("BoardType"))
	,BoardPosition(ImpSPtr_,AUTODB_STR("BoardPosition"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,XFormula(ImpSPtr_,AUTODB_STR("XFormula"))
	,YFormula(ImpSPtr_,AUTODB_STR("YFormula"))
	,XDock(ImpSPtr_,AUTODB_STR("XDock"))
	,YDock(ImpSPtr_,AUTODB_STR("YDock"))
	,ZDock(ImpSPtr_,AUTODB_STR("ZDock"))
	,XOffset(ImpSPtr_,AUTODB_STR("XOffset"))
	,YOffset(ImpSPtr_,AUTODB_STR("YOffset"))
	,ZOffset(ImpSPtr_,AUTODB_STR("ZOffset"))
	,ArcX(ImpSPtr_,AUTODB_STR("ArcX"))
	,ArcY(ImpSPtr_,AUTODB_STR("ArcY"))
	,ArcZ(ImpSPtr_,AUTODB_STR("ArcZ"))
	,Name(ImpSPtr_,AUTODB_STR("Name"))
{}

GL_BaseBoardInfoImp::GL_BaseBoardInfoImp( const GL_BaseBoardInfoImp& rhs ):Table(rhs)
	,CabShape(rhs.CabShape)
	,CabGapType(rhs.CabGapType)
	,BoardType(rhs.BoardType)
	,BoardPosition(rhs.BoardPosition)
	,FactoryID(rhs.FactoryID)
	,XFormula(rhs.XFormula)
	,YFormula(rhs.YFormula)
	,XDock(rhs.XDock)
	,YDock(rhs.YDock)
	,ZDock(rhs.ZDock)
	,XOffset(rhs.XOffset)
	,YOffset(rhs.YOffset)
	,ZOffset(rhs.ZOffset)
	,ArcX(rhs.ArcX)
	,ArcY(rhs.ArcY)
	,ArcZ(rhs.ArcZ)
	,Name(rhs.Name)
{}

GL_BaseBoardInfoImp::GL_BaseBoardInfoImp( GL_BaseBoardInfoImp&& rhs ):Table(rhs)
	,CabShape(std::move(rhs.CabShape))
	,CabGapType(std::move(rhs.CabGapType))
	,BoardType(std::move(rhs.BoardType))
	,BoardPosition(std::move(rhs.BoardPosition))
	,FactoryID(std::move(rhs.FactoryID))
	,XFormula(std::move(rhs.XFormula))
	,YFormula(std::move(rhs.YFormula))
	,XDock(std::move(rhs.XDock))
	,YDock(std::move(rhs.YDock))
	,ZDock(std::move(rhs.ZDock))
	,XOffset(std::move(rhs.XOffset))
	,YOffset(std::move(rhs.YOffset))
	,ZOffset(std::move(rhs.ZOffset))
	,ArcX(std::move(rhs.ArcX))
	,ArcY(std::move(rhs.ArcY))
	,ArcZ(std::move(rhs.ArcZ))
	,Name(std::move(rhs.Name))
{}

GL_BaseBoardInfoImp	GL_BaseBoardInfo("");



void	GL_ChargeLogInfoImp::SData::SetAll(bool val)
{
	val ? LogID_.reset(boost::initialized_value) : LogID_=boost::none;
	val ? CardNo_.reset(boost::initialized_value) : CardNo_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
}

void	GL_ChargeLogInfoImp::SData::Flip()
{
	LogID_ ? LogID_=boost::none : LogID_.reset(boost::initialized_value);
	CardNo_ ? CardNo_=boost::none : CardNo_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
}

void	GL_ChargeLogInfoImp::SData::Check()
{
	if ( !LogID_ )
	{
		LogID_.reset(boost::initialized_value);
	}
	if ( !CardNo_ )
	{
		CardNo_.reset(boost::initialized_value);
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
}

void	GL_ChargeLogInfoImp::SData::ToUtf8()
{
	if ( CardNo_ )
	{
		CardNo_ = boost::locale::conv::to_utf<char>(*CardNo_, "GBK");
	}
}

void	GL_ChargeLogInfoImp::SData::ToAscii()
{
	if ( CardNo_ )
	{
		CardNo_ = boost::locale::conv::from_utf(*CardNo_, "GBK");
	}
}

autoDB::SColumns GL_ChargeLogInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.LogID_ )
	{
		ret.With(LogID.Use(data.LogID_));
	}
	if ( data.CardNo_ )
	{
		ret.With(CardNo.Use(data.CardNo_));
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
	return std::move(ret);
}

autoDB::SColumns GL_ChargeLogInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.LogID_ )
	{
		ret.With(LogID.Into(data.LogID_));
	}
	if ( data.CardNo_ )
	{
		ret.With(CardNo.Into(data.CardNo_));
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
	return std::move(ret);
}


GL_ChargeLogInfoImp	GL_ChargeLogInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_ChargeLogInfoImp(alias));
}

GL_ChargeLogInfoImp::GL_ChargeLogInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_ChargeLogInfo"), alias)
	,LogID(ImpSPtr_,AUTODB_STR("LogID"))
	,CardNo(ImpSPtr_,AUTODB_STR("CardNo"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
{}

GL_ChargeLogInfoImp::GL_ChargeLogInfoImp( const GL_ChargeLogInfoImp& rhs ):Table(rhs)
	,LogID(rhs.LogID)
	,CardNo(rhs.CardNo)
	,FactoryID(rhs.FactoryID)
	,ShopID(rhs.ShopID)
	,UserID(rhs.UserID)
{}

GL_ChargeLogInfoImp::GL_ChargeLogInfoImp( GL_ChargeLogInfoImp&& rhs ):Table(rhs)
	,LogID(std::move(rhs.LogID))
	,CardNo(std::move(rhs.CardNo))
	,FactoryID(std::move(rhs.FactoryID))
	,ShopID(std::move(rhs.ShopID))
	,UserID(std::move(rhs.UserID))
{}

GL_ChargeLogInfoImp	GL_ChargeLogInfo("");



void	GL_DeptInfoImp::SData::SetAll(bool val)
{
	val ? DeptID_.reset(boost::initialized_value) : DeptID_=boost::none;
	val ? ParentID_.reset(boost::initialized_value) : ParentID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? DTypeID_.reset(boost::initialized_value) : DTypeID_=boost::none;
	val ? IncOrder_.reset(boost::initialized_value) : IncOrder_=boost::none;
	val ? ShowOrder_.reset(boost::initialized_value) : ShowOrder_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? GeoCode_.reset(boost::initialized_value) : GeoCode_=boost::none;
	val ? DeptCode_.reset(boost::initialized_value) : DeptCode_=boost::none;
	val ? DeptName_.reset(boost::initialized_value) : DeptName_=boost::none;
	val ? Postcode_.reset(boost::initialized_value) : Postcode_=boost::none;
	val ? Tel_.reset(boost::initialized_value) : Tel_=boost::none;
	val ? Contacter_.reset(boost::initialized_value) : Contacter_=boost::none;
	val ? ContactAddress_.reset(boost::initialized_value) : ContactAddress_=boost::none;
	val ? DeptMemo_.reset(boost::initialized_value) : DeptMemo_=boost::none;
}

void	GL_DeptInfoImp::SData::Flip()
{
	DeptID_ ? DeptID_=boost::none : DeptID_.reset(boost::initialized_value);
	ParentID_ ? ParentID_=boost::none : ParentID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	DTypeID_ ? DTypeID_=boost::none : DTypeID_.reset(boost::initialized_value);
	IncOrder_ ? IncOrder_=boost::none : IncOrder_.reset(boost::initialized_value);
	ShowOrder_ ? ShowOrder_=boost::none : ShowOrder_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	GeoCode_ ? GeoCode_=boost::none : GeoCode_.reset(boost::initialized_value);
	DeptCode_ ? DeptCode_=boost::none : DeptCode_.reset(boost::initialized_value);
	DeptName_ ? DeptName_=boost::none : DeptName_.reset(boost::initialized_value);
	Postcode_ ? Postcode_=boost::none : Postcode_.reset(boost::initialized_value);
	Tel_ ? Tel_=boost::none : Tel_.reset(boost::initialized_value);
	Contacter_ ? Contacter_=boost::none : Contacter_.reset(boost::initialized_value);
	ContactAddress_ ? ContactAddress_=boost::none : ContactAddress_.reset(boost::initialized_value);
	DeptMemo_ ? DeptMemo_=boost::none : DeptMemo_.reset(boost::initialized_value);
}

void	GL_DeptInfoImp::SData::Check()
{
	if ( !DeptID_ )
	{
		DeptID_.reset(boost::initialized_value);
	}
	if ( !ParentID_ )
	{
		ParentID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !DTypeID_ )
	{
		DTypeID_.reset(boost::initialized_value);
	}
	if ( !IncOrder_ )
	{
		IncOrder_.reset(boost::initialized_value);
	}
	if ( !ShowOrder_ )
	{
		ShowOrder_.reset(boost::initialized_value);
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
	if ( !GeoCode_ )
	{
		GeoCode_.reset(boost::initialized_value);
	}
	if ( !DeptCode_ )
	{
		DeptCode_.reset(boost::initialized_value);
	}
	if ( !DeptName_ )
	{
		DeptName_.reset(boost::initialized_value);
	}
	if ( !Postcode_ )
	{
		Postcode_.reset(boost::initialized_value);
	}
	if ( !Tel_ )
	{
		Tel_.reset(boost::initialized_value);
	}
	if ( !Contacter_ )
	{
		Contacter_.reset(boost::initialized_value);
	}
	if ( !ContactAddress_ )
	{
		ContactAddress_.reset(boost::initialized_value);
	}
	if ( !DeptMemo_ )
	{
		DeptMemo_.reset(boost::initialized_value);
	}
}

void	GL_DeptInfoImp::SData::ToUtf8()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::to_utf<char>(*GeoCode_, "GBK");
	}
	if ( DeptCode_ )
	{
		DeptCode_ = boost::locale::conv::to_utf<char>(*DeptCode_, "GBK");
	}
	if ( DeptName_ )
	{
		DeptName_ = boost::locale::conv::to_utf<char>(*DeptName_, "GBK");
	}
	if ( Postcode_ )
	{
		Postcode_ = boost::locale::conv::to_utf<char>(*Postcode_, "GBK");
	}
	if ( Tel_ )
	{
		Tel_ = boost::locale::conv::to_utf<char>(*Tel_, "GBK");
	}
	if ( Contacter_ )
	{
		Contacter_ = boost::locale::conv::to_utf<char>(*Contacter_, "GBK");
	}
	if ( ContactAddress_ )
	{
		ContactAddress_ = boost::locale::conv::to_utf<char>(*ContactAddress_, "GBK");
	}
	if ( DeptMemo_ )
	{
		DeptMemo_ = boost::locale::conv::to_utf<char>(*DeptMemo_, "GBK");
	}
}

void	GL_DeptInfoImp::SData::ToAscii()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::from_utf(*GeoCode_, "GBK");
	}
	if ( DeptCode_ )
	{
		DeptCode_ = boost::locale::conv::from_utf(*DeptCode_, "GBK");
	}
	if ( DeptName_ )
	{
		DeptName_ = boost::locale::conv::from_utf(*DeptName_, "GBK");
	}
	if ( Postcode_ )
	{
		Postcode_ = boost::locale::conv::from_utf(*Postcode_, "GBK");
	}
	if ( Tel_ )
	{
		Tel_ = boost::locale::conv::from_utf(*Tel_, "GBK");
	}
	if ( Contacter_ )
	{
		Contacter_ = boost::locale::conv::from_utf(*Contacter_, "GBK");
	}
	if ( ContactAddress_ )
	{
		ContactAddress_ = boost::locale::conv::from_utf(*ContactAddress_, "GBK");
	}
	if ( DeptMemo_ )
	{
		DeptMemo_ = boost::locale::conv::from_utf(*DeptMemo_, "GBK");
	}
}

autoDB::SColumns GL_DeptInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Use(data.DeptID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Use(data.ParentID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.DTypeID_ )
	{
		ret.With(DTypeID.Use(data.DTypeID_));
	}
	if ( data.IncOrder_ )
	{
		ret.With(IncOrder.Use(data.IncOrder_));
	}
	if ( data.ShowOrder_ )
	{
		ret.With(ShowOrder.Use(data.ShowOrder_));
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
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Use(data.GeoCode_));
	}
	if ( data.DeptCode_ )
	{
		ret.With(DeptCode.Use(data.DeptCode_));
	}
	if ( data.DeptName_ )
	{
		ret.With(DeptName.Use(data.DeptName_));
	}
	if ( data.Postcode_ )
	{
		ret.With(Postcode.Use(data.Postcode_));
	}
	if ( data.Tel_ )
	{
		ret.With(Tel.Use(data.Tel_));
	}
	if ( data.Contacter_ )
	{
		ret.With(Contacter.Use(data.Contacter_));
	}
	if ( data.ContactAddress_ )
	{
		ret.With(ContactAddress.Use(data.ContactAddress_));
	}
	if ( data.DeptMemo_ )
	{
		ret.With(DeptMemo.Use(data.DeptMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_DeptInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Into(data.DeptID_));
	}
	if ( data.ParentID_ )
	{
		ret.With(ParentID.Into(data.ParentID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.DTypeID_ )
	{
		ret.With(DTypeID.Into(data.DTypeID_));
	}
	if ( data.IncOrder_ )
	{
		ret.With(IncOrder.Into(data.IncOrder_));
	}
	if ( data.ShowOrder_ )
	{
		ret.With(ShowOrder.Into(data.ShowOrder_));
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
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Into(data.GeoCode_));
	}
	if ( data.DeptCode_ )
	{
		ret.With(DeptCode.Into(data.DeptCode_));
	}
	if ( data.DeptName_ )
	{
		ret.With(DeptName.Into(data.DeptName_));
	}
	if ( data.Postcode_ )
	{
		ret.With(Postcode.Into(data.Postcode_));
	}
	if ( data.Tel_ )
	{
		ret.With(Tel.Into(data.Tel_));
	}
	if ( data.Contacter_ )
	{
		ret.With(Contacter.Into(data.Contacter_));
	}
	if ( data.ContactAddress_ )
	{
		ret.With(ContactAddress.Into(data.ContactAddress_));
	}
	if ( data.DeptMemo_ )
	{
		ret.With(DeptMemo.Into(data.DeptMemo_));
	}
	return std::move(ret);
}


GL_DeptInfoImp	GL_DeptInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_DeptInfoImp(alias));
}

GL_DeptInfoImp::GL_DeptInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_DeptInfo"), alias)
	,DeptID(ImpSPtr_,AUTODB_STR("DeptID"))
	,ParentID(ImpSPtr_,AUTODB_STR("ParentID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,DTypeID(ImpSPtr_,AUTODB_STR("DTypeID"))
	,IncOrder(ImpSPtr_,AUTODB_STR("IncOrder"))
	,ShowOrder(ImpSPtr_,AUTODB_STR("ShowOrder"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,GeoCode(ImpSPtr_,AUTODB_STR("GeoCode"))
	,DeptCode(ImpSPtr_,AUTODB_STR("DeptCode"))
	,DeptName(ImpSPtr_,AUTODB_STR("DeptName"))
	,Postcode(ImpSPtr_,AUTODB_STR("Postcode"))
	,Tel(ImpSPtr_,AUTODB_STR("Tel"))
	,Contacter(ImpSPtr_,AUTODB_STR("Contacter"))
	,ContactAddress(ImpSPtr_,AUTODB_STR("ContactAddress"))
	,DeptMemo(ImpSPtr_,AUTODB_STR("DeptMemo"))
{}

GL_DeptInfoImp::GL_DeptInfoImp( const GL_DeptInfoImp& rhs ):Table(rhs)
	,DeptID(rhs.DeptID)
	,ParentID(rhs.ParentID)
	,IsDel(rhs.IsDel)
	,DTypeID(rhs.DTypeID)
	,IncOrder(rhs.IncOrder)
	,ShowOrder(rhs.ShowOrder)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,GeoCode(rhs.GeoCode)
	,DeptCode(rhs.DeptCode)
	,DeptName(rhs.DeptName)
	,Postcode(rhs.Postcode)
	,Tel(rhs.Tel)
	,Contacter(rhs.Contacter)
	,ContactAddress(rhs.ContactAddress)
	,DeptMemo(rhs.DeptMemo)
{}

GL_DeptInfoImp::GL_DeptInfoImp( GL_DeptInfoImp&& rhs ):Table(rhs)
	,DeptID(std::move(rhs.DeptID))
	,ParentID(std::move(rhs.ParentID))
	,IsDel(std::move(rhs.IsDel))
	,DTypeID(std::move(rhs.DTypeID))
	,IncOrder(std::move(rhs.IncOrder))
	,ShowOrder(std::move(rhs.ShowOrder))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,GeoCode(std::move(rhs.GeoCode))
	,DeptCode(std::move(rhs.DeptCode))
	,DeptName(std::move(rhs.DeptName))
	,Postcode(std::move(rhs.Postcode))
	,Tel(std::move(rhs.Tel))
	,Contacter(std::move(rhs.Contacter))
	,ContactAddress(std::move(rhs.ContactAddress))
	,DeptMemo(std::move(rhs.DeptMemo))
{}

GL_DeptInfoImp	GL_DeptInfo("");



void	GL_DesignerConfigInfoImp::SData::SetAll(bool val)
{
	val ? EnableSnap_.reset(boost::initialized_value) : EnableSnap_=boost::none;
	val ? AllPole_.reset(boost::initialized_value) : AllPole_=boost::none;
	val ? CrossPole_.reset(boost::initialized_value) : CrossPole_=boost::none;
	val ? WallPole_.reset(boost::initialized_value) : WallPole_=boost::none;
	val ? HotspotCapture_.reset(boost::initialized_value) : HotspotCapture_=boost::none;
	val ? GridShow_.reset(boost::initialized_value) : GridShow_=boost::none;
	val ? AngleStep_.reset(boost::initialized_value) : AngleStep_=boost::none;
	val ? TargetRange_.reset(boost::initialized_value) : TargetRange_=boost::none;
	val ? DesignBGID_.reset(boost::initialized_value) : DesignBGID_=boost::none;
	val ? PrintBGID_.reset(boost::initialized_value) : PrintBGID_=boost::none;
	val ? GridBigID_.reset(boost::initialized_value) : GridBigID_=boost::none;
	val ? GridSmallID_.reset(boost::initialized_value) : GridSmallID_=boost::none;
	val ? HotspotRotateID_.reset(boost::initialized_value) : HotspotRotateID_=boost::none;
	val ? HotspotNormalID_.reset(boost::initialized_value) : HotspotNormalID_=boost::none;
	val ? HotspotSelectID_.reset(boost::initialized_value) : HotspotSelectID_=boost::none;
	val ? CreatePointID_.reset(boost::initialized_value) : CreatePointID_=boost::none;
	val ? DesignBGColor_.reset(boost::initialized_value) : DesignBGColor_=boost::none;
	val ? PrintBGColor_.reset(boost::initialized_value) : PrintBGColor_=boost::none;
	val ? GridBigColor_.reset(boost::initialized_value) : GridBigColor_=boost::none;
	val ? GridSmallColor_.reset(boost::initialized_value) : GridSmallColor_=boost::none;
	val ? HotspotRotateColor_.reset(boost::initialized_value) : HotspotRotateColor_=boost::none;
	val ? HotspotNormalColor_.reset(boost::initialized_value) : HotspotNormalColor_=boost::none;
	val ? HotspotSelectColor_.reset(boost::initialized_value) : HotspotSelectColor_=boost::none;
	val ? CreatePointColor_.reset(boost::initialized_value) : CreatePointColor_=boost::none;
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? WallThickness_.reset(boost::initialized_value) : WallThickness_=boost::none;
	val ? WallHeight_.reset(boost::initialized_value) : WallHeight_=boost::none;
	val ? BaseLineLen_.reset(boost::initialized_value) : BaseLineLen_=boost::none;
	val ? GridWidth_.reset(boost::initialized_value) : GridWidth_=boost::none;
	val ? SnapRange_.reset(boost::initialized_value) : SnapRange_=boost::none;
	val ? SkirtLineOffsetLen_.reset(boost::initialized_value) : SkirtLineOffsetLen_=boost::none;
	val ? BottomLineOffsetLen_.reset(boost::initialized_value) : BottomLineOffsetLen_=boost::none;
	val ? TopLineOffsetLen_.reset(boost::initialized_value) : TopLineOffsetLen_=boost::none;
}

void	GL_DesignerConfigInfoImp::SData::Flip()
{
	EnableSnap_ ? EnableSnap_=boost::none : EnableSnap_.reset(boost::initialized_value);
	AllPole_ ? AllPole_=boost::none : AllPole_.reset(boost::initialized_value);
	CrossPole_ ? CrossPole_=boost::none : CrossPole_.reset(boost::initialized_value);
	WallPole_ ? WallPole_=boost::none : WallPole_.reset(boost::initialized_value);
	HotspotCapture_ ? HotspotCapture_=boost::none : HotspotCapture_.reset(boost::initialized_value);
	GridShow_ ? GridShow_=boost::none : GridShow_.reset(boost::initialized_value);
	AngleStep_ ? AngleStep_=boost::none : AngleStep_.reset(boost::initialized_value);
	TargetRange_ ? TargetRange_=boost::none : TargetRange_.reset(boost::initialized_value);
	DesignBGID_ ? DesignBGID_=boost::none : DesignBGID_.reset(boost::initialized_value);
	PrintBGID_ ? PrintBGID_=boost::none : PrintBGID_.reset(boost::initialized_value);
	GridBigID_ ? GridBigID_=boost::none : GridBigID_.reset(boost::initialized_value);
	GridSmallID_ ? GridSmallID_=boost::none : GridSmallID_.reset(boost::initialized_value);
	HotspotRotateID_ ? HotspotRotateID_=boost::none : HotspotRotateID_.reset(boost::initialized_value);
	HotspotNormalID_ ? HotspotNormalID_=boost::none : HotspotNormalID_.reset(boost::initialized_value);
	HotspotSelectID_ ? HotspotSelectID_=boost::none : HotspotSelectID_.reset(boost::initialized_value);
	CreatePointID_ ? CreatePointID_=boost::none : CreatePointID_.reset(boost::initialized_value);
	DesignBGColor_ ? DesignBGColor_=boost::none : DesignBGColor_.reset(boost::initialized_value);
	PrintBGColor_ ? PrintBGColor_=boost::none : PrintBGColor_.reset(boost::initialized_value);
	GridBigColor_ ? GridBigColor_=boost::none : GridBigColor_.reset(boost::initialized_value);
	GridSmallColor_ ? GridSmallColor_=boost::none : GridSmallColor_.reset(boost::initialized_value);
	HotspotRotateColor_ ? HotspotRotateColor_=boost::none : HotspotRotateColor_.reset(boost::initialized_value);
	HotspotNormalColor_ ? HotspotNormalColor_=boost::none : HotspotNormalColor_.reset(boost::initialized_value);
	HotspotSelectColor_ ? HotspotSelectColor_=boost::none : HotspotSelectColor_.reset(boost::initialized_value);
	CreatePointColor_ ? CreatePointColor_=boost::none : CreatePointColor_.reset(boost::initialized_value);
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	WallThickness_ ? WallThickness_=boost::none : WallThickness_.reset(boost::initialized_value);
	WallHeight_ ? WallHeight_=boost::none : WallHeight_.reset(boost::initialized_value);
	BaseLineLen_ ? BaseLineLen_=boost::none : BaseLineLen_.reset(boost::initialized_value);
	GridWidth_ ? GridWidth_=boost::none : GridWidth_.reset(boost::initialized_value);
	SnapRange_ ? SnapRange_=boost::none : SnapRange_.reset(boost::initialized_value);
	SkirtLineOffsetLen_ ? SkirtLineOffsetLen_=boost::none : SkirtLineOffsetLen_.reset(boost::initialized_value);
	BottomLineOffsetLen_ ? BottomLineOffsetLen_=boost::none : BottomLineOffsetLen_.reset(boost::initialized_value);
	TopLineOffsetLen_ ? TopLineOffsetLen_=boost::none : TopLineOffsetLen_.reset(boost::initialized_value);
}

void	GL_DesignerConfigInfoImp::SData::Check()
{
	if ( !EnableSnap_ )
	{
		EnableSnap_.reset(boost::initialized_value);
	}
	if ( !AllPole_ )
	{
		AllPole_.reset(boost::initialized_value);
	}
	if ( !CrossPole_ )
	{
		CrossPole_.reset(boost::initialized_value);
	}
	if ( !WallPole_ )
	{
		WallPole_.reset(boost::initialized_value);
	}
	if ( !HotspotCapture_ )
	{
		HotspotCapture_.reset(boost::initialized_value);
	}
	if ( !GridShow_ )
	{
		GridShow_.reset(boost::initialized_value);
	}
	if ( !AngleStep_ )
	{
		AngleStep_.reset(boost::initialized_value);
	}
	if ( !TargetRange_ )
	{
		TargetRange_.reset(boost::initialized_value);
	}
	if ( !DesignBGID_ )
	{
		DesignBGID_.reset(boost::initialized_value);
	}
	if ( !PrintBGID_ )
	{
		PrintBGID_.reset(boost::initialized_value);
	}
	if ( !GridBigID_ )
	{
		GridBigID_.reset(boost::initialized_value);
	}
	if ( !GridSmallID_ )
	{
		GridSmallID_.reset(boost::initialized_value);
	}
	if ( !HotspotRotateID_ )
	{
		HotspotRotateID_.reset(boost::initialized_value);
	}
	if ( !HotspotNormalID_ )
	{
		HotspotNormalID_.reset(boost::initialized_value);
	}
	if ( !HotspotSelectID_ )
	{
		HotspotSelectID_.reset(boost::initialized_value);
	}
	if ( !CreatePointID_ )
	{
		CreatePointID_.reset(boost::initialized_value);
	}
	if ( !DesignBGColor_ )
	{
		DesignBGColor_.reset(boost::initialized_value);
	}
	if ( !PrintBGColor_ )
	{
		PrintBGColor_.reset(boost::initialized_value);
	}
	if ( !GridBigColor_ )
	{
		GridBigColor_.reset(boost::initialized_value);
	}
	if ( !GridSmallColor_ )
	{
		GridSmallColor_.reset(boost::initialized_value);
	}
	if ( !HotspotRotateColor_ )
	{
		HotspotRotateColor_.reset(boost::initialized_value);
	}
	if ( !HotspotNormalColor_ )
	{
		HotspotNormalColor_.reset(boost::initialized_value);
	}
	if ( !HotspotSelectColor_ )
	{
		HotspotSelectColor_.reset(boost::initialized_value);
	}
	if ( !CreatePointColor_ )
	{
		CreatePointColor_.reset(boost::initialized_value);
	}
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !WallThickness_ )
	{
		WallThickness_.reset(boost::initialized_value);
	}
	if ( !WallHeight_ )
	{
		WallHeight_.reset(boost::initialized_value);
	}
	if ( !BaseLineLen_ )
	{
		BaseLineLen_.reset(boost::initialized_value);
	}
	if ( !GridWidth_ )
	{
		GridWidth_.reset(boost::initialized_value);
	}
	if ( !SnapRange_ )
	{
		SnapRange_.reset(boost::initialized_value);
	}
	if ( !SkirtLineOffsetLen_ )
	{
		SkirtLineOffsetLen_.reset(boost::initialized_value);
	}
	if ( !BottomLineOffsetLen_ )
	{
		BottomLineOffsetLen_.reset(boost::initialized_value);
	}
	if ( !TopLineOffsetLen_ )
	{
		TopLineOffsetLen_.reset(boost::initialized_value);
	}
}

void	GL_DesignerConfigInfoImp::SData::ToUtf8()
{
}

void	GL_DesignerConfigInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GL_DesignerConfigInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.EnableSnap_ )
	{
		ret.With(EnableSnap.Use(data.EnableSnap_));
	}
	if ( data.AllPole_ )
	{
		ret.With(AllPole.Use(data.AllPole_));
	}
	if ( data.CrossPole_ )
	{
		ret.With(CrossPole.Use(data.CrossPole_));
	}
	if ( data.WallPole_ )
	{
		ret.With(WallPole.Use(data.WallPole_));
	}
	if ( data.HotspotCapture_ )
	{
		ret.With(HotspotCapture.Use(data.HotspotCapture_));
	}
	if ( data.GridShow_ )
	{
		ret.With(GridShow.Use(data.GridShow_));
	}
	if ( data.AngleStep_ )
	{
		ret.With(AngleStep.Use(data.AngleStep_));
	}
	if ( data.TargetRange_ )
	{
		ret.With(TargetRange.Use(data.TargetRange_));
	}
	if ( data.DesignBGID_ )
	{
		ret.With(DesignBGID.Use(data.DesignBGID_));
	}
	if ( data.PrintBGID_ )
	{
		ret.With(PrintBGID.Use(data.PrintBGID_));
	}
	if ( data.GridBigID_ )
	{
		ret.With(GridBigID.Use(data.GridBigID_));
	}
	if ( data.GridSmallID_ )
	{
		ret.With(GridSmallID.Use(data.GridSmallID_));
	}
	if ( data.HotspotRotateID_ )
	{
		ret.With(HotspotRotateID.Use(data.HotspotRotateID_));
	}
	if ( data.HotspotNormalID_ )
	{
		ret.With(HotspotNormalID.Use(data.HotspotNormalID_));
	}
	if ( data.HotspotSelectID_ )
	{
		ret.With(HotspotSelectID.Use(data.HotspotSelectID_));
	}
	if ( data.CreatePointID_ )
	{
		ret.With(CreatePointID.Use(data.CreatePointID_));
	}
	if ( data.DesignBGColor_ )
	{
		ret.With(DesignBGColor.Use(data.DesignBGColor_));
	}
	if ( data.PrintBGColor_ )
	{
		ret.With(PrintBGColor.Use(data.PrintBGColor_));
	}
	if ( data.GridBigColor_ )
	{
		ret.With(GridBigColor.Use(data.GridBigColor_));
	}
	if ( data.GridSmallColor_ )
	{
		ret.With(GridSmallColor.Use(data.GridSmallColor_));
	}
	if ( data.HotspotRotateColor_ )
	{
		ret.With(HotspotRotateColor.Use(data.HotspotRotateColor_));
	}
	if ( data.HotspotNormalColor_ )
	{
		ret.With(HotspotNormalColor.Use(data.HotspotNormalColor_));
	}
	if ( data.HotspotSelectColor_ )
	{
		ret.With(HotspotSelectColor.Use(data.HotspotSelectColor_));
	}
	if ( data.CreatePointColor_ )
	{
		ret.With(CreatePointColor.Use(data.CreatePointColor_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.WallThickness_ )
	{
		ret.With(WallThickness.Use(data.WallThickness_));
	}
	if ( data.WallHeight_ )
	{
		ret.With(WallHeight.Use(data.WallHeight_));
	}
	if ( data.BaseLineLen_ )
	{
		ret.With(BaseLineLen.Use(data.BaseLineLen_));
	}
	if ( data.GridWidth_ )
	{
		ret.With(GridWidth.Use(data.GridWidth_));
	}
	if ( data.SnapRange_ )
	{
		ret.With(SnapRange.Use(data.SnapRange_));
	}
	if ( data.SkirtLineOffsetLen_ )
	{
		ret.With(SkirtLineOffsetLen.Use(data.SkirtLineOffsetLen_));
	}
	if ( data.BottomLineOffsetLen_ )
	{
		ret.With(BottomLineOffsetLen.Use(data.BottomLineOffsetLen_));
	}
	if ( data.TopLineOffsetLen_ )
	{
		ret.With(TopLineOffsetLen.Use(data.TopLineOffsetLen_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_DesignerConfigInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.EnableSnap_ )
	{
		ret.With(EnableSnap.Into(data.EnableSnap_));
	}
	if ( data.AllPole_ )
	{
		ret.With(AllPole.Into(data.AllPole_));
	}
	if ( data.CrossPole_ )
	{
		ret.With(CrossPole.Into(data.CrossPole_));
	}
	if ( data.WallPole_ )
	{
		ret.With(WallPole.Into(data.WallPole_));
	}
	if ( data.HotspotCapture_ )
	{
		ret.With(HotspotCapture.Into(data.HotspotCapture_));
	}
	if ( data.GridShow_ )
	{
		ret.With(GridShow.Into(data.GridShow_));
	}
	if ( data.AngleStep_ )
	{
		ret.With(AngleStep.Into(data.AngleStep_));
	}
	if ( data.TargetRange_ )
	{
		ret.With(TargetRange.Into(data.TargetRange_));
	}
	if ( data.DesignBGID_ )
	{
		ret.With(DesignBGID.Into(data.DesignBGID_));
	}
	if ( data.PrintBGID_ )
	{
		ret.With(PrintBGID.Into(data.PrintBGID_));
	}
	if ( data.GridBigID_ )
	{
		ret.With(GridBigID.Into(data.GridBigID_));
	}
	if ( data.GridSmallID_ )
	{
		ret.With(GridSmallID.Into(data.GridSmallID_));
	}
	if ( data.HotspotRotateID_ )
	{
		ret.With(HotspotRotateID.Into(data.HotspotRotateID_));
	}
	if ( data.HotspotNormalID_ )
	{
		ret.With(HotspotNormalID.Into(data.HotspotNormalID_));
	}
	if ( data.HotspotSelectID_ )
	{
		ret.With(HotspotSelectID.Into(data.HotspotSelectID_));
	}
	if ( data.CreatePointID_ )
	{
		ret.With(CreatePointID.Into(data.CreatePointID_));
	}
	if ( data.DesignBGColor_ )
	{
		ret.With(DesignBGColor.Into(data.DesignBGColor_));
	}
	if ( data.PrintBGColor_ )
	{
		ret.With(PrintBGColor.Into(data.PrintBGColor_));
	}
	if ( data.GridBigColor_ )
	{
		ret.With(GridBigColor.Into(data.GridBigColor_));
	}
	if ( data.GridSmallColor_ )
	{
		ret.With(GridSmallColor.Into(data.GridSmallColor_));
	}
	if ( data.HotspotRotateColor_ )
	{
		ret.With(HotspotRotateColor.Into(data.HotspotRotateColor_));
	}
	if ( data.HotspotNormalColor_ )
	{
		ret.With(HotspotNormalColor.Into(data.HotspotNormalColor_));
	}
	if ( data.HotspotSelectColor_ )
	{
		ret.With(HotspotSelectColor.Into(data.HotspotSelectColor_));
	}
	if ( data.CreatePointColor_ )
	{
		ret.With(CreatePointColor.Into(data.CreatePointColor_));
	}
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.WallThickness_ )
	{
		ret.With(WallThickness.Into(data.WallThickness_));
	}
	if ( data.WallHeight_ )
	{
		ret.With(WallHeight.Into(data.WallHeight_));
	}
	if ( data.BaseLineLen_ )
	{
		ret.With(BaseLineLen.Into(data.BaseLineLen_));
	}
	if ( data.GridWidth_ )
	{
		ret.With(GridWidth.Into(data.GridWidth_));
	}
	if ( data.SnapRange_ )
	{
		ret.With(SnapRange.Into(data.SnapRange_));
	}
	if ( data.SkirtLineOffsetLen_ )
	{
		ret.With(SkirtLineOffsetLen.Into(data.SkirtLineOffsetLen_));
	}
	if ( data.BottomLineOffsetLen_ )
	{
		ret.With(BottomLineOffsetLen.Into(data.BottomLineOffsetLen_));
	}
	if ( data.TopLineOffsetLen_ )
	{
		ret.With(TopLineOffsetLen.Into(data.TopLineOffsetLen_));
	}
	return std::move(ret);
}


GL_DesignerConfigInfoImp	GL_DesignerConfigInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_DesignerConfigInfoImp(alias));
}

GL_DesignerConfigInfoImp::GL_DesignerConfigInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_DesignerConfigInfo"), alias)
	,EnableSnap(ImpSPtr_,AUTODB_STR("EnableSnap"))
	,AllPole(ImpSPtr_,AUTODB_STR("AllPole"))
	,CrossPole(ImpSPtr_,AUTODB_STR("CrossPole"))
	,WallPole(ImpSPtr_,AUTODB_STR("WallPole"))
	,HotspotCapture(ImpSPtr_,AUTODB_STR("HotspotCapture"))
	,GridShow(ImpSPtr_,AUTODB_STR("GridShow"))
	,AngleStep(ImpSPtr_,AUTODB_STR("AngleStep"))
	,TargetRange(ImpSPtr_,AUTODB_STR("TargetRange"))
	,DesignBGID(ImpSPtr_,AUTODB_STR("DesignBGID"))
	,PrintBGID(ImpSPtr_,AUTODB_STR("PrintBGID"))
	,GridBigID(ImpSPtr_,AUTODB_STR("GridBigID"))
	,GridSmallID(ImpSPtr_,AUTODB_STR("GridSmallID"))
	,HotspotRotateID(ImpSPtr_,AUTODB_STR("HotspotRotateID"))
	,HotspotNormalID(ImpSPtr_,AUTODB_STR("HotspotNormalID"))
	,HotspotSelectID(ImpSPtr_,AUTODB_STR("HotspotSelectID"))
	,CreatePointID(ImpSPtr_,AUTODB_STR("CreatePointID"))
	,DesignBGColor(ImpSPtr_,AUTODB_STR("DesignBGColor"))
	,PrintBGColor(ImpSPtr_,AUTODB_STR("PrintBGColor"))
	,GridBigColor(ImpSPtr_,AUTODB_STR("GridBigColor"))
	,GridSmallColor(ImpSPtr_,AUTODB_STR("GridSmallColor"))
	,HotspotRotateColor(ImpSPtr_,AUTODB_STR("HotspotRotateColor"))
	,HotspotNormalColor(ImpSPtr_,AUTODB_STR("HotspotNormalColor"))
	,HotspotSelectColor(ImpSPtr_,AUTODB_STR("HotspotSelectColor"))
	,CreatePointColor(ImpSPtr_,AUTODB_STR("CreatePointColor"))
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,WallThickness(ImpSPtr_,AUTODB_STR("WallThickness"))
	,WallHeight(ImpSPtr_,AUTODB_STR("WallHeight"))
	,BaseLineLen(ImpSPtr_,AUTODB_STR("BaseLineLen"))
	,GridWidth(ImpSPtr_,AUTODB_STR("GridWidth"))
	,SnapRange(ImpSPtr_,AUTODB_STR("SnapRange"))
	,SkirtLineOffsetLen(ImpSPtr_,AUTODB_STR("SkirtLineOffsetLen"))
	,BottomLineOffsetLen(ImpSPtr_,AUTODB_STR("BottomLineOffsetLen"))
	,TopLineOffsetLen(ImpSPtr_,AUTODB_STR("TopLineOffsetLen"))
{}

GL_DesignerConfigInfoImp::GL_DesignerConfigInfoImp( const GL_DesignerConfigInfoImp& rhs ):Table(rhs)
	,EnableSnap(rhs.EnableSnap)
	,AllPole(rhs.AllPole)
	,CrossPole(rhs.CrossPole)
	,WallPole(rhs.WallPole)
	,HotspotCapture(rhs.HotspotCapture)
	,GridShow(rhs.GridShow)
	,AngleStep(rhs.AngleStep)
	,TargetRange(rhs.TargetRange)
	,DesignBGID(rhs.DesignBGID)
	,PrintBGID(rhs.PrintBGID)
	,GridBigID(rhs.GridBigID)
	,GridSmallID(rhs.GridSmallID)
	,HotspotRotateID(rhs.HotspotRotateID)
	,HotspotNormalID(rhs.HotspotNormalID)
	,HotspotSelectID(rhs.HotspotSelectID)
	,CreatePointID(rhs.CreatePointID)
	,DesignBGColor(rhs.DesignBGColor)
	,PrintBGColor(rhs.PrintBGColor)
	,GridBigColor(rhs.GridBigColor)
	,GridSmallColor(rhs.GridSmallColor)
	,HotspotRotateColor(rhs.HotspotRotateColor)
	,HotspotNormalColor(rhs.HotspotNormalColor)
	,HotspotSelectColor(rhs.HotspotSelectColor)
	,CreatePointColor(rhs.CreatePointColor)
	,UserID(rhs.UserID)
	,WallThickness(rhs.WallThickness)
	,WallHeight(rhs.WallHeight)
	,BaseLineLen(rhs.BaseLineLen)
	,GridWidth(rhs.GridWidth)
	,SnapRange(rhs.SnapRange)
	,SkirtLineOffsetLen(rhs.SkirtLineOffsetLen)
	,BottomLineOffsetLen(rhs.BottomLineOffsetLen)
	,TopLineOffsetLen(rhs.TopLineOffsetLen)
{}

GL_DesignerConfigInfoImp::GL_DesignerConfigInfoImp( GL_DesignerConfigInfoImp&& rhs ):Table(rhs)
	,EnableSnap(std::move(rhs.EnableSnap))
	,AllPole(std::move(rhs.AllPole))
	,CrossPole(std::move(rhs.CrossPole))
	,WallPole(std::move(rhs.WallPole))
	,HotspotCapture(std::move(rhs.HotspotCapture))
	,GridShow(std::move(rhs.GridShow))
	,AngleStep(std::move(rhs.AngleStep))
	,TargetRange(std::move(rhs.TargetRange))
	,DesignBGID(std::move(rhs.DesignBGID))
	,PrintBGID(std::move(rhs.PrintBGID))
	,GridBigID(std::move(rhs.GridBigID))
	,GridSmallID(std::move(rhs.GridSmallID))
	,HotspotRotateID(std::move(rhs.HotspotRotateID))
	,HotspotNormalID(std::move(rhs.HotspotNormalID))
	,HotspotSelectID(std::move(rhs.HotspotSelectID))
	,CreatePointID(std::move(rhs.CreatePointID))
	,DesignBGColor(std::move(rhs.DesignBGColor))
	,PrintBGColor(std::move(rhs.PrintBGColor))
	,GridBigColor(std::move(rhs.GridBigColor))
	,GridSmallColor(std::move(rhs.GridSmallColor))
	,HotspotRotateColor(std::move(rhs.HotspotRotateColor))
	,HotspotNormalColor(std::move(rhs.HotspotNormalColor))
	,HotspotSelectColor(std::move(rhs.HotspotSelectColor))
	,CreatePointColor(std::move(rhs.CreatePointColor))
	,UserID(std::move(rhs.UserID))
	,WallThickness(std::move(rhs.WallThickness))
	,WallHeight(std::move(rhs.WallHeight))
	,BaseLineLen(std::move(rhs.BaseLineLen))
	,GridWidth(std::move(rhs.GridWidth))
	,SnapRange(std::move(rhs.SnapRange))
	,SkirtLineOffsetLen(std::move(rhs.SkirtLineOffsetLen))
	,BottomLineOffsetLen(std::move(rhs.BottomLineOffsetLen))
	,TopLineOffsetLen(std::move(rhs.TopLineOffsetLen))
{}

GL_DesignerConfigInfoImp	GL_DesignerConfigInfo("");



void	GL_GTypeInfoImp::SData::SetAll(bool val)
{
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? GTypeName_.reset(boost::initialized_value) : GTypeName_=boost::none;
}

void	GL_GTypeInfoImp::SData::Flip()
{
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	GTypeName_ ? GTypeName_=boost::none : GTypeName_.reset(boost::initialized_value);
}

void	GL_GTypeInfoImp::SData::Check()
{
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !GTypeName_ )
	{
		GTypeName_.reset(boost::initialized_value);
	}
}

void	GL_GTypeInfoImp::SData::ToUtf8()
{
	if ( GTypeName_ )
	{
		GTypeName_ = boost::locale::conv::to_utf<char>(*GTypeName_, "GBK");
	}
}

void	GL_GTypeInfoImp::SData::ToAscii()
{
	if ( GTypeName_ )
	{
		GTypeName_ = boost::locale::conv::from_utf(*GTypeName_, "GBK");
	}
}

autoDB::SColumns GL_GTypeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.GTypeName_ )
	{
		ret.With(GTypeName.Use(data.GTypeName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_GTypeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.GTypeName_ )
	{
		ret.With(GTypeName.Into(data.GTypeName_));
	}
	return std::move(ret);
}


GL_GTypeInfoImp	GL_GTypeInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_GTypeInfoImp(alias));
}

GL_GTypeInfoImp::GL_GTypeInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_GTypeInfo"), alias)
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,GTypeName(ImpSPtr_,AUTODB_STR("GTypeName"))
{}

GL_GTypeInfoImp::GL_GTypeInfoImp( const GL_GTypeInfoImp& rhs ):Table(rhs)
	,GTypeID(rhs.GTypeID)
	,GTypeName(rhs.GTypeName)
{}

GL_GTypeInfoImp::GL_GTypeInfoImp( GL_GTypeInfoImp&& rhs ):Table(rhs)
	,GTypeID(std::move(rhs.GTypeID))
	,GTypeName(std::move(rhs.GTypeName))
{}

GL_GTypeInfoImp	GL_GTypeInfo("");



void	GL_GeoCodeInfoImp::SData::SetAll(bool val)
{
	val ? GeoCode_.reset(boost::initialized_value) : GeoCode_=boost::none;
	val ? GeoName_.reset(boost::initialized_value) : GeoName_=boost::none;
}

void	GL_GeoCodeInfoImp::SData::Flip()
{
	GeoCode_ ? GeoCode_=boost::none : GeoCode_.reset(boost::initialized_value);
	GeoName_ ? GeoName_=boost::none : GeoName_.reset(boost::initialized_value);
}

void	GL_GeoCodeInfoImp::SData::Check()
{
	if ( !GeoCode_ )
	{
		GeoCode_.reset(boost::initialized_value);
	}
	if ( !GeoName_ )
	{
		GeoName_.reset(boost::initialized_value);
	}
}

void	GL_GeoCodeInfoImp::SData::ToUtf8()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::to_utf<char>(*GeoCode_, "GBK");
	}
	if ( GeoName_ )
	{
		GeoName_ = boost::locale::conv::to_utf<char>(*GeoName_, "GBK");
	}
}

void	GL_GeoCodeInfoImp::SData::ToAscii()
{
	if ( GeoCode_ )
	{
		GeoCode_ = boost::locale::conv::from_utf(*GeoCode_, "GBK");
	}
	if ( GeoName_ )
	{
		GeoName_ = boost::locale::conv::from_utf(*GeoName_, "GBK");
	}
}

autoDB::SColumns GL_GeoCodeInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Use(data.GeoCode_));
	}
	if ( data.GeoName_ )
	{
		ret.With(GeoName.Use(data.GeoName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_GeoCodeInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.GeoCode_ )
	{
		ret.With(GeoCode.Into(data.GeoCode_));
	}
	if ( data.GeoName_ )
	{
		ret.With(GeoName.Into(data.GeoName_));
	}
	return std::move(ret);
}


GL_GeoCodeInfoImp	GL_GeoCodeInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_GeoCodeInfoImp(alias));
}

GL_GeoCodeInfoImp::GL_GeoCodeInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_GeoCodeInfo"), alias)
	,GeoCode(ImpSPtr_,AUTODB_STR("GeoCode"))
	,GeoName(ImpSPtr_,AUTODB_STR("GeoName"))
{}

GL_GeoCodeInfoImp::GL_GeoCodeInfoImp( const GL_GeoCodeInfoImp& rhs ):Table(rhs)
	,GeoCode(rhs.GeoCode)
	,GeoName(rhs.GeoName)
{}

GL_GeoCodeInfoImp::GL_GeoCodeInfoImp( GL_GeoCodeInfoImp&& rhs ):Table(rhs)
	,GeoCode(std::move(rhs.GeoCode))
	,GeoName(std::move(rhs.GeoName))
{}

GL_GeoCodeInfoImp	GL_GeoCodeInfo("");



void	GL_MajorCateInfoImp::SData::SetAll(bool val)
{
	val ? MajorCateID_.reset(boost::initialized_value) : MajorCateID_=boost::none;
	val ? MajorCateName_.reset(boost::initialized_value) : MajorCateName_=boost::none;
}

void	GL_MajorCateInfoImp::SData::Flip()
{
	MajorCateID_ ? MajorCateID_=boost::none : MajorCateID_.reset(boost::initialized_value);
	MajorCateName_ ? MajorCateName_=boost::none : MajorCateName_.reset(boost::initialized_value);
}

void	GL_MajorCateInfoImp::SData::Check()
{
	if ( !MajorCateID_ )
	{
		MajorCateID_.reset(boost::initialized_value);
	}
	if ( !MajorCateName_ )
	{
		MajorCateName_.reset(boost::initialized_value);
	}
}

void	GL_MajorCateInfoImp::SData::ToUtf8()
{
	if ( MajorCateName_ )
	{
		MajorCateName_ = boost::locale::conv::to_utf<char>(*MajorCateName_, "GBK");
	}
}

void	GL_MajorCateInfoImp::SData::ToAscii()
{
	if ( MajorCateName_ )
	{
		MajorCateName_ = boost::locale::conv::from_utf(*MajorCateName_, "GBK");
	}
}

autoDB::SColumns GL_MajorCateInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.MajorCateID_ )
	{
		ret.With(MajorCateID.Use(data.MajorCateID_));
	}
	if ( data.MajorCateName_ )
	{
		ret.With(MajorCateName.Use(data.MajorCateName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_MajorCateInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.MajorCateID_ )
	{
		ret.With(MajorCateID.Into(data.MajorCateID_));
	}
	if ( data.MajorCateName_ )
	{
		ret.With(MajorCateName.Into(data.MajorCateName_));
	}
	return std::move(ret);
}


GL_MajorCateInfoImp	GL_MajorCateInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_MajorCateInfoImp(alias));
}

GL_MajorCateInfoImp::GL_MajorCateInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_MajorCateInfo"), alias)
	,MajorCateID(ImpSPtr_,AUTODB_STR("MajorCateID"))
	,MajorCateName(ImpSPtr_,AUTODB_STR("MajorCateName"))
{}

GL_MajorCateInfoImp::GL_MajorCateInfoImp( const GL_MajorCateInfoImp& rhs ):Table(rhs)
	,MajorCateID(rhs.MajorCateID)
	,MajorCateName(rhs.MajorCateName)
{}

GL_MajorCateInfoImp::GL_MajorCateInfoImp( GL_MajorCateInfoImp&& rhs ):Table(rhs)
	,MajorCateID(std::move(rhs.MajorCateID))
	,MajorCateName(std::move(rhs.MajorCateName))
{}

GL_MajorCateInfoImp	GL_MajorCateInfo("");



void	GL_MinorCateInfoImp::SData::SetAll(bool val)
{
	val ? MajorCateID_.reset(boost::initialized_value) : MajorCateID_=boost::none;
	val ? MinorCateID_.reset(boost::initialized_value) : MinorCateID_=boost::none;
	val ? MinorCateName_.reset(boost::initialized_value) : MinorCateName_=boost::none;
}

void	GL_MinorCateInfoImp::SData::Flip()
{
	MajorCateID_ ? MajorCateID_=boost::none : MajorCateID_.reset(boost::initialized_value);
	MinorCateID_ ? MinorCateID_=boost::none : MinorCateID_.reset(boost::initialized_value);
	MinorCateName_ ? MinorCateName_=boost::none : MinorCateName_.reset(boost::initialized_value);
}

void	GL_MinorCateInfoImp::SData::Check()
{
	if ( !MajorCateID_ )
	{
		MajorCateID_.reset(boost::initialized_value);
	}
	if ( !MinorCateID_ )
	{
		MinorCateID_.reset(boost::initialized_value);
	}
	if ( !MinorCateName_ )
	{
		MinorCateName_.reset(boost::initialized_value);
	}
}

void	GL_MinorCateInfoImp::SData::ToUtf8()
{
	if ( MinorCateName_ )
	{
		MinorCateName_ = boost::locale::conv::to_utf<char>(*MinorCateName_, "GBK");
	}
}

void	GL_MinorCateInfoImp::SData::ToAscii()
{
	if ( MinorCateName_ )
	{
		MinorCateName_ = boost::locale::conv::from_utf(*MinorCateName_, "GBK");
	}
}

autoDB::SColumns GL_MinorCateInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.MajorCateID_ )
	{
		ret.With(MajorCateID.Use(data.MajorCateID_));
	}
	if ( data.MinorCateID_ )
	{
		ret.With(MinorCateID.Use(data.MinorCateID_));
	}
	if ( data.MinorCateName_ )
	{
		ret.With(MinorCateName.Use(data.MinorCateName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_MinorCateInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.MajorCateID_ )
	{
		ret.With(MajorCateID.Into(data.MajorCateID_));
	}
	if ( data.MinorCateID_ )
	{
		ret.With(MinorCateID.Into(data.MinorCateID_));
	}
	if ( data.MinorCateName_ )
	{
		ret.With(MinorCateName.Into(data.MinorCateName_));
	}
	return std::move(ret);
}


GL_MinorCateInfoImp	GL_MinorCateInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_MinorCateInfoImp(alias));
}

GL_MinorCateInfoImp::GL_MinorCateInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_MinorCateInfo"), alias)
	,MajorCateID(ImpSPtr_,AUTODB_STR("MajorCateID"))
	,MinorCateID(ImpSPtr_,AUTODB_STR("MinorCateID"))
	,MinorCateName(ImpSPtr_,AUTODB_STR("MinorCateName"))
{}

GL_MinorCateInfoImp::GL_MinorCateInfoImp( const GL_MinorCateInfoImp& rhs ):Table(rhs)
	,MajorCateID(rhs.MajorCateID)
	,MinorCateID(rhs.MinorCateID)
	,MinorCateName(rhs.MinorCateName)
{}

GL_MinorCateInfoImp::GL_MinorCateInfoImp( GL_MinorCateInfoImp&& rhs ):Table(rhs)
	,MajorCateID(std::move(rhs.MajorCateID))
	,MinorCateID(std::move(rhs.MinorCateID))
	,MinorCateName(std::move(rhs.MinorCateName))
{}

GL_MinorCateInfoImp	GL_MinorCateInfo("");



void	GL_MinorGTypeMapInfoImp::SData::SetAll(bool val)
{
	val ? MajorCateID_.reset(boost::initialized_value) : MajorCateID_=boost::none;
	val ? MinorCateID_.reset(boost::initialized_value) : MinorCateID_=boost::none;
	val ? CreateType_.reset(boost::initialized_value) : CreateType_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
}

void	GL_MinorGTypeMapInfoImp::SData::Flip()
{
	MajorCateID_ ? MajorCateID_=boost::none : MajorCateID_.reset(boost::initialized_value);
	MinorCateID_ ? MinorCateID_=boost::none : MinorCateID_.reset(boost::initialized_value);
	CreateType_ ? CreateType_=boost::none : CreateType_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
}

void	GL_MinorGTypeMapInfoImp::SData::Check()
{
	if ( !MajorCateID_ )
	{
		MajorCateID_.reset(boost::initialized_value);
	}
	if ( !MinorCateID_ )
	{
		MinorCateID_.reset(boost::initialized_value);
	}
	if ( !CreateType_ )
	{
		CreateType_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
}

void	GL_MinorGTypeMapInfoImp::SData::ToUtf8()
{
}

void	GL_MinorGTypeMapInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GL_MinorGTypeMapInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.MajorCateID_ )
	{
		ret.With(MajorCateID.Use(data.MajorCateID_));
	}
	if ( data.MinorCateID_ )
	{
		ret.With(MinorCateID.Use(data.MinorCateID_));
	}
	if ( data.CreateType_ )
	{
		ret.With(CreateType.Use(data.CreateType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_MinorGTypeMapInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.MajorCateID_ )
	{
		ret.With(MajorCateID.Into(data.MajorCateID_));
	}
	if ( data.MinorCateID_ )
	{
		ret.With(MinorCateID.Into(data.MinorCateID_));
	}
	if ( data.CreateType_ )
	{
		ret.With(CreateType.Into(data.CreateType_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	return std::move(ret);
}


GL_MinorGTypeMapInfoImp	GL_MinorGTypeMapInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_MinorGTypeMapInfoImp(alias));
}

GL_MinorGTypeMapInfoImp::GL_MinorGTypeMapInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_MinorGTypeMapInfo"), alias)
	,MajorCateID(ImpSPtr_,AUTODB_STR("MajorCateID"))
	,MinorCateID(ImpSPtr_,AUTODB_STR("MinorCateID"))
	,CreateType(ImpSPtr_,AUTODB_STR("CreateType"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
{}

GL_MinorGTypeMapInfoImp::GL_MinorGTypeMapInfoImp( const GL_MinorGTypeMapInfoImp& rhs ):Table(rhs)
	,MajorCateID(rhs.MajorCateID)
	,MinorCateID(rhs.MinorCateID)
	,CreateType(rhs.CreateType)
	,GTypeID(rhs.GTypeID)
{}

GL_MinorGTypeMapInfoImp::GL_MinorGTypeMapInfoImp( GL_MinorGTypeMapInfoImp&& rhs ):Table(rhs)
	,MajorCateID(std::move(rhs.MajorCateID))
	,MinorCateID(std::move(rhs.MinorCateID))
	,CreateType(std::move(rhs.CreateType))
	,GTypeID(std::move(rhs.GTypeID))
{}

GL_MinorGTypeMapInfoImp	GL_MinorGTypeMapInfo("");



void	GL_OrderInfoImp::SData::SetAll(bool val)
{
	val ? OrderID_.reset(boost::initialized_value) : OrderID_=boost::none;
	val ? ClientOrderID_.reset(boost::initialized_value) : ClientOrderID_=boost::none;
	val ? OrderIndex_.reset(boost::initialized_value) : OrderIndex_=boost::none;
	val ? OrderType_.reset(boost::initialized_value) : OrderType_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? OrderStatus_.reset(boost::initialized_value) : OrderStatus_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? DesignerID_.reset(boost::initialized_value) : DesignerID_=boost::none;
	val ? ShopAuditorID_.reset(boost::initialized_value) : ShopAuditorID_=boost::none;
	val ? ShopCommitorID_.reset(boost::initialized_value) : ShopCommitorID_=boost::none;
	val ? FactoryGraphAuditorID_.reset(boost::initialized_value) : FactoryGraphAuditorID_=boost::none;
	val ? FactoryListAuditorID_.reset(boost::initialized_value) : FactoryListAuditorID_=boost::none;
	val ? FactoryFinanceAuditorID_.reset(boost::initialized_value) : FactoryFinanceAuditorID_=boost::none;
	val ? ShopAuditTime_ = DBTime(rawDate) : ShopAuditTime_=boost::none;
	val ? ShopCommitTime_ = DBTime(rawDate) : ShopCommitTime_=boost::none;
	val ? GraphAuditTime_ = DBTime(rawDate) : GraphAuditTime_=boost::none;
	val ? ListAuditTime_ = DBTime(rawDate) : ListAuditTime_=boost::none;
	val ? FinanceAuditTime_ = DBTime(rawDate) : FinanceAuditTime_=boost::none;
	val ? OrderCode_.reset(boost::initialized_value) : OrderCode_=boost::none;
	val ? ShopAuditContent_.reset(boost::initialized_value) : ShopAuditContent_=boost::none;
	val ? ShopCommitContent_.reset(boost::initialized_value) : ShopCommitContent_=boost::none;
	val ? GraphAuditContent_.reset(boost::initialized_value) : GraphAuditContent_=boost::none;
	val ? ListAuditContent_.reset(boost::initialized_value) : ListAuditContent_=boost::none;
	val ? FinanceAuditContent_.reset(boost::initialized_value) : FinanceAuditContent_=boost::none;
}

void	GL_OrderInfoImp::SData::Flip()
{
	OrderID_ ? OrderID_=boost::none : OrderID_.reset(boost::initialized_value);
	ClientOrderID_ ? ClientOrderID_=boost::none : ClientOrderID_.reset(boost::initialized_value);
	OrderIndex_ ? OrderIndex_=boost::none : OrderIndex_.reset(boost::initialized_value);
	OrderType_ ? OrderType_=boost::none : OrderType_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	OrderStatus_ ? OrderStatus_=boost::none : OrderStatus_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	DesignerID_ ? DesignerID_=boost::none : DesignerID_.reset(boost::initialized_value);
	ShopAuditorID_ ? ShopAuditorID_=boost::none : ShopAuditorID_.reset(boost::initialized_value);
	ShopCommitorID_ ? ShopCommitorID_=boost::none : ShopCommitorID_.reset(boost::initialized_value);
	FactoryGraphAuditorID_ ? FactoryGraphAuditorID_=boost::none : FactoryGraphAuditorID_.reset(boost::initialized_value);
	FactoryListAuditorID_ ? FactoryListAuditorID_=boost::none : FactoryListAuditorID_.reset(boost::initialized_value);
	FactoryFinanceAuditorID_ ? FactoryFinanceAuditorID_=boost::none : FactoryFinanceAuditorID_.reset(boost::initialized_value);
	ShopAuditTime_ ? ShopAuditTime_=boost::none : ShopAuditTime_ = DBTime(rawDate);
	ShopCommitTime_ ? ShopCommitTime_=boost::none : ShopCommitTime_ = DBTime(rawDate);
	GraphAuditTime_ ? GraphAuditTime_=boost::none : GraphAuditTime_ = DBTime(rawDate);
	ListAuditTime_ ? ListAuditTime_=boost::none : ListAuditTime_ = DBTime(rawDate);
	FinanceAuditTime_ ? FinanceAuditTime_=boost::none : FinanceAuditTime_ = DBTime(rawDate);
	OrderCode_ ? OrderCode_=boost::none : OrderCode_.reset(boost::initialized_value);
	ShopAuditContent_ ? ShopAuditContent_=boost::none : ShopAuditContent_.reset(boost::initialized_value);
	ShopCommitContent_ ? ShopCommitContent_=boost::none : ShopCommitContent_.reset(boost::initialized_value);
	GraphAuditContent_ ? GraphAuditContent_=boost::none : GraphAuditContent_.reset(boost::initialized_value);
	ListAuditContent_ ? ListAuditContent_=boost::none : ListAuditContent_.reset(boost::initialized_value);
	FinanceAuditContent_ ? FinanceAuditContent_=boost::none : FinanceAuditContent_.reset(boost::initialized_value);
}

void	GL_OrderInfoImp::SData::Check()
{
	if ( !OrderID_ )
	{
		OrderID_.reset(boost::initialized_value);
	}
	if ( !ClientOrderID_ )
	{
		ClientOrderID_.reset(boost::initialized_value);
	}
	if ( !OrderIndex_ )
	{
		OrderIndex_.reset(boost::initialized_value);
	}
	if ( !OrderType_ )
	{
		OrderType_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !ShopID_ )
	{
		ShopID_.reset(boost::initialized_value);
	}
	if ( !OrderStatus_ )
	{
		OrderStatus_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !DesignerID_ )
	{
		DesignerID_.reset(boost::initialized_value);
	}
	if ( !ShopAuditorID_ )
	{
		ShopAuditorID_.reset(boost::initialized_value);
	}
	if ( !ShopCommitorID_ )
	{
		ShopCommitorID_.reset(boost::initialized_value);
	}
	if ( !FactoryGraphAuditorID_ )
	{
		FactoryGraphAuditorID_.reset(boost::initialized_value);
	}
	if ( !FactoryListAuditorID_ )
	{
		FactoryListAuditorID_.reset(boost::initialized_value);
	}
	if ( !FactoryFinanceAuditorID_ )
	{
		FactoryFinanceAuditorID_.reset(boost::initialized_value);
	}
	if ( !ShopAuditTime_ )
	{
		ShopAuditTime_ = DBTime(rawDate);
	}
	if ( !ShopCommitTime_ )
	{
		ShopCommitTime_ = DBTime(rawDate);
	}
	if ( !GraphAuditTime_ )
	{
		GraphAuditTime_ = DBTime(rawDate);
	}
	if ( !ListAuditTime_ )
	{
		ListAuditTime_ = DBTime(rawDate);
	}
	if ( !FinanceAuditTime_ )
	{
		FinanceAuditTime_ = DBTime(rawDate);
	}
	if ( !OrderCode_ )
	{
		OrderCode_.reset(boost::initialized_value);
	}
	if ( !ShopAuditContent_ )
	{
		ShopAuditContent_.reset(boost::initialized_value);
	}
	if ( !ShopCommitContent_ )
	{
		ShopCommitContent_.reset(boost::initialized_value);
	}
	if ( !GraphAuditContent_ )
	{
		GraphAuditContent_.reset(boost::initialized_value);
	}
	if ( !ListAuditContent_ )
	{
		ListAuditContent_.reset(boost::initialized_value);
	}
	if ( !FinanceAuditContent_ )
	{
		FinanceAuditContent_.reset(boost::initialized_value);
	}
}

void	GL_OrderInfoImp::SData::ToUtf8()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::to_utf<char>(*OrderCode_, "GBK");
	}
	if ( ShopAuditContent_ )
	{
		ShopAuditContent_ = boost::locale::conv::to_utf<char>(*ShopAuditContent_, "GBK");
	}
	if ( ShopCommitContent_ )
	{
		ShopCommitContent_ = boost::locale::conv::to_utf<char>(*ShopCommitContent_, "GBK");
	}
	if ( GraphAuditContent_ )
	{
		GraphAuditContent_ = boost::locale::conv::to_utf<char>(*GraphAuditContent_, "GBK");
	}
	if ( ListAuditContent_ )
	{
		ListAuditContent_ = boost::locale::conv::to_utf<char>(*ListAuditContent_, "GBK");
	}
	if ( FinanceAuditContent_ )
	{
		FinanceAuditContent_ = boost::locale::conv::to_utf<char>(*FinanceAuditContent_, "GBK");
	}
}

void	GL_OrderInfoImp::SData::ToAscii()
{
	if ( OrderCode_ )
	{
		OrderCode_ = boost::locale::conv::from_utf(*OrderCode_, "GBK");
	}
	if ( ShopAuditContent_ )
	{
		ShopAuditContent_ = boost::locale::conv::from_utf(*ShopAuditContent_, "GBK");
	}
	if ( ShopCommitContent_ )
	{
		ShopCommitContent_ = boost::locale::conv::from_utf(*ShopCommitContent_, "GBK");
	}
	if ( GraphAuditContent_ )
	{
		GraphAuditContent_ = boost::locale::conv::from_utf(*GraphAuditContent_, "GBK");
	}
	if ( ListAuditContent_ )
	{
		ListAuditContent_ = boost::locale::conv::from_utf(*ListAuditContent_, "GBK");
	}
	if ( FinanceAuditContent_ )
	{
		FinanceAuditContent_ = boost::locale::conv::from_utf(*FinanceAuditContent_, "GBK");
	}
}

autoDB::SColumns GL_OrderInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Use(data.OrderID_));
	}
	if ( data.ClientOrderID_ )
	{
		ret.With(ClientOrderID.Use(data.ClientOrderID_));
	}
	if ( data.OrderIndex_ )
	{
		ret.With(OrderIndex.Use(data.OrderIndex_));
	}
	if ( data.OrderType_ )
	{
		ret.With(OrderType.Use(data.OrderType_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Use(data.ShopID_));
	}
	if ( data.OrderStatus_ )
	{
		ret.With(OrderStatus.Use(data.OrderStatus_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Use(data.DesignerID_));
	}
	if ( data.ShopAuditorID_ )
	{
		ret.With(ShopAuditorID.Use(data.ShopAuditorID_));
	}
	if ( data.ShopCommitorID_ )
	{
		ret.With(ShopCommitorID.Use(data.ShopCommitorID_));
	}
	if ( data.FactoryGraphAuditorID_ )
	{
		ret.With(FactoryGraphAuditorID.Use(data.FactoryGraphAuditorID_));
	}
	if ( data.FactoryListAuditorID_ )
	{
		ret.With(FactoryListAuditorID.Use(data.FactoryListAuditorID_));
	}
	if ( data.FactoryFinanceAuditorID_ )
	{
		ret.With(FactoryFinanceAuditorID.Use(data.FactoryFinanceAuditorID_));
	}
	if ( data.ShopAuditTime_ )
	{
		ret.With(ShopAuditTime.Use(data.ShopAuditTime_));
	}
	if ( data.ShopCommitTime_ )
	{
		ret.With(ShopCommitTime.Use(data.ShopCommitTime_));
	}
	if ( data.GraphAuditTime_ )
	{
		ret.With(GraphAuditTime.Use(data.GraphAuditTime_));
	}
	if ( data.ListAuditTime_ )
	{
		ret.With(ListAuditTime.Use(data.ListAuditTime_));
	}
	if ( data.FinanceAuditTime_ )
	{
		ret.With(FinanceAuditTime.Use(data.FinanceAuditTime_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Use(data.OrderCode_));
	}
	if ( data.ShopAuditContent_ )
	{
		ret.With(ShopAuditContent.Use(data.ShopAuditContent_));
	}
	if ( data.ShopCommitContent_ )
	{
		ret.With(ShopCommitContent.Use(data.ShopCommitContent_));
	}
	if ( data.GraphAuditContent_ )
	{
		ret.With(GraphAuditContent.Use(data.GraphAuditContent_));
	}
	if ( data.ListAuditContent_ )
	{
		ret.With(ListAuditContent.Use(data.ListAuditContent_));
	}
	if ( data.FinanceAuditContent_ )
	{
		ret.With(FinanceAuditContent.Use(data.FinanceAuditContent_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_OrderInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.OrderID_ )
	{
		ret.With(OrderID.Into(data.OrderID_));
	}
	if ( data.ClientOrderID_ )
	{
		ret.With(ClientOrderID.Into(data.ClientOrderID_));
	}
	if ( data.OrderIndex_ )
	{
		ret.With(OrderIndex.Into(data.OrderIndex_));
	}
	if ( data.OrderType_ )
	{
		ret.With(OrderType.Into(data.OrderType_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Into(data.ShopID_));
	}
	if ( data.OrderStatus_ )
	{
		ret.With(OrderStatus.Into(data.OrderStatus_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.DesignerID_ )
	{
		ret.With(DesignerID.Into(data.DesignerID_));
	}
	if ( data.ShopAuditorID_ )
	{
		ret.With(ShopAuditorID.Into(data.ShopAuditorID_));
	}
	if ( data.ShopCommitorID_ )
	{
		ret.With(ShopCommitorID.Into(data.ShopCommitorID_));
	}
	if ( data.FactoryGraphAuditorID_ )
	{
		ret.With(FactoryGraphAuditorID.Into(data.FactoryGraphAuditorID_));
	}
	if ( data.FactoryListAuditorID_ )
	{
		ret.With(FactoryListAuditorID.Into(data.FactoryListAuditorID_));
	}
	if ( data.FactoryFinanceAuditorID_ )
	{
		ret.With(FactoryFinanceAuditorID.Into(data.FactoryFinanceAuditorID_));
	}
	if ( data.ShopAuditTime_ )
	{
		ret.With(ShopAuditTime.Into(data.ShopAuditTime_));
	}
	if ( data.ShopCommitTime_ )
	{
		ret.With(ShopCommitTime.Into(data.ShopCommitTime_));
	}
	if ( data.GraphAuditTime_ )
	{
		ret.With(GraphAuditTime.Into(data.GraphAuditTime_));
	}
	if ( data.ListAuditTime_ )
	{
		ret.With(ListAuditTime.Into(data.ListAuditTime_));
	}
	if ( data.FinanceAuditTime_ )
	{
		ret.With(FinanceAuditTime.Into(data.FinanceAuditTime_));
	}
	if ( data.OrderCode_ )
	{
		ret.With(OrderCode.Into(data.OrderCode_));
	}
	if ( data.ShopAuditContent_ )
	{
		ret.With(ShopAuditContent.Into(data.ShopAuditContent_));
	}
	if ( data.ShopCommitContent_ )
	{
		ret.With(ShopCommitContent.Into(data.ShopCommitContent_));
	}
	if ( data.GraphAuditContent_ )
	{
		ret.With(GraphAuditContent.Into(data.GraphAuditContent_));
	}
	if ( data.ListAuditContent_ )
	{
		ret.With(ListAuditContent.Into(data.ListAuditContent_));
	}
	if ( data.FinanceAuditContent_ )
	{
		ret.With(FinanceAuditContent.Into(data.FinanceAuditContent_));
	}
	return std::move(ret);
}


GL_OrderInfoImp	GL_OrderInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_OrderInfoImp(alias));
}

GL_OrderInfoImp::GL_OrderInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_OrderInfo"), alias)
	,OrderID(ImpSPtr_,AUTODB_STR("OrderID"))
	,ClientOrderID(ImpSPtr_,AUTODB_STR("ClientOrderID"))
	,OrderIndex(ImpSPtr_,AUTODB_STR("OrderIndex"))
	,OrderType(ImpSPtr_,AUTODB_STR("OrderType"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,OrderStatus(ImpSPtr_,AUTODB_STR("OrderStatus"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,DesignerID(ImpSPtr_,AUTODB_STR("DesignerID"))
	,ShopAuditorID(ImpSPtr_,AUTODB_STR("ShopAuditorID"))
	,ShopCommitorID(ImpSPtr_,AUTODB_STR("ShopCommitorID"))
	,FactoryGraphAuditorID(ImpSPtr_,AUTODB_STR("FactoryGraphAuditorID"))
	,FactoryListAuditorID(ImpSPtr_,AUTODB_STR("FactoryListAuditorID"))
	,FactoryFinanceAuditorID(ImpSPtr_,AUTODB_STR("FactoryFinanceAuditorID"))
	,ShopAuditTime(ImpSPtr_,AUTODB_STR("ShopAuditTime"))
	,ShopCommitTime(ImpSPtr_,AUTODB_STR("ShopCommitTime"))
	,GraphAuditTime(ImpSPtr_,AUTODB_STR("GraphAuditTime"))
	,ListAuditTime(ImpSPtr_,AUTODB_STR("ListAuditTime"))
	,FinanceAuditTime(ImpSPtr_,AUTODB_STR("FinanceAuditTime"))
	,OrderCode(ImpSPtr_,AUTODB_STR("OrderCode"))
	,ShopAuditContent(ImpSPtr_,AUTODB_STR("ShopAuditContent"))
	,ShopCommitContent(ImpSPtr_,AUTODB_STR("ShopCommitContent"))
	,GraphAuditContent(ImpSPtr_,AUTODB_STR("GraphAuditContent"))
	,ListAuditContent(ImpSPtr_,AUTODB_STR("ListAuditContent"))
	,FinanceAuditContent(ImpSPtr_,AUTODB_STR("FinanceAuditContent"))
{}

GL_OrderInfoImp::GL_OrderInfoImp( const GL_OrderInfoImp& rhs ):Table(rhs)
	,OrderID(rhs.OrderID)
	,ClientOrderID(rhs.ClientOrderID)
	,OrderIndex(rhs.OrderIndex)
	,OrderType(rhs.OrderType)
	,FactoryID(rhs.FactoryID)
	,ShopID(rhs.ShopID)
	,OrderStatus(rhs.OrderStatus)
	,IsDel(rhs.IsDel)
	,DesignerID(rhs.DesignerID)
	,ShopAuditorID(rhs.ShopAuditorID)
	,ShopCommitorID(rhs.ShopCommitorID)
	,FactoryGraphAuditorID(rhs.FactoryGraphAuditorID)
	,FactoryListAuditorID(rhs.FactoryListAuditorID)
	,FactoryFinanceAuditorID(rhs.FactoryFinanceAuditorID)
	,ShopAuditTime(rhs.ShopAuditTime)
	,ShopCommitTime(rhs.ShopCommitTime)
	,GraphAuditTime(rhs.GraphAuditTime)
	,ListAuditTime(rhs.ListAuditTime)
	,FinanceAuditTime(rhs.FinanceAuditTime)
	,OrderCode(rhs.OrderCode)
	,ShopAuditContent(rhs.ShopAuditContent)
	,ShopCommitContent(rhs.ShopCommitContent)
	,GraphAuditContent(rhs.GraphAuditContent)
	,ListAuditContent(rhs.ListAuditContent)
	,FinanceAuditContent(rhs.FinanceAuditContent)
{}

GL_OrderInfoImp::GL_OrderInfoImp( GL_OrderInfoImp&& rhs ):Table(rhs)
	,OrderID(std::move(rhs.OrderID))
	,ClientOrderID(std::move(rhs.ClientOrderID))
	,OrderIndex(std::move(rhs.OrderIndex))
	,OrderType(std::move(rhs.OrderType))
	,FactoryID(std::move(rhs.FactoryID))
	,ShopID(std::move(rhs.ShopID))
	,OrderStatus(std::move(rhs.OrderStatus))
	,IsDel(std::move(rhs.IsDel))
	,DesignerID(std::move(rhs.DesignerID))
	,ShopAuditorID(std::move(rhs.ShopAuditorID))
	,ShopCommitorID(std::move(rhs.ShopCommitorID))
	,FactoryGraphAuditorID(std::move(rhs.FactoryGraphAuditorID))
	,FactoryListAuditorID(std::move(rhs.FactoryListAuditorID))
	,FactoryFinanceAuditorID(std::move(rhs.FactoryFinanceAuditorID))
	,ShopAuditTime(std::move(rhs.ShopAuditTime))
	,ShopCommitTime(std::move(rhs.ShopCommitTime))
	,GraphAuditTime(std::move(rhs.GraphAuditTime))
	,ListAuditTime(std::move(rhs.ListAuditTime))
	,FinanceAuditTime(std::move(rhs.FinanceAuditTime))
	,OrderCode(std::move(rhs.OrderCode))
	,ShopAuditContent(std::move(rhs.ShopAuditContent))
	,ShopCommitContent(std::move(rhs.ShopCommitContent))
	,GraphAuditContent(std::move(rhs.GraphAuditContent))
	,ListAuditContent(std::move(rhs.ListAuditContent))
	,FinanceAuditContent(std::move(rhs.FinanceAuditContent))
{}

GL_OrderInfoImp	GL_OrderInfo("");



void	GL_PinYinImp::SData::SetAll(bool val)
{
	val ? PYCode_.reset(boost::initialized_value) : PYCode_=boost::none;
	val ? PYName_.reset(boost::initialized_value) : PYName_=boost::none;
}

void	GL_PinYinImp::SData::Flip()
{
	PYCode_ ? PYCode_=boost::none : PYCode_.reset(boost::initialized_value);
	PYName_ ? PYName_=boost::none : PYName_.reset(boost::initialized_value);
}

void	GL_PinYinImp::SData::Check()
{
	if ( !PYCode_ )
	{
		PYCode_.reset(boost::initialized_value);
	}
	if ( !PYName_ )
	{
		PYName_.reset(boost::initialized_value);
	}
}

void	GL_PinYinImp::SData::ToUtf8()
{
	if ( PYCode_ )
	{
		PYCode_ = boost::locale::conv::to_utf<char>(*PYCode_, "GBK");
	}
	if ( PYName_ )
	{
		PYName_ = boost::locale::conv::to_utf<char>(*PYName_, "GBK");
	}
}

void	GL_PinYinImp::SData::ToAscii()
{
	if ( PYCode_ )
	{
		PYCode_ = boost::locale::conv::from_utf(*PYCode_, "GBK");
	}
	if ( PYName_ )
	{
		PYName_ = boost::locale::conv::from_utf(*PYName_, "GBK");
	}
}

autoDB::SColumns GL_PinYinImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.PYCode_ )
	{
		ret.With(PYCode.Use(data.PYCode_));
	}
	if ( data.PYName_ )
	{
		ret.With(PYName.Use(data.PYName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_PinYinImp::Into( SData& data )
{
	SColumns ret;
	if ( data.PYCode_ )
	{
		ret.With(PYCode.Into(data.PYCode_));
	}
	if ( data.PYName_ )
	{
		ret.With(PYName.Into(data.PYName_));
	}
	return std::move(ret);
}


GL_PinYinImp	GL_PinYinImp::operator() (const StringType& alias)
{
	return std::move(GL_PinYinImp(alias));
}

GL_PinYinImp::GL_PinYinImp( const StringType& alias ):Table(AUTODB_STR("GL_PinYin"), alias)
	,PYCode(ImpSPtr_,AUTODB_STR("PYCode"))
	,PYName(ImpSPtr_,AUTODB_STR("PYName"))
{}

GL_PinYinImp::GL_PinYinImp( const GL_PinYinImp& rhs ):Table(rhs)
	,PYCode(rhs.PYCode)
	,PYName(rhs.PYName)
{}

GL_PinYinImp::GL_PinYinImp( GL_PinYinImp&& rhs ):Table(rhs)
	,PYCode(std::move(rhs.PYCode))
	,PYName(std::move(rhs.PYName))
{}

GL_PinYinImp	GL_PinYin("");



void	GL_PrepaidCardInfoImp::SData::SetAll(bool val)
{
	val ? CardID_.reset(boost::initialized_value) : CardID_=boost::none;
	val ? CardCategory_.reset(boost::initialized_value) : CardCategory_=boost::none;
	val ? CardType_.reset(boost::initialized_value) : CardType_=boost::none;
	val ? Period_.reset(boost::initialized_value) : Period_=boost::none;
	val ? SecureCode_.reset(boost::initialized_value) : SecureCode_=boost::none;
	val ? CardPwd_.reset(boost::initialized_value) : CardPwd_=boost::none;
	val ? SerialNo_.reset(boost::initialized_value) : SerialNo_=boost::none;
	val ? CardNo_.reset(boost::initialized_value) : CardNo_=boost::none;
}

void	GL_PrepaidCardInfoImp::SData::Flip()
{
	CardID_ ? CardID_=boost::none : CardID_.reset(boost::initialized_value);
	CardCategory_ ? CardCategory_=boost::none : CardCategory_.reset(boost::initialized_value);
	CardType_ ? CardType_=boost::none : CardType_.reset(boost::initialized_value);
	Period_ ? Period_=boost::none : Period_.reset(boost::initialized_value);
	SecureCode_ ? SecureCode_=boost::none : SecureCode_.reset(boost::initialized_value);
	CardPwd_ ? CardPwd_=boost::none : CardPwd_.reset(boost::initialized_value);
	SerialNo_ ? SerialNo_=boost::none : SerialNo_.reset(boost::initialized_value);
	CardNo_ ? CardNo_=boost::none : CardNo_.reset(boost::initialized_value);
}

void	GL_PrepaidCardInfoImp::SData::Check()
{
	if ( !CardID_ )
	{
		CardID_.reset(boost::initialized_value);
	}
	if ( !CardCategory_ )
	{
		CardCategory_.reset(boost::initialized_value);
	}
	if ( !CardType_ )
	{
		CardType_.reset(boost::initialized_value);
	}
	if ( !Period_ )
	{
		Period_.reset(boost::initialized_value);
	}
	if ( !SecureCode_ )
	{
		SecureCode_.reset(boost::initialized_value);
	}
	if ( !CardPwd_ )
	{
		CardPwd_.reset(boost::initialized_value);
	}
	if ( !SerialNo_ )
	{
		SerialNo_.reset(boost::initialized_value);
	}
	if ( !CardNo_ )
	{
		CardNo_.reset(boost::initialized_value);
	}
}

void	GL_PrepaidCardInfoImp::SData::ToUtf8()
{
	if ( SecureCode_ )
	{
		SecureCode_ = boost::locale::conv::to_utf<char>(*SecureCode_, "GBK");
	}
	if ( CardPwd_ )
	{
		CardPwd_ = boost::locale::conv::to_utf<char>(*CardPwd_, "GBK");
	}
	if ( SerialNo_ )
	{
		SerialNo_ = boost::locale::conv::to_utf<char>(*SerialNo_, "GBK");
	}
	if ( CardNo_ )
	{
		CardNo_ = boost::locale::conv::to_utf<char>(*CardNo_, "GBK");
	}
}

void	GL_PrepaidCardInfoImp::SData::ToAscii()
{
	if ( SecureCode_ )
	{
		SecureCode_ = boost::locale::conv::from_utf(*SecureCode_, "GBK");
	}
	if ( CardPwd_ )
	{
		CardPwd_ = boost::locale::conv::from_utf(*CardPwd_, "GBK");
	}
	if ( SerialNo_ )
	{
		SerialNo_ = boost::locale::conv::from_utf(*SerialNo_, "GBK");
	}
	if ( CardNo_ )
	{
		CardNo_ = boost::locale::conv::from_utf(*CardNo_, "GBK");
	}
}

autoDB::SColumns GL_PrepaidCardInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.CardID_ )
	{
		ret.With(CardID.Use(data.CardID_));
	}
	if ( data.CardCategory_ )
	{
		ret.With(CardCategory.Use(data.CardCategory_));
	}
	if ( data.CardType_ )
	{
		ret.With(CardType.Use(data.CardType_));
	}
	if ( data.Period_ )
	{
		ret.With(Period.Use(data.Period_));
	}
	if ( data.SecureCode_ )
	{
		ret.With(SecureCode.Use(data.SecureCode_));
	}
	if ( data.CardPwd_ )
	{
		ret.With(CardPwd.Use(data.CardPwd_));
	}
	if ( data.SerialNo_ )
	{
		ret.With(SerialNo.Use(data.SerialNo_));
	}
	if ( data.CardNo_ )
	{
		ret.With(CardNo.Use(data.CardNo_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_PrepaidCardInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.CardID_ )
	{
		ret.With(CardID.Into(data.CardID_));
	}
	if ( data.CardCategory_ )
	{
		ret.With(CardCategory.Into(data.CardCategory_));
	}
	if ( data.CardType_ )
	{
		ret.With(CardType.Into(data.CardType_));
	}
	if ( data.Period_ )
	{
		ret.With(Period.Into(data.Period_));
	}
	if ( data.SecureCode_ )
	{
		ret.With(SecureCode.Into(data.SecureCode_));
	}
	if ( data.CardPwd_ )
	{
		ret.With(CardPwd.Into(data.CardPwd_));
	}
	if ( data.SerialNo_ )
	{
		ret.With(SerialNo.Into(data.SerialNo_));
	}
	if ( data.CardNo_ )
	{
		ret.With(CardNo.Into(data.CardNo_));
	}
	return std::move(ret);
}


GL_PrepaidCardInfoImp	GL_PrepaidCardInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_PrepaidCardInfoImp(alias));
}

GL_PrepaidCardInfoImp::GL_PrepaidCardInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_PrepaidCardInfo"), alias)
	,CardID(ImpSPtr_,AUTODB_STR("CardID"))
	,CardCategory(ImpSPtr_,AUTODB_STR("CardCategory"))
	,CardType(ImpSPtr_,AUTODB_STR("CardType"))
	,Period(ImpSPtr_,AUTODB_STR("Period"))
	,SecureCode(ImpSPtr_,AUTODB_STR("SecureCode"))
	,CardPwd(ImpSPtr_,AUTODB_STR("CardPwd"))
	,SerialNo(ImpSPtr_,AUTODB_STR("SerialNo"))
	,CardNo(ImpSPtr_,AUTODB_STR("CardNo"))
{}

GL_PrepaidCardInfoImp::GL_PrepaidCardInfoImp( const GL_PrepaidCardInfoImp& rhs ):Table(rhs)
	,CardID(rhs.CardID)
	,CardCategory(rhs.CardCategory)
	,CardType(rhs.CardType)
	,Period(rhs.Period)
	,SecureCode(rhs.SecureCode)
	,CardPwd(rhs.CardPwd)
	,SerialNo(rhs.SerialNo)
	,CardNo(rhs.CardNo)
{}

GL_PrepaidCardInfoImp::GL_PrepaidCardInfoImp( GL_PrepaidCardInfoImp&& rhs ):Table(rhs)
	,CardID(std::move(rhs.CardID))
	,CardCategory(std::move(rhs.CardCategory))
	,CardType(std::move(rhs.CardType))
	,Period(std::move(rhs.Period))
	,SecureCode(std::move(rhs.SecureCode))
	,CardPwd(std::move(rhs.CardPwd))
	,SerialNo(std::move(rhs.SerialNo))
	,CardNo(std::move(rhs.CardNo))
{}

GL_PrepaidCardInfoImp	GL_PrepaidCardInfo("");



void	GL_PrintTemplateInfoImp::SData::SetAll(bool val)
{
	val ? TemplateID_.reset(boost::initialized_value) : TemplateID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? IsActive_.reset(boost::initialized_value) : IsActive_=boost::none;
	val ? RelativePath_.reset(boost::initialized_value) : RelativePath_=boost::none;
	val ? TemplateName_.reset(boost::initialized_value) : TemplateName_=boost::none;
	val ? TemplateMemo_.reset(boost::initialized_value) : TemplateMemo_=boost::none;
	val ? HashCode_.reset(boost::initialized_value) : HashCode_=boost::none;
}

void	GL_PrintTemplateInfoImp::SData::Flip()
{
	TemplateID_ ? TemplateID_=boost::none : TemplateID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	IsActive_ ? IsActive_=boost::none : IsActive_.reset(boost::initialized_value);
	RelativePath_ ? RelativePath_=boost::none : RelativePath_.reset(boost::initialized_value);
	TemplateName_ ? TemplateName_=boost::none : TemplateName_.reset(boost::initialized_value);
	TemplateMemo_ ? TemplateMemo_=boost::none : TemplateMemo_.reset(boost::initialized_value);
	HashCode_ ? HashCode_=boost::none : HashCode_.reset(boost::initialized_value);
}

void	GL_PrintTemplateInfoImp::SData::Check()
{
	if ( !TemplateID_ )
	{
		TemplateID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !IsActive_ )
	{
		IsActive_.reset(boost::initialized_value);
	}
	if ( !RelativePath_ )
	{
		RelativePath_.reset(boost::initialized_value);
	}
	if ( !TemplateName_ )
	{
		TemplateName_.reset(boost::initialized_value);
	}
	if ( !TemplateMemo_ )
	{
		TemplateMemo_.reset(boost::initialized_value);
	}
	if ( !HashCode_ )
	{
		HashCode_.reset(boost::initialized_value);
	}
}

void	GL_PrintTemplateInfoImp::SData::ToUtf8()
{
	if ( RelativePath_ )
	{
		RelativePath_ = boost::locale::conv::to_utf<char>(*RelativePath_, "GBK");
	}
	if ( TemplateName_ )
	{
		TemplateName_ = boost::locale::conv::to_utf<char>(*TemplateName_, "GBK");
	}
	if ( TemplateMemo_ )
	{
		TemplateMemo_ = boost::locale::conv::to_utf<char>(*TemplateMemo_, "GBK");
	}
	if ( HashCode_ )
	{
		HashCode_ = boost::locale::conv::to_utf<char>(*HashCode_, "GBK");
	}
}

void	GL_PrintTemplateInfoImp::SData::ToAscii()
{
	if ( RelativePath_ )
	{
		RelativePath_ = boost::locale::conv::from_utf(*RelativePath_, "GBK");
	}
	if ( TemplateName_ )
	{
		TemplateName_ = boost::locale::conv::from_utf(*TemplateName_, "GBK");
	}
	if ( TemplateMemo_ )
	{
		TemplateMemo_ = boost::locale::conv::from_utf(*TemplateMemo_, "GBK");
	}
	if ( HashCode_ )
	{
		HashCode_ = boost::locale::conv::from_utf(*HashCode_, "GBK");
	}
}

autoDB::SColumns GL_PrintTemplateInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.TemplateID_ )
	{
		ret.With(TemplateID.Use(data.TemplateID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Use(data.IsActive_));
	}
	if ( data.RelativePath_ )
	{
		ret.With(RelativePath.Use(data.RelativePath_));
	}
	if ( data.TemplateName_ )
	{
		ret.With(TemplateName.Use(data.TemplateName_));
	}
	if ( data.TemplateMemo_ )
	{
		ret.With(TemplateMemo.Use(data.TemplateMemo_));
	}
	if ( data.HashCode_ )
	{
		ret.With(HashCode.Use(data.HashCode_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_PrintTemplateInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.TemplateID_ )
	{
		ret.With(TemplateID.Into(data.TemplateID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.IsActive_ )
	{
		ret.With(IsActive.Into(data.IsActive_));
	}
	if ( data.RelativePath_ )
	{
		ret.With(RelativePath.Into(data.RelativePath_));
	}
	if ( data.TemplateName_ )
	{
		ret.With(TemplateName.Into(data.TemplateName_));
	}
	if ( data.TemplateMemo_ )
	{
		ret.With(TemplateMemo.Into(data.TemplateMemo_));
	}
	if ( data.HashCode_ )
	{
		ret.With(HashCode.Into(data.HashCode_));
	}
	return std::move(ret);
}


GL_PrintTemplateInfoImp	GL_PrintTemplateInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_PrintTemplateInfoImp(alias));
}

GL_PrintTemplateInfoImp::GL_PrintTemplateInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_PrintTemplateInfo"), alias)
	,TemplateID(ImpSPtr_,AUTODB_STR("TemplateID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,IsActive(ImpSPtr_,AUTODB_STR("IsActive"))
	,RelativePath(ImpSPtr_,AUTODB_STR("RelativePath"))
	,TemplateName(ImpSPtr_,AUTODB_STR("TemplateName"))
	,TemplateMemo(ImpSPtr_,AUTODB_STR("TemplateMemo"))
	,HashCode(ImpSPtr_,AUTODB_STR("HashCode"))
{}

GL_PrintTemplateInfoImp::GL_PrintTemplateInfoImp( const GL_PrintTemplateInfoImp& rhs ):Table(rhs)
	,TemplateID(rhs.TemplateID)
	,FactoryID(rhs.FactoryID)
	,IsActive(rhs.IsActive)
	,RelativePath(rhs.RelativePath)
	,TemplateName(rhs.TemplateName)
	,TemplateMemo(rhs.TemplateMemo)
	,HashCode(rhs.HashCode)
{}

GL_PrintTemplateInfoImp::GL_PrintTemplateInfoImp( GL_PrintTemplateInfoImp&& rhs ):Table(rhs)
	,TemplateID(std::move(rhs.TemplateID))
	,FactoryID(std::move(rhs.FactoryID))
	,IsActive(std::move(rhs.IsActive))
	,RelativePath(std::move(rhs.RelativePath))
	,TemplateName(std::move(rhs.TemplateName))
	,TemplateMemo(std::move(rhs.TemplateMemo))
	,HashCode(std::move(rhs.HashCode))
{}

GL_PrintTemplateInfoImp	GL_PrintTemplateInfo("");



void	GL_RoleInfoImp::SData::SetAll(bool val)
{
	val ? RoleID_.reset(boost::initialized_value) : RoleID_=boost::none;
	val ? DeptID_.reset(boost::initialized_value) : DeptID_=boost::none;
	val ? DTypeID_.reset(boost::initialized_value) : DTypeID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? RoleName_.reset(boost::initialized_value) : RoleName_=boost::none;
}

void	GL_RoleInfoImp::SData::Flip()
{
	RoleID_ ? RoleID_=boost::none : RoleID_.reset(boost::initialized_value);
	DeptID_ ? DeptID_=boost::none : DeptID_.reset(boost::initialized_value);
	DTypeID_ ? DTypeID_=boost::none : DTypeID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	RoleName_ ? RoleName_=boost::none : RoleName_.reset(boost::initialized_value);
}

void	GL_RoleInfoImp::SData::Check()
{
	if ( !RoleID_ )
	{
		RoleID_.reset(boost::initialized_value);
	}
	if ( !DeptID_ )
	{
		DeptID_.reset(boost::initialized_value);
	}
	if ( !DTypeID_ )
	{
		DTypeID_.reset(boost::initialized_value);
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
	if ( !RoleName_ )
	{
		RoleName_.reset(boost::initialized_value);
	}
}

void	GL_RoleInfoImp::SData::ToUtf8()
{
	if ( RoleName_ )
	{
		RoleName_ = boost::locale::conv::to_utf<char>(*RoleName_, "GBK");
	}
}

void	GL_RoleInfoImp::SData::ToAscii()
{
	if ( RoleName_ )
	{
		RoleName_ = boost::locale::conv::from_utf(*RoleName_, "GBK");
	}
}

autoDB::SColumns GL_RoleInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.RoleID_ )
	{
		ret.With(RoleID.Use(data.RoleID_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Use(data.DeptID_));
	}
	if ( data.DTypeID_ )
	{
		ret.With(DTypeID.Use(data.DTypeID_));
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
	if ( data.RoleName_ )
	{
		ret.With(RoleName.Use(data.RoleName_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_RoleInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.RoleID_ )
	{
		ret.With(RoleID.Into(data.RoleID_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Into(data.DeptID_));
	}
	if ( data.DTypeID_ )
	{
		ret.With(DTypeID.Into(data.DTypeID_));
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
	if ( data.RoleName_ )
	{
		ret.With(RoleName.Into(data.RoleName_));
	}
	return std::move(ret);
}


GL_RoleInfoImp	GL_RoleInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_RoleInfoImp(alias));
}

GL_RoleInfoImp::GL_RoleInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_RoleInfo"), alias)
	,RoleID(ImpSPtr_,AUTODB_STR("RoleID"))
	,DeptID(ImpSPtr_,AUTODB_STR("DeptID"))
	,DTypeID(ImpSPtr_,AUTODB_STR("DTypeID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,RoleName(ImpSPtr_,AUTODB_STR("RoleName"))
{}

GL_RoleInfoImp::GL_RoleInfoImp( const GL_RoleInfoImp& rhs ):Table(rhs)
	,RoleID(rhs.RoleID)
	,DeptID(rhs.DeptID)
	,DTypeID(rhs.DTypeID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,RoleName(rhs.RoleName)
{}

GL_RoleInfoImp::GL_RoleInfoImp( GL_RoleInfoImp&& rhs ):Table(rhs)
	,RoleID(std::move(rhs.RoleID))
	,DeptID(std::move(rhs.DeptID))
	,DTypeID(std::move(rhs.DTypeID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,RoleName(std::move(rhs.RoleName))
{}

GL_RoleInfoImp	GL_RoleInfo("");



void	GL_RoleRightInfoImp::SData::SetAll(bool val)
{
	val ? RightID_.reset(boost::initialized_value) : RightID_=boost::none;
	val ? RightType_.reset(boost::initialized_value) : RightType_=boost::none;
	val ? RoleID_.reset(boost::initialized_value) : RoleID_=boost::none;
}

void	GL_RoleRightInfoImp::SData::Flip()
{
	RightID_ ? RightID_=boost::none : RightID_.reset(boost::initialized_value);
	RightType_ ? RightType_=boost::none : RightType_.reset(boost::initialized_value);
	RoleID_ ? RoleID_=boost::none : RoleID_.reset(boost::initialized_value);
}

void	GL_RoleRightInfoImp::SData::Check()
{
	if ( !RightID_ )
	{
		RightID_.reset(boost::initialized_value);
	}
	if ( !RightType_ )
	{
		RightType_.reset(boost::initialized_value);
	}
	if ( !RoleID_ )
	{
		RoleID_.reset(boost::initialized_value);
	}
}

void	GL_RoleRightInfoImp::SData::ToUtf8()
{
}

void	GL_RoleRightInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GL_RoleRightInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.RightID_ )
	{
		ret.With(RightID.Use(data.RightID_));
	}
	if ( data.RightType_ )
	{
		ret.With(RightType.Use(data.RightType_));
	}
	if ( data.RoleID_ )
	{
		ret.With(RoleID.Use(data.RoleID_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_RoleRightInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.RightID_ )
	{
		ret.With(RightID.Into(data.RightID_));
	}
	if ( data.RightType_ )
	{
		ret.With(RightType.Into(data.RightType_));
	}
	if ( data.RoleID_ )
	{
		ret.With(RoleID.Into(data.RoleID_));
	}
	return std::move(ret);
}


GL_RoleRightInfoImp	GL_RoleRightInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_RoleRightInfoImp(alias));
}

GL_RoleRightInfoImp::GL_RoleRightInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_RoleRightInfo"), alias)
	,RightID(ImpSPtr_,AUTODB_STR("RightID"))
	,RightType(ImpSPtr_,AUTODB_STR("RightType"))
	,RoleID(ImpSPtr_,AUTODB_STR("RoleID"))
{}

GL_RoleRightInfoImp::GL_RoleRightInfoImp( const GL_RoleRightInfoImp& rhs ):Table(rhs)
	,RightID(rhs.RightID)
	,RightType(rhs.RightType)
	,RoleID(rhs.RoleID)
{}

GL_RoleRightInfoImp::GL_RoleRightInfoImp( GL_RoleRightInfoImp&& rhs ):Table(rhs)
	,RightID(std::move(rhs.RightID))
	,RightType(std::move(rhs.RightType))
	,RoleID(std::move(rhs.RoleID))
{}

GL_RoleRightInfoImp	GL_RoleRightInfo("");



void	GL_SugarVerInfoImp::SData::SetAll(bool val)
{
	val ? VerCode_.reset(boost::initialized_value) : VerCode_=boost::none;
	val ? DeptID_.reset(boost::initialized_value) : DeptID_=boost::none;
	val ? VerType_.reset(boost::initialized_value) : VerType_=boost::none;
	val ? VerIndex_.reset(boost::initialized_value) : VerIndex_=boost::none;
	val ? UploadStatus_.reset(boost::initialized_value) : UploadStatus_=boost::none;
	val ? FileCount_.reset(boost::initialized_value) : FileCount_=boost::none;
	val ? VerDBState_.reset(boost::initialized_value) : VerDBState_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? StartTime_ = DBTime(rawDate) : StartTime_=boost::none;
	val ? StopTime_ = DBTime(rawDate) : StopTime_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? VerMemo_.reset(boost::initialized_value) : VerMemo_=boost::none;
}

void	GL_SugarVerInfoImp::SData::Flip()
{
	VerCode_ ? VerCode_=boost::none : VerCode_.reset(boost::initialized_value);
	DeptID_ ? DeptID_=boost::none : DeptID_.reset(boost::initialized_value);
	VerType_ ? VerType_=boost::none : VerType_.reset(boost::initialized_value);
	VerIndex_ ? VerIndex_=boost::none : VerIndex_.reset(boost::initialized_value);
	UploadStatus_ ? UploadStatus_=boost::none : UploadStatus_.reset(boost::initialized_value);
	FileCount_ ? FileCount_=boost::none : FileCount_.reset(boost::initialized_value);
	VerDBState_ ? VerDBState_=boost::none : VerDBState_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	StartTime_ ? StartTime_=boost::none : StartTime_ = DBTime(rawDate);
	StopTime_ ? StopTime_=boost::none : StopTime_ = DBTime(rawDate);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	VerMemo_ ? VerMemo_=boost::none : VerMemo_.reset(boost::initialized_value);
}

void	GL_SugarVerInfoImp::SData::Check()
{
	if ( !VerCode_ )
	{
		VerCode_.reset(boost::initialized_value);
	}
	if ( !DeptID_ )
	{
		DeptID_.reset(boost::initialized_value);
	}
	if ( !VerType_ )
	{
		VerType_.reset(boost::initialized_value);
	}
	if ( !VerIndex_ )
	{
		VerIndex_.reset(boost::initialized_value);
	}
	if ( !UploadStatus_ )
	{
		UploadStatus_.reset(boost::initialized_value);
	}
	if ( !FileCount_ )
	{
		FileCount_.reset(boost::initialized_value);
	}
	if ( !VerDBState_ )
	{
		VerDBState_.reset(boost::initialized_value);
	}
	if ( !CreatorID_ )
	{
		CreatorID_.reset(boost::initialized_value);
	}
	if ( !StartTime_ )
	{
		StartTime_ = DBTime(rawDate);
	}
	if ( !StopTime_ )
	{
		StopTime_ = DBTime(rawDate);
	}
	if ( !CreateTime_ )
	{
		CreateTime_ = DBTime(rawDate);
	}
	if ( !VerMemo_ )
	{
		VerMemo_.reset(boost::initialized_value);
	}
}

void	GL_SugarVerInfoImp::SData::ToUtf8()
{
	if ( VerMemo_ )
	{
		VerMemo_ = boost::locale::conv::to_utf<char>(*VerMemo_, "GBK");
	}
}

void	GL_SugarVerInfoImp::SData::ToAscii()
{
	if ( VerMemo_ )
	{
		VerMemo_ = boost::locale::conv::from_utf(*VerMemo_, "GBK");
	}
}

autoDB::SColumns GL_SugarVerInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Use(data.VerCode_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Use(data.DeptID_));
	}
	if ( data.VerType_ )
	{
		ret.With(VerType.Use(data.VerType_));
	}
	if ( data.VerIndex_ )
	{
		ret.With(VerIndex.Use(data.VerIndex_));
	}
	if ( data.UploadStatus_ )
	{
		ret.With(UploadStatus.Use(data.UploadStatus_));
	}
	if ( data.FileCount_ )
	{
		ret.With(FileCount.Use(data.FileCount_));
	}
	if ( data.VerDBState_ )
	{
		ret.With(VerDBState.Use(data.VerDBState_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Use(data.CreatorID_));
	}
	if ( data.StartTime_ )
	{
		ret.With(StartTime.Use(data.StartTime_));
	}
	if ( data.StopTime_ )
	{
		ret.With(StopTime.Use(data.StopTime_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Use(data.CreateTime_));
	}
	if ( data.VerMemo_ )
	{
		ret.With(VerMemo.Use(data.VerMemo_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_SugarVerInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.VerCode_ )
	{
		ret.With(VerCode.Into(data.VerCode_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Into(data.DeptID_));
	}
	if ( data.VerType_ )
	{
		ret.With(VerType.Into(data.VerType_));
	}
	if ( data.VerIndex_ )
	{
		ret.With(VerIndex.Into(data.VerIndex_));
	}
	if ( data.UploadStatus_ )
	{
		ret.With(UploadStatus.Into(data.UploadStatus_));
	}
	if ( data.FileCount_ )
	{
		ret.With(FileCount.Into(data.FileCount_));
	}
	if ( data.VerDBState_ )
	{
		ret.With(VerDBState.Into(data.VerDBState_));
	}
	if ( data.CreatorID_ )
	{
		ret.With(CreatorID.Into(data.CreatorID_));
	}
	if ( data.StartTime_ )
	{
		ret.With(StartTime.Into(data.StartTime_));
	}
	if ( data.StopTime_ )
	{
		ret.With(StopTime.Into(data.StopTime_));
	}
	if ( data.CreateTime_ )
	{
		ret.With(CreateTime.Into(data.CreateTime_));
	}
	if ( data.VerMemo_ )
	{
		ret.With(VerMemo.Into(data.VerMemo_));
	}
	return std::move(ret);
}


GL_SugarVerInfoImp	GL_SugarVerInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_SugarVerInfoImp(alias));
}

GL_SugarVerInfoImp::GL_SugarVerInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_SugarVerInfo"), alias)
	,VerCode(ImpSPtr_,AUTODB_STR("VerCode"))
	,DeptID(ImpSPtr_,AUTODB_STR("DeptID"))
	,VerType(ImpSPtr_,AUTODB_STR("VerType"))
	,VerIndex(ImpSPtr_,AUTODB_STR("VerIndex"))
	,UploadStatus(ImpSPtr_,AUTODB_STR("UploadStatus"))
	,FileCount(ImpSPtr_,AUTODB_STR("FileCount"))
	,VerDBState(ImpSPtr_,AUTODB_STR("VerDBState"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,StartTime(ImpSPtr_,AUTODB_STR("StartTime"))
	,StopTime(ImpSPtr_,AUTODB_STR("StopTime"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,VerMemo(ImpSPtr_,AUTODB_STR("VerMemo"))
{}

GL_SugarVerInfoImp::GL_SugarVerInfoImp( const GL_SugarVerInfoImp& rhs ):Table(rhs)
	,VerCode(rhs.VerCode)
	,DeptID(rhs.DeptID)
	,VerType(rhs.VerType)
	,VerIndex(rhs.VerIndex)
	,UploadStatus(rhs.UploadStatus)
	,FileCount(rhs.FileCount)
	,VerDBState(rhs.VerDBState)
	,CreatorID(rhs.CreatorID)
	,StartTime(rhs.StartTime)
	,StopTime(rhs.StopTime)
	,CreateTime(rhs.CreateTime)
	,VerMemo(rhs.VerMemo)
{}

GL_SugarVerInfoImp::GL_SugarVerInfoImp( GL_SugarVerInfoImp&& rhs ):Table(rhs)
	,VerCode(std::move(rhs.VerCode))
	,DeptID(std::move(rhs.DeptID))
	,VerType(std::move(rhs.VerType))
	,VerIndex(std::move(rhs.VerIndex))
	,UploadStatus(std::move(rhs.UploadStatus))
	,FileCount(std::move(rhs.FileCount))
	,VerDBState(std::move(rhs.VerDBState))
	,CreatorID(std::move(rhs.CreatorID))
	,StartTime(std::move(rhs.StartTime))
	,StopTime(std::move(rhs.StopTime))
	,CreateTime(std::move(rhs.CreateTime))
	,VerMemo(std::move(rhs.VerMemo))
{}

GL_SugarVerInfoImp	GL_SugarVerInfo("");



void	GL_TransferOrderInfoImp::SData::SetAll(bool val)
{
	val ? RecordID_.reset(boost::initialized_value) : RecordID_=boost::none;
	val ? TransferByUserID_.reset(boost::initialized_value) : TransferByUserID_=boost::none;
	val ? TransferToUserID_.reset(boost::initialized_value) : TransferToUserID_=boost::none;
}

void	GL_TransferOrderInfoImp::SData::Flip()
{
	RecordID_ ? RecordID_=boost::none : RecordID_.reset(boost::initialized_value);
	TransferByUserID_ ? TransferByUserID_=boost::none : TransferByUserID_.reset(boost::initialized_value);
	TransferToUserID_ ? TransferToUserID_=boost::none : TransferToUserID_.reset(boost::initialized_value);
}

void	GL_TransferOrderInfoImp::SData::Check()
{
	if ( !RecordID_ )
	{
		RecordID_.reset(boost::initialized_value);
	}
	if ( !TransferByUserID_ )
	{
		TransferByUserID_.reset(boost::initialized_value);
	}
	if ( !TransferToUserID_ )
	{
		TransferToUserID_.reset(boost::initialized_value);
	}
}

void	GL_TransferOrderInfoImp::SData::ToUtf8()
{
}

void	GL_TransferOrderInfoImp::SData::ToAscii()
{
}

autoDB::SColumns GL_TransferOrderInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.RecordID_ )
	{
		ret.With(RecordID.Use(data.RecordID_));
	}
	if ( data.TransferByUserID_ )
	{
		ret.With(TransferByUserID.Use(data.TransferByUserID_));
	}
	if ( data.TransferToUserID_ )
	{
		ret.With(TransferToUserID.Use(data.TransferToUserID_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_TransferOrderInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.RecordID_ )
	{
		ret.With(RecordID.Into(data.RecordID_));
	}
	if ( data.TransferByUserID_ )
	{
		ret.With(TransferByUserID.Into(data.TransferByUserID_));
	}
	if ( data.TransferToUserID_ )
	{
		ret.With(TransferToUserID.Into(data.TransferToUserID_));
	}
	return std::move(ret);
}


GL_TransferOrderInfoImp	GL_TransferOrderInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_TransferOrderInfoImp(alias));
}

GL_TransferOrderInfoImp::GL_TransferOrderInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_TransferOrderInfo"), alias)
	,RecordID(ImpSPtr_,AUTODB_STR("RecordID"))
	,TransferByUserID(ImpSPtr_,AUTODB_STR("TransferByUserID"))
	,TransferToUserID(ImpSPtr_,AUTODB_STR("TransferToUserID"))
{}

GL_TransferOrderInfoImp::GL_TransferOrderInfoImp( const GL_TransferOrderInfoImp& rhs ):Table(rhs)
	,RecordID(rhs.RecordID)
	,TransferByUserID(rhs.TransferByUserID)
	,TransferToUserID(rhs.TransferToUserID)
{}

GL_TransferOrderInfoImp::GL_TransferOrderInfoImp( GL_TransferOrderInfoImp&& rhs ):Table(rhs)
	,RecordID(std::move(rhs.RecordID))
	,TransferByUserID(std::move(rhs.TransferByUserID))
	,TransferToUserID(std::move(rhs.TransferToUserID))
{}

GL_TransferOrderInfoImp	GL_TransferOrderInfo("");



void	GL_UnitInfoImp::SData::SetAll(bool val)
{
	val ? UnitID_.reset(boost::initialized_value) : UnitID_=boost::none;
	val ? GTypeID_.reset(boost::initialized_value) : GTypeID_=boost::none;
	val ? UnitName_.reset(boost::initialized_value) : UnitName_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
}

void	GL_UnitInfoImp::SData::Flip()
{
	UnitID_ ? UnitID_=boost::none : UnitID_.reset(boost::initialized_value);
	GTypeID_ ? GTypeID_=boost::none : GTypeID_.reset(boost::initialized_value);
	UnitName_ ? UnitName_=boost::none : UnitName_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
}

void	GL_UnitInfoImp::SData::Check()
{
	if ( !UnitID_ )
	{
		UnitID_.reset(boost::initialized_value);
	}
	if ( !GTypeID_ )
	{
		GTypeID_.reset(boost::initialized_value);
	}
	if ( !UnitName_ )
	{
		UnitName_.reset(boost::initialized_value);
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

void	GL_UnitInfoImp::SData::ToUtf8()
{
	if ( UnitName_ )
	{
		UnitName_ = boost::locale::conv::to_utf<char>(*UnitName_, "GBK");
	}
}

void	GL_UnitInfoImp::SData::ToAscii()
{
	if ( UnitName_ )
	{
		UnitName_ = boost::locale::conv::from_utf(*UnitName_, "GBK");
	}
}

autoDB::SColumns GL_UnitInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.UnitID_ )
	{
		ret.With(UnitID.Use(data.UnitID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Use(data.GTypeID_));
	}
	if ( data.UnitName_ )
	{
		ret.With(UnitName.Use(data.UnitName_));
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

autoDB::SColumns GL_UnitInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.UnitID_ )
	{
		ret.With(UnitID.Into(data.UnitID_));
	}
	if ( data.GTypeID_ )
	{
		ret.With(GTypeID.Into(data.GTypeID_));
	}
	if ( data.UnitName_ )
	{
		ret.With(UnitName.Into(data.UnitName_));
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


GL_UnitInfoImp	GL_UnitInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_UnitInfoImp(alias));
}

GL_UnitInfoImp::GL_UnitInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_UnitInfo"), alias)
	,UnitID(ImpSPtr_,AUTODB_STR("UnitID"))
	,GTypeID(ImpSPtr_,AUTODB_STR("GTypeID"))
	,UnitName(ImpSPtr_,AUTODB_STR("UnitName"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
{}

GL_UnitInfoImp::GL_UnitInfoImp( const GL_UnitInfoImp& rhs ):Table(rhs)
	,UnitID(rhs.UnitID)
	,GTypeID(rhs.GTypeID)
	,UnitName(rhs.UnitName)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
{}

GL_UnitInfoImp::GL_UnitInfoImp( GL_UnitInfoImp&& rhs ):Table(rhs)
	,UnitID(std::move(rhs.UnitID))
	,GTypeID(std::move(rhs.GTypeID))
	,UnitName(std::move(rhs.UnitName))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
{}

GL_UnitInfoImp	GL_UnitInfo("");



void	GL_UserActivationInfoImp::SData::SetAll(bool val)
{
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? ActivationCode_.reset(boost::initialized_value) : ActivationCode_=boost::none;
	val ? TryCount_.reset(boost::initialized_value) : TryCount_=boost::none;
	val ? LastTryTime_ = DBTime(rawDate) : LastTryTime_=boost::none;
}

void	GL_UserActivationInfoImp::SData::Flip()
{
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	ActivationCode_ ? ActivationCode_=boost::none : ActivationCode_.reset(boost::initialized_value);
	TryCount_ ? TryCount_=boost::none : TryCount_.reset(boost::initialized_value);
	LastTryTime_ ? LastTryTime_=boost::none : LastTryTime_ = DBTime(rawDate);
}

void	GL_UserActivationInfoImp::SData::Check()
{
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !ActivationCode_ )
	{
		ActivationCode_.reset(boost::initialized_value);
	}
	if ( !TryCount_ )
	{
		TryCount_.reset(boost::initialized_value);
	}
	if ( !LastTryTime_ )
	{
		LastTryTime_ = DBTime(rawDate);
	}
}

void	GL_UserActivationInfoImp::SData::ToUtf8()
{
	if ( ActivationCode_ )
	{
		ActivationCode_ = boost::locale::conv::to_utf<char>(*ActivationCode_, "GBK");
	}
}

void	GL_UserActivationInfoImp::SData::ToAscii()
{
	if ( ActivationCode_ )
	{
		ActivationCode_ = boost::locale::conv::from_utf(*ActivationCode_, "GBK");
	}
}

autoDB::SColumns GL_UserActivationInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.ActivationCode_ )
	{
		ret.With(ActivationCode.Use(data.ActivationCode_));
	}
	if ( data.TryCount_ )
	{
		ret.With(TryCount.Use(data.TryCount_));
	}
	if ( data.LastTryTime_ )
	{
		ret.With(LastTryTime.Use(data.LastTryTime_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_UserActivationInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.ActivationCode_ )
	{
		ret.With(ActivationCode.Into(data.ActivationCode_));
	}
	if ( data.TryCount_ )
	{
		ret.With(TryCount.Into(data.TryCount_));
	}
	if ( data.LastTryTime_ )
	{
		ret.With(LastTryTime.Into(data.LastTryTime_));
	}
	return std::move(ret);
}


GL_UserActivationInfoImp	GL_UserActivationInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_UserActivationInfoImp(alias));
}

GL_UserActivationInfoImp::GL_UserActivationInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_UserActivationInfo"), alias)
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,ActivationCode(ImpSPtr_,AUTODB_STR("ActivationCode"))
	,TryCount(ImpSPtr_,AUTODB_STR("TryCount"))
	,LastTryTime(ImpSPtr_,AUTODB_STR("LastTryTime"))
{}

GL_UserActivationInfoImp::GL_UserActivationInfoImp( const GL_UserActivationInfoImp& rhs ):Table(rhs)
	,UserID(rhs.UserID)
	,ActivationCode(rhs.ActivationCode)
	,TryCount(rhs.TryCount)
	,LastTryTime(rhs.LastTryTime)
{}

GL_UserActivationInfoImp::GL_UserActivationInfoImp( GL_UserActivationInfoImp&& rhs ):Table(rhs)
	,UserID(std::move(rhs.UserID))
	,ActivationCode(std::move(rhs.ActivationCode))
	,TryCount(std::move(rhs.TryCount))
	,LastTryTime(std::move(rhs.LastTryTime))
{}

GL_UserActivationInfoImp	GL_UserActivationInfo("");



void	GL_UserInfoImp::SData::SetAll(bool val)
{
	val ? UserID_.reset(boost::initialized_value) : UserID_=boost::none;
	val ? FactoryID_.reset(boost::initialized_value) : FactoryID_=boost::none;
	val ? ShopID_.reset(boost::initialized_value) : ShopID_=boost::none;
	val ? DeptID_.reset(boost::initialized_value) : DeptID_=boost::none;
	val ? IsDel_.reset(boost::initialized_value) : IsDel_=boost::none;
	val ? RoleID_.reset(boost::initialized_value) : RoleID_=boost::none;
	val ? CreatorID_.reset(boost::initialized_value) : CreatorID_=boost::none;
	val ? UpdaterID_.reset(boost::initialized_value) : UpdaterID_=boost::none;
	val ? CreateTime_ = DBTime(rawDate) : CreateTime_=boost::none;
	val ? UpdateTime_ = DBTime(rawDate) : UpdateTime_=boost::none;
	val ? UserPwd_.reset(boost::initialized_value) : UserPwd_=boost::none;
	val ? UserCode_.reset(boost::initialized_value) : UserCode_=boost::none;
	val ? EncodeStr_.reset(boost::initialized_value) : EncodeStr_=boost::none;
	val ? TrueName_.reset(boost::initialized_value) : TrueName_=boost::none;
	val ? IDCode_.reset(boost::initialized_value) : IDCode_=boost::none;
	val ? QQNum_.reset(boost::initialized_value) : QQNum_=boost::none;
	val ? Email_.reset(boost::initialized_value) : Email_=boost::none;
	val ? Tel_.reset(boost::initialized_value) : Tel_=boost::none;
	val ? CellPhone_.reset(boost::initialized_value) : CellPhone_=boost::none;
	val ? PostCode_.reset(boost::initialized_value) : PostCode_=boost::none;
	val ? ContactAddress_.reset(boost::initialized_value) : ContactAddress_=boost::none;
	val ? IsActived_.reset(boost::initialized_value) : IsActived_=boost::none;
	val ? IsLocked_.reset(boost::initialized_value) : IsLocked_=boost::none;
}

void	GL_UserInfoImp::SData::Flip()
{
	UserID_ ? UserID_=boost::none : UserID_.reset(boost::initialized_value);
	FactoryID_ ? FactoryID_=boost::none : FactoryID_.reset(boost::initialized_value);
	ShopID_ ? ShopID_=boost::none : ShopID_.reset(boost::initialized_value);
	DeptID_ ? DeptID_=boost::none : DeptID_.reset(boost::initialized_value);
	IsDel_ ? IsDel_=boost::none : IsDel_.reset(boost::initialized_value);
	RoleID_ ? RoleID_=boost::none : RoleID_.reset(boost::initialized_value);
	CreatorID_ ? CreatorID_=boost::none : CreatorID_.reset(boost::initialized_value);
	UpdaterID_ ? UpdaterID_=boost::none : UpdaterID_.reset(boost::initialized_value);
	CreateTime_ ? CreateTime_=boost::none : CreateTime_ = DBTime(rawDate);
	UpdateTime_ ? UpdateTime_=boost::none : UpdateTime_ = DBTime(rawDate);
	UserPwd_ ? UserPwd_=boost::none : UserPwd_.reset(boost::initialized_value);
	UserCode_ ? UserCode_=boost::none : UserCode_.reset(boost::initialized_value);
	EncodeStr_ ? EncodeStr_=boost::none : EncodeStr_.reset(boost::initialized_value);
	TrueName_ ? TrueName_=boost::none : TrueName_.reset(boost::initialized_value);
	IDCode_ ? IDCode_=boost::none : IDCode_.reset(boost::initialized_value);
	QQNum_ ? QQNum_=boost::none : QQNum_.reset(boost::initialized_value);
	Email_ ? Email_=boost::none : Email_.reset(boost::initialized_value);
	Tel_ ? Tel_=boost::none : Tel_.reset(boost::initialized_value);
	CellPhone_ ? CellPhone_=boost::none : CellPhone_.reset(boost::initialized_value);
	PostCode_ ? PostCode_=boost::none : PostCode_.reset(boost::initialized_value);
	ContactAddress_ ? ContactAddress_=boost::none : ContactAddress_.reset(boost::initialized_value);
	IsActived_ ? IsActived_=boost::none : IsActived_.reset(boost::initialized_value);
	IsLocked_ ? IsLocked_=boost::none : IsLocked_.reset(boost::initialized_value);
}

void	GL_UserInfoImp::SData::Check()
{
	if ( !UserID_ )
	{
		UserID_.reset(boost::initialized_value);
	}
	if ( !FactoryID_ )
	{
		FactoryID_.reset(boost::initialized_value);
	}
	if ( !ShopID_ )
	{
		ShopID_.reset(boost::initialized_value);
	}
	if ( !DeptID_ )
	{
		DeptID_.reset(boost::initialized_value);
	}
	if ( !IsDel_ )
	{
		IsDel_.reset(boost::initialized_value);
	}
	if ( !RoleID_ )
	{
		RoleID_.reset(boost::initialized_value);
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
	if ( !UserPwd_ )
	{
		UserPwd_.reset(boost::initialized_value);
	}
	if ( !UserCode_ )
	{
		UserCode_.reset(boost::initialized_value);
	}
	if ( !EncodeStr_ )
	{
		EncodeStr_.reset(boost::initialized_value);
	}
	if ( !TrueName_ )
	{
		TrueName_.reset(boost::initialized_value);
	}
	if ( !IDCode_ )
	{
		IDCode_.reset(boost::initialized_value);
	}
	if ( !QQNum_ )
	{
		QQNum_.reset(boost::initialized_value);
	}
	if ( !Email_ )
	{
		Email_.reset(boost::initialized_value);
	}
	if ( !Tel_ )
	{
		Tel_.reset(boost::initialized_value);
	}
	if ( !CellPhone_ )
	{
		CellPhone_.reset(boost::initialized_value);
	}
	if ( !PostCode_ )
	{
		PostCode_.reset(boost::initialized_value);
	}
	if ( !ContactAddress_ )
	{
		ContactAddress_.reset(boost::initialized_value);
	}
	if ( !IsActived_ )
	{
		IsActived_.reset(boost::initialized_value);
	}
	if ( !IsLocked_ )
	{
		IsLocked_.reset(boost::initialized_value);
	}
}

void	GL_UserInfoImp::SData::ToUtf8()
{
	if ( UserPwd_ )
	{
		UserPwd_ = boost::locale::conv::to_utf<char>(*UserPwd_, "GBK");
	}
	if ( UserCode_ )
	{
		UserCode_ = boost::locale::conv::to_utf<char>(*UserCode_, "GBK");
	}
	if ( EncodeStr_ )
	{
		EncodeStr_ = boost::locale::conv::to_utf<char>(*EncodeStr_, "GBK");
	}
	if ( TrueName_ )
	{
		TrueName_ = boost::locale::conv::to_utf<char>(*TrueName_, "GBK");
	}
	if ( IDCode_ )
	{
		IDCode_ = boost::locale::conv::to_utf<char>(*IDCode_, "GBK");
	}
	if ( QQNum_ )
	{
		QQNum_ = boost::locale::conv::to_utf<char>(*QQNum_, "GBK");
	}
	if ( Email_ )
	{
		Email_ = boost::locale::conv::to_utf<char>(*Email_, "GBK");
	}
	if ( Tel_ )
	{
		Tel_ = boost::locale::conv::to_utf<char>(*Tel_, "GBK");
	}
	if ( CellPhone_ )
	{
		CellPhone_ = boost::locale::conv::to_utf<char>(*CellPhone_, "GBK");
	}
	if ( PostCode_ )
	{
		PostCode_ = boost::locale::conv::to_utf<char>(*PostCode_, "GBK");
	}
	if ( ContactAddress_ )
	{
		ContactAddress_ = boost::locale::conv::to_utf<char>(*ContactAddress_, "GBK");
	}
}

void	GL_UserInfoImp::SData::ToAscii()
{
	if ( UserPwd_ )
	{
		UserPwd_ = boost::locale::conv::from_utf(*UserPwd_, "GBK");
	}
	if ( UserCode_ )
	{
		UserCode_ = boost::locale::conv::from_utf(*UserCode_, "GBK");
	}
	if ( EncodeStr_ )
	{
		EncodeStr_ = boost::locale::conv::from_utf(*EncodeStr_, "GBK");
	}
	if ( TrueName_ )
	{
		TrueName_ = boost::locale::conv::from_utf(*TrueName_, "GBK");
	}
	if ( IDCode_ )
	{
		IDCode_ = boost::locale::conv::from_utf(*IDCode_, "GBK");
	}
	if ( QQNum_ )
	{
		QQNum_ = boost::locale::conv::from_utf(*QQNum_, "GBK");
	}
	if ( Email_ )
	{
		Email_ = boost::locale::conv::from_utf(*Email_, "GBK");
	}
	if ( Tel_ )
	{
		Tel_ = boost::locale::conv::from_utf(*Tel_, "GBK");
	}
	if ( CellPhone_ )
	{
		CellPhone_ = boost::locale::conv::from_utf(*CellPhone_, "GBK");
	}
	if ( PostCode_ )
	{
		PostCode_ = boost::locale::conv::from_utf(*PostCode_, "GBK");
	}
	if ( ContactAddress_ )
	{
		ContactAddress_ = boost::locale::conv::from_utf(*ContactAddress_, "GBK");
	}
}

autoDB::SColumns GL_UserInfoImp::Use( const SData& data )
{
	SColumns ret;
	if ( data.UserID_ )
	{
		ret.With(UserID.Use(data.UserID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Use(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Use(data.ShopID_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Use(data.DeptID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Use(data.IsDel_));
	}
	if ( data.RoleID_ )
	{
		ret.With(RoleID.Use(data.RoleID_));
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
	if ( data.UserPwd_ )
	{
		ret.With(UserPwd.Use(data.UserPwd_));
	}
	if ( data.UserCode_ )
	{
		ret.With(UserCode.Use(data.UserCode_));
	}
	if ( data.EncodeStr_ )
	{
		ret.With(EncodeStr.Use(data.EncodeStr_));
	}
	if ( data.TrueName_ )
	{
		ret.With(TrueName.Use(data.TrueName_));
	}
	if ( data.IDCode_ )
	{
		ret.With(IDCode.Use(data.IDCode_));
	}
	if ( data.QQNum_ )
	{
		ret.With(QQNum.Use(data.QQNum_));
	}
	if ( data.Email_ )
	{
		ret.With(Email.Use(data.Email_));
	}
	if ( data.Tel_ )
	{
		ret.With(Tel.Use(data.Tel_));
	}
	if ( data.CellPhone_ )
	{
		ret.With(CellPhone.Use(data.CellPhone_));
	}
	if ( data.PostCode_ )
	{
		ret.With(PostCode.Use(data.PostCode_));
	}
	if ( data.ContactAddress_ )
	{
		ret.With(ContactAddress.Use(data.ContactAddress_));
	}
	if ( data.IsActived_ )
	{
		ret.With(IsActived.Use(data.IsActived_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Use(data.IsLocked_));
	}
	return std::move(ret);
}

autoDB::SColumns GL_UserInfoImp::Into( SData& data )
{
	SColumns ret;
	if ( data.UserID_ )
	{
		ret.With(UserID.Into(data.UserID_));
	}
	if ( data.FactoryID_ )
	{
		ret.With(FactoryID.Into(data.FactoryID_));
	}
	if ( data.ShopID_ )
	{
		ret.With(ShopID.Into(data.ShopID_));
	}
	if ( data.DeptID_ )
	{
		ret.With(DeptID.Into(data.DeptID_));
	}
	if ( data.IsDel_ )
	{
		ret.With(IsDel.Into(data.IsDel_));
	}
	if ( data.RoleID_ )
	{
		ret.With(RoleID.Into(data.RoleID_));
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
	if ( data.UserPwd_ )
	{
		ret.With(UserPwd.Into(data.UserPwd_));
	}
	if ( data.UserCode_ )
	{
		ret.With(UserCode.Into(data.UserCode_));
	}
	if ( data.EncodeStr_ )
	{
		ret.With(EncodeStr.Into(data.EncodeStr_));
	}
	if ( data.TrueName_ )
	{
		ret.With(TrueName.Into(data.TrueName_));
	}
	if ( data.IDCode_ )
	{
		ret.With(IDCode.Into(data.IDCode_));
	}
	if ( data.QQNum_ )
	{
		ret.With(QQNum.Into(data.QQNum_));
	}
	if ( data.Email_ )
	{
		ret.With(Email.Into(data.Email_));
	}
	if ( data.Tel_ )
	{
		ret.With(Tel.Into(data.Tel_));
	}
	if ( data.CellPhone_ )
	{
		ret.With(CellPhone.Into(data.CellPhone_));
	}
	if ( data.PostCode_ )
	{
		ret.With(PostCode.Into(data.PostCode_));
	}
	if ( data.ContactAddress_ )
	{
		ret.With(ContactAddress.Into(data.ContactAddress_));
	}
	if ( data.IsActived_ )
	{
		ret.With(IsActived.Into(data.IsActived_));
	}
	if ( data.IsLocked_ )
	{
		ret.With(IsLocked.Into(data.IsLocked_));
	}
	return std::move(ret);
}


GL_UserInfoImp	GL_UserInfoImp::operator() (const StringType& alias)
{
	return std::move(GL_UserInfoImp(alias));
}

GL_UserInfoImp::GL_UserInfoImp( const StringType& alias ):Table(AUTODB_STR("GL_UserInfo"), alias)
	,UserID(ImpSPtr_,AUTODB_STR("UserID"))
	,FactoryID(ImpSPtr_,AUTODB_STR("FactoryID"))
	,ShopID(ImpSPtr_,AUTODB_STR("ShopID"))
	,DeptID(ImpSPtr_,AUTODB_STR("DeptID"))
	,IsDel(ImpSPtr_,AUTODB_STR("IsDel"))
	,RoleID(ImpSPtr_,AUTODB_STR("RoleID"))
	,CreatorID(ImpSPtr_,AUTODB_STR("CreatorID"))
	,UpdaterID(ImpSPtr_,AUTODB_STR("UpdaterID"))
	,CreateTime(ImpSPtr_,AUTODB_STR("CreateTime"))
	,UpdateTime(ImpSPtr_,AUTODB_STR("UpdateTime"))
	,UserPwd(ImpSPtr_,AUTODB_STR("UserPwd"))
	,UserCode(ImpSPtr_,AUTODB_STR("UserCode"))
	,EncodeStr(ImpSPtr_,AUTODB_STR("EncodeStr"))
	,TrueName(ImpSPtr_,AUTODB_STR("TrueName"))
	,IDCode(ImpSPtr_,AUTODB_STR("IDCode"))
	,QQNum(ImpSPtr_,AUTODB_STR("QQNum"))
	,Email(ImpSPtr_,AUTODB_STR("Email"))
	,Tel(ImpSPtr_,AUTODB_STR("Tel"))
	,CellPhone(ImpSPtr_,AUTODB_STR("CellPhone"))
	,PostCode(ImpSPtr_,AUTODB_STR("PostCode"))
	,ContactAddress(ImpSPtr_,AUTODB_STR("ContactAddress"))
	,IsActived(ImpSPtr_,AUTODB_STR("IsActived"))
	,IsLocked(ImpSPtr_,AUTODB_STR("IsLocked"))
{}

GL_UserInfoImp::GL_UserInfoImp( const GL_UserInfoImp& rhs ):Table(rhs)
	,UserID(rhs.UserID)
	,FactoryID(rhs.FactoryID)
	,ShopID(rhs.ShopID)
	,DeptID(rhs.DeptID)
	,IsDel(rhs.IsDel)
	,RoleID(rhs.RoleID)
	,CreatorID(rhs.CreatorID)
	,UpdaterID(rhs.UpdaterID)
	,CreateTime(rhs.CreateTime)
	,UpdateTime(rhs.UpdateTime)
	,UserPwd(rhs.UserPwd)
	,UserCode(rhs.UserCode)
	,EncodeStr(rhs.EncodeStr)
	,TrueName(rhs.TrueName)
	,IDCode(rhs.IDCode)
	,QQNum(rhs.QQNum)
	,Email(rhs.Email)
	,Tel(rhs.Tel)
	,CellPhone(rhs.CellPhone)
	,PostCode(rhs.PostCode)
	,ContactAddress(rhs.ContactAddress)
	,IsActived(rhs.IsActived)
	,IsLocked(rhs.IsLocked)
{}

GL_UserInfoImp::GL_UserInfoImp( GL_UserInfoImp&& rhs ):Table(rhs)
	,UserID(std::move(rhs.UserID))
	,FactoryID(std::move(rhs.FactoryID))
	,ShopID(std::move(rhs.ShopID))
	,DeptID(std::move(rhs.DeptID))
	,IsDel(std::move(rhs.IsDel))
	,RoleID(std::move(rhs.RoleID))
	,CreatorID(std::move(rhs.CreatorID))
	,UpdaterID(std::move(rhs.UpdaterID))
	,CreateTime(std::move(rhs.CreateTime))
	,UpdateTime(std::move(rhs.UpdateTime))
	,UserPwd(std::move(rhs.UserPwd))
	,UserCode(std::move(rhs.UserCode))
	,EncodeStr(std::move(rhs.EncodeStr))
	,TrueName(std::move(rhs.TrueName))
	,IDCode(std::move(rhs.IDCode))
	,QQNum(std::move(rhs.QQNum))
	,Email(std::move(rhs.Email))
	,Tel(std::move(rhs.Tel))
	,CellPhone(std::move(rhs.CellPhone))
	,PostCode(std::move(rhs.PostCode))
	,ContactAddress(std::move(rhs.ContactAddress))
	,IsActived(std::move(rhs.IsActived))
	,IsLocked(std::move(rhs.IsLocked))
{}

GL_UserInfoImp	GL_UserInfo("");



}
