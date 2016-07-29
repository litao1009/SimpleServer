#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class ZB_BoardGapInfoImp : public Table
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

		boost::optional<BigintColumn::ValueType>	ItemID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	BoardID_;
		boost::optional<IntColumn::ValueType>	GapIndex_;
		boost::optional<IntColumn::ValueType>	GapShape_;
		boost::optional<FloatColumn::ValueType>	XLen_;
		boost::optional<FloatColumn::ValueType>	YLen_;
		boost::optional<FloatColumn::ValueType>	Square_;
		boost::optional<FloatColumn::ValueType>	XOffset_;
		boost::optional<FloatColumn::ValueType>	YOffset_;
		boost::optional<FloatColumn::ValueType>	ZOffset_;
		boost::optional<StringColumn::ValueType>	OrderCode_;
		boost::optional<StringColumn::ValueType>	OldTableName_;
		boost::optional<IntColumn::ValueType>	OldID_;
	};

public:
	ZB_BoardGapInfoImp(const StringType& alias);
	ZB_BoardGapInfoImp(ZB_BoardGapInfoImp&& rhs);
	ZB_BoardGapInfoImp(const ZB_BoardGapInfoImp& rhs);

public:

	ZB_BoardGapInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	ItemID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	BigintColumn	BoardID;
	IntColumn	GapIndex;
	IntColumn	GapShape;
	FloatColumn	XLen;
	FloatColumn	YLen;
	FloatColumn	Square;
	FloatColumn	XOffset;
	FloatColumn	YOffset;
	FloatColumn	ZOffset;
	StringColumn	OrderCode;
	StringColumn	OldTableName;
	IntColumn	OldID;
};
extern	ZB_BoardGapInfoImp	ZB_BoardGapInfo;
typedef	ZB_BoardGapInfoImp::SData	ZB_BoardGapInfo_Data;

class ZB_BoardInfoImp : public Table
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

		boost::optional<BigintColumn::ValueType>	ItemID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	BoardType_;
		boost::optional<BigintColumn::ValueType>	ObjectID_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<BigintColumn::ValueType>	CabinetID_;
		boost::optional<IntColumn::ValueType>	Grain_;
		boost::optional<BoolColumn::ValueType>	IsUserAdd_;
		boost::optional<FloatColumn::ValueType>	XLength_;
		boost::optional<FloatColumn::ValueType>	YLength_;
		boost::optional<FloatColumn::ValueType>	ZLength_;
		boost::optional<FloatColumn::ValueType>	Square_;
		boost::optional<FloatColumn::ValueType>	CutXLength_;
		boost::optional<FloatColumn::ValueType>	CutYLength_;
		boost::optional<StringColumn::ValueType>	OrderCode_;
		boost::optional<StringColumn::ValueType>	Name_;
		boost::optional<StringColumn::ValueType>	ObjectName_;
		boost::optional<StringColumn::ValueType>	ObjectCode_;
		boost::optional<StringColumn::ValueType>	MaterialName_;
		boost::optional<StringColumn::ValueType>	CabinetName_;
		boost::optional<StringColumn::ValueType>	CabinetCode_;
		boost::optional<StringColumn::ValueType>	OldTableName_;
		boost::optional<IntColumn::ValueType>	OldID_;
	};

public:
	ZB_BoardInfoImp(const StringType& alias);
	ZB_BoardInfoImp(ZB_BoardInfoImp&& rhs);
	ZB_BoardInfoImp(const ZB_BoardInfoImp& rhs);

public:

	ZB_BoardInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	ItemID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	IntColumn	BoardType;
	BigintColumn	ObjectID;
	IntColumn	MaterialID;
	BigintColumn	CabinetID;
	IntColumn	Grain;
	BoolColumn	IsUserAdd;
	FloatColumn	XLength;
	FloatColumn	YLength;
	FloatColumn	ZLength;
	FloatColumn	Square;
	FloatColumn	CutXLength;
	FloatColumn	CutYLength;
	StringColumn	OrderCode;
	StringColumn	Name;
	StringColumn	ObjectName;
	StringColumn	ObjectCode;
	StringColumn	MaterialName;
	StringColumn	CabinetName;
	StringColumn	CabinetCode;
	StringColumn	OldTableName;
	IntColumn	OldID;
};
extern	ZB_BoardInfoImp	ZB_BoardInfo;
typedef	ZB_BoardInfoImp::SData	ZB_BoardInfo_Data;

class ZB_BoardSealInfoImp : public Table
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

		boost::optional<BigintColumn::ValueType>	ItemID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	BoardID_;
		boost::optional<IntColumn::ValueType>	SealIndex_;
		boost::optional<IntColumn::ValueType>	MaterialID_;
		boost::optional<FloatColumn::ValueType>	PreMill_;
		boost::optional<StringColumn::ValueType>	OrderCode_;
		boost::optional<StringColumn::ValueType>	MaterialCode_;
		boost::optional<StringColumn::ValueType>	MaterialName_;
		boost::optional<StringColumn::ValueType>	OldTableName_;
		boost::optional<IntColumn::ValueType>	OldID_;
	};

public:
	ZB_BoardSealInfoImp(const StringType& alias);
	ZB_BoardSealInfoImp(ZB_BoardSealInfoImp&& rhs);
	ZB_BoardSealInfoImp(const ZB_BoardSealInfoImp& rhs);

public:

	ZB_BoardSealInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	ItemID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	BigintColumn	BoardID;
	IntColumn	SealIndex;
	IntColumn	MaterialID;
	FloatColumn	PreMill;
	StringColumn	OrderCode;
	StringColumn	MaterialCode;
	StringColumn	MaterialName;
	StringColumn	OldTableName;
	IntColumn	OldID;
};
extern	ZB_BoardSealInfoImp	ZB_BoardSealInfo;
typedef	ZB_BoardSealInfoImp::SData	ZB_BoardSealInfo_Data;

class ZB_ObjectsImp : public Table
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

		boost::optional<BigintColumn::ValueType>	ItemID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ObjectType_;
		boost::optional<BigintColumn::ValueType>	ParentID_;
		boost::optional<IntColumn::ValueType>	GType_;
		boost::optional<FloatColumn::ValueType>	XLength_;
		boost::optional<FloatColumn::ValueType>	YLength_;
		boost::optional<FloatColumn::ValueType>	ZLength_;
		boost::optional<FloatColumn::ValueType>	ShapeXLength_;
		boost::optional<FloatColumn::ValueType>	ShapeZLength_;
		boost::optional<FloatColumn::ValueType>	GapXLength_;
		boost::optional<FloatColumn::ValueType>	GapYLength_;
		boost::optional<FloatColumn::ValueType>	GapZLength_;
		boost::optional<FloatColumn::ValueType>	Amount_;
		boost::optional<BoolColumn::ValueType>	IsStandard_;
		boost::optional<BoolColumn::ValueType>	IsUserAdd_;
		boost::optional<IntColumn::ValueType>	MaterialPlanID_;
		boost::optional<IntColumn::ValueType>	CabGapType_;
		boost::optional<IntColumn::ValueType>	CabShape_;
		boost::optional<StringColumn::ValueType>	OrderCode_;
		boost::optional<StringColumn::ValueType>	Name_;
		boost::optional<StringColumn::ValueType>	Code_;
		boost::optional<StringColumn::ValueType>	MaterialPlanName_;
		boost::optional<StringColumn::ValueType>	BarCode_;
		boost::optional<StringColumn::ValueType>	Remarks_;
		boost::optional<StringColumn::ValueType>	OldTableName_;
		boost::optional<IntColumn::ValueType>	OldID_;
	};

public:
	ZB_ObjectsImp(const StringType& alias);
	ZB_ObjectsImp(ZB_ObjectsImp&& rhs);
	ZB_ObjectsImp(const ZB_ObjectsImp& rhs);

public:

	ZB_ObjectsImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	ItemID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	IntColumn	FactoryID;
	IntColumn	ObjectType;
	BigintColumn	ParentID;
	IntColumn	GType;
	FloatColumn	XLength;
	FloatColumn	YLength;
	FloatColumn	ZLength;
	FloatColumn	ShapeXLength;
	FloatColumn	ShapeZLength;
	FloatColumn	GapXLength;
	FloatColumn	GapYLength;
	FloatColumn	GapZLength;
	FloatColumn	Amount;
	BoolColumn	IsStandard;
	BoolColumn	IsUserAdd;
	IntColumn	MaterialPlanID;
	IntColumn	CabGapType;
	IntColumn	CabShape;
	StringColumn	OrderCode;
	StringColumn	Name;
	StringColumn	Code;
	StringColumn	MaterialPlanName;
	StringColumn	BarCode;
	StringColumn	Remarks;
	StringColumn	OldTableName;
	IntColumn	OldID;
};
extern	ZB_ObjectsImp	ZB_Objects;
typedef	ZB_ObjectsImp::SData	ZB_Objects_Data;

class ZB_OrderInfoImp : public Table
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

		boost::optional<BigintColumn::ValueType>	ItemID_;
		boost::optional<IntColumn::ValueType>	OrderCate_;
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<BigintColumn::ValueType>	ParentID_;
		boost::optional<IntColumn::ValueType>	OrderType_;
		boost::optional<IntColumn::ValueType>	OrderIndex_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<BigintColumn::ValueType>	VerCode_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	PreSurveyorID_;
		boost::optional<IntColumn::ValueType>	ReSurveyorID_;
		boost::optional<IntColumn::ValueType>	DesignerID_;
		boost::optional<IntColumn::ValueType>	SellerID_;
		boost::optional<IntColumn::ValueType>	AuditorID_;
		boost::optional<FloatColumn::ValueType>	Square_;
		boost::optional<DateTimeColumn::ValueType>	CreateTime_;
		boost::optional<DateTimeColumn::ValueType>	PreSurveyTime_;
		boost::optional<DateTimeColumn::ValueType>	ReSurveyTime_;
		boost::optional<DateTimeColumn::ValueType>	OrderTime_;
		boost::optional<DateTimeColumn::ValueType>	DeliveryTime_;
		boost::optional<DateTimeColumn::ValueType>	InstallTime_;
		boost::optional<StringColumn::ValueType>	ShopName_;
		boost::optional<StringColumn::ValueType>	ShopCode_;
		boost::optional<StringColumn::ValueType>	OrderCode_;
		boost::optional<StringColumn::ValueType>	DesignerName_;
		boost::optional<StringColumn::ValueType>	DesignerUserCode_;
		boost::optional<StringColumn::ValueType>	PreSurveyorName_;
		boost::optional<StringColumn::ValueType>	PreSurveyorCode_;
		boost::optional<StringColumn::ValueType>	ReSurveyorName_;
		boost::optional<StringColumn::ValueType>	ReSurveyorCode_;
		boost::optional<StringColumn::ValueType>	SellerName_;
		boost::optional<StringColumn::ValueType>	SellerUserCode_;
		boost::optional<StringColumn::ValueType>	AuditorName_;
		boost::optional<StringColumn::ValueType>	AuditorUserCode_;
		boost::optional<StringColumn::ValueType>	GeoCode_;
		boost::optional<StringColumn::ValueType>	GeoName_;
		boost::optional<StringColumn::ValueType>	OrderTitle_;
		boost::optional<StringColumn::ValueType>	CustomerName_;
		boost::optional<StringColumn::ValueType>	CustomerTel_;
		boost::optional<StringColumn::ValueType>	CustomerPostCode_;
		boost::optional<StringColumn::ValueType>	CustomerQQ_;
		boost::optional<StringColumn::ValueType>	CustomerEmail_;
		boost::optional<StringColumn::ValueType>	InstallAddress_;
		boost::optional<StringColumn::ValueType>	OrderRemarks_;
		boost::optional<StringColumn::ValueType>	PlanName_;
		boost::optional<StringColumn::ValueType>	PlanRemarks_;
		boost::optional<StringColumn::ValueType>	AttachFilePath_;
	};

public:
	ZB_OrderInfoImp(const StringType& alias);
	ZB_OrderInfoImp(ZB_OrderInfoImp&& rhs);
	ZB_OrderInfoImp(const ZB_OrderInfoImp& rhs);

public:

	ZB_OrderInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	ItemID;
	IntColumn	OrderCate;
	BigintColumn	OrderID;
	BigintColumn	ParentID;
	IntColumn	OrderType;
	IntColumn	OrderIndex;
	IntColumn	FactoryID;
	BigintColumn	VerCode;
	IntColumn	ShopID;
	IntColumn	PreSurveyorID;
	IntColumn	ReSurveyorID;
	IntColumn	DesignerID;
	IntColumn	SellerID;
	IntColumn	AuditorID;
	FloatColumn	Square;
	DateTimeColumn	CreateTime;
	DateTimeColumn	PreSurveyTime;
	DateTimeColumn	ReSurveyTime;
	DateTimeColumn	OrderTime;
	DateTimeColumn	DeliveryTime;
	DateTimeColumn	InstallTime;
	StringColumn	ShopName;
	StringColumn	ShopCode;
	StringColumn	OrderCode;
	StringColumn	DesignerName;
	StringColumn	DesignerUserCode;
	StringColumn	PreSurveyorName;
	StringColumn	PreSurveyorCode;
	StringColumn	ReSurveyorName;
	StringColumn	ReSurveyorCode;
	StringColumn	SellerName;
	StringColumn	SellerUserCode;
	StringColumn	AuditorName;
	StringColumn	AuditorUserCode;
	StringColumn	GeoCode;
	StringColumn	GeoName;
	StringColumn	OrderTitle;
	StringColumn	CustomerName;
	StringColumn	CustomerTel;
	StringColumn	CustomerPostCode;
	StringColumn	CustomerQQ;
	StringColumn	CustomerEmail;
	StringColumn	InstallAddress;
	StringColumn	OrderRemarks;
	StringColumn	PlanName;
	StringColumn	PlanRemarks;
	StringColumn	AttachFilePath;
};
extern	ZB_OrderInfoImp	ZB_OrderInfo;
typedef	ZB_OrderInfoImp::SData	ZB_OrderInfo_Data;

}
