drop table if exists	SV_BOMChargeInfo;
create table SV_BOMChargeInfo
(
	BOMChargeID	bigint not null,
	FactoryID	int not null,
	CategoryID	int not null,
	Enable	int not null,
	primary key (FactoryID)
);

drop table if exists	SV_ChargeShopInfo;
create table SV_ChargeShopInfo
(
	RecordID	int not null,
	FactoryID	int not null,
	ShopID	int not null,
	UserID	int not null,
	StartTime	datetime not null,
	StopTime	datetime not null,
	primary key (RecordID,FactoryID,ShopID,UserID)
);

drop table if exists	SV_LibFileInfo;
create table SV_LibFileInfo
(
	DeptID	int not null,
	HashCode	national varchar(32) not null,
	DestPath	national varchar(255) not null,
	primary key (DeptID,HashCode)
);

drop table if exists	SV_ModuleChargeInfo;
create table SV_ModuleChargeInfo
(
	ModuleChargeID	bigint not null,
	ModuleID	int not null,
	FactoryID	int not null,
	ShopID	int not null,
	UserID	int not null,
	StartTime	datetime not null,
	StopTime	datetime not null,
	primary key )
);

drop table if exists	SV_OrderActionRecordInfo;
create table SV_OrderActionRecordInfo
(
	RecordID	bigint not null,
	OrderID	bigint not null,
	UserID	int not null,
	ActionID	int not null,
	RecordTime	datetime not null,
	AuditComment	national varchar(500) not null,
	primary key (RecordID)
);

drop table if exists	SV_OrderFileInfo;
create table SV_OrderFileInfo
(
	OrderID	bigint not null,
	TableType	int not null,
	FilePath	national varchar(255) not null,
	primary key (OrderID,TableType)
);

drop table if exists	SV_UserLoginStatusInfo;
create table SV_UserLoginStatusInfo
(
	LoginType	int not null,
	UserID	int not null,
	LoginStatus	int not null,
	LoginTime	datetime not null,
	LastVisitTime	datetime not null,
	LoginIP	national varchar(32) not null,
	primary key (LoginType,UserID)
);

