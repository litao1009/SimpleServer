#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class SJ_CabBoardGapInfoImp : public Table
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
	SJ_CabBoardGapInfoImp(const StringType& alias);
	SJ_CabBoardGapInfoImp(SJ_CabBoardGapInfoImp&& rhs);
	SJ_CabBoardGapInfoImp(const SJ_CabBoardGapInfoImp& rhs);

public:

	SJ_CabBoardGapInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabBoardGapInfoImp	SJ_CabBoardGapInfo;
typedef	SJ_CabBoardGapInfoImp::SData	SJ_CabBoardGapInfo_Data;

class SJ_CabBoardInfoImp : public Table
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
	SJ_CabBoardInfoImp(const StringType& alias);
	SJ_CabBoardInfoImp(SJ_CabBoardInfoImp&& rhs);
	SJ_CabBoardInfoImp(const SJ_CabBoardInfoImp& rhs);

public:

	SJ_CabBoardInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabBoardInfoImp	SJ_CabBoardInfo;
typedef	SJ_CabBoardInfoImp::SData	SJ_CabBoardInfo_Data;

class SJ_CabBoardSealInfoImp : public Table
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
	SJ_CabBoardSealInfoImp(const StringType& alias);
	SJ_CabBoardSealInfoImp(SJ_CabBoardSealInfoImp&& rhs);
	SJ_CabBoardSealInfoImp(const SJ_CabBoardSealInfoImp& rhs);

public:

	SJ_CabBoardSealInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabBoardSealInfoImp	SJ_CabBoardSealInfo;
typedef	SJ_CabBoardSealInfoImp::SData	SJ_CabBoardSealInfo_Data;

class SJ_CabDoorBoardGapInfoImp : public Table
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
	SJ_CabDoorBoardGapInfoImp(const StringType& alias);
	SJ_CabDoorBoardGapInfoImp(SJ_CabDoorBoardGapInfoImp&& rhs);
	SJ_CabDoorBoardGapInfoImp(const SJ_CabDoorBoardGapInfoImp& rhs);

public:

	SJ_CabDoorBoardGapInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorBoardGapInfoImp	SJ_CabDoorBoardGapInfo;
typedef	SJ_CabDoorBoardGapInfoImp::SData	SJ_CabDoorBoardGapInfo_Data;

class SJ_CabDoorBoardInfoImp : public Table
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
	SJ_CabDoorBoardInfoImp(const StringType& alias);
	SJ_CabDoorBoardInfoImp(SJ_CabDoorBoardInfoImp&& rhs);
	SJ_CabDoorBoardInfoImp(const SJ_CabDoorBoardInfoImp& rhs);

public:

	SJ_CabDoorBoardInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorBoardInfoImp	SJ_CabDoorBoardInfo;
typedef	SJ_CabDoorBoardInfoImp::SData	SJ_CabDoorBoardInfo_Data;

class SJ_CabDoorBoardSealInfoImp : public Table
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
	SJ_CabDoorBoardSealInfoImp(const StringType& alias);
	SJ_CabDoorBoardSealInfoImp(SJ_CabDoorBoardSealInfoImp&& rhs);
	SJ_CabDoorBoardSealInfoImp(const SJ_CabDoorBoardSealInfoImp& rhs);

public:

	SJ_CabDoorBoardSealInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorBoardSealInfoImp	SJ_CabDoorBoardSealInfo;
typedef	SJ_CabDoorBoardSealInfoImp::SData	SJ_CabDoorBoardSealInfo_Data;

class SJ_CabDoorHWFInfoImp : public Table
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
	SJ_CabDoorHWFInfoImp(const StringType& alias);
	SJ_CabDoorHWFInfoImp(SJ_CabDoorHWFInfoImp&& rhs);
	SJ_CabDoorHWFInfoImp(const SJ_CabDoorHWFInfoImp& rhs);

public:

	SJ_CabDoorHWFInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorHWFInfoImp	SJ_CabDoorHWFInfo;
typedef	SJ_CabDoorHWFInfoImp::SData	SJ_CabDoorHWFInfo_Data;

class SJ_CabDoorHandleInfoImp : public Table
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
	SJ_CabDoorHandleInfoImp(const StringType& alias);
	SJ_CabDoorHandleInfoImp(SJ_CabDoorHandleInfoImp&& rhs);
	SJ_CabDoorHandleInfoImp(const SJ_CabDoorHandleInfoImp& rhs);

public:

	SJ_CabDoorHandleInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorHandleInfoImp	SJ_CabDoorHandleInfo;
typedef	SJ_CabDoorHandleInfoImp::SData	SJ_CabDoorHandleInfo_Data;

class SJ_CabDoorInfoImp : public Table
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
	SJ_CabDoorInfoImp(const StringType& alias);
	SJ_CabDoorInfoImp(SJ_CabDoorInfoImp&& rhs);
	SJ_CabDoorInfoImp(const SJ_CabDoorInfoImp& rhs);

public:

	SJ_CabDoorInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorInfoImp	SJ_CabDoorInfo;
typedef	SJ_CabDoorInfoImp::SData	SJ_CabDoorInfo_Data;

class SJ_CabDoorRegionInfoImp : public Table
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
	SJ_CabDoorRegionInfoImp(const StringType& alias);
	SJ_CabDoorRegionInfoImp(SJ_CabDoorRegionInfoImp&& rhs);
	SJ_CabDoorRegionInfoImp(const SJ_CabDoorRegionInfoImp& rhs);

public:

	SJ_CabDoorRegionInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorRegionInfoImp	SJ_CabDoorRegionInfo;
typedef	SJ_CabDoorRegionInfoImp::SData	SJ_CabDoorRegionInfo_Data;

class SJ_CabDoorSlideInfoImp : public Table
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
	SJ_CabDoorSlideInfoImp(const StringType& alias);
	SJ_CabDoorSlideInfoImp(SJ_CabDoorSlideInfoImp&& rhs);
	SJ_CabDoorSlideInfoImp(const SJ_CabDoorSlideInfoImp& rhs);

public:

	SJ_CabDoorSlideInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorSlideInfoImp	SJ_CabDoorSlideInfo;
typedef	SJ_CabDoorSlideInfoImp::SData	SJ_CabDoorSlideInfo_Data;

class SJ_CabDoorSystemInfoImp : public Table
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
	SJ_CabDoorSystemInfoImp(const StringType& alias);
	SJ_CabDoorSystemInfoImp(SJ_CabDoorSystemInfoImp&& rhs);
	SJ_CabDoorSystemInfoImp(const SJ_CabDoorSystemInfoImp& rhs);

public:

	SJ_CabDoorSystemInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabDoorSystemInfoImp	SJ_CabDoorSystemInfo;
typedef	SJ_CabDoorSystemInfoImp::SData	SJ_CabDoorSystemInfo_Data;

class SJ_CabFNFHWFInfoImp : public Table
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
	SJ_CabFNFHWFInfoImp(const StringType& alias);
	SJ_CabFNFHWFInfoImp(SJ_CabFNFHWFInfoImp&& rhs);
	SJ_CabFNFHWFInfoImp(const SJ_CabFNFHWFInfoImp& rhs);

public:

	SJ_CabFNFHWFInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabFNFHWFInfoImp	SJ_CabFNFHWFInfo;
typedef	SJ_CabFNFHWFInfoImp::SData	SJ_CabFNFHWFInfo_Data;

class SJ_CabFNFHoleInfoImp : public Table
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
	SJ_CabFNFHoleInfoImp(const StringType& alias);
	SJ_CabFNFHoleInfoImp(SJ_CabFNFHoleInfoImp&& rhs);
	SJ_CabFNFHoleInfoImp(const SJ_CabFNFHoleInfoImp& rhs);

public:

	SJ_CabFNFHoleInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabFNFHoleInfoImp	SJ_CabFNFHoleInfo;
typedef	SJ_CabFNFHoleInfoImp::SData	SJ_CabFNFHoleInfo_Data;

class SJ_CabFNFInfoImp : public Table
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
	SJ_CabFNFInfoImp(const StringType& alias);
	SJ_CabFNFInfoImp(SJ_CabFNFInfoImp&& rhs);
	SJ_CabFNFInfoImp(const SJ_CabFNFInfoImp& rhs);

public:

	SJ_CabFNFInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabFNFInfoImp	SJ_CabFNFInfo;
typedef	SJ_CabFNFInfoImp::SData	SJ_CabFNFInfo_Data;

class SJ_CabFNFPartInfoImp : public Table
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
	SJ_CabFNFPartInfoImp(const StringType& alias);
	SJ_CabFNFPartInfoImp(SJ_CabFNFPartInfoImp&& rhs);
	SJ_CabFNFPartInfoImp(const SJ_CabFNFPartInfoImp& rhs);

public:

	SJ_CabFNFPartInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabFNFPartInfoImp	SJ_CabFNFPartInfo;
typedef	SJ_CabFNFPartInfoImp::SData	SJ_CabFNFPartInfo_Data;

class SJ_CabFNFPartSealInfoImp : public Table
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
	SJ_CabFNFPartSealInfoImp(const StringType& alias);
	SJ_CabFNFPartSealInfoImp(SJ_CabFNFPartSealInfoImp&& rhs);
	SJ_CabFNFPartSealInfoImp(const SJ_CabFNFPartSealInfoImp& rhs);

public:

	SJ_CabFNFPartSealInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabFNFPartSealInfoImp	SJ_CabFNFPartSealInfo;
typedef	SJ_CabFNFPartSealInfoImp::SData	SJ_CabFNFPartSealInfo_Data;

class SJ_CabInfoImp : public Table
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
	SJ_CabInfoImp(const StringType& alias);
	SJ_CabInfoImp(SJ_CabInfoImp&& rhs);
	SJ_CabInfoImp(const SJ_CabInfoImp& rhs);

public:

	SJ_CabInfoImp	operator() (const StringType& alias);
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
extern	SJ_CabInfoImp	SJ_CabInfo;
typedef	SJ_CabInfoImp::SData	SJ_CabInfo_Data;

class SJ_DecorBoardInfoImp : public Table
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
	SJ_DecorBoardInfoImp(const StringType& alias);
	SJ_DecorBoardInfoImp(SJ_DecorBoardInfoImp&& rhs);
	SJ_DecorBoardInfoImp(const SJ_DecorBoardInfoImp& rhs);

public:

	SJ_DecorBoardInfoImp	operator() (const StringType& alias);
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
extern	SJ_DecorBoardInfoImp	SJ_DecorBoardInfo;
typedef	SJ_DecorBoardInfoImp::SData	SJ_DecorBoardInfo_Data;

class SJ_DecorBoardUnitInfoImp : public Table
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
	SJ_DecorBoardUnitInfoImp(const StringType& alias);
	SJ_DecorBoardUnitInfoImp(SJ_DecorBoardUnitInfoImp&& rhs);
	SJ_DecorBoardUnitInfoImp(const SJ_DecorBoardUnitInfoImp& rhs);

public:

	SJ_DecorBoardUnitInfoImp	operator() (const StringType& alias);
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
extern	SJ_DecorBoardUnitInfoImp	SJ_DecorBoardUnitInfo;
typedef	SJ_DecorBoardUnitInfoImp::SData	SJ_DecorBoardUnitInfo_Data;

class SJ_DecorBoardUnitSealInfoImp : public Table
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
	SJ_DecorBoardUnitSealInfoImp(const StringType& alias);
	SJ_DecorBoardUnitSealInfoImp(SJ_DecorBoardUnitSealInfoImp&& rhs);
	SJ_DecorBoardUnitSealInfoImp(const SJ_DecorBoardUnitSealInfoImp& rhs);

public:

	SJ_DecorBoardUnitSealInfoImp	operator() (const StringType& alias);
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
extern	SJ_DecorBoardUnitSealInfoImp	SJ_DecorBoardUnitSealInfo;
typedef	SJ_DecorBoardUnitSealInfoImp::SData	SJ_DecorBoardUnitSealInfo_Data;

class SJ_DecorInfoImp : public Table
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
	SJ_DecorInfoImp(const StringType& alias);
	SJ_DecorInfoImp(SJ_DecorInfoImp&& rhs);
	SJ_DecorInfoImp(const SJ_DecorInfoImp& rhs);

public:

	SJ_DecorInfoImp	operator() (const StringType& alias);
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
extern	SJ_DecorInfoImp	SJ_DecorInfo;
typedef	SJ_DecorInfoImp::SData	SJ_DecorInfo_Data;

class SJ_DecorLineInfoImp : public Table
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
	SJ_DecorLineInfoImp(const StringType& alias);
	SJ_DecorLineInfoImp(SJ_DecorLineInfoImp&& rhs);
	SJ_DecorLineInfoImp(const SJ_DecorLineInfoImp& rhs);

public:

	SJ_DecorLineInfoImp	operator() (const StringType& alias);
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
extern	SJ_DecorLineInfoImp	SJ_DecorLineInfo;
typedef	SJ_DecorLineInfoImp::SData	SJ_DecorLineInfo_Data;

class SJ_DesignPlanInfoImp : public Table
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
	SJ_DesignPlanInfoImp(const StringType& alias);
	SJ_DesignPlanInfoImp(SJ_DesignPlanInfoImp&& rhs);
	SJ_DesignPlanInfoImp(const SJ_DesignPlanInfoImp& rhs);

public:

	SJ_DesignPlanInfoImp	operator() (const StringType& alias);
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
extern	SJ_DesignPlanInfoImp	SJ_DesignPlanInfo;
typedef	SJ_DesignPlanInfoImp::SData	SJ_DesignPlanInfo_Data;

class SJ_FittingInfoImp : public Table
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
	SJ_FittingInfoImp(const StringType& alias);
	SJ_FittingInfoImp(SJ_FittingInfoImp&& rhs);
	SJ_FittingInfoImp(const SJ_FittingInfoImp& rhs);

public:

	SJ_FittingInfoImp	operator() (const StringType& alias);
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
extern	SJ_FittingInfoImp	SJ_FittingInfo;
typedef	SJ_FittingInfoImp::SData	SJ_FittingInfo_Data;

class SJ_HWFInfoImp : public Table
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
	SJ_HWFInfoImp(const StringType& alias);
	SJ_HWFInfoImp(SJ_HWFInfoImp&& rhs);
	SJ_HWFInfoImp(const SJ_HWFInfoImp& rhs);

public:

	SJ_HWFInfoImp	operator() (const StringType& alias);
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
extern	SJ_HWFInfoImp	SJ_HWFInfo;
typedef	SJ_HWFInfoImp::SData	SJ_HWFInfo_Data;

class SJ_MarkInfoImp : public Table
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
	SJ_MarkInfoImp(const StringType& alias);
	SJ_MarkInfoImp(SJ_MarkInfoImp&& rhs);
	SJ_MarkInfoImp(const SJ_MarkInfoImp& rhs);

public:

	SJ_MarkInfoImp	operator() (const StringType& alias);
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
extern	SJ_MarkInfoImp	SJ_MarkInfo;
typedef	SJ_MarkInfoImp::SData	SJ_MarkInfo_Data;

class SJ_MatrixInfoImp : public Table
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
	SJ_MatrixInfoImp(const StringType& alias);
	SJ_MatrixInfoImp(SJ_MatrixInfoImp&& rhs);
	SJ_MatrixInfoImp(const SJ_MatrixInfoImp& rhs);

public:

	SJ_MatrixInfoImp	operator() (const StringType& alias);
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
extern	SJ_MatrixInfoImp	SJ_MatrixInfo;
typedef	SJ_MatrixInfoImp::SData	SJ_MatrixInfo_Data;

class SJ_OrderAddedInfoImp : public Table
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
	SJ_OrderAddedInfoImp(const StringType& alias);
	SJ_OrderAddedInfoImp(SJ_OrderAddedInfoImp&& rhs);
	SJ_OrderAddedInfoImp(const SJ_OrderAddedInfoImp& rhs);

public:

	SJ_OrderAddedInfoImp	operator() (const StringType& alias);
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
extern	SJ_OrderAddedInfoImp	SJ_OrderAddedInfo;
typedef	SJ_OrderAddedInfoImp::SData	SJ_OrderAddedInfo_Data;

class SJ_OrderDataInfoImp : public Table
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
	SJ_OrderDataInfoImp(const StringType& alias);
	SJ_OrderDataInfoImp(SJ_OrderDataInfoImp&& rhs);
	SJ_OrderDataInfoImp(const SJ_OrderDataInfoImp& rhs);

public:

	SJ_OrderDataInfoImp	operator() (const StringType& alias);
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
extern	SJ_OrderDataInfoImp	SJ_OrderDataInfo;
typedef	SJ_OrderDataInfoImp::SData	SJ_OrderDataInfo_Data;

class SJ_PackInfoImp : public Table
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
	SJ_PackInfoImp(const StringType& alias);
	SJ_PackInfoImp(SJ_PackInfoImp&& rhs);
	SJ_PackInfoImp(const SJ_PackInfoImp& rhs);

public:

	SJ_PackInfoImp	operator() (const StringType& alias);
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
extern	SJ_PackInfoImp	SJ_PackInfo;
typedef	SJ_PackInfoImp::SData	SJ_PackInfo_Data;

class SJ_PointInfoImp : public Table
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
	SJ_PointInfoImp(const StringType& alias);
	SJ_PointInfoImp(SJ_PointInfoImp&& rhs);
	SJ_PointInfoImp(const SJ_PointInfoImp& rhs);

public:

	SJ_PointInfoImp	operator() (const StringType& alias);
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
extern	SJ_PointInfoImp	SJ_PointInfo;
typedef	SJ_PointInfoImp::SData	SJ_PointInfo_Data;

class SJ_PrintElementInfoImp : public Table
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
	SJ_PrintElementInfoImp(const StringType& alias);
	SJ_PrintElementInfoImp(SJ_PrintElementInfoImp&& rhs);
	SJ_PrintElementInfoImp(const SJ_PrintElementInfoImp& rhs);

public:

	SJ_PrintElementInfoImp	operator() (const StringType& alias);
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
extern	SJ_PrintElementInfoImp	SJ_PrintElementInfo;
typedef	SJ_PrintElementInfoImp::SData	SJ_PrintElementInfo_Data;

class SJ_PrintGroupInfoImp : public Table
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
	SJ_PrintGroupInfoImp(const StringType& alias);
	SJ_PrintGroupInfoImp(SJ_PrintGroupInfoImp&& rhs);
	SJ_PrintGroupInfoImp(const SJ_PrintGroupInfoImp& rhs);

public:

	SJ_PrintGroupInfoImp	operator() (const StringType& alias);
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
extern	SJ_PrintGroupInfoImp	SJ_PrintGroupInfo;
typedef	SJ_PrintGroupInfoImp::SData	SJ_PrintGroupInfo_Data;

class SJ_PrintInfoImp : public Table
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
	SJ_PrintInfoImp(const StringType& alias);
	SJ_PrintInfoImp(SJ_PrintInfoImp&& rhs);
	SJ_PrintInfoImp(const SJ_PrintInfoImp& rhs);

public:

	SJ_PrintInfoImp	operator() (const StringType& alias);
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
extern	SJ_PrintInfoImp	SJ_PrintInfo;
typedef	SJ_PrintInfoImp::SData	SJ_PrintInfo_Data;

class SJ_PrintTableInfoImp : public Table
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
	SJ_PrintTableInfoImp(const StringType& alias);
	SJ_PrintTableInfoImp(SJ_PrintTableInfoImp&& rhs);
	SJ_PrintTableInfoImp(const SJ_PrintTableInfoImp& rhs);

public:

	SJ_PrintTableInfoImp	operator() (const StringType& alias);
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
extern	SJ_PrintTableInfoImp	SJ_PrintTableInfo;
typedef	SJ_PrintTableInfoImp::SData	SJ_PrintTableInfo_Data;

class SJ_PrintTableRowColInfoImp : public Table
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
	SJ_PrintTableRowColInfoImp(const StringType& alias);
	SJ_PrintTableRowColInfoImp(SJ_PrintTableRowColInfoImp&& rhs);
	SJ_PrintTableRowColInfoImp(const SJ_PrintTableRowColInfoImp& rhs);

public:

	SJ_PrintTableRowColInfoImp	operator() (const StringType& alias);
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
extern	SJ_PrintTableRowColInfoImp	SJ_PrintTableRowColInfo;
typedef	SJ_PrintTableRowColInfoImp::SData	SJ_PrintTableRowColInfo_Data;

class SJ_PrintTableRowInfoImp : public Table
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
	SJ_PrintTableRowInfoImp(const StringType& alias);
	SJ_PrintTableRowInfoImp(SJ_PrintTableRowInfoImp&& rhs);
	SJ_PrintTableRowInfoImp(const SJ_PrintTableRowInfoImp& rhs);

public:

	SJ_PrintTableRowInfoImp	operator() (const StringType& alias);
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
extern	SJ_PrintTableRowInfoImp	SJ_PrintTableRowInfo;
typedef	SJ_PrintTableRowInfoImp::SData	SJ_PrintTableRowInfo_Data;

class SJ_ProductInfoImp : public Table
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
	SJ_ProductInfoImp(const StringType& alias);
	SJ_ProductInfoImp(SJ_ProductInfoImp&& rhs);
	SJ_ProductInfoImp(const SJ_ProductInfoImp& rhs);

public:

	SJ_ProductInfoImp	operator() (const StringType& alias);
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
extern	SJ_ProductInfoImp	SJ_ProductInfo;
typedef	SJ_ProductInfoImp::SData	SJ_ProductInfo_Data;

class SJ_RemarkInfoImp : public Table
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
	SJ_RemarkInfoImp(const StringType& alias);
	SJ_RemarkInfoImp(SJ_RemarkInfoImp&& rhs);
	SJ_RemarkInfoImp(const SJ_RemarkInfoImp& rhs);

public:

	SJ_RemarkInfoImp	operator() (const StringType& alias);
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
extern	SJ_RemarkInfoImp	SJ_RemarkInfo;
typedef	SJ_RemarkInfoImp::SData	SJ_RemarkInfo_Data;

class SJ_ShapeInfoImp : public Table
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
	SJ_ShapeInfoImp(const StringType& alias);
	SJ_ShapeInfoImp(SJ_ShapeInfoImp&& rhs);
	SJ_ShapeInfoImp(const SJ_ShapeInfoImp& rhs);

public:

	SJ_ShapeInfoImp	operator() (const StringType& alias);
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
extern	SJ_ShapeInfoImp	SJ_ShapeInfo;
typedef	SJ_ShapeInfoImp::SData	SJ_ShapeInfo_Data;

class SJ_SkinInfoImp : public Table
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
	SJ_SkinInfoImp(const StringType& alias);
	SJ_SkinInfoImp(SJ_SkinInfoImp&& rhs);
	SJ_SkinInfoImp(const SJ_SkinInfoImp& rhs);

public:

	SJ_SkinInfoImp	operator() (const StringType& alias);
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
extern	SJ_SkinInfoImp	SJ_SkinInfo;
typedef	SJ_SkinInfoImp::SData	SJ_SkinInfo_Data;

class SJ_TableInfoImp : public Table
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
	SJ_TableInfoImp(const StringType& alias);
	SJ_TableInfoImp(SJ_TableInfoImp&& rhs);
	SJ_TableInfoImp(const SJ_TableInfoImp& rhs);

public:

	SJ_TableInfoImp	operator() (const StringType& alias);
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
extern	SJ_TableInfoImp	SJ_TableInfo;
typedef	SJ_TableInfoImp::SData	SJ_TableInfo_Data;

class SJ_TablePartInfoImp : public Table
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
	SJ_TablePartInfoImp(const StringType& alias);
	SJ_TablePartInfoImp(SJ_TablePartInfoImp&& rhs);
	SJ_TablePartInfoImp(const SJ_TablePartInfoImp& rhs);

public:

	SJ_TablePartInfoImp	operator() (const StringType& alias);
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
extern	SJ_TablePartInfoImp	SJ_TablePartInfo;
typedef	SJ_TablePartInfoImp::SData	SJ_TablePartInfo_Data;

class SJ_TableSideInfoImp : public Table
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
	SJ_TableSideInfoImp(const StringType& alias);
	SJ_TableSideInfoImp(SJ_TableSideInfoImp&& rhs);
	SJ_TableSideInfoImp(const SJ_TableSideInfoImp& rhs);

public:

	SJ_TableSideInfoImp	operator() (const StringType& alias);
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
extern	SJ_TableSideInfoImp	SJ_TableSideInfo;
typedef	SJ_TableSideInfoImp::SData	SJ_TableSideInfo_Data;

class SJ_WallDecorInfoImp : public Table
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
	SJ_WallDecorInfoImp(const StringType& alias);
	SJ_WallDecorInfoImp(SJ_WallDecorInfoImp&& rhs);
	SJ_WallDecorInfoImp(const SJ_WallDecorInfoImp& rhs);

public:

	SJ_WallDecorInfoImp	operator() (const StringType& alias);
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
extern	SJ_WallDecorInfoImp	SJ_WallDecorInfo;
typedef	SJ_WallDecorInfoImp::SData	SJ_WallDecorInfo_Data;

class SJ_WallInfoImp : public Table
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
	SJ_WallInfoImp(const StringType& alias);
	SJ_WallInfoImp(SJ_WallInfoImp&& rhs);
	SJ_WallInfoImp(const SJ_WallInfoImp& rhs);

public:

	SJ_WallInfoImp	operator() (const StringType& alias);
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
extern	SJ_WallInfoImp	SJ_WallInfo;
typedef	SJ_WallInfoImp::SData	SJ_WallInfo_Data;

}
