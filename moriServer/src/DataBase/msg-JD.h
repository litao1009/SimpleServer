#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class JD_BoardGapInfoImp : public Table
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
	JD_BoardGapInfoImp(const StringType& alias);
	JD_BoardGapInfoImp(JD_BoardGapInfoImp&& rhs);
	JD_BoardGapInfoImp(const JD_BoardGapInfoImp& rhs);

public:

	JD_BoardGapInfoImp	operator() (const StringType& alias);
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
extern	JD_BoardGapInfoImp	JD_BoardGapInfo;
typedef	JD_BoardGapInfoImp::SData	JD_BoardGapInfo_Data;

class JD_BoardInfoImp : public Table
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
	JD_BoardInfoImp(const StringType& alias);
	JD_BoardInfoImp(JD_BoardInfoImp&& rhs);
	JD_BoardInfoImp(const JD_BoardInfoImp& rhs);

public:

	JD_BoardInfoImp	operator() (const StringType& alias);
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
extern	JD_BoardInfoImp	JD_BoardInfo;
typedef	JD_BoardInfoImp::SData	JD_BoardInfo_Data;

class JD_BoardSealInfoImp : public Table
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
	JD_BoardSealInfoImp(const StringType& alias);
	JD_BoardSealInfoImp(JD_BoardSealInfoImp&& rhs);
	JD_BoardSealInfoImp(const JD_BoardSealInfoImp& rhs);

public:

	JD_BoardSealInfoImp	operator() (const StringType& alias);
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
extern	JD_BoardSealInfoImp	JD_BoardSealInfo;
typedef	JD_BoardSealInfoImp::SData	JD_BoardSealInfo_Data;

class JD_ObjectsImp : public Table
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
	JD_ObjectsImp(const StringType& alias);
	JD_ObjectsImp(JD_ObjectsImp&& rhs);
	JD_ObjectsImp(const JD_ObjectsImp& rhs);

public:

	JD_ObjectsImp	operator() (const StringType& alias);
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
extern	JD_ObjectsImp	JD_Objects;
typedef	JD_ObjectsImp::SData	JD_Objects_Data;

class JD_OrderInfoImp : public Table
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
	JD_OrderInfoImp(const StringType& alias);
	JD_OrderInfoImp(JD_OrderInfoImp&& rhs);
	JD_OrderInfoImp(const JD_OrderInfoImp& rhs);

public:

	JD_OrderInfoImp	operator() (const StringType& alias);
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
extern	JD_OrderInfoImp	JD_OrderInfo;
typedef	JD_OrderInfoImp::SData	JD_OrderInfo_Data;

}
