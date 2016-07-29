drop table if exists	ST_CabBoard;
create table ST_CabBoard
(
	CabBoardID	int not null,
	CabID	int not null,
	CabBoardName	national varchar(50) not null,
	MatID	int not null,
	MaterialName	national varchar(50) not null,
	SkinDirection	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	primary key )
);

drop table if exists	ST_CabBoardGap;
create table ST_CabBoardGap
(
	CabBoardID	int not null,
	GapIndex	int not null,
	GapShape	int not null,
	XLen	float not null,
	YLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	primary key )
);

drop table if exists	ST_CabBoardSeal;
create table ST_CabBoardSeal
(
	CabBoardID	int not null,
	SealIndex	int not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	MaterialCode	national varchar(50) not null,
	PreMill	float not null,
	primary key )
);

drop table if exists	ST_CabDoorBoard;
create table ST_CabDoorBoard
(
	CabDoorBoardID	int not null,
	CabDoorID	int not null,
	SplitType	int not null,
	DoorBoardName	national varchar(50) not null,
	MatID	int not null,
	MaterialName	national varchar(50) not null,
	SkinDirection	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	primary key )
);

drop table if exists	ST_CabDoorBoardGap;
create table ST_CabDoorBoardGap
(
	CabDoorBoardID	int not null,
	GapIndex	int not null,
	GapShape	int not null,
	XLen	float not null,
	YLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	primary key )
);

drop table if exists	ST_CabDoorBoardSeal;
create table ST_CabDoorBoardSeal
(
	CabDoorBoardID	int not null,
	SealIndex	int not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	MaterialCode	national varchar(50) not null,
	PreMill	float not null,
	primary key )
);

drop table if exists	ST_CabDoorHWF;
create table ST_CabDoorHWF
(
	CabDoorSystemID	int not null,
	HWFittingID	int not null,
	HWFittingName	national varchar(50) not null,
	HWFittingCode	national varchar(50) not null,
	GTypeID	int not null,
	UseCount	int not null,
	primary key )
);

drop table if exists	ST_CabDoorHandle;
create table ST_CabDoorHandle
(
	CabDoorSystemID	int not null,
	HandleID	int not null,
	HWFittingName	national varchar(50) not null,
	HWFittingCode	national varchar(50) not null,
	GTypeID	int not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	primary key )
);

drop table if exists	ST_CabDoorRegionFNF;
create table ST_CabDoorRegionFNF
(
	CabDoorSystemID	int not null,
	FNFittingID	int not null,
	FNFittingName	national varchar(50) not null,
	FNFittingCode	national varchar(50) not null,
	GTypeID	int not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	primary key )
);

drop table if exists	ST_CabDoorSlide;
create table ST_CabDoorSlide
(
	CabDoorSystemID	int not null,
	SlideID	int not null,
	HWFittingName	national varchar(50) not null,
	HWFittingCode	national varchar(50) not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	primary key )
);

drop table if exists	ST_CabDoorSys;
create table ST_CabDoorSys
(
	CabID	int not null,
	CabDoorSystemID	int not null,
	DoorSystemName	national varchar(50) not null,
	DoorSystemCode	national varchar(50) not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	DoorMatPlanID	int not null,
	DoorMatPlanName	national varchar(50) not null,
	MatID	int not null,
	MaterialName	national varchar(50) not null,
	primary key )
);

drop table if exists	ST_CabDoorUnit;
create table ST_CabDoorUnit
(
	CabDoorSystemID	int not null,
	CabDoorID	int not null,
	DoorID	int not null,
	DoorName	national varchar(50) not null,
	DoorCode	national varchar(50) not null,
	CombineType	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	DoorMatPlanID	int not null,
	DoorMatPlanName	national varchar(50) not null,
	MatGTypeID	int not null,
	primary key )
);

drop table if exists	ST_CabFNF;
create table ST_CabFNF
(
	CabFNFID	int not null,
	ContainerID	int not null,
	FNFittingID	int not null,
	FNFittingName	national varchar(0) not null,
	FNFittingCode	national varchar(0) not null,
	GTypeID	int not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_CabFNFToBoard;
create table ST_CabFNFToBoard
(
	FNFittingID	int not null,
	FNFittingPartID	int not null,
	FNFittingPartName	national varchar(50) not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	SkinDirection	int not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	primary key )
);

drop table if exists	ST_CabFNFToObject;
create table ST_CabFNFToObject
(
	CabFNFID	int not null,
	CabFNFPartID	int not null,
	HWFittingID	int not null,
	HWFittingName	national varchar(50) not null,
	HWFittingCode	national varchar(50) not null,
	GTypeID	int not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	primary key )
);

drop table if exists	ST_CabFoot;
create table ST_CabFoot
(
	HWFittingID	int not null,
	HWFittingName	national varchar(50) not null,
	HWFittingCode	national varchar(50) not null,
	GTypeID	int not null,
	FootCount	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	CabID	int not null,
	primary key )
);

drop table if exists	ST_Cabinet;
create table ST_Cabinet
(
	CabID	int not null,
	CabDesignName	national varchar(50) not null,
	CabDesignCode	national varchar(50) not null,
	CabGapType	int not null,
	CabShapeID	int not null,
	CabMatPlanID	int not null,
	CabMatPlanName	national varchar(50) not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	ShapeXLen	float not null,
	ShapeZLen	float not null,
	GapXLen	float not null,
	GapYLen	float not null,
	GapZLen	float not null,
	IsStandard	bool not null,
	FootID	int not null,
	FootCount	int not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_CabinetFNF;
create table ST_CabinetFNF
(
	DesignOwnerID	int not null,
	FNFittingID	int not null,
	FNFittingName	national varchar(0) not null,
	FNFittingCode	national varchar(0) not null,
	GTypeID	int not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	primary key )
);

drop table if exists	ST_DecorBoard;
create table ST_DecorBoard
(
	DesignDecorBoardID	int not null,
	DesignParentID	int not null,
	DecorBoardID	int not null,
	DecorBoardName	national varchar(50) not null,
	DecorBoardCode	national varchar(50) not null,
	GTypeID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_DecorBoardUnitBoard;
create table ST_DecorBoardUnitBoard
(
	DesignDecorBoardUnitID	int not null,
	DesignDecorBoardID	int not null,
	DecorBoardUnitName	national varchar(50) not null,
	GTypeID	int not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	SkinDirection	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	primary key )
);

drop table if exists	ST_DecorBoardUnitBoardSeal;
create table ST_DecorBoardUnitBoardSeal
(
	DesignDecorBoardUnitID	int not null,
	SealIndex	int not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	MaterialCode	national varchar(50) not null,
	PreMill	float not null,
	primary key )
);

drop table if exists	ST_DecorLine;
create table ST_DecorLine
(
	DecorLineID	int not null,
	DecorLineName	national varchar(50) not null,
	DecorLineCode	national varchar(50) not null,
	GTypeID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_DecorLineSpecial;
create table ST_DecorLineSpecial
(
	DecorLineID	int not null,
	DecorLineName	national varchar(50) not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_DecorRoom;
create table ST_DecorRoom
(
	DecorID	int not null,
	DecorName	national varchar(50) not null,
	DecorCode	national varchar(50) not null,
	GTypeID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_FittingInfo;
create table ST_FittingInfo
(
	FittingName	national varchar(50) not null,
	FittingCode	national varchar(50) not null,
	GTypeID	int not null,
	FittingCount	int not null,
	primary key )
);

drop table if exists	ST_HWFInfo;
create table ST_HWFInfo
(
	HWFittingID	int not null,
	HWFittingName	national varchar(50) not null,
	HWFittingCode	national varchar(50) not null,
	GTypeID	int not null,
	UseCount	int not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_OrderInfo;
create table ST_OrderInfo
(
	OrderCate	int not null,
	DeptName	national varchar(50) not null,
	DeptCode	national varchar(100) not null,
	DesignerName	national varchar(50) not null,
	DesignerCode	national varchar(50) not null,
	SellerID	int not null,
	SellerName	national varchar(50) not null,
	SellerCode	national varchar(50) not null,
	AuditorName	national varchar(50) not null,
	AuditorCode	national varchar(50) not null,
	OrderTime	datetime not null,
	DeliveryTime	datetime not null,
	GeoName	national varchar(50) not null,
	OrderTitle	national varchar(100) not null,
	CustomerName	national varchar(50) not null,
	CustomerTel	national varchar(50) not null,
	CustomerPostcode	national varchar(50) not null,
	CustomerQQ	national varchar(50) not null,
	CustomerEmail	national varchar(50) not null,
	InstallAddress	national varchar(50) not null,
	OrderMemo	national varchar(50) not null,
	VerCode	bigint not null,
	DesignPlanName	national varchar(50) not null,
	DesignPlanMemo	national varchar(500) not null,
	primary key )
);

drop table if exists	ST_PackInfo;
create table ST_PackInfo
(
	FittingPackID	int not null,
	IsSeparate	bool not null,
	FittingPackName	national varchar(50) not null,
	FittingPackCode	national varchar(50) not null,
	FittingName	national varchar(50) not null,
	FittingCode	national varchar(50) not null,
	FittingID	int not null,
	FittingCount	int not null,
	UseCount	int not null,
	primary key )
);

drop table if exists	ST_Product;
create table ST_Product
(
	ProductID	int not null,
	ProductName	national varchar(50) not null,
	ProductCode	national varchar(50) not null,
	GTypeID	int not null,
	VerCode	bigint not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	primary key )
);

drop table if exists	ST_RoomTable;
create table ST_RoomTable
(
	DesignTableID	int not null,
	TableID	int not null,
	MaterialName	national varchar(50) not null,
	MaterialCode	national varchar(50) not null,
	GTypeID	int not null,
	ZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_TablePart;
create table ST_TablePart
(
	DesignTableID	int not null,
	DecorLineID	int not null,
	DecorLineName	national varchar(50) not null,
	DecorLineCode	national varchar(50) not null,
	GTypeID	int not null,
	ZLen	float not null,
	MaterialID	int not null,
	MaterialName	national varchar(50) not null,
	VerCode	bigint not null,
	primary key )
);

drop table if exists	ST_WallDecor;
create table ST_WallDecor
(
	DecorID	int not null,
	DecorName	national varchar(0) not null,
	DecorCode	national varchar(0) not null,
	GTypeID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	VerCode	bigint not null,
	primary key )
);

