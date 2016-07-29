#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class DS_CabBoardGapInfoImp : public Table
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
	DS_CabBoardGapInfoImp(const StringType& alias);
	DS_CabBoardGapInfoImp(DS_CabBoardGapInfoImp&& rhs);
	DS_CabBoardGapInfoImp(const DS_CabBoardGapInfoImp& rhs);

public:

	DS_CabBoardGapInfoImp	operator() (const StringType& alias);
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
extern	DS_CabBoardGapInfoImp	DS_CabBoardGapInfo;
typedef	DS_CabBoardGapInfoImp::SData	DS_CabBoardGapInfo_Data;

class DS_CabBoardInfoImp : public Table
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
	DS_CabBoardInfoImp(const StringType& alias);
	DS_CabBoardInfoImp(DS_CabBoardInfoImp&& rhs);
	DS_CabBoardInfoImp(const DS_CabBoardInfoImp& rhs);

public:

	DS_CabBoardInfoImp	operator() (const StringType& alias);
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
extern	DS_CabBoardInfoImp	DS_CabBoardInfo;
typedef	DS_CabBoardInfoImp::SData	DS_CabBoardInfo_Data;

class DS_CabBoardSealInfoImp : public Table
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
	DS_CabBoardSealInfoImp(const StringType& alias);
	DS_CabBoardSealInfoImp(DS_CabBoardSealInfoImp&& rhs);
	DS_CabBoardSealInfoImp(const DS_CabBoardSealInfoImp& rhs);

public:

	DS_CabBoardSealInfoImp	operator() (const StringType& alias);
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
extern	DS_CabBoardSealInfoImp	DS_CabBoardSealInfo;
typedef	DS_CabBoardSealInfoImp::SData	DS_CabBoardSealInfo_Data;

class DS_CabDoorBoardGapInfoImp : public Table
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
	DS_CabDoorBoardGapInfoImp(const StringType& alias);
	DS_CabDoorBoardGapInfoImp(DS_CabDoorBoardGapInfoImp&& rhs);
	DS_CabDoorBoardGapInfoImp(const DS_CabDoorBoardGapInfoImp& rhs);

public:

	DS_CabDoorBoardGapInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorBoardGapInfoImp	DS_CabDoorBoardGapInfo;
typedef	DS_CabDoorBoardGapInfoImp::SData	DS_CabDoorBoardGapInfo_Data;

class DS_CabDoorBoardInfoImp : public Table
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
	DS_CabDoorBoardInfoImp(const StringType& alias);
	DS_CabDoorBoardInfoImp(DS_CabDoorBoardInfoImp&& rhs);
	DS_CabDoorBoardInfoImp(const DS_CabDoorBoardInfoImp& rhs);

public:

	DS_CabDoorBoardInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorBoardInfoImp	DS_CabDoorBoardInfo;
typedef	DS_CabDoorBoardInfoImp::SData	DS_CabDoorBoardInfo_Data;

class DS_CabDoorBoardSealInfoImp : public Table
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
	DS_CabDoorBoardSealInfoImp(const StringType& alias);
	DS_CabDoorBoardSealInfoImp(DS_CabDoorBoardSealInfoImp&& rhs);
	DS_CabDoorBoardSealInfoImp(const DS_CabDoorBoardSealInfoImp& rhs);

public:

	DS_CabDoorBoardSealInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorBoardSealInfoImp	DS_CabDoorBoardSealInfo;
typedef	DS_CabDoorBoardSealInfoImp::SData	DS_CabDoorBoardSealInfo_Data;

class DS_CabDoorHWFInfoImp : public Table
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
	DS_CabDoorHWFInfoImp(const StringType& alias);
	DS_CabDoorHWFInfoImp(DS_CabDoorHWFInfoImp&& rhs);
	DS_CabDoorHWFInfoImp(const DS_CabDoorHWFInfoImp& rhs);

public:

	DS_CabDoorHWFInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorHWFInfoImp	DS_CabDoorHWFInfo;
typedef	DS_CabDoorHWFInfoImp::SData	DS_CabDoorHWFInfo_Data;

class DS_CabDoorHandleInfoImp : public Table
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
	DS_CabDoorHandleInfoImp(const StringType& alias);
	DS_CabDoorHandleInfoImp(DS_CabDoorHandleInfoImp&& rhs);
	DS_CabDoorHandleInfoImp(const DS_CabDoorHandleInfoImp& rhs);

public:

	DS_CabDoorHandleInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorHandleInfoImp	DS_CabDoorHandleInfo;
typedef	DS_CabDoorHandleInfoImp::SData	DS_CabDoorHandleInfo_Data;

class DS_CabDoorInfoImp : public Table
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
	DS_CabDoorInfoImp(const StringType& alias);
	DS_CabDoorInfoImp(DS_CabDoorInfoImp&& rhs);
	DS_CabDoorInfoImp(const DS_CabDoorInfoImp& rhs);

public:

	DS_CabDoorInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorInfoImp	DS_CabDoorInfo;
typedef	DS_CabDoorInfoImp::SData	DS_CabDoorInfo_Data;

class DS_CabDoorRegionInfoImp : public Table
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
	DS_CabDoorRegionInfoImp(const StringType& alias);
	DS_CabDoorRegionInfoImp(DS_CabDoorRegionInfoImp&& rhs);
	DS_CabDoorRegionInfoImp(const DS_CabDoorRegionInfoImp& rhs);

public:

	DS_CabDoorRegionInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorRegionInfoImp	DS_CabDoorRegionInfo;
typedef	DS_CabDoorRegionInfoImp::SData	DS_CabDoorRegionInfo_Data;

class DS_CabDoorSlideInfoImp : public Table
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
	DS_CabDoorSlideInfoImp(const StringType& alias);
	DS_CabDoorSlideInfoImp(DS_CabDoorSlideInfoImp&& rhs);
	DS_CabDoorSlideInfoImp(const DS_CabDoorSlideInfoImp& rhs);

public:

	DS_CabDoorSlideInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorSlideInfoImp	DS_CabDoorSlideInfo;
typedef	DS_CabDoorSlideInfoImp::SData	DS_CabDoorSlideInfo_Data;

class DS_CabDoorSystemInfoImp : public Table
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
	DS_CabDoorSystemInfoImp(const StringType& alias);
	DS_CabDoorSystemInfoImp(DS_CabDoorSystemInfoImp&& rhs);
	DS_CabDoorSystemInfoImp(const DS_CabDoorSystemInfoImp& rhs);

public:

	DS_CabDoorSystemInfoImp	operator() (const StringType& alias);
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
extern	DS_CabDoorSystemInfoImp	DS_CabDoorSystemInfo;
typedef	DS_CabDoorSystemInfoImp::SData	DS_CabDoorSystemInfo_Data;

class DS_CabFNFHWFInfoImp : public Table
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
	DS_CabFNFHWFInfoImp(const StringType& alias);
	DS_CabFNFHWFInfoImp(DS_CabFNFHWFInfoImp&& rhs);
	DS_CabFNFHWFInfoImp(const DS_CabFNFHWFInfoImp& rhs);

public:

	DS_CabFNFHWFInfoImp	operator() (const StringType& alias);
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
extern	DS_CabFNFHWFInfoImp	DS_CabFNFHWFInfo;
typedef	DS_CabFNFHWFInfoImp::SData	DS_CabFNFHWFInfo_Data;

class DS_CabFNFHoleInfoImp : public Table
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
	DS_CabFNFHoleInfoImp(const StringType& alias);
	DS_CabFNFHoleInfoImp(DS_CabFNFHoleInfoImp&& rhs);
	DS_CabFNFHoleInfoImp(const DS_CabFNFHoleInfoImp& rhs);

public:

	DS_CabFNFHoleInfoImp	operator() (const StringType& alias);
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
extern	DS_CabFNFHoleInfoImp	DS_CabFNFHoleInfo;
typedef	DS_CabFNFHoleInfoImp::SData	DS_CabFNFHoleInfo_Data;

class DS_CabFNFInfoImp : public Table
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
	DS_CabFNFInfoImp(const StringType& alias);
	DS_CabFNFInfoImp(DS_CabFNFInfoImp&& rhs);
	DS_CabFNFInfoImp(const DS_CabFNFInfoImp& rhs);

public:

	DS_CabFNFInfoImp	operator() (const StringType& alias);
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
extern	DS_CabFNFInfoImp	DS_CabFNFInfo;
typedef	DS_CabFNFInfoImp::SData	DS_CabFNFInfo_Data;

class DS_CabFNFPartInfoImp : public Table
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
	DS_CabFNFPartInfoImp(const StringType& alias);
	DS_CabFNFPartInfoImp(DS_CabFNFPartInfoImp&& rhs);
	DS_CabFNFPartInfoImp(const DS_CabFNFPartInfoImp& rhs);

public:

	DS_CabFNFPartInfoImp	operator() (const StringType& alias);
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
extern	DS_CabFNFPartInfoImp	DS_CabFNFPartInfo;
typedef	DS_CabFNFPartInfoImp::SData	DS_CabFNFPartInfo_Data;

class DS_CabFNFPartSealInfoImp : public Table
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
	DS_CabFNFPartSealInfoImp(const StringType& alias);
	DS_CabFNFPartSealInfoImp(DS_CabFNFPartSealInfoImp&& rhs);
	DS_CabFNFPartSealInfoImp(const DS_CabFNFPartSealInfoImp& rhs);

public:

	DS_CabFNFPartSealInfoImp	operator() (const StringType& alias);
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
extern	DS_CabFNFPartSealInfoImp	DS_CabFNFPartSealInfo;
typedef	DS_CabFNFPartSealInfoImp::SData	DS_CabFNFPartSealInfo_Data;

class DS_CabInfoImp : public Table
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
	DS_CabInfoImp(const StringType& alias);
	DS_CabInfoImp(DS_CabInfoImp&& rhs);
	DS_CabInfoImp(const DS_CabInfoImp& rhs);

public:

	DS_CabInfoImp	operator() (const StringType& alias);
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
extern	DS_CabInfoImp	DS_CabInfo;
typedef	DS_CabInfoImp::SData	DS_CabInfo_Data;

class DS_DecorBoardInfoImp : public Table
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
	DS_DecorBoardInfoImp(const StringType& alias);
	DS_DecorBoardInfoImp(DS_DecorBoardInfoImp&& rhs);
	DS_DecorBoardInfoImp(const DS_DecorBoardInfoImp& rhs);

public:

	DS_DecorBoardInfoImp	operator() (const StringType& alias);
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
extern	DS_DecorBoardInfoImp	DS_DecorBoardInfo;
typedef	DS_DecorBoardInfoImp::SData	DS_DecorBoardInfo_Data;

class DS_DecorBoardUnitInfoImp : public Table
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
	DS_DecorBoardUnitInfoImp(const StringType& alias);
	DS_DecorBoardUnitInfoImp(DS_DecorBoardUnitInfoImp&& rhs);
	DS_DecorBoardUnitInfoImp(const DS_DecorBoardUnitInfoImp& rhs);

public:

	DS_DecorBoardUnitInfoImp	operator() (const StringType& alias);
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
extern	DS_DecorBoardUnitInfoImp	DS_DecorBoardUnitInfo;
typedef	DS_DecorBoardUnitInfoImp::SData	DS_DecorBoardUnitInfo_Data;

class DS_DecorBoardUnitSealInfoImp : public Table
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
	DS_DecorBoardUnitSealInfoImp(const StringType& alias);
	DS_DecorBoardUnitSealInfoImp(DS_DecorBoardUnitSealInfoImp&& rhs);
	DS_DecorBoardUnitSealInfoImp(const DS_DecorBoardUnitSealInfoImp& rhs);

public:

	DS_DecorBoardUnitSealInfoImp	operator() (const StringType& alias);
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
extern	DS_DecorBoardUnitSealInfoImp	DS_DecorBoardUnitSealInfo;
typedef	DS_DecorBoardUnitSealInfoImp::SData	DS_DecorBoardUnitSealInfo_Data;

class DS_DecorInfoImp : public Table
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
	DS_DecorInfoImp(const StringType& alias);
	DS_DecorInfoImp(DS_DecorInfoImp&& rhs);
	DS_DecorInfoImp(const DS_DecorInfoImp& rhs);

public:

	DS_DecorInfoImp	operator() (const StringType& alias);
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
extern	DS_DecorInfoImp	DS_DecorInfo;
typedef	DS_DecorInfoImp::SData	DS_DecorInfo_Data;

class DS_DecorLineInfoImp : public Table
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
	DS_DecorLineInfoImp(const StringType& alias);
	DS_DecorLineInfoImp(DS_DecorLineInfoImp&& rhs);
	DS_DecorLineInfoImp(const DS_DecorLineInfoImp& rhs);

public:

	DS_DecorLineInfoImp	operator() (const StringType& alias);
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
extern	DS_DecorLineInfoImp	DS_DecorLineInfo;
typedef	DS_DecorLineInfoImp::SData	DS_DecorLineInfo_Data;

class DS_DesignPlanInfoImp : public Table
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
	DS_DesignPlanInfoImp(const StringType& alias);
	DS_DesignPlanInfoImp(DS_DesignPlanInfoImp&& rhs);
	DS_DesignPlanInfoImp(const DS_DesignPlanInfoImp& rhs);

public:

	DS_DesignPlanInfoImp	operator() (const StringType& alias);
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
extern	DS_DesignPlanInfoImp	DS_DesignPlanInfo;
typedef	DS_DesignPlanInfoImp::SData	DS_DesignPlanInfo_Data;

class DS_FittingInfoImp : public Table
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
	DS_FittingInfoImp(const StringType& alias);
	DS_FittingInfoImp(DS_FittingInfoImp&& rhs);
	DS_FittingInfoImp(const DS_FittingInfoImp& rhs);

public:

	DS_FittingInfoImp	operator() (const StringType& alias);
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
extern	DS_FittingInfoImp	DS_FittingInfo;
typedef	DS_FittingInfoImp::SData	DS_FittingInfo_Data;

class DS_HWFInfoImp : public Table
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
	DS_HWFInfoImp(const StringType& alias);
	DS_HWFInfoImp(DS_HWFInfoImp&& rhs);
	DS_HWFInfoImp(const DS_HWFInfoImp& rhs);

public:

	DS_HWFInfoImp	operator() (const StringType& alias);
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
extern	DS_HWFInfoImp	DS_HWFInfo;
typedef	DS_HWFInfoImp::SData	DS_HWFInfo_Data;

class DS_MarkInfoImp : public Table
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
	DS_MarkInfoImp(const StringType& alias);
	DS_MarkInfoImp(DS_MarkInfoImp&& rhs);
	DS_MarkInfoImp(const DS_MarkInfoImp& rhs);

public:

	DS_MarkInfoImp	operator() (const StringType& alias);
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
extern	DS_MarkInfoImp	DS_MarkInfo;
typedef	DS_MarkInfoImp::SData	DS_MarkInfo_Data;

class DS_MatrixInfoImp : public Table
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
	DS_MatrixInfoImp(const StringType& alias);
	DS_MatrixInfoImp(DS_MatrixInfoImp&& rhs);
	DS_MatrixInfoImp(const DS_MatrixInfoImp& rhs);

public:

	DS_MatrixInfoImp	operator() (const StringType& alias);
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
extern	DS_MatrixInfoImp	DS_MatrixInfo;
typedef	DS_MatrixInfoImp::SData	DS_MatrixInfo_Data;

class DS_OrderAddedInfoImp : public Table
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
	DS_OrderAddedInfoImp(const StringType& alias);
	DS_OrderAddedInfoImp(DS_OrderAddedInfoImp&& rhs);
	DS_OrderAddedInfoImp(const DS_OrderAddedInfoImp& rhs);

public:

	DS_OrderAddedInfoImp	operator() (const StringType& alias);
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
extern	DS_OrderAddedInfoImp	DS_OrderAddedInfo;
typedef	DS_OrderAddedInfoImp::SData	DS_OrderAddedInfo_Data;

class DS_OrderDataInfoImp : public Table
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
	DS_OrderDataInfoImp(const StringType& alias);
	DS_OrderDataInfoImp(DS_OrderDataInfoImp&& rhs);
	DS_OrderDataInfoImp(const DS_OrderDataInfoImp& rhs);

public:

	DS_OrderDataInfoImp	operator() (const StringType& alias);
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
extern	DS_OrderDataInfoImp	DS_OrderDataInfo;
typedef	DS_OrderDataInfoImp::SData	DS_OrderDataInfo_Data;

class DS_PackInfoImp : public Table
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
	DS_PackInfoImp(const StringType& alias);
	DS_PackInfoImp(DS_PackInfoImp&& rhs);
	DS_PackInfoImp(const DS_PackInfoImp& rhs);

public:

	DS_PackInfoImp	operator() (const StringType& alias);
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
extern	DS_PackInfoImp	DS_PackInfo;
typedef	DS_PackInfoImp::SData	DS_PackInfo_Data;

class DS_PointInfoImp : public Table
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
	DS_PointInfoImp(const StringType& alias);
	DS_PointInfoImp(DS_PointInfoImp&& rhs);
	DS_PointInfoImp(const DS_PointInfoImp& rhs);

public:

	DS_PointInfoImp	operator() (const StringType& alias);
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
extern	DS_PointInfoImp	DS_PointInfo;
typedef	DS_PointInfoImp::SData	DS_PointInfo_Data;

class DS_PrintElementInfoImp : public Table
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
	DS_PrintElementInfoImp(const StringType& alias);
	DS_PrintElementInfoImp(DS_PrintElementInfoImp&& rhs);
	DS_PrintElementInfoImp(const DS_PrintElementInfoImp& rhs);

public:

	DS_PrintElementInfoImp	operator() (const StringType& alias);
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
extern	DS_PrintElementInfoImp	DS_PrintElementInfo;
typedef	DS_PrintElementInfoImp::SData	DS_PrintElementInfo_Data;

class DS_PrintGroupInfoImp : public Table
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
	DS_PrintGroupInfoImp(const StringType& alias);
	DS_PrintGroupInfoImp(DS_PrintGroupInfoImp&& rhs);
	DS_PrintGroupInfoImp(const DS_PrintGroupInfoImp& rhs);

public:

	DS_PrintGroupInfoImp	operator() (const StringType& alias);
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
extern	DS_PrintGroupInfoImp	DS_PrintGroupInfo;
typedef	DS_PrintGroupInfoImp::SData	DS_PrintGroupInfo_Data;

class DS_PrintInfoImp : public Table
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
	DS_PrintInfoImp(const StringType& alias);
	DS_PrintInfoImp(DS_PrintInfoImp&& rhs);
	DS_PrintInfoImp(const DS_PrintInfoImp& rhs);

public:

	DS_PrintInfoImp	operator() (const StringType& alias);
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
extern	DS_PrintInfoImp	DS_PrintInfo;
typedef	DS_PrintInfoImp::SData	DS_PrintInfo_Data;

class DS_PrintTableInfoImp : public Table
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
	DS_PrintTableInfoImp(const StringType& alias);
	DS_PrintTableInfoImp(DS_PrintTableInfoImp&& rhs);
	DS_PrintTableInfoImp(const DS_PrintTableInfoImp& rhs);

public:

	DS_PrintTableInfoImp	operator() (const StringType& alias);
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
extern	DS_PrintTableInfoImp	DS_PrintTableInfo;
typedef	DS_PrintTableInfoImp::SData	DS_PrintTableInfo_Data;

class DS_PrintTableRowColInfoImp : public Table
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
	DS_PrintTableRowColInfoImp(const StringType& alias);
	DS_PrintTableRowColInfoImp(DS_PrintTableRowColInfoImp&& rhs);
	DS_PrintTableRowColInfoImp(const DS_PrintTableRowColInfoImp& rhs);

public:

	DS_PrintTableRowColInfoImp	operator() (const StringType& alias);
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
extern	DS_PrintTableRowColInfoImp	DS_PrintTableRowColInfo;
typedef	DS_PrintTableRowColInfoImp::SData	DS_PrintTableRowColInfo_Data;

class DS_PrintTableRowInfoImp : public Table
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
	DS_PrintTableRowInfoImp(const StringType& alias);
	DS_PrintTableRowInfoImp(DS_PrintTableRowInfoImp&& rhs);
	DS_PrintTableRowInfoImp(const DS_PrintTableRowInfoImp& rhs);

public:

	DS_PrintTableRowInfoImp	operator() (const StringType& alias);
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
extern	DS_PrintTableRowInfoImp	DS_PrintTableRowInfo;
typedef	DS_PrintTableRowInfoImp::SData	DS_PrintTableRowInfo_Data;

class DS_ProductInfoImp : public Table
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
	DS_ProductInfoImp(const StringType& alias);
	DS_ProductInfoImp(DS_ProductInfoImp&& rhs);
	DS_ProductInfoImp(const DS_ProductInfoImp& rhs);

public:

	DS_ProductInfoImp	operator() (const StringType& alias);
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
extern	DS_ProductInfoImp	DS_ProductInfo;
typedef	DS_ProductInfoImp::SData	DS_ProductInfo_Data;

class DS_RemarkInfoImp : public Table
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
	DS_RemarkInfoImp(const StringType& alias);
	DS_RemarkInfoImp(DS_RemarkInfoImp&& rhs);
	DS_RemarkInfoImp(const DS_RemarkInfoImp& rhs);

public:

	DS_RemarkInfoImp	operator() (const StringType& alias);
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
extern	DS_RemarkInfoImp	DS_RemarkInfo;
typedef	DS_RemarkInfoImp::SData	DS_RemarkInfo_Data;

class DS_ShapeInfoImp : public Table
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
	DS_ShapeInfoImp(const StringType& alias);
	DS_ShapeInfoImp(DS_ShapeInfoImp&& rhs);
	DS_ShapeInfoImp(const DS_ShapeInfoImp& rhs);

public:

	DS_ShapeInfoImp	operator() (const StringType& alias);
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
extern	DS_ShapeInfoImp	DS_ShapeInfo;
typedef	DS_ShapeInfoImp::SData	DS_ShapeInfo_Data;

class DS_SkinInfoImp : public Table
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
	DS_SkinInfoImp(const StringType& alias);
	DS_SkinInfoImp(DS_SkinInfoImp&& rhs);
	DS_SkinInfoImp(const DS_SkinInfoImp& rhs);

public:

	DS_SkinInfoImp	operator() (const StringType& alias);
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
extern	DS_SkinInfoImp	DS_SkinInfo;
typedef	DS_SkinInfoImp::SData	DS_SkinInfo_Data;

class DS_TableInfoImp : public Table
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
	DS_TableInfoImp(const StringType& alias);
	DS_TableInfoImp(DS_TableInfoImp&& rhs);
	DS_TableInfoImp(const DS_TableInfoImp& rhs);

public:

	DS_TableInfoImp	operator() (const StringType& alias);
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
extern	DS_TableInfoImp	DS_TableInfo;
typedef	DS_TableInfoImp::SData	DS_TableInfo_Data;

class DS_TablePartInfoImp : public Table
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
	DS_TablePartInfoImp(const StringType& alias);
	DS_TablePartInfoImp(DS_TablePartInfoImp&& rhs);
	DS_TablePartInfoImp(const DS_TablePartInfoImp& rhs);

public:

	DS_TablePartInfoImp	operator() (const StringType& alias);
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
extern	DS_TablePartInfoImp	DS_TablePartInfo;
typedef	DS_TablePartInfoImp::SData	DS_TablePartInfo_Data;

class DS_TableSideInfoImp : public Table
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
	DS_TableSideInfoImp(const StringType& alias);
	DS_TableSideInfoImp(DS_TableSideInfoImp&& rhs);
	DS_TableSideInfoImp(const DS_TableSideInfoImp& rhs);

public:

	DS_TableSideInfoImp	operator() (const StringType& alias);
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
extern	DS_TableSideInfoImp	DS_TableSideInfo;
typedef	DS_TableSideInfoImp::SData	DS_TableSideInfo_Data;

class DS_WallDecorInfoImp : public Table
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
	DS_WallDecorInfoImp(const StringType& alias);
	DS_WallDecorInfoImp(DS_WallDecorInfoImp&& rhs);
	DS_WallDecorInfoImp(const DS_WallDecorInfoImp& rhs);

public:

	DS_WallDecorInfoImp	operator() (const StringType& alias);
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
extern	DS_WallDecorInfoImp	DS_WallDecorInfo;
typedef	DS_WallDecorInfoImp::SData	DS_WallDecorInfo_Data;

class DS_WallInfoImp : public Table
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
	DS_WallInfoImp(const StringType& alias);
	DS_WallInfoImp(DS_WallInfoImp&& rhs);
	DS_WallInfoImp(const DS_WallInfoImp& rhs);

public:

	DS_WallInfoImp	operator() (const StringType& alias);
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
extern	DS_WallInfoImp	DS_WallInfo;
typedef	DS_WallInfoImp::SData	DS_WallInfo_Data;

}
