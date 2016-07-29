#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class GC_CabBoardGapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabBoardGapID_;
		boost::optional<IntColumn::ValueType>	CabBoardID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardGapID_;
		boost::optional<IntColumn::ValueType>	GapPos_;
		boost::optional<IntColumn::ValueType>	GapIndex_;
		boost::optional<IntColumn::ValueType>	GapType_;
		boost::optional<IntColumn::ValueType>	GapShape_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabBoardGapInfoImp(const StringType& alias);
	GC_CabBoardGapInfoImp(GC_CabBoardGapInfoImp&& rhs);
	GC_CabBoardGapInfoImp(const GC_CabBoardGapInfoImp& rhs);

public:

	GC_CabBoardGapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabBoardGapID;
	IntColumn	CabBoardID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	CabStructBoardID;
	IntColumn	CabStructBoardGapID;
	IntColumn	GapPos;
	IntColumn	GapIndex;
	IntColumn	GapType;
	IntColumn	GapShape;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabBoardGapInfoImp	GC_CabBoardGapInfo;
typedef	GC_CabBoardGapInfoImp::SData	GC_CabBoardGapInfo_Data;

class GC_CabBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabBoardID_;
		boost::optional<IntColumn::ValueType>	CabID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	CabinetSizeID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	CabinetSizeBoardID_;
		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<BoolColumn::ValueType>	IsChangedOffset_;
		boost::optional<BoolColumn::ValueType>	IsFakeDel_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	CabBoardName_;
	};

public:
	GC_CabBoardInfoImp(const StringType& alias);
	GC_CabBoardInfoImp(GC_CabBoardInfoImp&& rhs);
	GC_CabBoardInfoImp(const GC_CabBoardInfoImp& rhs);

public:

	GC_CabBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabBoardID;
	IntColumn	CabID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	CabinetSizeID;
	IntColumn	CabStructBoardID;
	IntColumn	CabinetSizeBoardID;
	IntColumn	CabMatPlanID;
	IntColumn	MatID;
	IntColumn	MatGType;
	IntColumn	SkinDirection;
	IntColumn	SealRuleID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	BoolColumn	IsChangedOffset;
	BoolColumn	IsFakeDel;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	CabBoardName;
};
extern	GC_CabBoardInfoImp	GC_CabBoardInfo;
typedef	GC_CabBoardInfoImp::SData	GC_CabBoardInfo_Data;

class GC_CabBoardSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabBoardSealID_;
		boost::optional<IntColumn::ValueType>	CabBoardID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardSealID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<FloatColumn::ValueType>	PreMill_;
	};

public:
	GC_CabBoardSealInfoImp(const StringType& alias);
	GC_CabBoardSealInfoImp(GC_CabBoardSealInfoImp&& rhs);
	GC_CabBoardSealInfoImp(const GC_CabBoardSealInfoImp& rhs);

public:

	GC_CabBoardSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabBoardSealID;
	IntColumn	CabBoardID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	CabStructBoardSealID;
	IntColumn	CabStructBoardID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	SealType;
	IntColumn	SealIndex;
	IntColumn	MaterialID;
	FloatColumn	PreMill;
};
extern	GC_CabBoardSealInfoImp	GC_CabBoardSealInfo;
typedef	GC_CabBoardSealInfoImp::SData	GC_CabBoardSealInfo_Data;

class GC_CabDoorBoardGapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorBoardGapID_;
		boost::optional<IntColumn::ValueType>	CabDoorBoardID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DoorBoardGapID_;
		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GapPos_;
		boost::optional<IntColumn::ValueType>	GapIndex_;
		boost::optional<IntColumn::ValueType>	GapType_;
		boost::optional<IntColumn::ValueType>	GapShape_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorBoardGapInfoImp(const StringType& alias);
	GC_CabDoorBoardGapInfoImp(GC_CabDoorBoardGapInfoImp&& rhs);
	GC_CabDoorBoardGapInfoImp(const GC_CabDoorBoardGapInfoImp& rhs);

public:

	GC_CabDoorBoardGapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorBoardGapID;
	IntColumn	CabDoorBoardID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DoorBoardGapID;
	IntColumn	DoorBoardID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	GapPos;
	IntColumn	GapIndex;
	IntColumn	GapType;
	IntColumn	GapShape;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorBoardGapInfoImp	GC_CabDoorBoardGapInfo;
typedef	GC_CabDoorBoardGapInfoImp::SData	GC_CabDoorBoardGapInfo_Data;

class GC_CabDoorBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorBoardID_;
		boost::optional<IntColumn::ValueType>	CabDoorID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<IntColumn::ValueType>	DoorBoardIndex_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorBoardInfoImp(const StringType& alias);
	GC_CabDoorBoardInfoImp(GC_CabDoorBoardInfoImp&& rhs);
	GC_CabDoorBoardInfoImp(const GC_CabDoorBoardInfoImp& rhs);

public:

	GC_CabDoorBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorBoardID;
	IntColumn	CabDoorID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DoorBoardID;
	IntColumn	DoorID;
	IntColumn	DoorBoardIndex;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	DoorMatPlanID;
	IntColumn	MatID;
	IntColumn	MatGType;
	IntColumn	SkinDirection;
	IntColumn	SealRuleID;
	IntColumn	ModelID;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorBoardInfoImp	GC_CabDoorBoardInfo;
typedef	GC_CabDoorBoardInfoImp::SData	GC_CabDoorBoardInfo_Data;

class GC_CabDoorBoardSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorBoardSealID_;
		boost::optional<IntColumn::ValueType>	CabDoorBoardID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<FloatColumn::ValueType>	PreMill_;
	};

public:
	GC_CabDoorBoardSealInfoImp(const StringType& alias);
	GC_CabDoorBoardSealInfoImp(GC_CabDoorBoardSealInfoImp&& rhs);
	GC_CabDoorBoardSealInfoImp(const GC_CabDoorBoardSealInfoImp& rhs);

public:

	GC_CabDoorBoardSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorBoardSealID;
	IntColumn	CabDoorBoardID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DoorBoardID;
	IntColumn	SealIndex;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	SealType;
	IntColumn	MaterialID;
	FloatColumn	PreMill;
};
extern	GC_CabDoorBoardSealInfoImp	GC_CabDoorBoardSealInfo;
typedef	GC_CabDoorBoardSealInfoImp::SData	GC_CabDoorBoardSealInfo_Data;

class GC_CabDoorHWFInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorHWFID_;
		boost::optional<IntColumn::ValueType>	CabDoorRegionID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	SettingCountRuleID_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorHWFInfoImp(const StringType& alias);
	GC_CabDoorHWFInfoImp(GC_CabDoorHWFInfoImp&& rhs);
	GC_CabDoorHWFInfoImp(const GC_CabDoorHWFInfoImp& rhs);

public:

	GC_CabDoorHWFInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorHWFID;
	IntColumn	CabDoorRegionID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	HWFittingID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	SettingCountRuleID;
	IntColumn	UseCount;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorHWFInfoImp	GC_CabDoorHWFInfo;
typedef	GC_CabDoorHWFInfoImp::SData	GC_CabDoorHWFInfo_Data;

class GC_CabDoorHandleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorHandleID_;
		boost::optional<IntColumn::ValueType>	CabParentID_;
		boost::optional<IntColumn::ValueType>	ParentType_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorRegionID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorRegionHandleID_;
		boost::optional<IntColumn::ValueType>	OwnerID_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	HandleID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	MatchType_;
		boost::optional<BoolColumn::ValueType>	IsChangedOffset_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	RealXLen_;
		boost::optional<FloatColumn::ValueType>	RealYLen_;
		boost::optional<FloatColumn::ValueType>	RealZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorHandleInfoImp(const StringType& alias);
	GC_CabDoorHandleInfoImp(GC_CabDoorHandleInfoImp&& rhs);
	GC_CabDoorHandleInfoImp(const GC_CabDoorHandleInfoImp& rhs);

public:

	GC_CabDoorHandleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorHandleID;
	IntColumn	CabParentID;
	IntColumn	ParentType;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	CabDesignDoorRegionID;
	IntColumn	CabDesignDoorRegionHandleID;
	IntColumn	OwnerID;
	IntColumn	DoorMatPlanID;
	IntColumn	HandleID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	MatchType;
	BoolColumn	IsChangedOffset;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	RealXLen;
	FloatColumn	RealYLen;
	FloatColumn	RealZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	FloatColumn	ArcZ;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorHandleInfoImp	GC_CabDoorHandleInfo;
typedef	GC_CabDoorHandleInfoImp::SData	GC_CabDoorHandleInfo_Data;

class GC_CabDoorInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorID_;
		boost::optional<IntColumn::ValueType>	CabParentID_;
		boost::optional<IntColumn::ValueType>	ParentType_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	OwnerID_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorInfoImp(const StringType& alias);
	GC_CabDoorInfoImp(GC_CabDoorInfoImp&& rhs);
	GC_CabDoorInfoImp(const GC_CabDoorInfoImp& rhs);

public:

	GC_CabDoorInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorID;
	IntColumn	CabParentID;
	IntColumn	ParentType;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	OwnerID;
	IntColumn	DoorMatPlanID;
	IntColumn	DoorID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorInfoImp	GC_CabDoorInfo;
typedef	GC_CabDoorInfoImp::SData	GC_CabDoorInfo_Data;

class GC_CabDoorRegionInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorRegionID_;
		boost::optional<IntColumn::ValueType>	CabDoorSystemID_;
		boost::optional<IntColumn::ValueType>	ParentCabRegionID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorRegionID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorSystemID_;
		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	IsUserDefineSize_;
		boost::optional<BoolColumn::ValueType>	IsUserDefinePos_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	XAdjustLen_;
		boost::optional<FloatColumn::ValueType>	YAdjustLen_;
		boost::optional<FloatColumn::ValueType>	RealXLen_;
		boost::optional<FloatColumn::ValueType>	RealYLen_;
		boost::optional<FloatColumn::ValueType>	RealZLen_;
		boost::optional<FloatColumn::ValueType>	CutXLen_;
		boost::optional<FloatColumn::ValueType>	CutYLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<FloatColumn::ValueType>	RealXOffsetLen_;
		boost::optional<FloatColumn::ValueType>	RealYOffsetLen_;
		boost::optional<FloatColumn::ValueType>	RealZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorRegionInfoImp(const StringType& alias);
	GC_CabDoorRegionInfoImp(GC_CabDoorRegionInfoImp&& rhs);
	GC_CabDoorRegionInfoImp(const GC_CabDoorRegionInfoImp& rhs);

public:

	GC_CabDoorRegionInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorRegionID;
	IntColumn	CabDoorSystemID;
	IntColumn	ParentCabRegionID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DoorSystemRegionID;
	IntColumn	DoorSystemID;
	IntColumn	CabDesignDoorRegionID;
	IntColumn	CabDesignDoorSystemID;
	IntColumn	CabDesignID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	IsUserDefineSize;
	BoolColumn	IsUserDefinePos;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	XAdjustLen;
	FloatColumn	YAdjustLen;
	FloatColumn	RealXLen;
	FloatColumn	RealYLen;
	FloatColumn	RealZLen;
	FloatColumn	CutXLen;
	FloatColumn	CutYLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	FloatColumn	RealXOffsetLen;
	FloatColumn	RealYOffsetLen;
	FloatColumn	RealZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorRegionInfoImp	GC_CabDoorRegionInfo;
typedef	GC_CabDoorRegionInfoImp::SData	GC_CabDoorRegionInfo_Data;

class GC_CabDoorSlideInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorSlideID_;
		boost::optional<IntColumn::ValueType>	CabDoorRegionID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	SlideID_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	SlidePosition_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	RealXLen_;
		boost::optional<FloatColumn::ValueType>	RealYLen_;
		boost::optional<FloatColumn::ValueType>	RealZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorSlideInfoImp(const StringType& alias);
	GC_CabDoorSlideInfoImp(GC_CabDoorSlideInfoImp&& rhs);
	GC_CabDoorSlideInfoImp(const GC_CabDoorSlideInfoImp& rhs);

public:

	GC_CabDoorSlideInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorSlideID;
	IntColumn	CabDoorRegionID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DoorSystemRegionID;
	IntColumn	SlideID;
	IntColumn	GTypeID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	SlidePosition;
	IntColumn	SupplyType;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	RealXLen;
	FloatColumn	RealYLen;
	FloatColumn	RealZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorSlideInfoImp	GC_CabDoorSlideInfo;
typedef	GC_CabDoorSlideInfoImp::SData	GC_CabDoorSlideInfo_Data;

class GC_CabDoorSystemInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDoorSystemID_;
		boost::optional<IntColumn::ValueType>	CabID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorSystemID_;
		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<BoolColumn::ValueType>	IsFakeDel_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	XAdjustLen_;
		boost::optional<FloatColumn::ValueType>	YAdjustLen_;
		boost::optional<FloatColumn::ValueType>	RealXLen_;
		boost::optional<FloatColumn::ValueType>	RealYLen_;
		boost::optional<FloatColumn::ValueType>	RealZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<FloatColumn::ValueType>	RealXOffsetLen_;
		boost::optional<FloatColumn::ValueType>	RealYOffsetLen_;
		boost::optional<FloatColumn::ValueType>	RealZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabDoorSystemInfoImp(const StringType& alias);
	GC_CabDoorSystemInfoImp(GC_CabDoorSystemInfoImp&& rhs);
	GC_CabDoorSystemInfoImp(const GC_CabDoorSystemInfoImp& rhs);

public:

	GC_CabDoorSystemInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDoorSystemID;
	IntColumn	CabID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	CabDesignDoorSystemID;
	IntColumn	CabDesignID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	DoorSystemID;
	IntColumn	DoorMatPlanID;
	IntColumn	SupplyType;
	BoolColumn	IsFakeDel;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	XAdjustLen;
	FloatColumn	YAdjustLen;
	FloatColumn	RealXLen;
	FloatColumn	RealYLen;
	FloatColumn	RealZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	FloatColumn	RealXOffsetLen;
	FloatColumn	RealYOffsetLen;
	FloatColumn	RealZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabDoorSystemInfoImp	GC_CabDoorSystemInfo;
typedef	GC_CabDoorSystemInfoImp::SData	GC_CabDoorSystemInfo_Data;

class GC_CabFNFHWFInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabFNFHWFID_;
		boost::optional<IntColumn::ValueType>	CabFNFID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<IntColumn::ValueType>	FittingType_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	IsFakeDel_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabFNFHWFInfoImp(const StringType& alias);
	GC_CabFNFHWFInfoImp(GC_CabFNFHWFInfoImp&& rhs);
	GC_CabFNFHWFInfoImp(const GC_CabFNFHWFInfoImp& rhs);

public:

	GC_CabFNFHWFInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabFNFHWFID;
	IntColumn	CabFNFID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	FNFittingID;
	IntColumn	HWFittingID;
	IntColumn	FittingType;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	IsFakeDel;
	IntColumn	UseCount;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabFNFHWFInfoImp	GC_CabFNFHWFInfo;
typedef	GC_CabFNFHWFInfoImp::SData	GC_CabFNFHWFInfo_Data;

class GC_CabFNFHoleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabFNFHoleID_;
		boost::optional<IntColumn::ValueType>	CabFNFID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	HoleID_;
		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	HoleTypeID_;
		boost::optional<IntColumn::ValueType>	HolePicID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	OverHeight_;
		boost::optional<FloatColumn::ValueType>	MinXDistance_;
		boost::optional<FloatColumn::ValueType>	MinZDistance_;
	};

public:
	GC_CabFNFHoleInfoImp(const StringType& alias);
	GC_CabFNFHoleInfoImp(GC_CabFNFHoleInfoImp&& rhs);
	GC_CabFNFHoleInfoImp(const GC_CabFNFHoleInfoImp& rhs);

public:

	GC_CabFNFHoleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabFNFHoleID;
	IntColumn	CabFNFID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	HoleID;
	IntColumn	FNFittingID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	HoleTypeID;
	IntColumn	HolePicID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	OverHeight;
	FloatColumn	MinXDistance;
	FloatColumn	MinZDistance;
};
extern	GC_CabFNFHoleInfoImp	GC_CabFNFHoleInfo;
typedef	GC_CabFNFHoleInfoImp::SData	GC_CabFNFHoleInfo_Data;

class GC_CabFNFInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabFNFID_;
		boost::optional<IntColumn::ValueType>	DesignOwnerID_;
		boost::optional<IntColumn::ValueType>	DesignOwnerGTypeID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	ContainerID_;
		boost::optional<IntColumn::ValueType>	ContainerGTypeID_;
		boost::optional<IntColumn::ValueType>	CabDesignFNFittingID_;
		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsFakeDel_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	RealXLen_;
		boost::optional<FloatColumn::ValueType>	RealYLen_;
		boost::optional<FloatColumn::ValueType>	RealZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YPos_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	UserMemo_;
	};

public:
	GC_CabFNFInfoImp(const StringType& alias);
	GC_CabFNFInfoImp(GC_CabFNFInfoImp&& rhs);
	GC_CabFNFInfoImp(const GC_CabFNFInfoImp& rhs);

public:

	GC_CabFNFInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabFNFID;
	IntColumn	DesignOwnerID;
	IntColumn	DesignOwnerGTypeID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	ContainerID;
	IntColumn	ContainerGTypeID;
	IntColumn	CabDesignFNFittingID;
	IntColumn	FNFittingID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	BoolColumn	HasMark;
	BoolColumn	IsFakeDel;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	MaterialID;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	RealXLen;
	FloatColumn	RealYLen;
	FloatColumn	RealZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	FloatColumn	YPos;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	UserMemo;
};
extern	GC_CabFNFInfoImp	GC_CabFNFInfo;
typedef	GC_CabFNFInfoImp::SData	GC_CabFNFInfo_Data;

class GC_CabFNFPartInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabFNFPartID_;
		boost::optional<IntColumn::ValueType>	CabFNFID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FNFittingPartID_;
		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<IntColumn::ValueType>	PartType_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	RealXLen_;
		boost::optional<FloatColumn::ValueType>	RealYLen_;
		boost::optional<FloatColumn::ValueType>	RealZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabFNFPartInfoImp(const StringType& alias);
	GC_CabFNFPartInfoImp(GC_CabFNFPartInfoImp&& rhs);
	GC_CabFNFPartInfoImp(const GC_CabFNFPartInfoImp& rhs);

public:

	GC_CabFNFPartInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabFNFPartID;
	IntColumn	CabFNFID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	FNFittingPartID;
	IntColumn	FNFittingID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	HWFittingID;
	IntColumn	MaterialID;
	IntColumn	SealRuleID;
	IntColumn	PartType;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	RealXLen;
	FloatColumn	RealYLen;
	FloatColumn	RealZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabFNFPartInfoImp	GC_CabFNFPartInfo;
typedef	GC_CabFNFPartInfoImp::SData	GC_CabFNFPartInfo_Data;

class GC_CabFNFPartSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabFNFPartSealID_;
		boost::optional<IntColumn::ValueType>	CabFNFPartID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FNFittingPartID_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<FloatColumn::ValueType>	PreMill_;
	};

public:
	GC_CabFNFPartSealInfoImp(const StringType& alias);
	GC_CabFNFPartSealInfoImp(GC_CabFNFPartSealInfoImp&& rhs);
	GC_CabFNFPartSealInfoImp(const GC_CabFNFPartSealInfoImp& rhs);

public:

	GC_CabFNFPartSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabFNFPartSealID;
	IntColumn	CabFNFPartID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	FNFittingPartID;
	IntColumn	SealType;
	IntColumn	SealIndex;
	IntColumn	MaterialID;
	FloatColumn	PreMill;
};
extern	GC_CabFNFPartSealInfoImp	GC_CabFNFPartSealInfo;
typedef	GC_CabFNFPartSealInfoImp::SData	GC_CabFNFPartSealInfo_Data;

class GC_CabInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<IntColumn::ValueType>	CabinetSizeID_;
		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	ShapeXLen_;
		boost::optional<FloatColumn::ValueType>	ShapeZLen_;
		boost::optional<FloatColumn::ValueType>	GapXLen_;
		boost::optional<FloatColumn::ValueType>	GapYLen_;
		boost::optional<FloatColumn::ValueType>	GapZLen_;
		boost::optional<FloatColumn::ValueType>	YPos_;
		boost::optional<IntColumn::ValueType>	FootID_;
		boost::optional<IntColumn::ValueType>	FootCount_;
		boost::optional<FloatColumn::ValueType>	FootYLen_;
		boost::optional<BoolColumn::ValueType>	IsStandard_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_CabInfoImp(const StringType& alias);
	GC_CabInfoImp(GC_CabInfoImp&& rhs);
	GC_CabInfoImp(const GC_CabInfoImp& rhs);

public:

	GC_CabInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	CabDesignID;
	IntColumn	CabinetSizeID;
	IntColumn	CabStructID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	CabMatPlanID;
	IntColumn	SealRuleID;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	ShapeXLen;
	FloatColumn	ShapeZLen;
	FloatColumn	GapXLen;
	FloatColumn	GapYLen;
	FloatColumn	GapZLen;
	FloatColumn	YPos;
	IntColumn	FootID;
	IntColumn	FootCount;
	FloatColumn	FootYLen;
	BoolColumn	IsStandard;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_CabInfoImp	GC_CabInfo;
typedef	GC_CabInfoImp::SData	GC_CabInfo_Data;

class GC_DecorBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignDecorBoardID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DesignParentID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DecorBoardID_;
		boost::optional<IntColumn::ValueType>	DecorParentID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	GroupIndex_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<BoolColumn::ValueType>	IsAutoFit_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<BoolColumn::ValueType>	IsChangedSize_;
		boost::optional<BoolColumn::ValueType>	IsDragIn_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<IntColumn::ValueType>	TargetType_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	YPos_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_DecorBoardInfoImp(const StringType& alias);
	GC_DecorBoardInfoImp(GC_DecorBoardInfoImp&& rhs);
	GC_DecorBoardInfoImp(const GC_DecorBoardInfoImp& rhs);

public:

	GC_DecorBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignDecorBoardID;
	IntColumn	DesignPlanID;
	IntColumn	DesignParentID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DecorBoardID;
	IntColumn	DecorParentID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	GroupID;
	IntColumn	GroupIndex;
	IntColumn	GTypeID;
	BoolColumn	IsAutoFit;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	BoolColumn	IsChangedSize;
	BoolColumn	IsDragIn;
	IntColumn	DoorMatPlanID;
	IntColumn	CabMatPlanID;
	IntColumn	DoorID;
	IntColumn	TargetType;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	IntColumn	MatID;
	IntColumn	MatGType;
	IntColumn	SupplyType;
	IntColumn	ModelID;
	FloatColumn	YPos;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_DecorBoardInfoImp	GC_DecorBoardInfo;
typedef	GC_DecorBoardInfoImp::SData	GC_DecorBoardInfo_Data;

class GC_DecorBoardUnitInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignDecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	DesignDecorBoardID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	DecorBoardID_;
		boost::optional<IntColumn::ValueType>	DecorBoardUnitIndex_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	IsUseDoor_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<IntColumn::ValueType>	TargetType_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	XOffsetLen_;
		boost::optional<FloatColumn::ValueType>	YOffsetLen_;
		boost::optional<FloatColumn::ValueType>	ZOffsetLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_DecorBoardUnitInfoImp(const StringType& alias);
	GC_DecorBoardUnitInfoImp(GC_DecorBoardUnitInfoImp&& rhs);
	GC_DecorBoardUnitInfoImp(const GC_DecorBoardUnitInfoImp& rhs);

public:

	GC_DecorBoardUnitInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignDecorBoardUnitID;
	IntColumn	DesignDecorBoardID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DecorBoardUnitID;
	IntColumn	DecorBoardID;
	IntColumn	DecorBoardUnitIndex;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	IsUseDoor;
	IntColumn	DoorMatPlanID;
	IntColumn	CabMatPlanID;
	IntColumn	DoorID;
	IntColumn	TargetType;
	IntColumn	MatID;
	IntColumn	MatGType;
	IntColumn	SupplyType;
	IntColumn	SealRuleID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	XOffsetLen;
	FloatColumn	YOffsetLen;
	FloatColumn	ZOffsetLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_DecorBoardUnitInfoImp	GC_DecorBoardUnitInfo;
typedef	GC_DecorBoardUnitInfoImp::SData	GC_DecorBoardUnitInfo_Data;

class GC_DecorBoardUnitSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignDecorBoardUnitSealID_;
		boost::optional<IntColumn::ValueType>	DesignDecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	DecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	DecorBoardUnitSealID_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<FloatColumn::ValueType>	PreMill_;
	};

public:
	GC_DecorBoardUnitSealInfoImp(const StringType& alias);
	GC_DecorBoardUnitSealInfoImp(GC_DecorBoardUnitSealInfoImp&& rhs);
	GC_DecorBoardUnitSealInfoImp(const GC_DecorBoardUnitSealInfoImp& rhs);

public:

	GC_DecorBoardUnitSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignDecorBoardUnitSealID;
	IntColumn	DesignDecorBoardUnitID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	DecorBoardUnitID;
	IntColumn	DecorBoardUnitSealID;
	IntColumn	SealIndex;
	IntColumn	SealType;
	IntColumn	MaterialID;
	FloatColumn	PreMill;
};
extern	GC_DecorBoardUnitSealInfoImp	GC_DecorBoardUnitSealInfo;
typedef	GC_DecorBoardUnitSealInfoImp::SData	GC_DecorBoardUnitSealInfo_Data;

class GC_DecorInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignDecorID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DecorID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	YPos_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_DecorInfoImp(const StringType& alias);
	GC_DecorInfoImp(GC_DecorInfoImp&& rhs);
	GC_DecorInfoImp(const GC_DecorInfoImp& rhs);

public:

	GC_DecorInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignDecorID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	DecorID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	YPos;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_DecorInfoImp	GC_DecorInfo;
typedef	GC_DecorInfoImp::SData	GC_DecorInfo_Data;

class GC_DecorLineInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignDecorLineID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DecorLineID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_DecorLineInfoImp(const StringType& alias);
	GC_DecorLineInfoImp(GC_DecorLineInfoImp&& rhs);
	GC_DecorLineInfoImp(const GC_DecorLineInfoImp& rhs);

public:

	GC_DecorLineInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignDecorLineID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	DecorLineID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	GTypeID;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	IntColumn	MaterialID;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_DecorLineInfoImp	GC_DecorLineInfo;
typedef	GC_DecorLineInfoImp::SData	GC_DecorLineInfo_Data;

class GC_DesignPlanInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<FloatColumn::ValueType>	CurScale_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	SkyDecorID_;
		boost::optional<IntColumn::ValueType>	FloorDecorID_;
		boost::optional<IntColumn::ValueType>	WallDecorID_;
		boost::optional<IntColumn::ValueType>	DesignerID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	DesignPlanName_;
		boost::optional<StringColumn::ValueType>	DesignPlanMemo_;
	};

public:
	GC_DesignPlanInfoImp(const StringType& alias);
	GC_DesignPlanInfoImp(GC_DesignPlanInfoImp&& rhs);
	GC_DesignPlanInfoImp(const GC_DesignPlanInfoImp& rhs);

public:

	GC_DesignPlanInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPlanID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	FloatColumn	CurScale;
	BoolColumn	IsActive;
	IntColumn	SkyDecorID;
	IntColumn	FloorDecorID;
	IntColumn	WallDecorID;
	IntColumn	DesignerID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	DesignPlanName;
	StringColumn	DesignPlanMemo;
};
extern	GC_DesignPlanInfoImp	GC_DesignPlanInfo;
typedef	GC_DesignPlanInfoImp::SData	GC_DesignPlanInfo_Data;

class GC_FittingInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignFittingID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FittingID_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	FittingCount_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_FittingInfoImp(const StringType& alias);
	GC_FittingInfoImp(GC_FittingInfoImp&& rhs);
	GC_FittingInfoImp(const GC_FittingInfoImp& rhs);

public:

	GC_FittingInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignFittingID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	FittingID;
	IntColumn	GTypeID;
	IntColumn	SupplyType;
	IntColumn	FittingCount;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_FittingInfoImp	GC_FittingInfo;
typedef	GC_FittingInfoImp::SData	GC_FittingInfo_Data;

class GC_HWFInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignHWFID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_HWFInfoImp(const StringType& alias);
	GC_HWFInfoImp(GC_HWFInfoImp&& rhs);
	GC_HWFInfoImp(const GC_HWFInfoImp& rhs);

public:

	GC_HWFInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignHWFID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	HWFittingID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	UseCount;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_HWFInfoImp	GC_HWFInfo;
typedef	GC_HWFInfoImp::SData	GC_HWFInfo_Data;

class GC_MarkInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignMarkID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	PrintID_;
		boost::optional<IntColumn::ValueType>	ViewType_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<IntColumn::ValueType>	MarkType_;
		boost::optional<IntColumn::ValueType>	FontSize_;
		boost::optional<FloatColumn::ValueType>	StartX_;
		boost::optional<FloatColumn::ValueType>	StartY_;
		boost::optional<FloatColumn::ValueType>	OffsetX_;
		boost::optional<FloatColumn::ValueType>	OffsetY_;
		boost::optional<FloatColumn::ValueType>	StopX_;
		boost::optional<FloatColumn::ValueType>	StopY_;
		boost::optional<FloatColumn::ValueType>	TopLeftX_;
		boost::optional<FloatColumn::ValueType>	TopLeftY_;
		boost::optional<FloatColumn::ValueType>	Width_;
		boost::optional<FloatColumn::ValueType>	Height_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<BoolColumn::ValueType>	EditSign_;
		boost::optional<BoolColumn::ValueType>	StrickOut_;
		boost::optional<BoolColumn::ValueType>	UnderLine_;
		boost::optional<BoolColumn::ValueType>	Italic_;
		boost::optional<BoolColumn::ValueType>	Bold_;
		boost::optional<BigintColumn::ValueType>	BGColor_;
		boost::optional<BigintColumn::ValueType>	FontColor_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	FaceName_;
		boost::optional<StringColumn::ValueType>	RemarkText_;
	};

public:
	GC_MarkInfoImp(const StringType& alias);
	GC_MarkInfoImp(GC_MarkInfoImp&& rhs);
	GC_MarkInfoImp(const GC_MarkInfoImp& rhs);

public:

	GC_MarkInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignMarkID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	DesignPrintID;
	IntColumn	PrintID;
	IntColumn	ViewType;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	IntColumn	MarkType;
	IntColumn	FontSize;
	FloatColumn	StartX;
	FloatColumn	StartY;
	FloatColumn	OffsetX;
	FloatColumn	OffsetY;
	FloatColumn	StopX;
	FloatColumn	StopY;
	FloatColumn	TopLeftX;
	FloatColumn	TopLeftY;
	FloatColumn	Width;
	FloatColumn	Height;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	BoolColumn	EditSign;
	BoolColumn	StrickOut;
	BoolColumn	UnderLine;
	BoolColumn	Italic;
	BoolColumn	Bold;
	BigintColumn	BGColor;
	BigintColumn	FontColor;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	FaceName;
	StringColumn	RemarkText;
};
extern	GC_MarkInfoImp	GC_MarkInfo;
typedef	GC_MarkInfoImp::SData	GC_MarkInfo_Data;

class GC_MatrixInfoImp : public Table
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
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BigintColumn::ValueType>	TransObjID_;
		boost::optional<IntColumn::ValueType>	TransObjType_;
		boost::optional<IntColumn::ValueType>	MajorCurSel_;
		boost::optional<IntColumn::ValueType>	MinorCurSel_;
		boost::optional<IntColumn::ValueType>	MatCurIndex_;
		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<FloatColumn::ValueType>	M11_;
		boost::optional<FloatColumn::ValueType>	M12_;
		boost::optional<FloatColumn::ValueType>	M13_;
		boost::optional<FloatColumn::ValueType>	M21_;
		boost::optional<FloatColumn::ValueType>	M22_;
		boost::optional<FloatColumn::ValueType>	M23_;
		boost::optional<FloatColumn::ValueType>	M31_;
		boost::optional<FloatColumn::ValueType>	M32_;
		boost::optional<FloatColumn::ValueType>	M33_;
		boost::optional<FloatColumn::ValueType>	M41_;
		boost::optional<FloatColumn::ValueType>	M42_;
		boost::optional<FloatColumn::ValueType>	M43_;
		boost::optional<FloatColumn::ValueType>	M44_;
	};

public:
	GC_MatrixInfoImp(const StringType& alias);
	GC_MatrixInfoImp(GC_MatrixInfoImp&& rhs);
	GC_MatrixInfoImp(const GC_MatrixInfoImp& rhs);

public:

	GC_MatrixInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	OrderID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BigintColumn	TransObjID;
	IntColumn	TransObjType;
	IntColumn	MajorCurSel;
	IntColumn	MinorCurSel;
	IntColumn	MatCurIndex;
	IntColumn	CabMatPlanID;
	FloatColumn	M11;
	FloatColumn	M12;
	FloatColumn	M13;
	FloatColumn	M21;
	FloatColumn	M22;
	FloatColumn	M23;
	FloatColumn	M31;
	FloatColumn	M32;
	FloatColumn	M33;
	FloatColumn	M41;
	FloatColumn	M42;
	FloatColumn	M43;
	FloatColumn	M44;
};
extern	GC_MatrixInfoImp	GC_MatrixInfo;
typedef	GC_MatrixInfoImp::SData	GC_MatrixInfo_Data;

class GC_OrderAddedInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	OrderAddedID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<FloatColumn::ValueType>	UnitPrice_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	AddedName_;
		boost::optional<StringColumn::ValueType>	MatName_;
		boost::optional<StringColumn::ValueType>	UnitName_;
		boost::optional<StringColumn::ValueType>	SpecName_;
		boost::optional<StringColumn::ValueType>	AttachFileName_;
	};

public:
	GC_OrderAddedInfoImp(const StringType& alias);
	GC_OrderAddedInfoImp(GC_OrderAddedInfoImp&& rhs);
	GC_OrderAddedInfoImp(const GC_OrderAddedInfoImp& rhs);

public:

	GC_OrderAddedInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	OrderAddedID;
	BigintColumn	OrderID;
	IntColumn	OrderCate;
	IntColumn	FactoryID;
	IntColumn	UseCount;
	FloatColumn	UnitPrice;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	AddedName;
	StringColumn	MatName;
	StringColumn	UnitName;
	StringColumn	SpecName;
	StringColumn	AttachFileName;
};
extern	GC_OrderAddedInfoImp	GC_OrderAddedInfo;
typedef	GC_OrderAddedInfoImp::SData	GC_OrderAddedInfo_Data;

class GC_OrderDataInfoImp : public Table
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
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	MaxMetaID_;
		boost::optional<IntColumn::ValueType>	DesignerID_;
		boost::optional<IntColumn::ValueType>	SellerID_;
		boost::optional<IntColumn::ValueType>	PreSurveyorID_;
		boost::optional<IntColumn::ValueType>	ReSurveyorID_;
		boost::optional<BoolColumn::ValueType>	IsNew_;
		boost::optional<BoolColumn::ValueType>	IsShare_;
		boost::optional<BoolColumn::ValueType>	IsUpload_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	PreSurveyTime_;
		boost::optional<DateTimeColumn::ValueType>	ReSurveyTime_;
		boost::optional<DateTimeColumn::ValueType>	OrderTime_;
		boost::optional<DateTimeColumn::ValueType>	DeliveryTime_;
		boost::optional<DateTimeColumn::ValueType>	InstallTime_;
		boost::optional<StringColumn::ValueType>	GeoCode_;
		boost::optional<StringColumn::ValueType>	OrderTitle_;
		boost::optional<StringColumn::ValueType>	CustomerName_;
		boost::optional<StringColumn::ValueType>	CustomerTel_;
		boost::optional<StringColumn::ValueType>	CustomerPostcode_;
		boost::optional<StringColumn::ValueType>	CustomerQQ_;
		boost::optional<StringColumn::ValueType>	CustomerEmail_;
		boost::optional<StringColumn::ValueType>	InstallAddress_;
		boost::optional<StringColumn::ValueType>	OrderMemo_;
		boost::optional<StringColumn::ValueType>	AttachFilePath_;
	};

public:
	GC_OrderDataInfoImp(const StringType& alias);
	GC_OrderDataInfoImp(GC_OrderDataInfoImp&& rhs);
	GC_OrderDataInfoImp(const GC_OrderDataInfoImp& rhs);

public:

	GC_OrderDataInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	OrderID;
	IntColumn	OrderCate;
	IntColumn	FactoryID;
	IntColumn	ShopID;
	IntColumn	MaxMetaID;
	IntColumn	DesignerID;
	IntColumn	SellerID;
	IntColumn	PreSurveyorID;
	IntColumn	ReSurveyorID;
	BoolColumn	IsNew;
	BoolColumn	IsShare;
	BoolColumn	IsUpload;
	DateTimeColumn	CreateTime;
	DateTimeColumn	PreSurveyTime;
	DateTimeColumn	ReSurveyTime;
	DateTimeColumn	OrderTime;
	DateTimeColumn	DeliveryTime;
	DateTimeColumn	InstallTime;
	StringColumn	GeoCode;
	StringColumn	OrderTitle;
	StringColumn	CustomerName;
	StringColumn	CustomerTel;
	StringColumn	CustomerPostcode;
	StringColumn	CustomerQQ;
	StringColumn	CustomerEmail;
	StringColumn	InstallAddress;
	StringColumn	OrderMemo;
	StringColumn	AttachFilePath;
};
extern	GC_OrderDataInfoImp	GC_OrderDataInfo;
typedef	GC_OrderDataInfoImp::SData	GC_OrderDataInfo_Data;

class GC_PackInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPackID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FittingPackID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	IsSeparate_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_PackInfoImp(const StringType& alias);
	GC_PackInfoImp(GC_PackInfoImp&& rhs);
	GC_PackInfoImp(const GC_PackInfoImp& rhs);

public:

	GC_PackInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPackID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	FittingPackID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	IsSeparate;
	IntColumn	UseCount;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_PackInfoImp	GC_PackInfo;
typedef	GC_PackInfoImp::SData	GC_PackInfo_Data;

class GC_PointInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	TransObjID_;
		boost::optional<IntColumn::ValueType>	TransObjType_;
		boost::optional<IntColumn::ValueType>	PointIndex_;
		boost::optional<FloatColumn::ValueType>	CoordX_;
		boost::optional<FloatColumn::ValueType>	CoordY_;
		boost::optional<FloatColumn::ValueType>	CoordZ_;
	};

public:
	GC_PointInfoImp(const StringType& alias);
	GC_PointInfoImp(GC_PointInfoImp&& rhs);
	GC_PointInfoImp(const GC_PointInfoImp& rhs);

public:

	GC_PointInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPlanID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	TransObjID;
	IntColumn	TransObjType;
	IntColumn	PointIndex;
	FloatColumn	CoordX;
	FloatColumn	CoordY;
	FloatColumn	CoordZ;
};
extern	GC_PointInfoImp	GC_PointInfo;
typedef	GC_PointInfoImp::SData	GC_PointInfo_Data;

class GC_PrintElementInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPrintElementID_;
		boost::optional<IntColumn::ValueType>	DesignPrintGroupID_;
		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	ObjType_;
		boost::optional<IntColumn::ValueType>	ObjID_;
		boost::optional<IntColumn::ValueType>	PrintGroupID_;
		boost::optional<IntColumn::ValueType>	ViewType_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_PrintElementInfoImp(const StringType& alias);
	GC_PrintElementInfoImp(GC_PrintElementInfoImp&& rhs);
	GC_PrintElementInfoImp(const GC_PrintElementInfoImp& rhs);

public:

	GC_PrintElementInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPrintElementID;
	IntColumn	DesignPrintGroupID;
	IntColumn	DesignPrintID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	ObjType;
	IntColumn	ObjID;
	IntColumn	PrintGroupID;
	IntColumn	ViewType;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_PrintElementInfoImp	GC_PrintElementInfo;
typedef	GC_PrintElementInfoImp::SData	GC_PrintElementInfo_Data;

class GC_PrintGroupInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPrintGroupID_;
		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	PrintID_;
		boost::optional<IntColumn::ValueType>	PrintGroupID_;
		boost::optional<BoolColumn::ValueType>	ManyViewPort_;
		boost::optional<IntColumn::ValueType>	FrameStyle_;
		boost::optional<IntColumn::ValueType>	FrameColorR_;
		boost::optional<IntColumn::ValueType>	FrameColorG_;
		boost::optional<IntColumn::ValueType>	FrameColorB_;
		boost::optional<IntColumn::ValueType>	FrameColorA_;
		boost::optional<FloatColumn::ValueType>	FrameWidth_;
		boost::optional<FloatColumn::ValueType>	LeftX_;
		boost::optional<FloatColumn::ValueType>	RightY_;
		boost::optional<FloatColumn::ValueType>	ScaleX_;
		boost::optional<FloatColumn::ValueType>	ScaleY_;
		boost::optional<FloatColumn::ValueType>	ScaleOffsetX_;
		boost::optional<FloatColumn::ValueType>	ScaleOffsetY_;
		boost::optional<FloatColumn::ValueType>	ScaleFactor_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_PrintGroupInfoImp(const StringType& alias);
	GC_PrintGroupInfoImp(GC_PrintGroupInfoImp&& rhs);
	GC_PrintGroupInfoImp(const GC_PrintGroupInfoImp& rhs);

public:

	GC_PrintGroupInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPrintGroupID;
	IntColumn	DesignPrintID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	PrintID;
	IntColumn	PrintGroupID;
	BoolColumn	ManyViewPort;
	IntColumn	FrameStyle;
	IntColumn	FrameColorR;
	IntColumn	FrameColorG;
	IntColumn	FrameColorB;
	IntColumn	FrameColorA;
	FloatColumn	FrameWidth;
	FloatColumn	LeftX;
	FloatColumn	RightY;
	FloatColumn	ScaleX;
	FloatColumn	ScaleY;
	FloatColumn	ScaleOffsetX;
	FloatColumn	ScaleOffsetY;
	FloatColumn	ScaleFactor;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_PrintGroupInfoImp	GC_PrintGroupInfo;
typedef	GC_PrintGroupInfoImp::SData	GC_PrintGroupInfo_Data;

class GC_PrintInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	PrintID_;
		boost::optional<IntColumn::ValueType>	PageBorderStyle_;
		boost::optional<BigintColumn::ValueType>	PageBorderColor_;
		boost::optional<FloatColumn::ValueType>	PageBorderWidth_;
		boost::optional<FloatColumn::ValueType>	ShaderPicTopX_;
		boost::optional<FloatColumn::ValueType>	ShaderPicTopY_;
		boost::optional<FloatColumn::ValueType>	ShaderPicHeight_;
		boost::optional<FloatColumn::ValueType>	ShaderPicWidth_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	PrintName_;
		boost::optional<StringColumn::ValueType>	ShaderPicPath_;
	};

public:
	GC_PrintInfoImp(const StringType& alias);
	GC_PrintInfoImp(GC_PrintInfoImp&& rhs);
	GC_PrintInfoImp(const GC_PrintInfoImp& rhs);

public:

	GC_PrintInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPrintID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	PrintID;
	IntColumn	PageBorderStyle;
	BigintColumn	PageBorderColor;
	FloatColumn	PageBorderWidth;
	FloatColumn	ShaderPicTopX;
	FloatColumn	ShaderPicTopY;
	FloatColumn	ShaderPicHeight;
	FloatColumn	ShaderPicWidth;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	PrintName;
	StringColumn	ShaderPicPath;
};
extern	GC_PrintInfoImp	GC_PrintInfo;
typedef	GC_PrintInfoImp::SData	GC_PrintInfo_Data;

class GC_PrintTableInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPrintTableID_;
		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	TableSign_;
		boost::optional<IntColumn::ValueType>	WhichLine_;
		boost::optional<IntColumn::ValueType>	Align_;
		boost::optional<IntColumn::ValueType>	LogoSign_;
		boost::optional<IntColumn::ValueType>	TextPos_;
		boost::optional<BoolColumn::ValueType>	SetLine_;
		boost::optional<BoolColumn::ValueType>	HasLogo_;
		boost::optional<BoolColumn::ValueType>	IsSelected_;
		boost::optional<BoolColumn::ValueType>	LineUp_;
		boost::optional<BoolColumn::ValueType>	LineDown_;
		boost::optional<BoolColumn::ValueType>	LineLeft_;
		boost::optional<BoolColumn::ValueType>	LineRight_;
		boost::optional<IntColumn::ValueType>	LineUpSign_;
		boost::optional<IntColumn::ValueType>	LineDownSign_;
		boost::optional<IntColumn::ValueType>	LineLeftSign_;
		boost::optional<IntColumn::ValueType>	LineRightSign_;
		boost::optional<FloatColumn::ValueType>	LineWidth_;
		boost::optional<FloatColumn::ValueType>	LeftTopX_;
		boost::optional<FloatColumn::ValueType>	LeftTopY_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	LineUpWidth_;
		boost::optional<FloatColumn::ValueType>	LineDownWidth_;
		boost::optional<FloatColumn::ValueType>	LineRightWidth_;
		boost::optional<FloatColumn::ValueType>	LineLeftWidth_;
		boost::optional<StringColumn::ValueType>	FaceName_;
		boost::optional<StringColumn::ValueType>	LogoPath_;
		boost::optional<StringColumn::ValueType>	SerialPath_;
		boost::optional<StringColumn::ValueType>	TextValue_;
	};

public:
	GC_PrintTableInfoImp(const StringType& alias);
	GC_PrintTableInfoImp(GC_PrintTableInfoImp&& rhs);
	GC_PrintTableInfoImp(const GC_PrintTableInfoImp& rhs);

public:

	GC_PrintTableInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPrintTableID;
	IntColumn	DesignPrintID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	TableSign;
	IntColumn	WhichLine;
	IntColumn	Align;
	IntColumn	LogoSign;
	IntColumn	TextPos;
	BoolColumn	SetLine;
	BoolColumn	HasLogo;
	BoolColumn	IsSelected;
	BoolColumn	LineUp;
	BoolColumn	LineDown;
	BoolColumn	LineLeft;
	BoolColumn	LineRight;
	IntColumn	LineUpSign;
	IntColumn	LineDownSign;
	IntColumn	LineLeftSign;
	IntColumn	LineRightSign;
	FloatColumn	LineWidth;
	FloatColumn	LeftTopX;
	FloatColumn	LeftTopY;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	LineUpWidth;
	FloatColumn	LineDownWidth;
	FloatColumn	LineRightWidth;
	FloatColumn	LineLeftWidth;
	StringColumn	FaceName;
	StringColumn	LogoPath;
	StringColumn	SerialPath;
	StringColumn	TextValue;
};
extern	GC_PrintTableInfoImp	GC_PrintTableInfo;
typedef	GC_PrintTableInfoImp::SData	GC_PrintTableInfo_Data;

class GC_PrintTableRowColInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPrintTableRowColID_;
		boost::optional<IntColumn::ValueType>	DesignPrintTableRowID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	TableSign_;
		boost::optional<IntColumn::ValueType>	RowNumber_;
		boost::optional<IntColumn::ValueType>	ColNumber_;
		boost::optional<IntColumn::ValueType>	WhichLine_;
		boost::optional<IntColumn::ValueType>	Align_;
		boost::optional<IntColumn::ValueType>	LogoSign_;
		boost::optional<IntColumn::ValueType>	TextPos_;
		boost::optional<BoolColumn::ValueType>	SetLine_;
		boost::optional<BoolColumn::ValueType>	HasLogo_;
		boost::optional<BoolColumn::ValueType>	IsSelected_;
		boost::optional<BoolColumn::ValueType>	LineUp_;
		boost::optional<BoolColumn::ValueType>	LineDown_;
		boost::optional<BoolColumn::ValueType>	LineLeft_;
		boost::optional<BoolColumn::ValueType>	LineRight_;
		boost::optional<IntColumn::ValueType>	LineUpSign_;
		boost::optional<IntColumn::ValueType>	LineDownSign_;
		boost::optional<IntColumn::ValueType>	LineLeftSign_;
		boost::optional<IntColumn::ValueType>	LineRightSign_;
		boost::optional<FloatColumn::ValueType>	LineWidth_;
		boost::optional<FloatColumn::ValueType>	LeftTopX_;
		boost::optional<FloatColumn::ValueType>	LeftTopY_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	LineUpWidth_;
		boost::optional<FloatColumn::ValueType>	LineDownWidth_;
		boost::optional<FloatColumn::ValueType>	LineRightWidth_;
		boost::optional<FloatColumn::ValueType>	LineLeftWidth_;
		boost::optional<StringColumn::ValueType>	FaceName_;
		boost::optional<StringColumn::ValueType>	LogoPath_;
		boost::optional<StringColumn::ValueType>	SerialPath_;
		boost::optional<StringColumn::ValueType>	TextValue_;
	};

public:
	GC_PrintTableRowColInfoImp(const StringType& alias);
	GC_PrintTableRowColInfoImp(GC_PrintTableRowColInfoImp&& rhs);
	GC_PrintTableRowColInfoImp(const GC_PrintTableRowColInfoImp& rhs);

public:

	GC_PrintTableRowColInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPrintTableRowColID;
	IntColumn	DesignPrintTableRowID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	TableSign;
	IntColumn	RowNumber;
	IntColumn	ColNumber;
	IntColumn	WhichLine;
	IntColumn	Align;
	IntColumn	LogoSign;
	IntColumn	TextPos;
	BoolColumn	SetLine;
	BoolColumn	HasLogo;
	BoolColumn	IsSelected;
	BoolColumn	LineUp;
	BoolColumn	LineDown;
	BoolColumn	LineLeft;
	BoolColumn	LineRight;
	IntColumn	LineUpSign;
	IntColumn	LineDownSign;
	IntColumn	LineLeftSign;
	IntColumn	LineRightSign;
	FloatColumn	LineWidth;
	FloatColumn	LeftTopX;
	FloatColumn	LeftTopY;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	LineUpWidth;
	FloatColumn	LineDownWidth;
	FloatColumn	LineRightWidth;
	FloatColumn	LineLeftWidth;
	StringColumn	FaceName;
	StringColumn	LogoPath;
	StringColumn	SerialPath;
	StringColumn	TextValue;
};
extern	GC_PrintTableRowColInfoImp	GC_PrintTableRowColInfo;
typedef	GC_PrintTableRowColInfoImp::SData	GC_PrintTableRowColInfo_Data;

class GC_PrintTableRowInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignPrintTableRowID_;
		boost::optional<IntColumn::ValueType>	DesignPrintTableID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	TableSign_;
		boost::optional<IntColumn::ValueType>	RowNumber_;
		boost::optional<IntColumn::ValueType>	WhichLine_;
		boost::optional<IntColumn::ValueType>	Align_;
		boost::optional<IntColumn::ValueType>	LogoSign_;
		boost::optional<IntColumn::ValueType>	TextPos_;
		boost::optional<BoolColumn::ValueType>	SetLine_;
		boost::optional<BoolColumn::ValueType>	HasLogo_;
		boost::optional<BoolColumn::ValueType>	IsSelected_;
		boost::optional<BoolColumn::ValueType>	LineUp_;
		boost::optional<BoolColumn::ValueType>	LineDown_;
		boost::optional<BoolColumn::ValueType>	LineLeft_;
		boost::optional<BoolColumn::ValueType>	LineRight_;
		boost::optional<IntColumn::ValueType>	LineUpSign_;
		boost::optional<IntColumn::ValueType>	LineDownSign_;
		boost::optional<IntColumn::ValueType>	LineLeftSign_;
		boost::optional<IntColumn::ValueType>	LineRightSign_;
		boost::optional<FloatColumn::ValueType>	LineWidth_;
		boost::optional<FloatColumn::ValueType>	LeftTopX_;
		boost::optional<FloatColumn::ValueType>	LeftTopY_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	LineUpWidth_;
		boost::optional<FloatColumn::ValueType>	LineDownWidth_;
		boost::optional<FloatColumn::ValueType>	LineRightWidth_;
		boost::optional<FloatColumn::ValueType>	LineLeftWidth_;
		boost::optional<StringColumn::ValueType>	FaceName_;
		boost::optional<StringColumn::ValueType>	LogoPath_;
		boost::optional<StringColumn::ValueType>	SerialPath_;
		boost::optional<StringColumn::ValueType>	TextValue_;
	};

public:
	GC_PrintTableRowInfoImp(const StringType& alias);
	GC_PrintTableRowInfoImp(GC_PrintTableRowInfoImp&& rhs);
	GC_PrintTableRowInfoImp(const GC_PrintTableRowInfoImp& rhs);

public:

	GC_PrintTableRowInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignPrintTableRowID;
	IntColumn	DesignPrintTableID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	TableSign;
	IntColumn	RowNumber;
	IntColumn	WhichLine;
	IntColumn	Align;
	IntColumn	LogoSign;
	IntColumn	TextPos;
	BoolColumn	SetLine;
	BoolColumn	HasLogo;
	BoolColumn	IsSelected;
	BoolColumn	LineUp;
	BoolColumn	LineDown;
	BoolColumn	LineLeft;
	BoolColumn	LineRight;
	IntColumn	LineUpSign;
	IntColumn	LineDownSign;
	IntColumn	LineLeftSign;
	IntColumn	LineRightSign;
	FloatColumn	LineWidth;
	FloatColumn	LeftTopX;
	FloatColumn	LeftTopY;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	LineUpWidth;
	FloatColumn	LineDownWidth;
	FloatColumn	LineRightWidth;
	FloatColumn	LineLeftWidth;
	StringColumn	FaceName;
	StringColumn	LogoPath;
	StringColumn	SerialPath;
	StringColumn	TextValue;
};
extern	GC_PrintTableRowInfoImp	GC_PrintTableRowInfo;
typedef	GC_PrintTableRowInfoImp::SData	GC_PrintTableRowInfo_Data;

class GC_ProductInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignProductID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	ProductID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<IntColumn::ValueType>	DockObjType_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	YPos_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_ProductInfoImp(const StringType& alias);
	GC_ProductInfoImp(GC_ProductInfoImp&& rhs);
	GC_ProductInfoImp(const GC_ProductInfoImp& rhs);

public:

	GC_ProductInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignProductID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	ProductID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	DockObjID;
	IntColumn	DockObjType;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	YPos;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_ProductInfoImp	GC_ProductInfo;
typedef	GC_ProductInfoImp::SData	GC_ProductInfo_Data;

class GC_RemarkInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignRemarkID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	PrintID_;
		boost::optional<IntColumn::ValueType>	ViewType_;
		boost::optional<BigintColumn::ValueType>	BGColor_;
		boost::optional<BigintColumn::ValueType>	ForeColor_;
		boost::optional<IntColumn::ValueType>	FontSize_;
		boost::optional<IntColumn::ValueType>	FontStyle_;
		boost::optional<IntColumn::ValueType>	LineSpace_;
		boost::optional<IntColumn::ValueType>	ArrowID_;
		boost::optional<IntColumn::ValueType>	ArrowStyle_;
		boost::optional<IntColumn::ValueType>	FrameStyle_;
		boost::optional<BigintColumn::ValueType>	FrameColor_;
		boost::optional<IntColumn::ValueType>	DirectLine_;
		boost::optional<IntColumn::ValueType>	DirectStyle_;
		boost::optional<IntColumn::ValueType>	DirectLineStyle_;
		boost::optional<IntColumn::ValueType>	CommentFrameStyle_;
		boost::optional<BoolColumn::ValueType>	IsSingleMode_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<BoolColumn::ValueType>	StrickOut_;
		boost::optional<BoolColumn::ValueType>	UnderLine_;
		boost::optional<BoolColumn::ValueType>	Italic_;
		boost::optional<BoolColumn::ValueType>	Bold_;
		boost::optional<FloatColumn::ValueType>	FrameWidth_;
		boost::optional<FloatColumn::ValueType>	ArrowX_;
		boost::optional<FloatColumn::ValueType>	ArrowY_;
		boost::optional<FloatColumn::ValueType>	StartX_;
		boost::optional<FloatColumn::ValueType>	StartY_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	FaceName_;
		boost::optional<StringColumn::ValueType>	RemarkText_;
	};

public:
	GC_RemarkInfoImp(const StringType& alias);
	GC_RemarkInfoImp(GC_RemarkInfoImp&& rhs);
	GC_RemarkInfoImp(const GC_RemarkInfoImp& rhs);

public:

	GC_RemarkInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignRemarkID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	DesignPrintID;
	IntColumn	PrintID;
	IntColumn	ViewType;
	BigintColumn	BGColor;
	BigintColumn	ForeColor;
	IntColumn	FontSize;
	IntColumn	FontStyle;
	IntColumn	LineSpace;
	IntColumn	ArrowID;
	IntColumn	ArrowStyle;
	IntColumn	FrameStyle;
	BigintColumn	FrameColor;
	IntColumn	DirectLine;
	IntColumn	DirectStyle;
	IntColumn	DirectLineStyle;
	IntColumn	CommentFrameStyle;
	BoolColumn	IsSingleMode;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	BoolColumn	StrickOut;
	BoolColumn	UnderLine;
	BoolColumn	Italic;
	BoolColumn	Bold;
	FloatColumn	FrameWidth;
	FloatColumn	ArrowX;
	FloatColumn	ArrowY;
	FloatColumn	StartX;
	FloatColumn	StartY;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	FaceName;
	StringColumn	RemarkText;
};
extern	GC_RemarkInfoImp	GC_RemarkInfo;
typedef	GC_RemarkInfoImp::SData	GC_RemarkInfo_Data;

class GC_ShapeInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignShapeID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPrintID_;
		boost::optional<IntColumn::ValueType>	PrintID_;
		boost::optional<IntColumn::ValueType>	ViewType_;
		boost::optional<IntColumn::ValueType>	ShapeType_;
		boost::optional<IntColumn::ValueType>	LineWidth_;
		boost::optional<IntColumn::ValueType>	LineStyle_;
		boost::optional<FloatColumn::ValueType>	StartX_;
		boost::optional<FloatColumn::ValueType>	StartY_;
		boost::optional<FloatColumn::ValueType>	StopX_;
		boost::optional<FloatColumn::ValueType>	StopY_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	AttachFilePath_;
	};

public:
	GC_ShapeInfoImp(const StringType& alias);
	GC_ShapeInfoImp(GC_ShapeInfoImp&& rhs);
	GC_ShapeInfoImp(const GC_ShapeInfoImp& rhs);

public:

	GC_ShapeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignShapeID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	DesignPrintID;
	IntColumn	PrintID;
	IntColumn	ViewType;
	IntColumn	ShapeType;
	IntColumn	LineWidth;
	IntColumn	LineStyle;
	FloatColumn	StartX;
	FloatColumn	StartY;
	FloatColumn	StopX;
	FloatColumn	StopY;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	AttachFilePath;
};
extern	GC_ShapeInfoImp	GC_ShapeInfo;
typedef	GC_ShapeInfoImp::SData	GC_ShapeInfo_Data;

class GC_SkinInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignSkinID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DecorID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	GroundLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_SkinInfoImp(const StringType& alias);
	GC_SkinInfoImp(GC_SkinInfoImp&& rhs);
	GC_SkinInfoImp(const GC_SkinInfoImp& rhs);

public:

	GC_SkinInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignSkinID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	DecorID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	GTypeID;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	GroundLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_SkinInfoImp	GC_SkinInfo;
typedef	GC_SkinInfoImp::SData	GC_SkinInfo_Data;

class GC_TableInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignTableID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	TableID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	TableIndex_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	YPos_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_TableInfoImp(const StringType& alias);
	GC_TableInfoImp(GC_TableInfoImp&& rhs);
	GC_TableInfoImp(const GC_TableInfoImp& rhs);

public:

	GC_TableInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignTableID;
	IntColumn	OrderCate;
	IntColumn	DesignPlanID;
	BigintColumn	OrderID;
	IntColumn	TableID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	TableIndex;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	FloatColumn	ZLen;
	FloatColumn	YPos;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_TableInfoImp	GC_TableInfo;
typedef	GC_TableInfoImp::SData	GC_TableInfo_Data;

class GC_TablePartInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignTablePartID_;
		boost::optional<IntColumn::ValueType>	DesignTableID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DecorLineID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	TableSideIndex_;
		boost::optional<BoolColumn::ValueType>	IsUserSetYLen_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	DefaultYLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_TablePartInfoImp(const StringType& alias);
	GC_TablePartInfoImp(GC_TablePartInfoImp&& rhs);
	GC_TablePartInfoImp(const GC_TablePartInfoImp& rhs);

public:

	GC_TablePartInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignTablePartID;
	IntColumn	DesignTableID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DecorLineID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	TableSideIndex;
	BoolColumn	IsUserSetYLen;
	IntColumn	GTypeID;
	IntColumn	MaterialID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	IntColumn	DefaultYLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_TablePartInfoImp	GC_TablePartInfo;
typedef	GC_TablePartInfoImp::SData	GC_TablePartInfo_Data;

class GC_TableSideInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignTableSideID_;
		boost::optional<IntColumn::ValueType>	DesignTableID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	TableTopID_;
		boost::optional<IntColumn::ValueType>	TableTopSideID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	TableSideIndex_;
		boost::optional<BoolColumn::ValueType>	IsUseTableMat_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_TableSideInfoImp(const StringType& alias);
	GC_TableSideInfoImp(GC_TableSideInfoImp&& rhs);
	GC_TableSideInfoImp(const GC_TableSideInfoImp& rhs);

public:

	GC_TableSideInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignTableSideID;
	IntColumn	DesignTableID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	TableTopID;
	IntColumn	TableTopSideID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	TableSideIndex;
	BoolColumn	IsUseTableMat;
	IntColumn	MaterialID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_TableSideInfoImp	GC_TableSideInfo;
typedef	GC_TableSideInfoImp::SData	GC_TableSideInfo_Data;

class GC_WallDecorInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignWallDecorID_;
		boost::optional<IntColumn::ValueType>	DesignWallID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	DecorID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	IsModelRevers_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	OffsetXLen_;
		boost::optional<FloatColumn::ValueType>	OffsetYLen_;
		boost::optional<FloatColumn::ValueType>	OffsetZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_WallDecorInfoImp(const StringType& alias);
	GC_WallDecorInfoImp(GC_WallDecorInfoImp&& rhs);
	GC_WallDecorInfoImp(const GC_WallDecorInfoImp& rhs);

public:

	GC_WallDecorInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignWallDecorID;
	IntColumn	DesignWallID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	DesignPlanID;
	IntColumn	DecorID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	IsModelRevers;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	OffsetXLen;
	FloatColumn	OffsetYLen;
	FloatColumn	OffsetZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_WallDecorInfoImp	GC_WallDecorInfo;
typedef	GC_WallDecorInfoImp::SData	GC_WallDecorInfo_Data;

class GC_WallInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DesignWallID_;
		boost::optional<IntColumn::ValueType>	DesignPlanID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	WallType_;
		boost::optional<IntColumn::ValueType>	WallIndex_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	DockObjID_;
		boost::optional<FloatColumn::ValueType>	DockXPos_;
		boost::optional<FloatColumn::ValueType>	DockYPos_;
		boost::optional<IntColumn::ValueType>	DecorID_;
		boost::optional<IntColumn::ValueType>	GridStyle_;
		boost::optional<BoolColumn::ValueType>	HasMark_;
		boost::optional<BoolColumn::ValueType>	IsVisible_;
		boost::optional<BoolColumn::ValueType>	IsLocked_;
		boost::optional<FloatColumn::ValueType>	StartX_;
		boost::optional<FloatColumn::ValueType>	StartY_;
		boost::optional<FloatColumn::ValueType>	EndX_;
		boost::optional<FloatColumn::ValueType>	EndY_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	GroundLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	GC_WallInfoImp(const StringType& alias);
	GC_WallInfoImp(GC_WallInfoImp&& rhs);
	GC_WallInfoImp(const GC_WallInfoImp& rhs);

public:

	GC_WallInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DesignWallID;
	IntColumn	DesignPlanID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	WallType;
	IntColumn	WallIndex;
	IntColumn	GroupID;
	IntColumn	DockObjID;
	FloatColumn	DockXPos;
	FloatColumn	DockYPos;
	IntColumn	DecorID;
	IntColumn	GridStyle;
	BoolColumn	HasMark;
	BoolColumn	IsVisible;
	BoolColumn	IsLocked;
	FloatColumn	StartX;
	FloatColumn	StartY;
	FloatColumn	EndX;
	FloatColumn	EndY;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	GroundLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	GC_WallInfoImp	GC_WallInfo;
typedef	GC_WallInfoImp::SData	GC_WallInfo_Data;

}
