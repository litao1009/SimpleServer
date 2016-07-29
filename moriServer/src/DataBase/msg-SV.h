#pragma once

#include "AutoDB/Table.h"
#include "AutoDB/DBColumn.h"
#include "AutoDB/Optional.h"

namespace autoDB
{
class SV_BOMChargeInfoImp : public Table
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

		boost::optional<BigintColumn::ValueType>	BOMChargeID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	CategoryID_;
		boost::optional<IntColumn::ValueType>	Enable_;
	};

public:
	SV_BOMChargeInfoImp(const StringType& alias);
	SV_BOMChargeInfoImp(SV_BOMChargeInfoImp&& rhs);
	SV_BOMChargeInfoImp(const SV_BOMChargeInfoImp& rhs);

public:

	SV_BOMChargeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	BOMChargeID;
	IntColumn	FactoryID;
	IntColumn	CategoryID;
	IntColumn	Enable;
};
extern	SV_BOMChargeInfoImp	SV_BOMChargeInfo;
typedef	SV_BOMChargeInfoImp::SData	SV_BOMChargeInfo_Data;

class SV_ChargeShopInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	RecordID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<DateTimeColumn::ValueType>	StartTime_;
		boost::optional<DateTimeColumn::ValueType>	StopTime_;
	};

public:
	SV_ChargeShopInfoImp(const StringType& alias);
	SV_ChargeShopInfoImp(SV_ChargeShopInfoImp&& rhs);
	SV_ChargeShopInfoImp(const SV_ChargeShopInfoImp& rhs);

public:

	SV_ChargeShopInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	RecordID;
	IntColumn	FactoryID;
	IntColumn	ShopID;
	IntColumn	UserID;
	DateTimeColumn	StartTime;
	DateTimeColumn	StopTime;
};
extern	SV_ChargeShopInfoImp	SV_ChargeShopInfo;
typedef	SV_ChargeShopInfoImp::SData	SV_ChargeShopInfo_Data;

class SV_LibFileInfoImp : public Table
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
		boost::optional<StringColumn::ValueType>	HashCode_;
		boost::optional<StringColumn::ValueType>	DestPath_;
	};

public:
	SV_LibFileInfoImp(const StringType& alias);
	SV_LibFileInfoImp(SV_LibFileInfoImp&& rhs);
	SV_LibFileInfoImp(const SV_LibFileInfoImp& rhs);

public:

	SV_LibFileInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	DeptID;
	StringColumn	HashCode;
	StringColumn	DestPath;
};
extern	SV_LibFileInfoImp	SV_LibFileInfo;
typedef	SV_LibFileInfoImp::SData	SV_LibFileInfo_Data;

class SV_ModuleChargeInfoImp : public Table
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

		boost::optional<BigintColumn::ValueType>	ModuleChargeID_;
		boost::optional<IntColumn::ValueType>	ModuleID_;
		boost::optional<IntColumn::ValueType>	FactoryID_;
		boost::optional<IntColumn::ValueType>	ShopID_;
		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<DateTimeColumn::ValueType>	StartTime_;
		boost::optional<DateTimeColumn::ValueType>	StopTime_;
	};

public:
	SV_ModuleChargeInfoImp(const StringType& alias);
	SV_ModuleChargeInfoImp(SV_ModuleChargeInfoImp&& rhs);
	SV_ModuleChargeInfoImp(const SV_ModuleChargeInfoImp& rhs);

public:

	SV_ModuleChargeInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	ModuleChargeID;
	IntColumn	ModuleID;
	IntColumn	FactoryID;
	IntColumn	ShopID;
	IntColumn	UserID;
	DateTimeColumn	StartTime;
	DateTimeColumn	StopTime;
};
extern	SV_ModuleChargeInfoImp	SV_ModuleChargeInfo;
typedef	SV_ModuleChargeInfoImp::SData	SV_ModuleChargeInfo_Data;

class SV_OrderActionRecordInfoImp : public Table
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
		boost::optional<BigintColumn::ValueType>	OrderID_;
		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<IntColumn::ValueType>	ActionID_;
		boost::optional<DateTimeColumn::ValueType>	RecordTime_;
		boost::optional<StringColumn::ValueType>	AuditComment_;
	};

public:
	SV_OrderActionRecordInfoImp(const StringType& alias);
	SV_OrderActionRecordInfoImp(SV_OrderActionRecordInfoImp&& rhs);
	SV_OrderActionRecordInfoImp(const SV_OrderActionRecordInfoImp& rhs);

public:

	SV_OrderActionRecordInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	RecordID;
	BigintColumn	OrderID;
	IntColumn	UserID;
	IntColumn	ActionID;
	DateTimeColumn	RecordTime;
	StringColumn	AuditComment;
};
extern	SV_OrderActionRecordInfoImp	SV_OrderActionRecordInfo;
typedef	SV_OrderActionRecordInfoImp::SData	SV_OrderActionRecordInfo_Data;

class SV_OrderFileInfoImp : public Table
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
		boost::optional<IntColumn::ValueType>	TableType_;
		boost::optional<StringColumn::ValueType>	FilePath_;
	};

public:
	SV_OrderFileInfoImp(const StringType& alias);
	SV_OrderFileInfoImp(SV_OrderFileInfoImp&& rhs);
	SV_OrderFileInfoImp(const SV_OrderFileInfoImp& rhs);

public:

	SV_OrderFileInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	BigintColumn	OrderID;
	IntColumn	TableType;
	StringColumn	FilePath;
};
extern	SV_OrderFileInfoImp	SV_OrderFileInfo;
typedef	SV_OrderFileInfoImp::SData	SV_OrderFileInfo_Data;

class SV_UserLoginStatusInfoImp : public Table
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

		boost::optional<IntColumn::ValueType>	LoginType_;
		boost::optional<IntColumn::ValueType>	UserID_;
		boost::optional<IntColumn::ValueType>	LoginStatus_;
		boost::optional<DateTimeColumn::ValueType>	LoginTime_;
		boost::optional<DateTimeColumn::ValueType>	LastVisitTime_;
		boost::optional<StringColumn::ValueType>	LoginIP_;
	};

public:
	SV_UserLoginStatusInfoImp(const StringType& alias);
	SV_UserLoginStatusInfoImp(SV_UserLoginStatusInfoImp&& rhs);
	SV_UserLoginStatusInfoImp(const SV_UserLoginStatusInfoImp& rhs);

public:

	SV_UserLoginStatusInfoImp	operator() (const StringType& alias);
	SColumns	Into ( SData& val );
	SColumns	Use ( const SData& val );

public:
	IntColumn	LoginType;
	IntColumn	UserID;
	IntColumn	LoginStatus;
	DateTimeColumn	LoginTime;
	DateTimeColumn	LastVisitTime;
	StringColumn	LoginIP;
};
extern	SV_UserLoginStatusInfoImp	SV_UserLoginStatusInfo;
typedef	SV_UserLoginStatusInfoImp::SData	SV_UserLoginStatusInfo_Data;

}
