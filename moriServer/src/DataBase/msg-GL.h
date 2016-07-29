#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class GL_AppVerInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	AppVerID_;
		boost::optional<IntColumn::ValueType>	ClientType_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BigintColumn::ValueType>	FileSize_;
		boost::optional<StringColumn::ValueType>	AppVerCode_;
		boost::optional<StringColumn::ValueType>	HashCode_;
		boost::optional<StringColumn::ValueType>	FilePath_;
	};

public:
	GL_AppVerInfoImp(const StringType& alias);
	GL_AppVerInfoImp(GL_AppVerInfoImp&& rhs);
	GL_AppVerInfoImp(const GL_AppVerInfoImp& rhs);

public:

	GL_AppVerInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	AppVerID;
	IntColumn	ClientType;
	BoolColumn	IsActive;
	BigintColumn	FileSize;
	StringColumn	AppVerCode;
	StringColumn	HashCode;
	StringColumn	FilePath;
};
extern	GL_AppVerInfoImp	GL_AppVerInfo;
typedef	GL_AppVerInfoImp::SData	GL_AppVerInfo_Data;

class GL_AppleseedInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	ItemID_;
		boost::optional<StringColumn::ValueType>	ItemName_;
		boost::optional<StringColumn::ValueType>	ItemData_;
	};

public:
	GL_AppleseedInfoImp(const StringType& alias);
	GL_AppleseedInfoImp(GL_AppleseedInfoImp&& rhs);
	GL_AppleseedInfoImp(const GL_AppleseedInfoImp& rhs);

public:

	GL_AppleseedInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	ItemID;
	StringColumn	ItemName;
	StringColumn	ItemData;
};
extern	GL_AppleseedInfoImp	GL_AppleseedInfo;
typedef	GL_AppleseedInfoImp::SData	GL_AppleseedInfo_Data;

class GL_AreaGeoMapInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	AreaID_;
		boost::optional<StringColumn::ValueType>	GeoCode_;
	};

public:
	GL_AreaGeoMapInfoImp(const StringType& alias);
	GL_AreaGeoMapInfoImp(GL_AreaGeoMapInfoImp&& rhs);
	GL_AreaGeoMapInfoImp(const GL_AreaGeoMapInfoImp& rhs);

public:

	GL_AreaGeoMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	AreaID;
	StringColumn	GeoCode;
};
extern	GL_AreaGeoMapInfoImp	GL_AreaGeoMapInfo;
typedef	GL_AreaGeoMapInfoImp::SData	GL_AreaGeoMapInfo_Data;

class GL_AreaInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	AreaID_;
		boost::optional<IntColumn::ValueType>	DeptID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	AreaName_;
	};

public:
	GL_AreaInfoImp(const StringType& alias);
	GL_AreaInfoImp(GL_AreaInfoImp&& rhs);
	GL_AreaInfoImp(const GL_AreaInfoImp& rhs);

public:

	GL_AreaInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	AreaID;
	IntColumn	DeptID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	AreaName;
};
extern	GL_AreaInfoImp	GL_AreaInfo;
typedef	GL_AreaInfoImp::SData	GL_AreaInfo_Data;

class GL_BaseBoardInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	CabShape_;
		boost::optional<IntColumn::ValueType>	CabGapType_;
		boost::optional<IntColumn::ValueType>	BoardType_;
		boost::optional<IntColumn::ValueType>	BoardPosition_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffset_;
		boost::optional<StringColumn::ValueType>	YOffset_;
		boost::optional<StringColumn::ValueType>	ZOffset_;
		boost::optional<FloatColumn::ValueType>	ArcX_;
		boost::optional<FloatColumn::ValueType>	ArcY_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<StringColumn::ValueType>	Name_;
	};

public:
	GL_BaseBoardInfoImp(const StringType& alias);
	GL_BaseBoardInfoImp(GL_BaseBoardInfoImp&& rhs);
	GL_BaseBoardInfoImp(const GL_BaseBoardInfoImp& rhs);

public:

	GL_BaseBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabShape;
	IntColumn	CabGapType;
	IntColumn	BoardType;
	IntColumn	BoardPosition;
	IntColumn	FactoryID;
	StringColumn	XFormula;
	StringColumn	YFormula;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffset;
	StringColumn	YOffset;
	StringColumn	ZOffset;
	FloatColumn	ArcX;
	FloatColumn	ArcY;
	FloatColumn	ArcZ;
	StringColumn	Name;
};
extern	GL_BaseBoardInfoImp	GL_BaseBoardInfo;
typedef	GL_BaseBoardInfoImp::SData	GL_BaseBoardInfo_Data;

class GL_ChargeLogInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	LogID_;
		boost::optional<StringColumn::ValueType>	CardNo_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	UserID_;
	};

public:
	GL_ChargeLogInfoImp(const StringType& alias);
	GL_ChargeLogInfoImp(GL_ChargeLogInfoImp&& rhs);
	GL_ChargeLogInfoImp(const GL_ChargeLogInfoImp& rhs);

public:

	GL_ChargeLogInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	LogID;
	StringColumn	CardNo;
	IntColumn	FactoryID;
	IntColumn	ShopID;
	IntColumn	UserID;
};
extern	GL_ChargeLogInfoImp	GL_ChargeLogInfo;
typedef	GL_ChargeLogInfoImp::SData	GL_ChargeLogInfo_Data;

class GL_DeptInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	DeptID_;
		boost::optional<IntColumn::ValueType>	ParentID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	DTypeID_;
		boost::optional<IntColumn::ValueType>	IncOrder_;
		boost::optional<IntColumn::ValueType>	ShowOrder_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	GeoCode_;
		boost::optional<StringColumn::ValueType>	DeptCode_;
		boost::optional<StringColumn::ValueType>	DeptName_;
		boost::optional<StringColumn::ValueType>	Postcode_;
		boost::optional<StringColumn::ValueType>	Tel_;
		boost::optional<StringColumn::ValueType>	Contacter_;
		boost::optional<StringColumn::ValueType>	ContactAddress_;
		boost::optional<StringColumn::ValueType>	DeptMemo_;
	};

public:
	GL_DeptInfoImp(const StringType& alias);
	GL_DeptInfoImp(GL_DeptInfoImp&& rhs);
	GL_DeptInfoImp(const GL_DeptInfoImp& rhs);

public:

	GL_DeptInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DeptID;
	IntColumn	ParentID;
	BoolColumn	IsDel;
	IntColumn	DTypeID;
	IntColumn	IncOrder;
	IntColumn	ShowOrder;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	GeoCode;
	StringColumn	DeptCode;
	StringColumn	DeptName;
	StringColumn	Postcode;
	StringColumn	Tel;
	StringColumn	Contacter;
	StringColumn	ContactAddress;
	StringColumn	DeptMemo;
};
extern	GL_DeptInfoImp	GL_DeptInfo;
typedef	GL_DeptInfoImp::SData	GL_DeptInfo_Data;

class GL_DesignerConfigInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<BoolColumn::ValueType>	EnableSnap_;
		boost::optional<BoolColumn::ValueType>	AllPole_;
		boost::optional<BoolColumn::ValueType>	CrossPole_;
		boost::optional<BoolColumn::ValueType>	WallPole_;
		boost::optional<BoolColumn::ValueType>	HotspotCapture_;
		boost::optional<BoolColumn::ValueType>	GridShow_;
		boost::optional<IntColumn::ValueType>	AngleStep_;
		boost::optional<IntColumn::ValueType>	TargetRange_;
		boost::optional<IntColumn::ValueType>	DesignBGID_;
		boost::optional<IntColumn::ValueType>	PrintBGID_;
		boost::optional<IntColumn::ValueType>	GridBigID_;
		boost::optional<IntColumn::ValueType>	GridSmallID_;
		boost::optional<IntColumn::ValueType>	HotspotRotateID_;
		boost::optional<IntColumn::ValueType>	HotspotNormalID_;
		boost::optional<IntColumn::ValueType>	HotspotSelectID_;
		boost::optional<IntColumn::ValueType>	CreatePointID_;
		boost::optional<BigintColumn::ValueType>	DesignBGColor_;
		boost::optional<BigintColumn::ValueType>	PrintBGColor_;
		boost::optional<BigintColumn::ValueType>	GridBigColor_;
		boost::optional<BigintColumn::ValueType>	GridSmallColor_;
		boost::optional<BigintColumn::ValueType>	HotspotRotateColor_;
		boost::optional<BigintColumn::ValueType>	HotspotNormalColor_;
		boost::optional<BigintColumn::ValueType>	HotspotSelectColor_;
		boost::optional<BigintColumn::ValueType>	CreatePointColor_;
		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<FloatColumn::ValueType>	WallThickness_;
		boost::optional<FloatColumn::ValueType>	WallHeight_;
		boost::optional<FloatColumn::ValueType>	BaseLineLen_;
		boost::optional<FloatColumn::ValueType>	GridWidth_;
		boost::optional<FloatColumn::ValueType>	SnapRange_;
		boost::optional<FloatColumn::ValueType>	SkirtLineOffsetLen_;
		boost::optional<FloatColumn::ValueType>	BottomLineOffsetLen_;
		boost::optional<FloatColumn::ValueType>	TopLineOffsetLen_;
	};

public:
	GL_DesignerConfigInfoImp(const StringType& alias);
	GL_DesignerConfigInfoImp(GL_DesignerConfigInfoImp&& rhs);
	GL_DesignerConfigInfoImp(const GL_DesignerConfigInfoImp& rhs);

public:

	GL_DesignerConfigInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BoolColumn	EnableSnap;
	BoolColumn	AllPole;
	BoolColumn	CrossPole;
	BoolColumn	WallPole;
	BoolColumn	HotspotCapture;
	BoolColumn	GridShow;
	IntColumn	AngleStep;
	IntColumn	TargetRange;
	IntColumn	DesignBGID;
	IntColumn	PrintBGID;
	IntColumn	GridBigID;
	IntColumn	GridSmallID;
	IntColumn	HotspotRotateID;
	IntColumn	HotspotNormalID;
	IntColumn	HotspotSelectID;
	IntColumn	CreatePointID;
	BigintColumn	DesignBGColor;
	BigintColumn	PrintBGColor;
	BigintColumn	GridBigColor;
	BigintColumn	GridSmallColor;
	BigintColumn	HotspotRotateColor;
	BigintColumn	HotspotNormalColor;
	BigintColumn	HotspotSelectColor;
	BigintColumn	CreatePointColor;
	IntColumn	UserID;
	FloatColumn	WallThickness;
	FloatColumn	WallHeight;
	FloatColumn	BaseLineLen;
	FloatColumn	GridWidth;
	FloatColumn	SnapRange;
	FloatColumn	SkirtLineOffsetLen;
	FloatColumn	BottomLineOffsetLen;
	FloatColumn	TopLineOffsetLen;
};
extern	GL_DesignerConfigInfoImp	GL_DesignerConfigInfo;
typedef	GL_DesignerConfigInfoImp::SData	GL_DesignerConfigInfo_Data;

class GL_GTypeInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<StringColumn::ValueType>	GTypeName_;
	};

public:
	GL_GTypeInfoImp(const StringType& alias);
	GL_GTypeInfoImp(GL_GTypeInfoImp&& rhs);
	GL_GTypeInfoImp(const GL_GTypeInfoImp& rhs);

public:

	GL_GTypeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	GTypeID;
	StringColumn	GTypeName;
};
extern	GL_GTypeInfoImp	GL_GTypeInfo;
typedef	GL_GTypeInfoImp::SData	GL_GTypeInfo_Data;

class GL_GeoCodeInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<StringColumn::ValueType>	GeoCode_;
		boost::optional<StringColumn::ValueType>	GeoName_;
	};

public:
	GL_GeoCodeInfoImp(const StringType& alias);
	GL_GeoCodeInfoImp(GL_GeoCodeInfoImp&& rhs);
	GL_GeoCodeInfoImp(const GL_GeoCodeInfoImp& rhs);

public:

	GL_GeoCodeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	StringColumn	GeoCode;
	StringColumn	GeoName;
};
extern	GL_GeoCodeInfoImp	GL_GeoCodeInfo;
typedef	GL_GeoCodeInfoImp::SData	GL_GeoCodeInfo_Data;

class GL_MajorCateInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	MajorCateID_;
		boost::optional<StringColumn::ValueType>	MajorCateName_;
	};

public:
	GL_MajorCateInfoImp(const StringType& alias);
	GL_MajorCateInfoImp(GL_MajorCateInfoImp&& rhs);
	GL_MajorCateInfoImp(const GL_MajorCateInfoImp& rhs);

public:

	GL_MajorCateInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	MajorCateID;
	StringColumn	MajorCateName;
};
extern	GL_MajorCateInfoImp	GL_MajorCateInfo;
typedef	GL_MajorCateInfoImp::SData	GL_MajorCateInfo_Data;

class GL_MinorCateInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	MajorCateID_;
		boost::optional<IntColumn::ValueType>	MinorCateID_;
		boost::optional<StringColumn::ValueType>	MinorCateName_;
	};

public:
	GL_MinorCateInfoImp(const StringType& alias);
	GL_MinorCateInfoImp(GL_MinorCateInfoImp&& rhs);
	GL_MinorCateInfoImp(const GL_MinorCateInfoImp& rhs);

public:

	GL_MinorCateInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	MajorCateID;
	IntColumn	MinorCateID;
	StringColumn	MinorCateName;
};
extern	GL_MinorCateInfoImp	GL_MinorCateInfo;
typedef	GL_MinorCateInfoImp::SData	GL_MinorCateInfo_Data;

class GL_MinorGTypeMapInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	MajorCateID_;
		boost::optional<IntColumn::ValueType>	MinorCateID_;
		boost::optional<IntColumn::ValueType>	CreateType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
	};

public:
	GL_MinorGTypeMapInfoImp(const StringType& alias);
	GL_MinorGTypeMapInfoImp(GL_MinorGTypeMapInfoImp&& rhs);
	GL_MinorGTypeMapInfoImp(const GL_MinorGTypeMapInfoImp& rhs);

public:

	GL_MinorGTypeMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	MajorCateID;
	IntColumn	MinorCateID;
	IntColumn	CreateType;
	IntColumn	GTypeID;
};
extern	GL_MinorGTypeMapInfoImp	GL_MinorGTypeMapInfo;
typedef	GL_MinorGTypeMapInfoImp::SData	GL_MinorGTypeMapInfo_Data;

class GL_OrderInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<BigintColumn::ValueType>	ClientOrderID_;
		boost::optional<IntColumn::ValueType>	OrderIndex_;
		boost::optional<IntColumn::ValueType>	OrderType_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	OrderStatus_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	DesignerID_;
		boost::optional<IntColumn::ValueType>	ShopAuditorID_;
		boost::optional<IntColumn::ValueType>	ShopCommitorID_;
		boost::optional<IntColumn::ValueType>	FactoryGraphAuditorID_;
		boost::optional<IntColumn::ValueType>	FactoryListAuditorID_;
		boost::optional<IntColumn::ValueType>	FactoryFinanceAuditorID_;
		boost::optional<DateTimeColumn::ValueType>	ShopAuditTime_;
		boost::optional<DateTimeColumn::ValueType>	ShopCommitTime_;
		boost::optional<DateTimeColumn::ValueType>	GraphAuditTime_;
		boost::optional<DateTimeColumn::ValueType>	ListAuditTime_;
		boost::optional<DateTimeColumn::ValueType>	FinanceAuditTime_;
		boost::optional<StringColumn::ValueType>	OrderCode_;
		boost::optional<StringColumn::ValueType>	ShopAuditContent_;
		boost::optional<StringColumn::ValueType>	ShopCommitContent_;
		boost::optional<StringColumn::ValueType>	GraphAuditContent_;
		boost::optional<StringColumn::ValueType>	ListAuditContent_;
		boost::optional<StringColumn::ValueType>	FinanceAuditContent_;
	};

public:
	GL_OrderInfoImp(const StringType& alias);
	GL_OrderInfoImp(GL_OrderInfoImp&& rhs);
	GL_OrderInfoImp(const GL_OrderInfoImp& rhs);

public:

	GL_OrderInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	OrderID;
	BigintColumn	ClientOrderID;
	IntColumn	OrderIndex;
	IntColumn	OrderType;
	IntColumn	FactoryID;
	IntColumn	ShopID;
	IntColumn	OrderStatus;
	BoolColumn	IsDel;
	IntColumn	DesignerID;
	IntColumn	ShopAuditorID;
	IntColumn	ShopCommitorID;
	IntColumn	FactoryGraphAuditorID;
	IntColumn	FactoryListAuditorID;
	IntColumn	FactoryFinanceAuditorID;
	DateTimeColumn	ShopAuditTime;
	DateTimeColumn	ShopCommitTime;
	DateTimeColumn	GraphAuditTime;
	DateTimeColumn	ListAuditTime;
	DateTimeColumn	FinanceAuditTime;
	StringColumn	OrderCode;
	StringColumn	ShopAuditContent;
	StringColumn	ShopCommitContent;
	StringColumn	GraphAuditContent;
	StringColumn	ListAuditContent;
	StringColumn	FinanceAuditContent;
};
extern	GL_OrderInfoImp	GL_OrderInfo;
typedef	GL_OrderInfoImp::SData	GL_OrderInfo_Data;

class GL_PinYinImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<StringColumn::ValueType>	PYCode_;
		boost::optional<StringColumn::ValueType>	PYName_;
	};

public:
	GL_PinYinImp(const StringType& alias);
	GL_PinYinImp(GL_PinYinImp&& rhs);
	GL_PinYinImp(const GL_PinYinImp& rhs);

public:

	GL_PinYinImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	StringColumn	PYCode;
	StringColumn	PYName;
};
extern	GL_PinYinImp	GL_PinYin;
typedef	GL_PinYinImp::SData	GL_PinYin_Data;

class GL_PrepaidCardInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	CardID_;
		boost::optional<IntColumn::ValueType>	CardCategory_;
		boost::optional<IntColumn::ValueType>	CardType_;
		boost::optional<IntColumn::ValueType>	Period_;
		boost::optional<StringColumn::ValueType>	SecureCode_;
		boost::optional<StringColumn::ValueType>	CardPwd_;
		boost::optional<StringColumn::ValueType>	SerialNo_;
		boost::optional<StringColumn::ValueType>	CardNo_;
	};

public:
	GL_PrepaidCardInfoImp(const StringType& alias);
	GL_PrepaidCardInfoImp(GL_PrepaidCardInfoImp&& rhs);
	GL_PrepaidCardInfoImp(const GL_PrepaidCardInfoImp& rhs);

public:

	GL_PrepaidCardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CardID;
	IntColumn	CardCategory;
	IntColumn	CardType;
	IntColumn	Period;
	StringColumn	SecureCode;
	StringColumn	CardPwd;
	StringColumn	SerialNo;
	StringColumn	CardNo;
};
extern	GL_PrepaidCardInfoImp	GL_PrepaidCardInfo;
typedef	GL_PrepaidCardInfoImp::SData	GL_PrepaidCardInfo_Data;

class GL_PrintTemplateInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	TemplateID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<StringColumn::ValueType>	RelativePath_;
		boost::optional<StringColumn::ValueType>	TemplateName_;
		boost::optional<StringColumn::ValueType>	TemplateMemo_;
		boost::optional<StringColumn::ValueType>	HashCode_;
	};

public:
	GL_PrintTemplateInfoImp(const StringType& alias);
	GL_PrintTemplateInfoImp(GL_PrintTemplateInfoImp&& rhs);
	GL_PrintTemplateInfoImp(const GL_PrintTemplateInfoImp& rhs);

public:

	GL_PrintTemplateInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	TemplateID;
	IntColumn	FactoryID;
	BoolColumn	IsActive;
	StringColumn	RelativePath;
	StringColumn	TemplateName;
	StringColumn	TemplateMemo;
	StringColumn	HashCode;
};
extern	GL_PrintTemplateInfoImp	GL_PrintTemplateInfo;
typedef	GL_PrintTemplateInfoImp::SData	GL_PrintTemplateInfo_Data;

class GL_RoleInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	RoleID_;
		boost::optional<IntColumn::ValueType>	DeptID_;
		boost::optional<IntColumn::ValueType>	DTypeID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	RoleName_;
	};

public:
	GL_RoleInfoImp(const StringType& alias);
	GL_RoleInfoImp(GL_RoleInfoImp&& rhs);
	GL_RoleInfoImp(const GL_RoleInfoImp& rhs);

public:

	GL_RoleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	RoleID;
	IntColumn	DeptID;
	IntColumn	DTypeID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	RoleName;
};
extern	GL_RoleInfoImp	GL_RoleInfo;
typedef	GL_RoleInfoImp::SData	GL_RoleInfo_Data;

class GL_RoleRightInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	RightID_;
		boost::optional<IntColumn::ValueType>	RightType_;
		boost::optional<IntColumn::ValueType>	RoleID_;
	};

public:
	GL_RoleRightInfoImp(const StringType& alias);
	GL_RoleRightInfoImp(GL_RoleRightInfoImp&& rhs);
	GL_RoleRightInfoImp(const GL_RoleRightInfoImp& rhs);

public:

	GL_RoleRightInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	RightID;
	IntColumn	RightType;
	IntColumn	RoleID;
};
extern	GL_RoleRightInfoImp	GL_RoleRightInfo;
typedef	GL_RoleRightInfoImp::SData	GL_RoleRightInfo_Data;

class GL_SugarVerInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	DeptID_;
		boost::optional<IntColumn::ValueType>	VerType_;
		boost::optional<IntColumn::ValueType>	VerIndex_;
		boost::optional<IntColumn::ValueType>	UploadStatus_;
		boost::optional<IntColumn::ValueType>	FileCount_;
		boost::optional<IntColumn::ValueType>	VerDBState_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<DateTimeColumn::ValueType>	StartTime_;
		boost::optional<DateTimeColumn::ValueType>	StopTime_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<StringColumn::ValueType>	VerMemo_;
	};

public:
	GL_SugarVerInfoImp(const StringType& alias);
	GL_SugarVerInfoImp(GL_SugarVerInfoImp&& rhs);
	GL_SugarVerInfoImp(const GL_SugarVerInfoImp& rhs);

public:

	GL_SugarVerInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	VerCode;
	IntColumn	DeptID;
	IntColumn	VerType;
	IntColumn	VerIndex;
	IntColumn	UploadStatus;
	IntColumn	FileCount;
	IntColumn	VerDBState;
	IntColumn	CreatorID;
	DateTimeColumn	StartTime;
	DateTimeColumn	StopTime;
	DateTimeColumn	CreateTime;
	StringColumn	VerMemo;
};
extern	GL_SugarVerInfoImp	GL_SugarVerInfo;
typedef	GL_SugarVerInfoImp::SData	GL_SugarVerInfo_Data;

class GL_TransferOrderInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<BigintColumn::ValueType>	RecordID_;
		boost::optional<IntColumn::ValueType>	TransferByUserID_;
		boost::optional<IntColumn::ValueType>	TransferToUserID_;
	};

public:
	GL_TransferOrderInfoImp(const StringType& alias);
	GL_TransferOrderInfoImp(GL_TransferOrderInfoImp&& rhs);
	GL_TransferOrderInfoImp(const GL_TransferOrderInfoImp& rhs);

public:

	GL_TransferOrderInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	RecordID;
	IntColumn	TransferByUserID;
	IntColumn	TransferToUserID;
};
extern	GL_TransferOrderInfoImp	GL_TransferOrderInfo;
typedef	GL_TransferOrderInfoImp::SData	GL_TransferOrderInfo_Data;

class GL_UnitInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	UnitID_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<StringColumn::ValueType>	UnitName_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GL_UnitInfoImp(const StringType& alias);
	GL_UnitInfoImp(GL_UnitInfoImp&& rhs);
	GL_UnitInfoImp(const GL_UnitInfoImp& rhs);

public:

	GL_UnitInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	UnitID;
	IntColumn	GTypeID;
	StringColumn	UnitName;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GL_UnitInfoImp	GL_UnitInfo;
typedef	GL_UnitInfoImp::SData	GL_UnitInfo_Data;

class GL_UserActivationInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<StringColumn::ValueType>	ActivationCode_;
		boost::optional<IntColumn::ValueType>	TryCount_;
		boost::optional<DateTimeColumn::ValueType>	LastTryTime_;
	};

public:
	GL_UserActivationInfoImp(const StringType& alias);
	GL_UserActivationInfoImp(GL_UserActivationInfoImp&& rhs);
	GL_UserActivationInfoImp(const GL_UserActivationInfoImp& rhs);

public:

	GL_UserActivationInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	UserID;
	StringColumn	ActivationCode;
	IntColumn	TryCount;
	DateTimeColumn	LastTryTime;
};
extern	GL_UserActivationInfoImp	GL_UserActivationInfo;
typedef	GL_UserActivationInfoImp::SData	GL_UserActivationInfo_Data;

class GL_UserInfoImp : public Table
{
public:

	class SData
	{
	public:
		void	ToUtf8();
		void	ToAscii();
		void	SetAll(bool val);
		void	Flip();
		void	Check();

		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	DeptID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	RoleID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	UserPwd_;
		boost::optional<StringColumn::ValueType>	UserCode_;
		boost::optional<StringColumn::ValueType>	EncodeStr_;
		boost::optional<StringColumn::ValueType>	TrueName_;
		boost::optional<StringColumn::ValueType>	IDCode_;
		boost::optional<StringColumn::ValueType>	QQNum_;
		boost::optional<StringColumn::ValueType>	Email_;
		boost::optional<StringColumn::ValueType>	Tel_;
		boost::optional<StringColumn::ValueType>	CellPhone_;
		boost::optional<StringColumn::ValueType>	PostCode_;
		boost::optional<StringColumn::ValueType>	ContactAddress_;
		boost::optional<BoolColumn::ValueType>	IsActived_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
	};

public:
	GL_UserInfoImp(const StringType& alias);
	GL_UserInfoImp(GL_UserInfoImp&& rhs);
	GL_UserInfoImp(const GL_UserInfoImp& rhs);

public:

	GL_UserInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	UserID;
	IntColumn	FactoryID;
	IntColumn	ShopID;
	IntColumn	DeptID;
	BoolColumn	IsDel;
	IntColumn	RoleID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	UserPwd;
	StringColumn	UserCode;
	StringColumn	EncodeStr;
	StringColumn	TrueName;
	StringColumn	IDCode;
	StringColumn	QQNum;
	StringColumn	Email;
	StringColumn	Tel;
	StringColumn	CellPhone;
	StringColumn	PostCode;
	StringColumn	ContactAddress;
	BoolColumn	IsActived;
	BoolColumn	IsLocked;
};
extern	GL_UserInfoImp	GL_UserInfo;
typedef	GL_UserInfoImp::SData	GL_UserInfo_Data;

}
