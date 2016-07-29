#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class JK_CabBoardMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BoolColumn::ValueType>	IsUseDefaultSkinDirection_;
	};

public:
	JK_CabBoardMatInfoImp(const StringType& alias);
	JK_CabBoardMatInfoImp(JK_CabBoardMatInfoImp&& rhs);
	JK_CabBoardMatInfoImp(const JK_CabBoardMatInfoImp& rhs);

public:

	JK_CabBoardMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabMatPlanID;
	IntColumn	CabStructBoardID;
	BoolColumn	IsDefault;
	IntColumn	MatID;
	IntColumn	MatGType;
	IntColumn	SealRuleID;
	IntColumn	SkinDirection;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	BoolColumn	IsUseDefaultSkinDirection;
};
extern	JK_CabBoardMatInfoImp	JK_CabBoardMatInfo;
typedef	JK_CabBoardMatInfoImp::SData	JK_CabBoardMatInfo_Data;

class JK_CabBoardMatSkinInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BoolColumn::ValueType>	IsUseDefaultSkinDirection_;
	};

public:
	JK_CabBoardMatSkinInfoImp(const StringType& alias);
	JK_CabBoardMatSkinInfoImp(JK_CabBoardMatSkinInfoImp&& rhs);
	JK_CabBoardMatSkinInfoImp(const JK_CabBoardMatSkinInfoImp& rhs);

public:

	JK_CabBoardMatSkinInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabMatPlanID;
	IntColumn	CabStructBoardID;
	IntColumn	SkinDirection;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	BoolColumn	IsUseDefaultSkinDirection;
};
extern	JK_CabBoardMatSkinInfoImp	JK_CabBoardMatSkinInfo;
typedef	JK_CabBoardMatSkinInfoImp::SData	JK_CabBoardMatSkinInfo_Data;

class JK_CabDesignBoardSealEdgeInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignBoardSealID_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	SealMatID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabDesignBoardSealEdgeInfoImp(const StringType& alias);
	JK_CabDesignBoardSealEdgeInfoImp(JK_CabDesignBoardSealEdgeInfoImp&& rhs);
	JK_CabDesignBoardSealEdgeInfoImp(const JK_CabDesignBoardSealEdgeInfoImp& rhs);

public:

	JK_CabDesignBoardSealEdgeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignBoardSealID;
	IntColumn	SealIndex;
	IntColumn	SealMatID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabDesignBoardSealEdgeInfoImp	JK_CabDesignBoardSealEdgeInfo;
typedef	JK_CabDesignBoardSealEdgeInfoImp::SData	JK_CabDesignBoardSealEdgeInfo_Data;

class JK_CabDesignBoardSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignBoardSealID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabDesignBoardSealInfoImp(const StringType& alias);
	JK_CabDesignBoardSealInfoImp(JK_CabDesignBoardSealInfoImp&& rhs);
	JK_CabDesignBoardSealInfoImp(const JK_CabDesignBoardSealInfoImp& rhs);

public:

	JK_CabDesignBoardSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignBoardSealID;
	IntColumn	CabStructBoardID;
	IntColumn	CabStructID;
	IntColumn	CabDesignID;
	IntColumn	MaterialID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabDesignBoardSealInfoImp	JK_CabDesignBoardSealInfo;
typedef	JK_CabDesignBoardSealInfoImp::SData	JK_CabDesignBoardSealInfo_Data;

class JK_CabDesignDoorRegionHandleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignDoorRegionHandleID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorRegionID_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<IntColumn::ValueType>	HandleID_;
		boost::optional<IntColumn::ValueType>	MatchType_;
	};

public:
	JK_CabDesignDoorRegionHandleInfoImp(const StringType& alias);
	JK_CabDesignDoorRegionHandleInfoImp(JK_CabDesignDoorRegionHandleInfoImp&& rhs);
	JK_CabDesignDoorRegionHandleInfoImp(const JK_CabDesignDoorRegionHandleInfoImp& rhs);

public:

	JK_CabDesignDoorRegionHandleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignDoorRegionHandleID;
	IntColumn	CabDesignDoorRegionID;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	FloatColumn	ArcZ;
	IntColumn	HandleID;
	IntColumn	MatchType;
};
extern	JK_CabDesignDoorRegionHandleInfoImp	JK_CabDesignDoorRegionHandleInfo;
typedef	JK_CabDesignDoorRegionHandleInfoImp::SData	JK_CabDesignDoorRegionHandleInfo_Data;

class JK_CabDesignDoorRegionInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignDoorRegionID_;
		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsGroup_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<BoolColumn::ValueType>	IsCanResize_;
		boost::optional<FloatColumn::ValueType>	MinXLen_;
		boost::optional<FloatColumn::ValueType>	MaxXLen_;
		boost::optional<FloatColumn::ValueType>	XLenStep_;
		boost::optional<FloatColumn::ValueType>	MinYLen_;
		boost::optional<FloatColumn::ValueType>	MaxYLen_;
		boost::optional<FloatColumn::ValueType>	YLenStep_;
		boost::optional<IntColumn::ValueType>	DefaultMatID_;
		boost::optional<IntColumn::ValueType>	DefaultModelID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	DefaultDoorID_;
		boost::optional<IntColumn::ValueType>	CabDesignDoorSystemID_;
		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<BoolColumn::ValueType>	IsUseDefaultSize_;
		boost::optional<BoolColumn::ValueType>	IsUseCutFormula_;
		boost::optional<IntColumn::ValueType>	DoorRegionID_;
	};

public:
	JK_CabDesignDoorRegionInfoImp(const StringType& alias);
	JK_CabDesignDoorRegionInfoImp(JK_CabDesignDoorRegionInfoImp&& rhs);
	JK_CabDesignDoorRegionInfoImp(const JK_CabDesignDoorRegionInfoImp& rhs);

public:

	JK_CabDesignDoorRegionInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignDoorRegionID;
	IntColumn	CabDesignID;
	BoolColumn	IsDel;
	BoolColumn	IsGroup;
	FloatColumn	XLen;
	FloatColumn	YLen;
	BoolColumn	IsCanResize;
	FloatColumn	MinXLen;
	FloatColumn	MaxXLen;
	FloatColumn	XLenStep;
	FloatColumn	MinYLen;
	FloatColumn	MaxYLen;
	FloatColumn	YLenStep;
	IntColumn	DefaultMatID;
	IntColumn	DefaultModelID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	DefaultDoorID;
	IntColumn	CabDesignDoorSystemID;
	IntColumn	DoorSystemID;
	BoolColumn	IsUseDefaultSize;
	BoolColumn	IsUseCutFormula;
	IntColumn	DoorRegionID;
};
extern	JK_CabDesignDoorRegionInfoImp	JK_CabDesignDoorRegionInfo;
typedef	JK_CabDesignDoorRegionInfoImp::SData	JK_CabDesignDoorRegionInfo_Data;

class JK_CabDesignDoorSystemInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignDoorSystemID_;
		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<IntColumn::ValueType>	InstallFaceType_;
		boost::optional<FloatColumn::ValueType>	XAdjustLen_;
		boost::optional<FloatColumn::ValueType>	YAdjustLen_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<BoolColumn::ValueType>	IsCanDel_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
	};

public:
	JK_CabDesignDoorSystemInfoImp(const StringType& alias);
	JK_CabDesignDoorSystemInfoImp(JK_CabDesignDoorSystemInfoImp&& rhs);
	JK_CabDesignDoorSystemInfoImp(const JK_CabDesignDoorSystemInfoImp& rhs);

public:

	JK_CabDesignDoorSystemInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignDoorSystemID;
	IntColumn	CabDesignID;
	BoolColumn	IsDel;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	DoorSystemID;
	IntColumn	InstallFaceType;
	FloatColumn	XAdjustLen;
	FloatColumn	YAdjustLen;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	BoolColumn	IsCanDel;
	StringColumn	XFormula;
	StringColumn	YFormula;
	FloatColumn	ZLen;
};
extern	JK_CabDesignDoorSystemInfoImp	JK_CabDesignDoorSystemInfo;
typedef	JK_CabDesignDoorSystemInfoImp::SData	JK_CabDesignDoorSystemInfo_Data;

class JK_CabDesignFNFittingInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignFNFittingID_;
		boost::optional<IntColumn::ValueType>	ContainerID_;
		boost::optional<IntColumn::ValueType>	ContainerGTypeID_;
		boost::optional<BoolColumn::ValueType>	IsCanDel_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<StringColumn::ValueType>	ZFormula_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_CabDesignFNFittingInfoImp(const StringType& alias);
	JK_CabDesignFNFittingInfoImp(JK_CabDesignFNFittingInfoImp&& rhs);
	JK_CabDesignFNFittingInfoImp(const JK_CabDesignFNFittingInfoImp& rhs);

public:

	JK_CabDesignFNFittingInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignFNFittingID;
	IntColumn	ContainerID;
	IntColumn	ContainerGTypeID;
	BoolColumn	IsCanDel;
	StringColumn	XFormula;
	StringColumn	YFormula;
	StringColumn	ZFormula;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	BoolColumn	IsDel;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_CabDesignFNFittingInfoImp	JK_CabDesignFNFittingInfo;
typedef	JK_CabDesignFNFittingInfoImp::SData	JK_CabDesignFNFittingInfo_Data;

class JK_CabDesignFNFittingMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	CabDesignFNFittingID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<IntColumn::ValueType>	FNType_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabDesignFNFittingMapInfoImp(const StringType& alias);
	JK_CabDesignFNFittingMapInfoImp(JK_CabDesignFNFittingMapInfoImp&& rhs);
	JK_CabDesignFNFittingMapInfoImp(const JK_CabDesignFNFittingMapInfoImp& rhs);

public:

	JK_CabDesignFNFittingMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FNFittingID;
	IntColumn	CabDesignFNFittingID;
	BoolColumn	IsDefault;
	IntColumn	FNType;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabDesignFNFittingMapInfoImp	JK_CabDesignFNFittingMapInfo;
typedef	JK_CabDesignFNFittingMapInfoImp::SData	JK_CabDesignFNFittingMapInfo_Data;

class JK_CabDesignFootInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<IntColumn::ValueType>	FootID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabDesignFootInfoImp(const StringType& alias);
	JK_CabDesignFootInfoImp(JK_CabDesignFootInfoImp&& rhs);
	JK_CabDesignFootInfoImp(const JK_CabDesignFootInfoImp& rhs);

public:

	JK_CabDesignFootInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignID;
	IntColumn	FootID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabDesignFootInfoImp	JK_CabDesignFootInfo;
typedef	JK_CabDesignFootInfoImp::SData	JK_CabDesignFootInfo_Data;

class JK_CabDesignInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	CabFunction_;
		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<IntColumn::ValueType>	PosType_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	CabDesignCode_;
		boost::optional<StringColumn::ValueType>	CabDesignName_;
		boost::optional<StringColumn::ValueType>	CabDesignMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	PhotoID_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
	};

public:
	JK_CabDesignInfoImp(const StringType& alias);
	JK_CabDesignInfoImp(JK_CabDesignInfoImp&& rhs);
	JK_CabDesignInfoImp(const JK_CabDesignInfoImp& rhs);

public:

	JK_CabDesignInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignID;
	BoolColumn	IsDel;
	IntColumn	GroupID;
	IntColumn	CabFunction;
	IntColumn	CabStructID;
	IntColumn	PosType;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	CabDesignCode;
	StringColumn	CabDesignName;
	StringColumn	CabDesignMemo;
	BigintColumn	VerCode;
	IntColumn	PhotoID;
	BoolColumn	IsActive;
};
extern	JK_CabDesignInfoImp	JK_CabDesignInfo;
typedef	JK_CabDesignInfoImp::SData	JK_CabDesignInfo_Data;

class JK_CabDesignMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabDesignMatInfoImp(const StringType& alias);
	JK_CabDesignMatInfoImp(JK_CabDesignMatInfoImp&& rhs);
	JK_CabDesignMatInfoImp(const JK_CabDesignMatInfoImp& rhs);

public:

	JK_CabDesignMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignID;
	IntColumn	CabMatPlanID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabDesignMatInfoImp	JK_CabDesignMatInfo;
typedef	JK_CabDesignMatInfoImp::SData	JK_CabDesignMatInfo_Data;

class JK_CabMatPlanInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	CabMatPlanCode_;
		boost::optional<StringColumn::ValueType>	CabMatPlanName_;
		boost::optional<StringColumn::ValueType>	CabMatPlanMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_CabMatPlanInfoImp(const StringType& alias);
	JK_CabMatPlanInfoImp(JK_CabMatPlanInfoImp&& rhs);
	JK_CabMatPlanInfoImp(const JK_CabMatPlanInfoImp& rhs);

public:

	JK_CabMatPlanInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabMatPlanID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	IntColumn	FactoryID;
	IntColumn	MatGType;
	IntColumn	MatID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	CabMatPlanCode;
	StringColumn	CabMatPlanName;
	StringColumn	CabMatPlanMemo;
	BigintColumn	VerCode;
};
extern	JK_CabMatPlanInfoImp	JK_CabMatPlanInfo;
typedef	JK_CabMatPlanInfoImp::SData	JK_CabMatPlanInfo_Data;

class JK_CabStructBoardGapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabStructBoardGapID_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	GapPos_;
		boost::optional<IntColumn::ValueType>	GapIndex_;
		boost::optional<IntColumn::ValueType>	GapType_;
		boost::optional<IntColumn::ValueType>	GapShape_;
		boost::optional<StringColumn::ValueType>	XLenFormula_;
		boost::optional<StringColumn::ValueType>	YLenFormula_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_CabStructBoardGapInfoImp(const StringType& alias);
	JK_CabStructBoardGapInfoImp(JK_CabStructBoardGapInfoImp&& rhs);
	JK_CabStructBoardGapInfoImp(const JK_CabStructBoardGapInfoImp& rhs);

public:

	JK_CabStructBoardGapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabStructBoardGapID;
	IntColumn	CabStructBoardID;
	IntColumn	GapPos;
	IntColumn	GapIndex;
	IntColumn	GapType;
	IntColumn	GapShape;
	StringColumn	XLenFormula;
	StringColumn	YLenFormula;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	BigintColumn	VerCode;
};
extern	JK_CabStructBoardGapInfoImp	JK_CabStructBoardGapInfo;
typedef	JK_CabStructBoardGapInfoImp::SData	JK_CabStructBoardGapInfo_Data;

class JK_CabStructBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsUseMain_;
		boost::optional<BoolColumn::ValueType>	IsCanRepeat_;
		boost::optional<BoolColumn::ValueType>	IsCanDel_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<FloatColumn::ValueType>	ArcX_;
		boost::optional<FloatColumn::ValueType>	ArcY_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	CabStructBoardName_;
		boost::optional<IntColumn::ValueType>	DefaultSkinDirection_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_CabStructBoardInfoImp(const StringType& alias);
	JK_CabStructBoardInfoImp(JK_CabStructBoardInfoImp&& rhs);
	JK_CabStructBoardInfoImp(const JK_CabStructBoardInfoImp& rhs);

public:

	JK_CabStructBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabStructBoardID;
	IntColumn	CabStructID;
	BoolColumn	IsDel;
	BoolColumn	IsUseMain;
	BoolColumn	IsCanRepeat;
	BoolColumn	IsCanDel;
	StringColumn	XFormula;
	StringColumn	YFormula;
	FloatColumn	ArcX;
	FloatColumn	ArcY;
	FloatColumn	ArcZ;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	CabStructBoardName;
	IntColumn	DefaultSkinDirection;
	BigintColumn	VerCode;
};
extern	JK_CabStructBoardInfoImp	JK_CabStructBoardInfo;
typedef	JK_CabStructBoardInfoImp::SData	JK_CabStructBoardInfo_Data;

class JK_CabStructBoardSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabStructBoardSealID_;
		boost::optional<IntColumn::ValueType>	SealOrder_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
	};

public:
	JK_CabStructBoardSealInfoImp(const StringType& alias);
	JK_CabStructBoardSealInfoImp(JK_CabStructBoardSealInfoImp&& rhs);
	JK_CabStructBoardSealInfoImp(const JK_CabStructBoardSealInfoImp& rhs);

public:

	JK_CabStructBoardSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabStructBoardSealID;
	IntColumn	SealOrder;
	IntColumn	CabStructBoardID;
	IntColumn	SealType;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	SealIndex;
};
extern	JK_CabStructBoardSealInfoImp	JK_CabStructBoardSealInfo;
typedef	JK_CabStructBoardSealInfoImp::SData	JK_CabStructBoardSealInfo_Data;

class JK_CabStructGapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabStructGapID_;
		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CabGapType_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<StringColumn::ValueType>	ZFormula_;
		boost::optional<StringColumn::ValueType>	XVar_;
		boost::optional<StringColumn::ValueType>	YVar_;
		boost::optional<StringColumn::ValueType>	ZVar_;
		boost::optional<StringColumn::ValueType>	XVarName_;
		boost::optional<StringColumn::ValueType>	YVarName_;
		boost::optional<StringColumn::ValueType>	ZVarName_;
		boost::optional<StringColumn::ValueType>	CabStructCabStructGapCode_;
		boost::optional<StringColumn::ValueType>	CabStructGapName_;
		boost::optional<StringColumn::ValueType>	CabStructGapMemo_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_CabStructGapInfoImp(const StringType& alias);
	JK_CabStructGapInfoImp(JK_CabStructGapInfoImp&& rhs);
	JK_CabStructGapInfoImp(const JK_CabStructGapInfoImp& rhs);

public:

	JK_CabStructGapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabStructGapID;
	IntColumn	CabStructID;
	BoolColumn	IsDel;
	IntColumn	FactoryID;
	IntColumn	CabGapType;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	StringColumn	XFormula;
	StringColumn	YFormula;
	StringColumn	ZFormula;
	StringColumn	XVar;
	StringColumn	YVar;
	StringColumn	ZVar;
	StringColumn	XVarName;
	StringColumn	YVarName;
	StringColumn	ZVarName;
	StringColumn	CabStructCabStructGapCode;
	StringColumn	CabStructGapName;
	StringColumn	CabStructGapMemo;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	BigintColumn	VerCode;
};
extern	JK_CabStructGapInfoImp	JK_CabStructGapInfo;
typedef	JK_CabStructGapInfoImp::SData	JK_CabStructGapInfo_Data;

class JK_CabStructInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	CabGapType_;
		boost::optional<IntColumn::ValueType>	CabShapeID_;
		boost::optional<FloatColumn::ValueType>	VirtualXLen_;
		boost::optional<FloatColumn::ValueType>	VirtualYLen_;
		boost::optional<FloatColumn::ValueType>	VirtualZLen_;
		boost::optional<FloatColumn::ValueType>	VirtualShapeXLen_;
		boost::optional<FloatColumn::ValueType>	VirtualShapeZLen_;
		boost::optional<FloatColumn::ValueType>	VirtualGapXLen_;
		boost::optional<FloatColumn::ValueType>	VirtualGapYLen_;
		boost::optional<FloatColumn::ValueType>	VirtualGapZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	CabStructCode_;
		boost::optional<StringColumn::ValueType>	CabStructName_;
		boost::optional<StringColumn::ValueType>	CabStructMemo_;
	};

public:
	JK_CabStructInfoImp(const StringType& alias);
	JK_CabStructInfoImp(JK_CabStructInfoImp&& rhs);
	JK_CabStructInfoImp(const JK_CabStructInfoImp& rhs);

public:

	JK_CabStructInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabStructID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	CabGapType;
	IntColumn	CabShapeID;
	FloatColumn	VirtualXLen;
	FloatColumn	VirtualYLen;
	FloatColumn	VirtualZLen;
	FloatColumn	VirtualShapeXLen;
	FloatColumn	VirtualShapeZLen;
	FloatColumn	VirtualGapXLen;
	FloatColumn	VirtualGapYLen;
	FloatColumn	VirtualGapZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	CabStructCode;
	StringColumn	CabStructName;
	StringColumn	CabStructMemo;
};
extern	JK_CabStructInfoImp	JK_CabStructInfo;
typedef	JK_CabStructInfoImp::SData	JK_CabStructInfo_Data;

class JK_CabStructMatPlanMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabMatPlanID_;
		boost::optional<IntColumn::ValueType>	CabStructID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabStructMatPlanMapInfoImp(const StringType& alias);
	JK_CabStructMatPlanMapInfoImp(JK_CabStructMatPlanMapInfoImp&& rhs);
	JK_CabStructMatPlanMapInfoImp(const JK_CabStructMatPlanMapInfoImp& rhs);

public:

	JK_CabStructMatPlanMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabMatPlanID;
	IntColumn	CabStructID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabStructMatPlanMapInfoImp	JK_CabStructMatPlanMapInfo;
typedef	JK_CabStructMatPlanMapInfoImp::SData	JK_CabStructMatPlanMapInfo_Data;

class JK_CabinetSizeBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabinetSizeBoardID_;
		boost::optional<IntColumn::ValueType>	CabinetSizeID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<BoolColumn::ValueType>	IsCanRelocate_;
		boost::optional<BoolColumn::ValueType>	IsCanDel_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<StringColumn::ValueType>	CabStructBoardName_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_CabinetSizeBoardInfoImp(const StringType& alias);
	JK_CabinetSizeBoardInfoImp(JK_CabinetSizeBoardInfoImp&& rhs);
	JK_CabinetSizeBoardInfoImp(const JK_CabinetSizeBoardInfoImp& rhs);

public:

	JK_CabinetSizeBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabinetSizeBoardID;
	IntColumn	CabinetSizeID;
	BoolColumn	IsDel;
	IntColumn	CabStructBoardID;
	BoolColumn	IsCanRelocate;
	BoolColumn	IsCanDel;
	IntColumn	FactoryID;
	DateTimeColumn	CreateTime;
	IntColumn	CreatorID;
	DateTimeColumn	UpdateTime;
	IntColumn	UpdaterID;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	StringColumn	CabStructBoardName;
	BigintColumn	VerCode;
};
extern	JK_CabinetSizeBoardInfoImp	JK_CabinetSizeBoardInfo;
typedef	JK_CabinetSizeBoardInfoImp::SData	JK_CabinetSizeBoardInfo_Data;

class JK_CabinetSizeInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabDesignID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	CabinetSizeID_;
		boost::optional<IntColumn::ValueType>	PhotoID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<BoolColumn::ValueType>	IsStandard_;
		boost::optional<FloatColumn::ValueType>	MinXLen_;
		boost::optional<FloatColumn::ValueType>	MaxXLen_;
		boost::optional<FloatColumn::ValueType>	XLenStep_;
		boost::optional<FloatColumn::ValueType>	MinYLen_;
		boost::optional<FloatColumn::ValueType>	MaxYLen_;
		boost::optional<FloatColumn::ValueType>	YLenStep_;
		boost::optional<FloatColumn::ValueType>	MinZLen_;
		boost::optional<FloatColumn::ValueType>	MaxZLen_;
		boost::optional<FloatColumn::ValueType>	ZLenStep_;
		boost::optional<FloatColumn::ValueType>	ShapeXLen_;
		boost::optional<FloatColumn::ValueType>	ShapeZLen_;
		boost::optional<FloatColumn::ValueType>	GapXLen_;
		boost::optional<FloatColumn::ValueType>	GapYLen_;
		boost::optional<FloatColumn::ValueType>	GapZLen_;
		boost::optional<FloatColumn::ValueType>	ShapeMinXLen_;
		boost::optional<FloatColumn::ValueType>	ShapeMaxXLen_;
		boost::optional<FloatColumn::ValueType>	ShapeXLenStep_;
		boost::optional<FloatColumn::ValueType>	ShapeMinZLen_;
		boost::optional<FloatColumn::ValueType>	ShapeMaxZLen_;
		boost::optional<FloatColumn::ValueType>	ShapeZLenStep_;
		boost::optional<FloatColumn::ValueType>	GapMinXLen_;
		boost::optional<FloatColumn::ValueType>	GapMaxXLen_;
		boost::optional<FloatColumn::ValueType>	GapXLenStep_;
		boost::optional<FloatColumn::ValueType>	GapMinYLen_;
		boost::optional<FloatColumn::ValueType>	GapMaxYLen_;
		boost::optional<FloatColumn::ValueType>	GapYLenStep_;
		boost::optional<FloatColumn::ValueType>	GapMinZLen_;
		boost::optional<FloatColumn::ValueType>	GapMaxZLen_;
		boost::optional<FloatColumn::ValueType>	GapZLenStep_;
		boost::optional<IntColumn::ValueType>	FootCount_;
		boost::optional<BoolColumn::ValueType>	IsSysFootRule_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	CabinetSizeCode_;
		boost::optional<StringColumn::ValueType>	CabinetSizeName_;
		boost::optional<StringColumn::ValueType>	CabinetSizeMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_CabinetSizeInfoImp(const StringType& alias);
	JK_CabinetSizeInfoImp(JK_CabinetSizeInfoImp&& rhs);
	JK_CabinetSizeInfoImp(const JK_CabinetSizeInfoImp& rhs);

public:

	JK_CabinetSizeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabDesignID;
	BoolColumn	IsDel;
	IntColumn	CabinetSizeID;
	IntColumn	PhotoID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	BoolColumn	IsStandard;
	FloatColumn	MinXLen;
	FloatColumn	MaxXLen;
	FloatColumn	XLenStep;
	FloatColumn	MinYLen;
	FloatColumn	MaxYLen;
	FloatColumn	YLenStep;
	FloatColumn	MinZLen;
	FloatColumn	MaxZLen;
	FloatColumn	ZLenStep;
	FloatColumn	ShapeXLen;
	FloatColumn	ShapeZLen;
	FloatColumn	GapXLen;
	FloatColumn	GapYLen;
	FloatColumn	GapZLen;
	FloatColumn	ShapeMinXLen;
	FloatColumn	ShapeMaxXLen;
	FloatColumn	ShapeXLenStep;
	FloatColumn	ShapeMinZLen;
	FloatColumn	ShapeMaxZLen;
	FloatColumn	ShapeZLenStep;
	FloatColumn	GapMinXLen;
	FloatColumn	GapMaxXLen;
	FloatColumn	GapXLenStep;
	FloatColumn	GapMinYLen;
	FloatColumn	GapMaxYLen;
	FloatColumn	GapYLenStep;
	FloatColumn	GapMinZLen;
	FloatColumn	GapMaxZLen;
	FloatColumn	GapZLenStep;
	IntColumn	FootCount;
	BoolColumn	IsSysFootRule;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	CabinetSizeCode;
	StringColumn	CabinetSizeName;
	StringColumn	CabinetSizeMemo;
	BigintColumn	VerCode;
};
extern	JK_CabinetSizeInfoImp	JK_CabinetSizeInfo;
typedef	JK_CabinetSizeInfoImp::SData	JK_CabinetSizeInfo_Data;

class JK_CabinetSizeStructBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	CabStructBoardID_;
		boost::optional<IntColumn::ValueType>	CabinetSizeID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_CabinetSizeStructBoardInfoImp(const StringType& alias);
	JK_CabinetSizeStructBoardInfoImp(JK_CabinetSizeStructBoardInfoImp&& rhs);
	JK_CabinetSizeStructBoardInfoImp(const JK_CabinetSizeStructBoardInfoImp& rhs);

public:

	JK_CabinetSizeStructBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	CabStructBoardID;
	IntColumn	CabinetSizeID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_CabinetSizeStructBoardInfoImp	JK_CabinetSizeStructBoardInfo;
typedef	JK_CabinetSizeStructBoardInfoImp::SData	JK_CabinetSizeStructBoardInfo_Data;

class JK_DecorBoardFrameMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardID_;
		boost::optional<IntColumn::ValueType>	DecorFrameID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DecorBoardFrameMapInfoImp(const StringType& alias);
	JK_DecorBoardFrameMapInfoImp(JK_DecorBoardFrameMapInfoImp&& rhs);
	JK_DecorBoardFrameMapInfoImp(const JK_DecorBoardFrameMapInfoImp& rhs);

public:

	JK_DecorBoardFrameMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardID;
	IntColumn	DecorFrameID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DecorBoardFrameMapInfoImp	JK_DecorBoardFrameMapInfo;
typedef	JK_DecorBoardFrameMapInfoImp::SData	JK_DecorBoardFrameMapInfo_Data;

class JK_DecorBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	SourceType_;
		boost::optional<FloatColumn::ValueType>	DefaultYPos_;
		boost::optional<StringColumn::ValueType>	DecorBoardCode_;
		boost::optional<StringColumn::ValueType>	DecorBoardName_;
		boost::optional<StringColumn::ValueType>	DecorBoardMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<BoolColumn::ValueType>	IsCanResize_;
		boost::optional<FloatColumn::ValueType>	MinXLen_;
		boost::optional<FloatColumn::ValueType>	MaxXLen_;
		boost::optional<FloatColumn::ValueType>	XLenStep_;
		boost::optional<FloatColumn::ValueType>	MinYLen_;
		boost::optional<FloatColumn::ValueType>	MaxYLen_;
		boost::optional<FloatColumn::ValueType>	YLenStep_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	PhotoID_;
	};

public:
	JK_DecorBoardInfoImp(const StringType& alias);
	JK_DecorBoardInfoImp(JK_DecorBoardInfoImp&& rhs);
	JK_DecorBoardInfoImp(const JK_DecorBoardInfoImp& rhs);

public:

	JK_DecorBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	SourceType;
	FloatColumn	DefaultYPos;
	StringColumn	DecorBoardCode;
	StringColumn	DecorBoardName;
	StringColumn	DecorBoardMemo;
	BigintColumn	VerCode;
	IntColumn	GTypeID;
	StringColumn	XFormula;
	StringColumn	YFormula;
	FloatColumn	ZLen;
	BoolColumn	IsCanResize;
	FloatColumn	MinXLen;
	FloatColumn	MaxXLen;
	FloatColumn	XLenStep;
	FloatColumn	MinYLen;
	FloatColumn	MaxYLen;
	FloatColumn	YLenStep;
	IntColumn	XDock;
	IntColumn	YDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	PhotoID;
};
extern	JK_DecorBoardInfoImp	JK_DecorBoardInfo;
typedef	JK_DecorBoardInfoImp::SData	JK_DecorBoardInfo_Data;

class JK_DecorBoardMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardID_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DecorBoardMatInfoImp(const StringType& alias);
	JK_DecorBoardMatInfoImp(JK_DecorBoardMatInfoImp&& rhs);
	JK_DecorBoardMatInfoImp(const JK_DecorBoardMatInfoImp& rhs);

public:

	JK_DecorBoardMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardID;
	IntColumn	MatID;
	IntColumn	MatGType;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DecorBoardMatInfoImp	JK_DecorBoardMatInfo;
typedef	JK_DecorBoardMatInfoImp::SData	JK_DecorBoardMatInfo_Data;

class JK_DecorBoardUnitInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardUnitID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	DecorBoardID_;
		boost::optional<IntColumn::ValueType>	SplitType_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<FloatColumn::ValueType>	ArcX_;
		boost::optional<FloatColumn::ValueType>	ArcY_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	DecorBoardUnitIndex_;
		boost::optional<StringColumn::ValueType>	DecorBoardUnitName_;
		boost::optional<StringColumn::ValueType>	DecorBoardUnitMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<BoolColumn::ValueType>	IsUseDefaultMat_;
	};

public:
	JK_DecorBoardUnitInfoImp(const StringType& alias);
	JK_DecorBoardUnitInfoImp(JK_DecorBoardUnitInfoImp&& rhs);
	JK_DecorBoardUnitInfoImp(const JK_DecorBoardUnitInfoImp& rhs);

public:

	JK_DecorBoardUnitInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardUnitID;
	BoolColumn	IsDel;
	IntColumn	DecorBoardID;
	IntColumn	SplitType;
	IntColumn	SkinDirection;
	FloatColumn	ArcX;
	FloatColumn	ArcY;
	FloatColumn	ArcZ;
	StringColumn	XFormula;
	StringColumn	YFormula;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	DecorBoardUnitIndex;
	StringColumn	DecorBoardUnitName;
	StringColumn	DecorBoardUnitMemo;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	BoolColumn	IsUseDefaultMat;
};
extern	JK_DecorBoardUnitInfoImp	JK_DecorBoardUnitInfo;
typedef	JK_DecorBoardUnitInfoImp::SData	JK_DecorBoardUnitInfo_Data;

class JK_DecorBoardUnitMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<IntColumn::ValueType>	DefaultSealRuleID_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DecorBoardUnitMatInfoImp(const StringType& alias);
	JK_DecorBoardUnitMatInfoImp(JK_DecorBoardUnitMatInfoImp&& rhs);
	JK_DecorBoardUnitMatInfoImp(const JK_DecorBoardUnitMatInfoImp& rhs);

public:

	JK_DecorBoardUnitMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardUnitID;
	IntColumn	MatID;
	IntColumn	MatGType;
	BoolColumn	IsDefault;
	IntColumn	DefaultSealRuleID;
	IntColumn	SkinDirection;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DecorBoardUnitMatInfoImp	JK_DecorBoardUnitMatInfo;
typedef	JK_DecorBoardUnitMatInfoImp::SData	JK_DecorBoardUnitMatInfo_Data;

class JK_DecorBoardUnitSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<IntColumn::ValueType>	DefaultMaterialID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	SealOrder_;
		boost::optional<IntColumn::ValueType>	DecorBoardUnitSealID_;
	};

public:
	JK_DecorBoardUnitSealInfoImp(const StringType& alias);
	JK_DecorBoardUnitSealInfoImp(JK_DecorBoardUnitSealInfoImp&& rhs);
	JK_DecorBoardUnitSealInfoImp(const JK_DecorBoardUnitSealInfoImp& rhs);

public:

	JK_DecorBoardUnitSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardUnitID;
	IntColumn	SealIndex;
	IntColumn	SealType;
	IntColumn	DefaultMaterialID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	SealOrder;
	IntColumn	DecorBoardUnitSealID;
};
extern	JK_DecorBoardUnitSealInfoImp	JK_DecorBoardUnitSealInfo;
typedef	JK_DecorBoardUnitSealInfoImp::SData	JK_DecorBoardUnitSealInfo_Data;

class JK_DecorInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	SkinID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	DecorCode_;
		boost::optional<StringColumn::ValueType>	DecorName_;
		boost::optional<StringColumn::ValueType>	DecorMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_DecorInfoImp(const StringType& alias);
	JK_DecorInfoImp(JK_DecorInfoImp&& rhs);
	JK_DecorInfoImp(const JK_DecorInfoImp& rhs);

public:

	JK_DecorInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorID;
	IntColumn	GroupID;
	IntColumn	FactoryID;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	BoolColumn	IsDel;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	ShowID;
	IntColumn	SkinID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	DecorCode;
	StringColumn	DecorName;
	StringColumn	DecorMemo;
	BigintColumn	VerCode;
};
extern	JK_DecorInfoImp	JK_DecorInfo;
typedef	JK_DecorInfoImp::SData	JK_DecorInfo_Data;

class JK_DecorLineInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorLineID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	ZOffset_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	DecorLineCode_;
		boost::optional<StringColumn::ValueType>	DecorLineName_;
		boost::optional<StringColumn::ValueType>	DecorLineMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<FloatColumn::ValueType>	DefaultYLen_;
	};

public:
	JK_DecorLineInfoImp(const StringType& alias);
	JK_DecorLineInfoImp(JK_DecorLineInfoImp&& rhs);
	JK_DecorLineInfoImp(const JK_DecorLineInfoImp& rhs);

public:

	JK_DecorLineInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorLineID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	GTypeID;
	IntColumn	ShowID;
	IntColumn	ModelID;
	FloatColumn	ZOffset;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	DecorLineCode;
	StringColumn	DecorLineName;
	StringColumn	DecorLineMemo;
	BigintColumn	VerCode;
	FloatColumn	DefaultYLen;
};
extern	JK_DecorLineInfoImp	JK_DecorLineInfo;
typedef	JK_DecorLineInfoImp::SData	JK_DecorLineInfo_Data;

class JK_DecorLineMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorLineID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DecorLineMatInfoImp(const StringType& alias);
	JK_DecorLineMatInfoImp(JK_DecorLineMatInfoImp&& rhs);
	JK_DecorLineMatInfoImp(const JK_DecorLineMatInfoImp& rhs);

public:

	JK_DecorLineMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorLineID;
	IntColumn	MaterialID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DecorLineMatInfoImp	JK_DecorLineMatInfo;
typedef	JK_DecorLineMatInfoImp::SData	JK_DecorLineMatInfo_Data;

class JK_DecorUnitHWFittingMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DecorBoardUnitID_;
		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DecorUnitHWFittingMapInfoImp(const StringType& alias);
	JK_DecorUnitHWFittingMapInfoImp(JK_DecorUnitHWFittingMapInfoImp&& rhs);
	JK_DecorUnitHWFittingMapInfoImp(const JK_DecorUnitHWFittingMapInfoImp& rhs);

public:

	JK_DecorUnitHWFittingMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DecorBoardUnitID;
	IntColumn	HWFittingID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DecorUnitHWFittingMapInfoImp	JK_DecorUnitHWFittingMapInfo;
typedef	JK_DecorUnitHWFittingMapInfoImp::SData	JK_DecorUnitHWFittingMapInfo_Data;

class JK_DoorBoardGapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorBoardGapID_;
		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	GapPos_;
		boost::optional<IntColumn::ValueType>	GapIndex_;
		boost::optional<IntColumn::ValueType>	GapType_;
		boost::optional<IntColumn::ValueType>	GapShape_;
		boost::optional<StringColumn::ValueType>	XLenFormula_;
		boost::optional<StringColumn::ValueType>	YLenFormula_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_DoorBoardGapInfoImp(const StringType& alias);
	JK_DoorBoardGapInfoImp(JK_DoorBoardGapInfoImp&& rhs);
	JK_DoorBoardGapInfoImp(const JK_DoorBoardGapInfoImp& rhs);

public:

	JK_DoorBoardGapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorBoardGapID;
	IntColumn	DoorBoardID;
	IntColumn	GapPos;
	IntColumn	GapIndex;
	IntColumn	GapType;
	IntColumn	GapShape;
	StringColumn	XLenFormula;
	StringColumn	YLenFormula;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	BigintColumn	VerCode;
};
extern	JK_DoorBoardGapInfoImp	JK_DoorBoardGapInfo;
typedef	JK_DoorBoardGapInfoImp::SData	JK_DoorBoardGapInfo_Data;

class JK_DoorBoardInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsUseDefaultMat_;
		boost::optional<IntColumn::ValueType>	SplitType_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<FloatColumn::ValueType>	ArcX_;
		boost::optional<FloatColumn::ValueType>	ArcY_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<IntColumn::ValueType>	DoorBoardIndex_;
		boost::optional<StringColumn::ValueType>	DoorBoardName_;
		boost::optional<StringColumn::ValueType>	DoorBoardMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_DoorBoardInfoImp(const StringType& alias);
	JK_DoorBoardInfoImp(JK_DoorBoardInfoImp&& rhs);
	JK_DoorBoardInfoImp(const JK_DoorBoardInfoImp& rhs);

public:

	JK_DoorBoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorBoardID;
	IntColumn	DoorID;
	BoolColumn	IsDel;
	BoolColumn	IsUseDefaultMat;
	IntColumn	SplitType;
	IntColumn	SkinDirection;
	FloatColumn	ArcX;
	FloatColumn	ArcY;
	FloatColumn	ArcZ;
	StringColumn	XFormula;
	StringColumn	YFormula;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	IntColumn	DoorBoardIndex;
	StringColumn	DoorBoardName;
	StringColumn	DoorBoardMemo;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_DoorBoardInfoImp	JK_DoorBoardInfo;
typedef	JK_DoorBoardInfoImp::SData	JK_DoorBoardInfo_Data;

class JK_DoorBoardMatMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorBoardMatMapInfoImp(const StringType& alias);
	JK_DoorBoardMatMapInfoImp(JK_DoorBoardMatMapInfoImp&& rhs);
	JK_DoorBoardMatMapInfoImp(const JK_DoorBoardMatMapInfoImp& rhs);

public:

	JK_DoorBoardMatMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorBoardID;
	IntColumn	MatID;
	IntColumn	MatGType;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorBoardMatMapInfoImp	JK_DoorBoardMatMapInfo;
typedef	JK_DoorBoardMatMapInfoImp::SData	JK_DoorBoardMatMapInfo_Data;

class JK_DoorBoardSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorBoardID_;
		boost::optional<IntColumn::ValueType>	SealOrder_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
	};

public:
	JK_DoorBoardSealInfoImp(const StringType& alias);
	JK_DoorBoardSealInfoImp(JK_DoorBoardSealInfoImp&& rhs);
	JK_DoorBoardSealInfoImp(const JK_DoorBoardSealInfoImp& rhs);

public:

	JK_DoorBoardSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorBoardID;
	IntColumn	SealOrder;
	IntColumn	SealType;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	SealIndex;
};
extern	JK_DoorBoardSealInfoImp	JK_DoorBoardSealInfo;
typedef	JK_DoorBoardSealInfoImp::SData	JK_DoorBoardSealInfo_Data;

class JK_DoorInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	CombineType_;
		boost::optional<IntColumn::ValueType>	PhotoID_;
		boost::optional<FloatColumn::ValueType>	VirtualContainerXLen_;
		boost::optional<FloatColumn::ValueType>	VirtualContainerYLen_;
		boost::optional<FloatColumn::ValueType>	VirtualContainerZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	DoorCode_;
		boost::optional<StringColumn::ValueType>	DoorName_;
		boost::optional<StringColumn::ValueType>	DoorMemo_;
	};

public:
	JK_DoorInfoImp(const StringType& alias);
	JK_DoorInfoImp(JK_DoorInfoImp&& rhs);
	JK_DoorInfoImp(const JK_DoorInfoImp& rhs);

public:

	JK_DoorInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorID;
	IntColumn	GroupID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	GTypeID;
	IntColumn	CombineType;
	IntColumn	PhotoID;
	FloatColumn	VirtualContainerXLen;
	FloatColumn	VirtualContainerYLen;
	FloatColumn	VirtualContainerZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	DoorCode;
	StringColumn	DoorName;
	StringColumn	DoorMemo;
};
extern	JK_DoorInfoImp	JK_DoorInfo;
typedef	JK_DoorInfoImp::SData	JK_DoorInfo_Data;

class JK_DoorMatMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorMatMapInfoImp(const StringType& alias);
	JK_DoorMatMapInfoImp(JK_DoorMatMapInfoImp&& rhs);
	JK_DoorMatMapInfoImp(const JK_DoorMatMapInfoImp& rhs);

public:

	JK_DoorMatMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorID;
	IntColumn	DoorMatPlanID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorMatMapInfoImp	JK_DoorMatMapInfo;
typedef	JK_DoorMatMapInfoImp::SData	JK_DoorMatMapInfo_Data;

class JK_DoorMatPlanHandleMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	HandleID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorMatPlanHandleMapInfoImp(const StringType& alias);
	JK_DoorMatPlanHandleMapInfoImp(JK_DoorMatPlanHandleMapInfoImp&& rhs);
	JK_DoorMatPlanHandleMapInfoImp(const JK_DoorMatPlanHandleMapInfoImp& rhs);

public:

	JK_DoorMatPlanHandleMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorMatPlanID;
	IntColumn	HandleID;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorMatPlanHandleMapInfoImp	JK_DoorMatPlanHandleMapInfo;
typedef	JK_DoorMatPlanHandleMapInfoImp::SData	JK_DoorMatPlanHandleMapInfo_Data;

class JK_DoorMatPlanInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	MatID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
		boost::optional<StringColumn::ValueType>	DoorMatPlanCode_;
		boost::optional<StringColumn::ValueType>	DoorMatPlanName_;
		boost::optional<StringColumn::ValueType>	DoorMatPlanMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<BoolColumn::ValueType>	IsCanSeal_;
	};

public:
	JK_DoorMatPlanInfoImp(const StringType& alias);
	JK_DoorMatPlanInfoImp(JK_DoorMatPlanInfoImp&& rhs);
	JK_DoorMatPlanInfoImp(const JK_DoorMatPlanInfoImp& rhs);

public:

	JK_DoorMatPlanInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorMatPlanID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	MatID;
	IntColumn	MatGType;
	StringColumn	DoorMatPlanCode;
	StringColumn	DoorMatPlanName;
	StringColumn	DoorMatPlanMemo;
	BigintColumn	VerCode;
	IntColumn	ModelID;
	BoolColumn	IsCanSeal;
};
extern	JK_DoorMatPlanInfoImp	JK_DoorMatPlanInfo;
typedef	JK_DoorMatPlanInfoImp::SData	JK_DoorMatPlanInfo_Data;

class JK_DoorRegionHWFittingMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorRegionHWFittingMapInfoImp(const StringType& alias);
	JK_DoorRegionHWFittingMapInfoImp(JK_DoorRegionHWFittingMapInfoImp&& rhs);
	JK_DoorRegionHWFittingMapInfoImp(const JK_DoorRegionHWFittingMapInfoImp& rhs);

public:

	JK_DoorRegionHWFittingMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemRegionID;
	IntColumn	HWFittingID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorRegionHWFittingMapInfoImp	JK_DoorRegionHWFittingMapInfo;
typedef	JK_DoorRegionHWFittingMapInfoImp::SData	JK_DoorRegionHWFittingMapInfo_Data;

class JK_DoorSystemInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	MatchCabShape_;
		boost::optional<IntColumn::ValueType>	InstallType_;
		boost::optional<FloatColumn::ValueType>	VirtualXLen_;
		boost::optional<FloatColumn::ValueType>	VirtualYLen_;
		boost::optional<FloatColumn::ValueType>	VirtualShapeXLen_;
		boost::optional<FloatColumn::ValueType>	VirtualShapeZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	DoorSystemCode_;
		boost::optional<StringColumn::ValueType>	DoorSystemName_;
		boost::optional<StringColumn::ValueType>	DoorSystemMemo_;
	};

public:
	JK_DoorSystemInfoImp(const StringType& alias);
	JK_DoorSystemInfoImp(JK_DoorSystemInfoImp&& rhs);
	JK_DoorSystemInfoImp(const JK_DoorSystemInfoImp& rhs);

public:

	JK_DoorSystemInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemID;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	SupplyType;
	IntColumn	MatchCabShape;
	IntColumn	InstallType;
	FloatColumn	VirtualXLen;
	FloatColumn	VirtualYLen;
	FloatColumn	VirtualShapeXLen;
	FloatColumn	VirtualShapeZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	DoorSystemCode;
	StringColumn	DoorSystemName;
	StringColumn	DoorSystemMemo;
};
extern	JK_DoorSystemInfoImp	JK_DoorSystemInfo;
typedef	JK_DoorSystemInfoImp::SData	JK_DoorSystemInfo_Data;

class JK_DoorSystemMatMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<IntColumn::ValueType>	DoorMatPlanID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorSystemMatMapInfoImp(const StringType& alias);
	JK_DoorSystemMatMapInfoImp(JK_DoorSystemMatMapInfoImp&& rhs);
	JK_DoorSystemMatMapInfoImp(const JK_DoorSystemMatMapInfoImp& rhs);

public:

	JK_DoorSystemMatMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemID;
	IntColumn	DoorMatPlanID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorSystemMatMapInfoImp	JK_DoorSystemMatMapInfo;
typedef	JK_DoorSystemMatMapInfoImp::SData	JK_DoorSystemMatMapInfo_Data;

class JK_DoorSystemRegionDoorMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	DoorID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorSystemRegionDoorMapInfoImp(const StringType& alias);
	JK_DoorSystemRegionDoorMapInfoImp(JK_DoorSystemRegionDoorMapInfoImp&& rhs);
	JK_DoorSystemRegionDoorMapInfoImp(const JK_DoorSystemRegionDoorMapInfoImp& rhs);

public:

	JK_DoorSystemRegionDoorMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemRegionID;
	IntColumn	DoorID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorSystemRegionDoorMapInfoImp	JK_DoorSystemRegionDoorMapInfo;
typedef	JK_DoorSystemRegionDoorMapInfoImp::SData	JK_DoorSystemRegionDoorMapInfo_Data;

class JK_DoorSystemRegionInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	DoorSystemID_;
		boost::optional<IntColumn::ValueType>	ParentID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	RegionIndex_;
		boost::optional<IntColumn::ValueType>	CutDirection_;
		boost::optional<StringColumn::ValueType>	CutFormula_;
		boost::optional<BoolColumn::ValueType>	IsSlide_;
		boost::optional<BoolColumn::ValueType>	IsRound_;
		boost::optional<IntColumn::ValueType>	LenPrecision_;
		boost::optional<IntColumn::ValueType>	OpenDoorType_;
		boost::optional<FloatColumn::ValueType>	XAdjustLen_;
		boost::optional<FloatColumn::ValueType>	YAdjustLen_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<BoolColumn::ValueType>	IsCanResize_;
		boost::optional<IntColumn::ValueType>	DoorFunction_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	HandleXDock_;
		boost::optional<IntColumn::ValueType>	HandleYDock_;
		boost::optional<IntColumn::ValueType>	HandleZDock_;
		boost::optional<StringColumn::ValueType>	HandleXOffsetFormula_;
		boost::optional<StringColumn::ValueType>	HandleYOffsetFormula_;
		boost::optional<StringColumn::ValueType>	HandleZOffsetFormula_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	DoorBoardMatType_;
		boost::optional<IntColumn::ValueType>	DoorBoardMatID_;
		boost::optional<BoolColumn::ValueType>	IsUseCustomThick_;
	};

public:
	JK_DoorSystemRegionInfoImp(const StringType& alias);
	JK_DoorSystemRegionInfoImp(JK_DoorSystemRegionInfoImp&& rhs);
	JK_DoorSystemRegionInfoImp(const JK_DoorSystemRegionInfoImp& rhs);

public:

	JK_DoorSystemRegionInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemRegionID;
	IntColumn	DoorSystemID;
	IntColumn	ParentID;
	BoolColumn	IsDel;
	IntColumn	RegionIndex;
	IntColumn	CutDirection;
	StringColumn	CutFormula;
	BoolColumn	IsSlide;
	BoolColumn	IsRound;
	IntColumn	LenPrecision;
	IntColumn	OpenDoorType;
	FloatColumn	XAdjustLen;
	FloatColumn	YAdjustLen;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	BoolColumn	IsCanResize;
	IntColumn	DoorFunction;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	HandleXDock;
	IntColumn	HandleYDock;
	IntColumn	HandleZDock;
	StringColumn	HandleXOffsetFormula;
	StringColumn	HandleYOffsetFormula;
	StringColumn	HandleZOffsetFormula;
	FloatColumn	ZLen;
	IntColumn	DoorBoardMatType;
	IntColumn	DoorBoardMatID;
	BoolColumn	IsUseCustomThick;
};
extern	JK_DoorSystemRegionInfoImp	JK_DoorSystemRegionInfo;
typedef	JK_DoorSystemRegionInfoImp::SData	JK_DoorSystemRegionInfo_Data;

class JK_DoorSystemRegionSlideMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	SlideID_;
		boost::optional<IntColumn::ValueType>	SlidePosition_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_DoorSystemRegionSlideMapInfoImp(const StringType& alias);
	JK_DoorSystemRegionSlideMapInfoImp(JK_DoorSystemRegionSlideMapInfoImp&& rhs);
	JK_DoorSystemRegionSlideMapInfoImp(const JK_DoorSystemRegionSlideMapInfoImp& rhs);

public:

	JK_DoorSystemRegionSlideMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemRegionID;
	IntColumn	SlideID;
	IntColumn	SlidePosition;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_DoorSystemRegionSlideMapInfoImp	JK_DoorSystemRegionSlideMapInfo;
typedef	JK_DoorSystemRegionSlideMapInfoImp::SData	JK_DoorSystemRegionSlideMapInfo_Data;

class JK_DoorSystemRegionSlidePositionSizeInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	DoorSystemRegionID_;
		boost::optional<IntColumn::ValueType>	SlidePosition_;
		boost::optional<FloatColumn::ValueType>	XAdjustLen_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_DoorSystemRegionSlidePositionSizeInfoImp(const StringType& alias);
	JK_DoorSystemRegionSlidePositionSizeInfoImp(JK_DoorSystemRegionSlidePositionSizeInfoImp&& rhs);
	JK_DoorSystemRegionSlidePositionSizeInfoImp(const JK_DoorSystemRegionSlidePositionSizeInfoImp& rhs);

public:

	JK_DoorSystemRegionSlidePositionSizeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DoorSystemRegionID;
	IntColumn	SlidePosition;
	FloatColumn	XAdjustLen;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_DoorSystemRegionSlidePositionSizeInfoImp	JK_DoorSystemRegionSlidePositionSizeInfo;
typedef	JK_DoorSystemRegionSlidePositionSizeInfoImp::SData	JK_DoorSystemRegionSlidePositionSizeInfo_Data;

class JK_FNFittingInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<BoolColumn::ValueType>	IsEntire_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<FloatColumn::ValueType>	MinInstallX_;
		boost::optional<FloatColumn::ValueType>	MinInstallY_;
		boost::optional<FloatColumn::ValueType>	MinInstallZ_;
		boost::optional<FloatColumn::ValueType>	MinXLen_;
		boost::optional<FloatColumn::ValueType>	MaxXLen_;
		boost::optional<FloatColumn::ValueType>	MinYLen_;
		boost::optional<FloatColumn::ValueType>	MaxYLen_;
		boost::optional<FloatColumn::ValueType>	MinZLen_;
		boost::optional<FloatColumn::ValueType>	MaxZLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchXLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchYLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchZLen_;
		boost::optional<FloatColumn::ValueType>	DefaultYPos_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	FNFittingCode_;
		boost::optional<StringColumn::ValueType>	FNFittingName_;
		boost::optional<StringColumn::ValueType>	FNFittingMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_FNFittingInfoImp(const StringType& alias);
	JK_FNFittingInfoImp(JK_FNFittingInfoImp&& rhs);
	JK_FNFittingInfoImp(const JK_FNFittingInfoImp& rhs);

public:

	JK_FNFittingInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FNFittingID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	BoolColumn	IsEntire;
	IntColumn	ShowID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	FloatColumn	MinInstallX;
	FloatColumn	MinInstallY;
	FloatColumn	MinInstallZ;
	FloatColumn	MinXLen;
	FloatColumn	MaxXLen;
	FloatColumn	MinYLen;
	FloatColumn	MaxYLen;
	FloatColumn	MinZLen;
	FloatColumn	MaxZLen;
	BoolColumn	IsMatchXLen;
	BoolColumn	IsMatchYLen;
	BoolColumn	IsMatchZLen;
	FloatColumn	DefaultYPos;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	FNFittingCode;
	StringColumn	FNFittingName;
	StringColumn	FNFittingMemo;
	BigintColumn	VerCode;
};
extern	JK_FNFittingInfoImp	JK_FNFittingInfo;
typedef	JK_FNFittingInfoImp::SData	JK_FNFittingInfo_Data;

class JK_FNFittingMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_FNFittingMatInfoImp(const StringType& alias);
	JK_FNFittingMatInfoImp(JK_FNFittingMatInfoImp&& rhs);
	JK_FNFittingMatInfoImp(const JK_FNFittingMatInfoImp& rhs);

public:

	JK_FNFittingMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FNFittingID;
	IntColumn	MaterialID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_FNFittingMatInfoImp	JK_FNFittingMatInfo;
typedef	JK_FNFittingMatInfoImp::SData	JK_FNFittingMatInfo_Data;

class JK_FNFittingPartInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FNFittingPartID_;
		boost::optional<IntColumn::ValueType>	PartType_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<BoolColumn::ValueType>	IsUseMain_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<IntColumn::ValueType>	SplitType_;
		boost::optional<FloatColumn::ValueType>	ArcX_;
		boost::optional<FloatColumn::ValueType>	ArcY_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<StringColumn::ValueType>	XFormula_;
		boost::optional<StringColumn::ValueType>	YFormula_;
		boost::optional<IntColumn::ValueType>	XDock_;
		boost::optional<IntColumn::ValueType>	YDock_;
		boost::optional<IntColumn::ValueType>	ZDock_;
		boost::optional<StringColumn::ValueType>	XOffsetFormula_;
		boost::optional<StringColumn::ValueType>	YOffsetFormula_;
		boost::optional<StringColumn::ValueType>	ZOffsetFormula_;
		boost::optional<StringColumn::ValueType>	FNFittingPartCode_;
		boost::optional<StringColumn::ValueType>	FNFittingPartName_;
		boost::optional<StringColumn::ValueType>	FNFittingPartMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_FNFittingPartInfoImp(const StringType& alias);
	JK_FNFittingPartInfoImp(JK_FNFittingPartInfoImp&& rhs);
	JK_FNFittingPartInfoImp(const JK_FNFittingPartInfoImp& rhs);

public:

	JK_FNFittingPartInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FNFittingPartID;
	IntColumn	PartType;
	BoolColumn	IsDel;
	IntColumn	FNFittingID;
	BoolColumn	IsUseMain;
	IntColumn	SkinDirection;
	IntColumn	SplitType;
	FloatColumn	ArcX;
	FloatColumn	ArcY;
	FloatColumn	ArcZ;
	StringColumn	XFormula;
	StringColumn	YFormula;
	IntColumn	XDock;
	IntColumn	YDock;
	IntColumn	ZDock;
	StringColumn	XOffsetFormula;
	StringColumn	YOffsetFormula;
	StringColumn	ZOffsetFormula;
	StringColumn	FNFittingPartCode;
	StringColumn	FNFittingPartName;
	StringColumn	FNFittingPartMemo;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_FNFittingPartInfoImp	JK_FNFittingPartInfo;
typedef	JK_FNFittingPartInfoImp::SData	JK_FNFittingPartInfo_Data;

class JK_FNFittingPartMatInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FNFittingPartID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	MatGType_;
	};

public:
	JK_FNFittingPartMatInfoImp(const StringType& alias);
	JK_FNFittingPartMatInfoImp(JK_FNFittingPartMatInfoImp&& rhs);
	JK_FNFittingPartMatInfoImp(const JK_FNFittingPartMatInfoImp& rhs);

public:

	JK_FNFittingPartMatInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FNFittingPartID;
	IntColumn	MaterialID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	MatGType;
};
extern	JK_FNFittingPartMatInfoImp	JK_FNFittingPartMatInfo;
typedef	JK_FNFittingPartMatInfoImp::SData	JK_FNFittingPartMatInfo_Data;

class JK_FNFittingPartSealInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FNFittingPartID_;
		boost::optional<IntColumn::ValueType>	SealOrder_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	SealType_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_FNFittingPartSealInfoImp(const StringType& alias);
	JK_FNFittingPartSealInfoImp(JK_FNFittingPartSealInfoImp&& rhs);
	JK_FNFittingPartSealInfoImp(const JK_FNFittingPartSealInfoImp& rhs);

public:

	JK_FNFittingPartSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FNFittingPartID;
	IntColumn	SealOrder;
	IntColumn	SealIndex;
	IntColumn	SealType;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_FNFittingPartSealInfoImp	JK_FNFittingPartSealInfo;
typedef	JK_FNFittingPartSealInfoImp::SData	JK_FNFittingPartSealInfo_Data;

class JK_FittingInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	FittingCode_;
		boost::optional<StringColumn::ValueType>	FittingName_;
		boost::optional<StringColumn::ValueType>	FittingMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_FittingInfoImp(const StringType& alias);
	JK_FittingInfoImp(JK_FittingInfoImp&& rhs);
	JK_FittingInfoImp(const JK_FittingInfoImp& rhs);

public:

	JK_FittingInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FittingID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	IntColumn	GTypeID;
	IntColumn	SupplyType;
	IntColumn	ShowID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	FittingCode;
	StringColumn	FittingName;
	StringColumn	FittingMemo;
	BigintColumn	VerCode;
};
extern	JK_FittingInfoImp	JK_FittingInfo;
typedef	JK_FittingInfoImp::SData	JK_FittingInfo_Data;

class JK_FittingRuleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FittingRuleID_;
		boost::optional<IntColumn::ValueType>	OwnerID_;
		boost::optional<IntColumn::ValueType>	OwnerGTypeID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BoolColumn::ValueType>	IsCanDel_;
		boost::optional<FloatColumn::ValueType>	MinLen_;
		boost::optional<FloatColumn::ValueType>	MaxLen_;
		boost::optional<IntColumn::ValueType>	FittingID_;
		boost::optional<IntColumn::ValueType>	FittingType_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_FittingRuleInfoImp(const StringType& alias);
	JK_FittingRuleInfoImp(JK_FittingRuleInfoImp&& rhs);
	JK_FittingRuleInfoImp(const JK_FittingRuleInfoImp& rhs);

public:

	JK_FittingRuleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FittingRuleID;
	IntColumn	OwnerID;
	IntColumn	OwnerGTypeID;
	BoolColumn	IsDefault;
	BoolColumn	IsCanDel;
	FloatColumn	MinLen;
	FloatColumn	MaxLen;
	IntColumn	FittingID;
	IntColumn	FittingType;
	IntColumn	UseCount;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_FittingRuleInfoImp	JK_FittingRuleInfo;
typedef	JK_FittingRuleInfoImp::SData	JK_FittingRuleInfo_Data;

class JK_FormulaConstInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<StringColumn::ValueType>	ConstCode_;
		boost::optional<StringColumn::ValueType>	ConstText_;
		boost::optional<FloatColumn::ValueType>	ConstValue_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_FormulaConstInfoImp(const StringType& alias);
	JK_FormulaConstInfoImp(JK_FormulaConstInfoImp&& rhs);
	JK_FormulaConstInfoImp(const JK_FormulaConstInfoImp& rhs);

public:

	JK_FormulaConstInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	StringColumn	ConstCode;
	StringColumn	ConstText;
	FloatColumn	ConstValue;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_FormulaConstInfoImp	JK_FormulaConstInfo;
typedef	JK_FormulaConstInfoImp::SData	JK_FormulaConstInfo_Data;

class JK_GroupInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	ParentID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	GroupCode_;
		boost::optional<StringColumn::ValueType>	GroupName_;
		boost::optional<StringColumn::ValueType>	GroupMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_GroupInfoImp(const StringType& alias);
	JK_GroupInfoImp(JK_GroupInfoImp&& rhs);
	JK_GroupInfoImp(const JK_GroupInfoImp& rhs);

public:

	JK_GroupInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	GroupID;
	IntColumn	ParentID;
	IntColumn	FactoryID;
	BoolColumn	IsDel;
	IntColumn	GTypeID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	GroupCode;
	StringColumn	GroupName;
	StringColumn	GroupMemo;
	BigintColumn	VerCode;
};
extern	JK_GroupInfoImp	JK_GroupInfo;
typedef	JK_GroupInfoImp::SData	JK_GroupInfo_Data;

class JK_HWFittingInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	HWFittingID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	SettingCountRuleID_;
		boost::optional<BoolColumn::ValueType>	IsMatchXLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchYLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchZLen_;
		boost::optional<FloatColumn::ValueType>	EffectLen_;
		boost::optional<FloatColumn::ValueType>	XAdjustLen_;
		boost::optional<BoolColumn::ValueType>	IsEmbed_;
		boost::optional<IntColumn::ValueType>	InstallDirection_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	HWFittingCode_;
		boost::optional<StringColumn::ValueType>	HWFittingName_;
		boost::optional<StringColumn::ValueType>	HWFittingMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_HWFittingInfoImp(const StringType& alias);
	JK_HWFittingInfoImp(JK_HWFittingInfoImp&& rhs);
	JK_HWFittingInfoImp(const JK_HWFittingInfoImp& rhs);

public:

	JK_HWFittingInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	HWFittingID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	ShowID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	IntColumn	SettingCountRuleID;
	BoolColumn	IsMatchXLen;
	BoolColumn	IsMatchYLen;
	BoolColumn	IsMatchZLen;
	FloatColumn	EffectLen;
	FloatColumn	XAdjustLen;
	BoolColumn	IsEmbed;
	IntColumn	InstallDirection;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	HWFittingCode;
	StringColumn	HWFittingName;
	StringColumn	HWFittingMemo;
	BigintColumn	VerCode;
};
extern	JK_HWFittingInfoImp	JK_HWFittingInfo;
typedef	JK_HWFittingInfoImp::SData	JK_HWFittingInfo_Data;

class JK_HoleRuleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	HoleID_;
		boost::optional<IntColumn::ValueType>	FNFittingID_;
		boost::optional<IntColumn::ValueType>	HoleTypeID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	OverHeight_;
		boost::optional<IntColumn::ValueType>	HolePicID_;
		boost::optional<FloatColumn::ValueType>	MinXDistance_;
		boost::optional<FloatColumn::ValueType>	MinZDistance_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_HoleRuleInfoImp(const StringType& alias);
	JK_HoleRuleInfoImp(JK_HoleRuleInfoImp&& rhs);
	JK_HoleRuleInfoImp(const JK_HoleRuleInfoImp& rhs);

public:

	JK_HoleRuleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	HoleID;
	IntColumn	FNFittingID;
	IntColumn	HoleTypeID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	OverHeight;
	IntColumn	HolePicID;
	FloatColumn	MinXDistance;
	FloatColumn	MinZDistance;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_HoleRuleInfoImp	JK_HoleRuleInfo;
typedef	JK_HoleRuleInfoImp::SData	JK_HoleRuleInfo_Data;

class JK_MaterialInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchXLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchYLen_;
		boost::optional<BoolColumn::ValueType>	IsMatchZLen_;
		boost::optional<IntColumn::ValueType>	SkinID_;
		boost::optional<IntColumn::ValueType>	SkinDirection_;
		boost::optional<IntColumn::ValueType>	TransCode_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	MaterialCode_;
		boost::optional<StringColumn::ValueType>	MaterialName_;
		boost::optional<StringColumn::ValueType>	MaterialMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_MaterialInfoImp(const StringType& alias);
	JK_MaterialInfoImp(JK_MaterialInfoImp&& rhs);
	JK_MaterialInfoImp(const JK_MaterialInfoImp& rhs);

public:

	JK_MaterialInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	MaterialID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	ShowID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	BoolColumn	IsMatchXLen;
	BoolColumn	IsMatchYLen;
	BoolColumn	IsMatchZLen;
	IntColumn	SkinID;
	IntColumn	SkinDirection;
	IntColumn	TransCode;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	MaterialCode;
	StringColumn	MaterialName;
	StringColumn	MaterialMemo;
	BigintColumn	VerCode;
};
extern	JK_MaterialInfoImp	JK_MaterialInfo;
typedef	JK_MaterialInfoImp::SData	JK_MaterialInfo_Data;

class JK_MaterialSealRuleMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<BoolColumn::ValueType>	IsCabDef_;
		boost::optional<BoolColumn::ValueType>	IsDoorDef_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_MaterialSealRuleMapInfoImp(const StringType& alias);
	JK_MaterialSealRuleMapInfoImp(JK_MaterialSealRuleMapInfoImp&& rhs);
	JK_MaterialSealRuleMapInfoImp(const JK_MaterialSealRuleMapInfoImp& rhs);

public:

	JK_MaterialSealRuleMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	MaterialID;
	IntColumn	SealRuleID;
	BoolColumn	IsCabDef;
	BoolColumn	IsDoorDef;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_MaterialSealRuleMapInfoImp	JK_MaterialSealRuleMapInfo;
typedef	JK_MaterialSealRuleMapInfoImp::SData	JK_MaterialSealRuleMapInfo_Data;

class JK_ModelInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<FloatColumn::ValueType>	ArcX_;
		boost::optional<FloatColumn::ValueType>	ArcY_;
		boost::optional<FloatColumn::ValueType>	ArcZ_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	ModelCode_;
		boost::optional<StringColumn::ValueType>	ModelName_;
		boost::optional<StringColumn::ValueType>	RelativePath_;
		boost::optional<StringColumn::ValueType>	ModelMemo_;
		boost::optional<StringColumn::ValueType>	HASHCode_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FrontViewID_;
		boost::optional<IntColumn::ValueType>	RightViewID_;
		boost::optional<IntColumn::ValueType>	TopViewID_;
		boost::optional<IntColumn::ValueType>	PhotoID_;
	};

public:
	JK_ModelInfoImp(const StringType& alias);
	JK_ModelInfoImp(JK_ModelInfoImp&& rhs);
	JK_ModelInfoImp(const JK_ModelInfoImp& rhs);

public:

	JK_ModelInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	ModelID;
	IntColumn	GroupID;
	IntColumn	FactoryID;
	IntColumn	GTypeID;
	FloatColumn	ArcX;
	FloatColumn	ArcY;
	FloatColumn	ArcZ;
	BoolColumn	IsDel;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	ModelCode;
	StringColumn	ModelName;
	StringColumn	RelativePath;
	StringColumn	ModelMemo;
	StringColumn	HASHCode;
	BigintColumn	VerCode;
	IntColumn	FrontViewID;
	IntColumn	RightViewID;
	IntColumn	TopViewID;
	IntColumn	PhotoID;
};
extern	JK_ModelInfoImp	JK_ModelInfo;
typedef	JK_ModelInfoImp::SData	JK_ModelInfo_Data;

class JK_NumberRuleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	NumberRuleID_;
		boost::optional<IntColumn::ValueType>	FittingID_;
		boost::optional<FloatColumn::ValueType>	MinLen_;
		boost::optional<FloatColumn::ValueType>	MaxLen_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_NumberRuleInfoImp(const StringType& alias);
	JK_NumberRuleInfoImp(JK_NumberRuleInfoImp&& rhs);
	JK_NumberRuleInfoImp(const JK_NumberRuleInfoImp& rhs);

public:

	JK_NumberRuleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	NumberRuleID;
	IntColumn	FittingID;
	FloatColumn	MinLen;
	FloatColumn	MaxLen;
	IntColumn	UseCount;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_NumberRuleInfoImp	JK_NumberRuleInfo;
typedef	JK_NumberRuleInfoImp::SData	JK_NumberRuleInfo_Data;

class JK_PackageInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FittingPackID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<BoolColumn::ValueType>	IsSeparate_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	FittingPackCode_;
		boost::optional<StringColumn::ValueType>	FittingPackName_;
		boost::optional<StringColumn::ValueType>	FittingPackMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_PackageInfoImp(const StringType& alias);
	JK_PackageInfoImp(JK_PackageInfoImp&& rhs);
	JK_PackageInfoImp(const JK_PackageInfoImp& rhs);

public:

	JK_PackageInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FittingPackID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	BoolColumn	IsSeparate;
	IntColumn	GTypeID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	FittingPackCode;
	StringColumn	FittingPackName;
	StringColumn	FittingPackMemo;
	BigintColumn	VerCode;
};
extern	JK_PackageInfoImp	JK_PackageInfo;
typedef	JK_PackageInfoImp::SData	JK_PackageInfo_Data;

class JK_PackageMapInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	PackageID_;
		boost::optional<IntColumn::ValueType>	FittingID_;
		boost::optional<IntColumn::ValueType>	FittingCount_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
	};

public:
	JK_PackageMapInfoImp(const StringType& alias);
	JK_PackageMapInfoImp(JK_PackageMapInfoImp&& rhs);
	JK_PackageMapInfoImp(const JK_PackageMapInfoImp& rhs);

public:

	JK_PackageMapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	PackageID;
	IntColumn	FittingID;
	IntColumn	FittingCount;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
};
extern	JK_PackageMapInfoImp	JK_PackageMapInfo;
typedef	JK_PackageMapInfoImp::SData	JK_PackageMapInfo_Data;

class JK_ProductInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	ProductID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<BoolColumn::ValueType>	IsSplit_;
		boost::optional<IntColumn::ValueType>	SupplyType_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	ZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	ProductCode_;
		boost::optional<StringColumn::ValueType>	ProductName_;
		boost::optional<StringColumn::ValueType>	ProductMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_ProductInfoImp(const StringType& alias);
	JK_ProductInfoImp(JK_ProductInfoImp&& rhs);
	JK_ProductInfoImp(const JK_ProductInfoImp& rhs);

public:

	JK_ProductInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	ProductID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	BoolColumn	IsSplit;
	IntColumn	SupplyType;
	IntColumn	GTypeID;
	IntColumn	ShowID;
	IntColumn	ModelID;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	ZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	ProductCode;
	StringColumn	ProductName;
	StringColumn	ProductMemo;
	BigintColumn	VerCode;
};
extern	JK_ProductInfoImp	JK_ProductInfo;
typedef	JK_ProductInfoImp::SData	JK_ProductInfo_Data;

class JK_ProductSeriesInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	ProductSeriesID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<BoolColumn::ValueType>	IsActive_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	ProductSeriesCode_;
		boost::optional<StringColumn::ValueType>	ProductSeriesName_;
		boost::optional<StringColumn::ValueType>	ProductSeriesMemo_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_ProductSeriesInfoImp(const StringType& alias);
	JK_ProductSeriesInfoImp(JK_ProductSeriesInfoImp&& rhs);
	JK_ProductSeriesInfoImp(const JK_ProductSeriesInfoImp& rhs);

public:

	JK_ProductSeriesInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	ProductSeriesID;
	IntColumn	FactoryID;
	IntColumn	GroupID;
	BoolColumn	IsDel;
	BoolColumn	IsActive;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	ProductSeriesCode;
	StringColumn	ProductSeriesName;
	StringColumn	ProductSeriesMemo;
	BigintColumn	VerCode;
};
extern	JK_ProductSeriesInfoImp	JK_ProductSeriesInfo;
typedef	JK_ProductSeriesInfoImp::SData	JK_ProductSeriesInfo_Data;

class JK_ProductSeriesValidInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	ProductSeriesID_;
		boost::optional<IntColumn::ValueType>	ProductSeriesItemID_;
		boost::optional<IntColumn::ValueType>	PSType_;
		boost::optional<IntColumn::ValueType>	ParentID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BoolColumn::ValueType>	IsGroup_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<IntColumn::ValueType>	DefaultItemID_;
	};

public:
	JK_ProductSeriesValidInfoImp(const StringType& alias);
	JK_ProductSeriesValidInfoImp(JK_ProductSeriesValidInfoImp&& rhs);
	JK_ProductSeriesValidInfoImp(const JK_ProductSeriesValidInfoImp& rhs);

public:

	JK_ProductSeriesValidInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	ProductSeriesID;
	IntColumn	ProductSeriesItemID;
	IntColumn	PSType;
	IntColumn	ParentID;
	BoolColumn	IsDefault;
	BoolColumn	IsGroup;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	IntColumn	DefaultItemID;
};
extern	JK_ProductSeriesValidInfoImp	JK_ProductSeriesValidInfo;
typedef	JK_ProductSeriesValidInfoImp::SData	JK_ProductSeriesValidInfo_Data;

class JK_ResourceInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	ResourceID_;
		boost::optional<IntColumn::ValueType>	GroupID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	GTypeID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
		boost::optional<StringColumn::ValueType>	ResourceCode_;
		boost::optional<StringColumn::ValueType>	ResourceName_;
		boost::optional<StringColumn::ValueType>	RelativePath_;
		boost::optional<StringColumn::ValueType>	ResourceMemo_;
		boost::optional<StringColumn::ValueType>	HASHCode_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
	};

public:
	JK_ResourceInfoImp(const StringType& alias);
	JK_ResourceInfoImp(JK_ResourceInfoImp&& rhs);
	JK_ResourceInfoImp(const JK_ResourceInfoImp& rhs);

public:

	JK_ResourceInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	ResourceID;
	IntColumn	GroupID;
	IntColumn	FactoryID;
	IntColumn	GTypeID;
	BoolColumn	IsDel;
	FloatColumn	XLen;
	FloatColumn	YLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
	StringColumn	ResourceCode;
	StringColumn	ResourceName;
	StringColumn	RelativePath;
	StringColumn	ResourceMemo;
	StringColumn	HASHCode;
	BigintColumn	VerCode;
};
extern	JK_ResourceInfoImp	JK_ResourceInfo;
typedef	JK_ResourceInfoImp::SData	JK_ResourceInfo_Data;

class JK_SealRuleInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	SealRuleID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	VisibleSealID_;
		boost::optional<IntColumn::ValueType>	InvisibleSealID_;
		boost::optional<FloatColumn::ValueType>	VisPreMill_;
		boost::optional<FloatColumn::ValueType>	InvisPreMill_;
		boost::optional<IntColumn::ValueType>	STypeID_;
		boost::optional<StringColumn::ValueType>	SealRuleName_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_SealRuleInfoImp(const StringType& alias);
	JK_SealRuleInfoImp(JK_SealRuleInfoImp&& rhs);
	JK_SealRuleInfoImp(const JK_SealRuleInfoImp& rhs);

public:

	JK_SealRuleInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	SealRuleID;
	BoolColumn	IsDel;
	IntColumn	VisibleSealID;
	IntColumn	InvisibleSealID;
	FloatColumn	VisPreMill;
	FloatColumn	InvisPreMill;
	IntColumn	STypeID;
	StringColumn	SealRuleName;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_SealRuleInfoImp	JK_SealRuleInfo;
typedef	JK_SealRuleInfoImp::SData	JK_SealRuleInfo_Data;

class JK_SysConfigInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	ConfigID_;
		boost::optional<FloatColumn::ValueType>	TableFrontLen_;
		boost::optional<FloatColumn::ValueType>	TableSideLen_;
		boost::optional<FloatColumn::ValueType>	BaseCabDefaultYPos_;
		boost::optional<FloatColumn::ValueType>	BaseCabSideLen_;
		boost::optional<FloatColumn::ValueType>	WallCabDefaultYPos_;
		boost::optional<FloatColumn::ValueType>	WallCabSideLen_;
		boost::optional<FloatColumn::ValueType>	ToekickFrontLen_;
		boost::optional<FloatColumn::ValueType>	DefaultBarHeight_;
		boost::optional<FloatColumn::ValueType>	DefaultSealExtraLen_;
		boost::optional<FloatColumn::ValueType>	DefaultSealPreMillLen_;
		boost::optional<FloatColumn::ValueType>	ShelfDefaultYPos_;
		boost::optional<FloatColumn::ValueType>	BGPanelDefaultYPos_;
		boost::optional<FloatColumn::ValueType>	TableToCabDefaultYLen_;
		boost::optional<FloatColumn::ValueType>	DefaultBaseCabinetXLen_;
		boost::optional<FloatColumn::ValueType>	DefaultBaseCabinetYLen_;
		boost::optional<FloatColumn::ValueType>	DefaultBaseCabinetZLen_;
		boost::optional<FloatColumn::ValueType>	DefaultWallCabinetXLen_;
		boost::optional<FloatColumn::ValueType>	DefaultWallCabinetYLen_;
		boost::optional<FloatColumn::ValueType>	DefaultWallCabinetZLen_;
		boost::optional<FloatColumn::ValueType>	DefaultLCabinetXLen_;
		boost::optional<FloatColumn::ValueType>	DefaultLCabinetZLen_;
		boost::optional<FloatColumn::ValueType>	DefaultCabinetBoardThick_;
		boost::optional<FloatColumn::ValueType>	DefaultDoorBoardThick_;
		boost::optional<FloatColumn::ValueType>	DefaultThinBoardThick_;
		boost::optional<FloatColumn::ValueType>	DefaultDecorLineHeight_;
		boost::optional<FloatColumn::ValueType>	DefaultDrawerXLen_;
		boost::optional<FloatColumn::ValueType>	DefaultDrawerYLen_;
		boost::optional<FloatColumn::ValueType>	DefaultDrawerZLen_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_SysConfigInfoImp(const StringType& alias);
	JK_SysConfigInfoImp(JK_SysConfigInfoImp&& rhs);
	JK_SysConfigInfoImp(const JK_SysConfigInfoImp& rhs);

public:

	JK_SysConfigInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	ConfigID;
	FloatColumn	TableFrontLen;
	FloatColumn	TableSideLen;
	FloatColumn	BaseCabDefaultYPos;
	FloatColumn	BaseCabSideLen;
	FloatColumn	WallCabDefaultYPos;
	FloatColumn	WallCabSideLen;
	FloatColumn	ToekickFrontLen;
	FloatColumn	DefaultBarHeight;
	FloatColumn	DefaultSealExtraLen;
	FloatColumn	DefaultSealPreMillLen;
	FloatColumn	ShelfDefaultYPos;
	FloatColumn	BGPanelDefaultYPos;
	FloatColumn	TableToCabDefaultYLen;
	FloatColumn	DefaultBaseCabinetXLen;
	FloatColumn	DefaultBaseCabinetYLen;
	FloatColumn	DefaultBaseCabinetZLen;
	FloatColumn	DefaultWallCabinetXLen;
	FloatColumn	DefaultWallCabinetYLen;
	FloatColumn	DefaultWallCabinetZLen;
	FloatColumn	DefaultLCabinetXLen;
	FloatColumn	DefaultLCabinetZLen;
	FloatColumn	DefaultCabinetBoardThick;
	FloatColumn	DefaultDoorBoardThick;
	FloatColumn	DefaultThinBoardThick;
	FloatColumn	DefaultDecorLineHeight;
	FloatColumn	DefaultDrawerXLen;
	FloatColumn	DefaultDrawerYLen;
	FloatColumn	DefaultDrawerZLen;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_SysConfigInfoImp	JK_SysConfigInfo;
typedef	JK_SysConfigInfoImp::SData	JK_SysConfigInfo_Data;

class JK_SysRuleConfigInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	RuleConfigID_;
		boost::optional<IntColumn::ValueType>	RuleTypeID_;
		boost::optional<IntColumn::ValueType>	CabType_;
		boost::optional<FloatColumn::ValueType>	MinXLen_;
		boost::optional<FloatColumn::ValueType>	MinYLen_;
		boost::optional<FloatColumn::ValueType>	MaxXLen_;
		boost::optional<FloatColumn::ValueType>	MaxYLen_;
		boost::optional<IntColumn::ValueType>	UseCount_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_SysRuleConfigInfoImp(const StringType& alias);
	JK_SysRuleConfigInfoImp(JK_SysRuleConfigInfoImp&& rhs);
	JK_SysRuleConfigInfoImp(const JK_SysRuleConfigInfoImp& rhs);

public:

	JK_SysRuleConfigInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	BoolColumn	IsDel;
	IntColumn	RuleConfigID;
	IntColumn	RuleTypeID;
	IntColumn	CabType;
	FloatColumn	MinXLen;
	FloatColumn	MinYLen;
	FloatColumn	MaxXLen;
	FloatColumn	MaxYLen;
	IntColumn	UseCount;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_SysRuleConfigInfoImp	JK_SysRuleConfigInfo;
typedef	JK_SysRuleConfigInfoImp::SData	JK_SysRuleConfigInfo_Data;

class JK_SysRuleTypeInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	RuleTypeID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<StringColumn::ValueType>	RuleTypeName_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<IntColumn::ValueType>	RType_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_SysRuleTypeInfoImp(const StringType& alias);
	JK_SysRuleTypeInfoImp(JK_SysRuleTypeInfoImp&& rhs);
	JK_SysRuleTypeInfoImp(const JK_SysRuleTypeInfoImp& rhs);

public:

	JK_SysRuleTypeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	RuleTypeID;
	BoolColumn	IsDel;
	StringColumn	RuleTypeName;
	BoolColumn	IsDefault;
	IntColumn	RType;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_SysRuleTypeInfoImp	JK_SysRuleTypeInfo;
typedef	JK_SysRuleTypeInfoImp::SData	JK_SysRuleTypeInfo_Data;

class JK_TableTopSideInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	TableTopSideID_;
		boost::optional<IntColumn::ValueType>	TableTopID_;
		boost::optional<BoolColumn::ValueType>	IsDel_;
		boost::optional<IntColumn::ValueType>	ModelID_;
		boost::optional<IntColumn::ValueType>	ShowID_;
		boost::optional<FloatColumn::ValueType>	SideWidth_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BoolColumn::ValueType>	IsDefault_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CreatorID_;
		boost::optional<IntColumn::ValueType>	UpdaterID_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	UpdateTime_;
	};

public:
	JK_TableTopSideInfoImp(const StringType& alias);
	JK_TableTopSideInfoImp(JK_TableTopSideInfoImp&& rhs);
	JK_TableTopSideInfoImp(const JK_TableTopSideInfoImp& rhs);

public:

	JK_TableTopSideInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	TableTopSideID;
	IntColumn	TableTopID;
	BoolColumn	IsDel;
	IntColumn	ModelID;
	IntColumn	ShowID;
	FloatColumn	SideWidth;
	IntColumn	MaterialID;
	BoolColumn	IsDefault;
	BigintColumn	VerCode;
	IntColumn	FactoryID;
	IntColumn	CreatorID;
	IntColumn	UpdaterID;
	DateTimeColumn	CreateTime;
	DateTimeColumn	UpdateTime;
};
extern	JK_TableTopSideInfoImp	JK_TableTopSideInfo;
typedef	JK_TableTopSideInfoImp::SData	JK_TableTopSideInfo_Data;

}
