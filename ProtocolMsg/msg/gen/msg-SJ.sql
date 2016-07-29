drop table if exists	SJ_CabBoardGapInfo;
create table SJ_CabBoardGapInfo
(
	CabBoardGapID	int not null,
	CabBoardID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	CabStructBoardID	int not null,
	CabStructBoardGapID	int not null,
	GapPos	int not null,
	GapIndex	int not null,
	GapType	int not null,
	GapShape	int not null,
	XLen	float not null,
	YLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabBoardGapID,CabBoardID,OrderCate,OrderID)
);

drop table if exists	SJ_CabBoardInfo;
create table SJ_CabBoardInfo
(
	CabBoardID	int not null,
	CabID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	CabinetSizeID	int not null,
	CabStructBoardID	int not null,
	CabinetSizeBoardID	int not null,
	CabMatPlanID	int not null,
	MatID	int not null,
	MatGType	int not null,
	SkinDirection	int not null,
	SealRuleID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	IsChangedOffset	bool not null,
	IsFakeDel	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	CabBoardName	national varchar(50) not null,
	primary key (CabBoardID,CabID,OrderCate,OrderID)
);

drop table if exists	SJ_CabBoardSealInfo;
create table SJ_CabBoardSealInfo
(
	CabBoardSealID	int not null,
	CabBoardID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	CabStructBoardSealID	int not null,
	CabStructBoardID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	SealType	int not null,
	SealIndex	int not null,
	MaterialID	int not null,
	PreMill	float not null,
	primary key (CabBoardSealID,CabBoardID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorBoardGapInfo;
create table SJ_CabDoorBoardGapInfo
(
	CabDoorBoardGapID	int not null,
	CabDoorBoardID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DoorBoardGapID	int not null,
	DoorBoardID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	GapPos	int not null,
	GapIndex	int not null,
	GapType	int not null,
	GapShape	int not null,
	XLen	float not null,
	YLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorBoardGapID,CabDoorBoardID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorBoardInfo;
create table SJ_CabDoorBoardInfo
(
	CabDoorBoardID	int not null,
	CabDoorID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DoorBoardID	int not null,
	DoorID	int not null,
	DoorBoardIndex	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	DoorMatPlanID	int not null,
	MatID	int not null,
	MatGType	int not null,
	SkinDirection	int not null,
	SealRuleID	int not null,
	ModelID	int not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorBoardID,CabDoorID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorBoardSealInfo;
create table SJ_CabDoorBoardSealInfo
(
	CabDoorBoardSealID	int not null,
	CabDoorBoardID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DoorBoardID	int not null,
	SealIndex	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	SealType	int not null,
	MaterialID	int not null,
	PreMill	float not null,
	primary key (CabDoorBoardSealID,CabDoorBoardID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorHWFInfo;
create table SJ_CabDoorHWFInfo
(
	CabDoorHWFID	int not null,
	CabDoorRegionID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	HWFittingID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	SupplyType	int not null,
	GTypeID	int not null,
	SettingCountRuleID	int not null,
	UseCount	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorHWFID,CabDoorRegionID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorHandleInfo;
create table SJ_CabDoorHandleInfo
(
	CabDoorHandleID	int not null,
	CabParentID	int not null,
	ParentType	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	CabDesignDoorRegionID	int not null,
	CabDesignDoorRegionHandleID	int not null,
	OwnerID	int not null,
	DoorMatPlanID	int not null,
	HandleID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	MatchType	int not null,
	IsChangedOffset	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	ArcZ	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorHandleID,CabParentID,ParentType,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorInfo;
create table SJ_CabDoorInfo
(
	CabDoorID	int not null,
	CabParentID	int not null,
	ParentType	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	OwnerID	int not null,
	DoorMatPlanID	int not null,
	DoorID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorID,CabParentID,ParentType,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorRegionInfo;
create table SJ_CabDoorRegionInfo
(
	CabDoorRegionID	int not null,
	CabDoorSystemID	int not null,
	ParentCabRegionID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DoorSystemRegionID	int not null,
	DoorSystemID	int not null,
	CabDesignDoorRegionID	int not null,
	CabDesignDoorSystemID	int not null,
	CabDesignID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	IsUserDefineSize	bool not null,
	IsUserDefinePos	bool not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	XAdjustLen	float not null,
	YAdjustLen	float not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	CutXLen	float not null,
	CutYLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	RealXOffsetLen	float not null,
	RealYOffsetLen	float not null,
	RealZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorRegionID,CabDoorSystemID,ParentCabRegionID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorSlideInfo;
create table SJ_CabDoorSlideInfo
(
	CabDoorSlideID	int not null,
	CabDoorRegionID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DoorSystemRegionID	int not null,
	SlideID	int not null,
	GTypeID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	SlidePosition	int not null,
	SupplyType	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorSlideID,CabDoorRegionID,OrderCate,OrderID)
);

drop table if exists	SJ_CabDoorSystemInfo;
create table SJ_CabDoorSystemInfo
(
	CabDoorSystemID	int not null,
	CabID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	CabDesignDoorSystemID	int not null,
	CabDesignID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	DoorSystemID	int not null,
	DoorMatPlanID	int not null,
	SupplyType	int not null,
	IsFakeDel	bool not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	XAdjustLen	float not null,
	YAdjustLen	float not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	RealXOffsetLen	float not null,
	RealYOffsetLen	float not null,
	RealZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDoorSystemID,CabID,OrderCate,OrderID)
);

drop table if exists	SJ_CabFNFHWFInfo;
create table SJ_CabFNFHWFInfo
(
	CabFNFHWFID	int not null,
	CabFNFID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	FNFittingID	int not null,
	HWFittingID	int not null,
	FittingType	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	IsFakeDel	int not null,
	UseCount	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabFNFHWFID,CabFNFID,OrderCate,OrderID,DesignPlanID)
);

drop table if exists	SJ_CabFNFHoleInfo;
create table SJ_CabFNFHoleInfo
(
	CabFNFHoleID	int not null,
	CabFNFID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	HoleID	int not null,
	FNFittingID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	HoleTypeID	int not null,
	HolePicID	int not null,
	XLen	float not null,
	YLen	float not null,
	OverHeight	float not null,
	MinXDistance	float not null,
	MinZDistance	float not null,
	primary key (CabFNFHoleID,CabFNFID,OrderCate,OrderID)
);

drop table if exists	SJ_CabFNFInfo;
create table SJ_CabFNFInfo
(
	CabFNFID	int not null,
	DesignOwnerID	int not null,
	DesignOwnerGTypeID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	ContainerID	int not null,
	ContainerGTypeID	int not null,
	CabDesignFNFittingID	int not null,
	FNFittingID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	DockObjID	int not null,
	DockObjType	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	HasMark	bool not null,
	IsFakeDel	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	MaterialID	int not null,
	SupplyType	int not null,
	GTypeID	int not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	YPos	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	UserMemo	national varchar(500) not null,
	primary key (CabFNFID,DesignOwnerID,DesignOwnerGTypeID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_CabFNFPartInfo;
create table SJ_CabFNFPartInfo
(
	CabFNFPartID	int not null,
	CabFNFID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	FNFittingPartID	int not null,
	FNFittingID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	HWFittingID	int not null,
	MaterialID	int not null,
	SealRuleID	int not null,
	PartType	int not null,
	SupplyType	int not null,
	GTypeID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	RealXLen	float not null,
	RealYLen	float not null,
	RealZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabFNFPartID,CabFNFID,OrderCate,OrderID)
);

drop table if exists	SJ_CabFNFPartSealInfo;
create table SJ_CabFNFPartSealInfo
(
	CabFNFPartSealID	int not null,
	CabFNFPartID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	FNFittingPartID	int not null,
	SealType	int not null,
	SealIndex	int not null,
	MaterialID	int not null,
	PreMill	float not null,
	primary key (CabFNFPartSealID,CabFNFPartID,OrderCate,OrderID)
);

drop table if exists	SJ_CabInfo;
create table SJ_CabInfo
(
	CabID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	CabDesignID	int not null,
	CabinetSizeID	int not null,
	CabStructID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	CabMatPlanID	int not null,
	SealRuleID	int not null,
	DockObjID	int not null,
	DockObjType	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	ShapeXLen	float not null,
	ShapeZLen	float not null,
	GapXLen	float not null,
	GapYLen	float not null,
	GapZLen	float not null,
	YPos	float not null,
	FootID	int not null,
	FootCount	int not null,
	FootYLen	float not null,
	IsStandard	bool not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_DecorBoardInfo;
create table SJ_DecorBoardInfo
(
	DesignDecorBoardID	int not null,
	DesignPlanID	int not null,
	DesignParentID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DecorBoardID	int not null,
	DecorParentID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	GroupID	int not null,
	GroupIndex	int not null,
	GTypeID	int not null,
	IsAutoFit	bool not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	IsChangedSize	bool not null,
	IsDragIn	bool not null,
	DoorMatPlanID	int not null,
	CabMatPlanID	int not null,
	DoorID	int not null,
	TargetType	int not null,
	DockObjID	int not null,
	DockObjType	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	MatID	int not null,
	MatGType	int not null,
	SupplyType	int not null,
	ModelID	int not null,
	YPos	float not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignDecorBoardID,DesignPlanID,DesignParentID,OrderCate,OrderID)
);

drop table if exists	SJ_DecorBoardUnitInfo;
create table SJ_DecorBoardUnitInfo
(
	DesignDecorBoardUnitID	int not null,
	DesignDecorBoardID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DecorBoardUnitID	int not null,
	DecorBoardID	int not null,
	DecorBoardUnitIndex	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	IsUseDoor	bool not null,
	DoorMatPlanID	int not null,
	CabMatPlanID	int not null,
	DoorID	int not null,
	TargetType	int not null,
	MatID	int not null,
	MatGType	int not null,
	SupplyType	int not null,
	SealRuleID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	XOffsetLen	float not null,
	YOffsetLen	float not null,
	ZOffsetLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignDecorBoardUnitID,DesignDecorBoardID,OrderCate,OrderID)
);

drop table if exists	SJ_DecorBoardUnitSealInfo;
create table SJ_DecorBoardUnitSealInfo
(
	DesignDecorBoardUnitSealID	int not null,
	DesignDecorBoardUnitID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	DecorBoardUnitID	int not null,
	DecorBoardUnitSealID	int not null,
	SealIndex	int not null,
	SealType	int not null,
	MaterialID	int not null,
	PreMill	float not null,
	primary key (DesignDecorBoardUnitSealID,DesignDecorBoardUnitID,OrderCate,OrderID)
);

drop table if exists	SJ_DecorInfo;
create table SJ_DecorInfo
(
	DesignDecorID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	DecorID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	DockObjID	int not null,
	DockObjType	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	YPos	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignDecorID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_DecorLineInfo;
create table SJ_DecorLineInfo
(
	DesignDecorLineID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	DecorLineID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	GTypeID	int not null,
	DockObjID	int not null,
	DockObjType	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	MaterialID	int not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignDecorLineID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_DesignPlanInfo;
create table SJ_DesignPlanInfo
(
	DesignPlanID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	CurScale	float not null,
	IsActive	bool not null,
	SkyDecorID	int not null,
	FloorDecorID	int not null,
	WallDecorID	int not null,
	DesignerID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	DesignPlanName	national varchar(50) not null,
	DesignPlanMemo	national varchar(500) not null,
	primary key (DesignPlanID,OrderCate,OrderID)
);

drop table if exists	SJ_FittingInfo;
create table SJ_FittingInfo
(
	DesignFittingID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	FittingID	int not null,
	GTypeID	int not null,
	SupplyType	int not null,
	FittingCount	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignFittingID,OrderCate,DesignPlanID,OrderID,FittingID)
);

drop table if exists	SJ_HWFInfo;
create table SJ_HWFInfo
(
	DesignHWFID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	HWFittingID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	SupplyType	int not null,
	GTypeID	int not null,
	UseCount	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignHWFID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_MarkInfo;
create table SJ_MarkInfo
(
	DesignMarkID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	DesignPrintID	int not null,
	PrintID	int not null,
	ViewType	int not null,
	DockObjID	int not null,
	DockObjType	int not null,
	MarkType	int not null,
	FontSize	int not null,
	StartX	float not null,
	StartY	float not null,
	OffsetX	float not null,
	OffsetY	float not null,
	StopX	float not null,
	StopY	float not null,
	TopLeftX	float not null,
	TopLeftY	float not null,
	Width	float not null,
	Height	float not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	EditSign	bool not null,
	StrickOut	bool not null,
	UnderLine	bool not null,
	Italic	bool not null,
	Bold	bool not null,
	BGColor	bigint not null,
	FontColor	bigint not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	FaceName	national varchar(32) not null,
	RemarkText	national varchar(255) not null,
	primary key (DesignMarkID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_MatrixInfo;
create table SJ_MatrixInfo
(
	OrderID	bigint not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	TransObjID	bigint not null,
	TransObjType	int not null,
	MajorCurSel	int not null,
	MinorCurSel	int not null,
	MatCurIndex	int not null,
	CabMatPlanID	int not null,
	M11	float not null,
	M12	float not null,
	M13	float not null,
	M21	float not null,
	M22	float not null,
	M23	float not null,
	M31	float not null,
	M32	float not null,
	M33	float not null,
	M41	float not null,
	M42	float not null,
	M43	float not null,
	M44	float not null,
	primary key (OrderID,OrderCate,DesignPlanID,TransObjID)
);

drop table if exists	SJ_OrderAddedInfo;
create table SJ_OrderAddedInfo
(
	OrderAddedID	int not null,
	OrderID	bigint not null,
	OrderCate	int not null,
	FactoryID	int not null,
	UseCount	int not null,
	UnitPrice	float not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	AddedName	national varchar(50) not null,
	MatName	national varchar(50) not null,
	UnitName	national varchar(50) not null,
	SpecName	national varchar(50) not null,
	AttachFileName	national varchar(255) not null,
	primary key (OrderAddedID,OrderID,OrderCate)
);

drop table if exists	SJ_OrderDataInfo;
create table SJ_OrderDataInfo
(
	OrderID	bigint not null,
	OrderCate	int not null,
	FactoryID	int not null,
	ShopID	int not null,
	MaxMetaID	int not null,
	DesignerID	int not null,
	SellerID	int not null,
	PreSurveyorID	int not null,
	ReSurveyorID	int not null,
	IsNew	bool not null,
	IsShare	bool not null,
	IsUpload	bool not null,
	CreateTime	datetime not null,
	PreSurveyTime	datetime not null,
	ReSurveyTime	datetime not null,
	OrderTime	datetime not null,
	DeliveryTime	datetime not null,
	InstallTime	datetime not null,
	GeoCode	national varchar(6) not null,
	OrderTitle	national varchar(100) not null,
	CustomerName	national varchar(32) not null,
	CustomerTel	national varchar(32) not null,
	CustomerPostcode	national varchar(10) not null,
	CustomerQQ	national varchar(32) not null,
	CustomerEmail	national varchar(50) not null,
	InstallAddress	national varchar(200) not null,
	OrderMemo	national varchar(500) not null,
	AttachFilePath	national varchar(256) not null,
	primary key (OrderID,OrderCate)
);

drop table if exists	SJ_PackInfo;
create table SJ_PackInfo
(
	DesignPackID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	FittingPackID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	IsSeparate	bool not null,
	UseCount	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignPackID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_PointInfo;
create table SJ_PointInfo
(
	DesignPlanID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	TransObjID	int not null,
	TransObjType	int not null,
	PointIndex	int not null,
	CoordX	float not null,
	CoordY	float not null,
	CoordZ	float not null,
	primary key (DesignPlanID,OrderCate,OrderID,TransObjID,TransObjType,PointIndex)
);

drop table if exists	SJ_PrintElementInfo;
create table SJ_PrintElementInfo
(
	DesignPrintElementID	int not null,
	DesignPrintGroupID	int not null,
	DesignPrintID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	ObjType	int not null,
	ObjID	int not null,
	PrintGroupID	int not null,
	ViewType	int not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignPrintElementID,DesignPrintGroupID,DesignPrintID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_PrintGroupInfo;
create table SJ_PrintGroupInfo
(
	DesignPrintGroupID	int not null,
	DesignPrintID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	PrintID	int not null,
	PrintGroupID	int not null,
	ManyViewPort	bool not null,
	FrameStyle	int not null,
	FrameColorR	int not null,
	FrameColorG	int not null,
	FrameColorB	int not null,
	FrameColorA	int not null,
	FrameWidth	float not null,
	LeftX	float not null,
	RightY	float not null,
	ScaleX	float not null,
	ScaleY	float not null,
	ScaleOffsetX	float not null,
	ScaleOffsetY	float not null,
	ScaleFactor	float not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignPrintGroupID,DesignPrintID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_PrintInfo;
create table SJ_PrintInfo
(
	DesignPrintID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	PrintID	int not null,
	PageBorderStyle	int not null,
	PageBorderColor	bigint not null,
	PageBorderWidth	float not null,
	ShaderPicTopX	float not null,
	ShaderPicTopY	float not null,
	ShaderPicHeight	float not null,
	ShaderPicWidth	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	PrintName	national varchar(50) not null,
	ShaderPicPath	national varchar(255) not null,
	primary key (DesignPrintID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_PrintTableInfo;
create table SJ_PrintTableInfo
(
	DesignPrintTableID	int not null,
	DesignPrintID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	TableSign	int not null,
	WhichLine	int not null,
	Align	int not null,
	LogoSign	int not null,
	TextPos	int not null,
	SetLine	bool not null,
	HasLogo	bool not null,
	IsSelected	bool not null,
	LineUp	bool not null,
	LineDown	bool not null,
	LineLeft	bool not null,
	LineRight	bool not null,
	LineUpSign	int not null,
	LineDownSign	int not null,
	LineLeftSign	int not null,
	LineRightSign	int not null,
	LineWidth	float not null,
	LeftTopX	float not null,
	LeftTopY	float not null,
	XLen	float not null,
	YLen	float not null,
	LineUpWidth	float not null,
	LineDownWidth	float not null,
	LineRightWidth	float not null,
	LineLeftWidth	float not null,
	FaceName	national varchar(32) not null,
	LogoPath	national varchar(500) not null,
	SerialPath	national varchar(500) not null,
	TextValue	national varchar(500) not null,
	primary key (DesignPrintTableID,DesignPrintID,OrderCate,OrderID,DesignPlanID)
);

drop table if exists	SJ_PrintTableRowColInfo;
create table SJ_PrintTableRowColInfo
(
	DesignPrintTableRowColID	int not null,
	DesignPrintTableRowID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	TableSign	int not null,
	RowNumber	int not null,
	ColNumber	int not null,
	WhichLine	int not null,
	Align	int not null,
	LogoSign	int not null,
	TextPos	int not null,
	SetLine	bool not null,
	HasLogo	bool not null,
	IsSelected	bool not null,
	LineUp	bool not null,
	LineDown	bool not null,
	LineLeft	bool not null,
	LineRight	bool not null,
	LineUpSign	int not null,
	LineDownSign	int not null,
	LineLeftSign	int not null,
	LineRightSign	int not null,
	LineWidth	float not null,
	LeftTopX	float not null,
	LeftTopY	float not null,
	XLen	float not null,
	YLen	float not null,
	LineUpWidth	float not null,
	LineDownWidth	float not null,
	LineRightWidth	float not null,
	LineLeftWidth	float not null,
	FaceName	national varchar(32) not null,
	LogoPath	national varchar(500) not null,
	SerialPath	national varchar(500) not null,
	TextValue	national varchar(500) not null,
	primary key (DesignPrintTableRowColID,DesignPrintTableRowID,OrderCate,OrderID,DesignPlanID)
);

drop table if exists	SJ_PrintTableRowInfo;
create table SJ_PrintTableRowInfo
(
	DesignPrintTableRowID	int not null,
	DesignPrintTableID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	TableSign	int not null,
	RowNumber	int not null,
	WhichLine	int not null,
	Align	int not null,
	LogoSign	int not null,
	TextPos	int not null,
	SetLine	bool not null,
	HasLogo	bool not null,
	IsSelected	bool not null,
	LineUp	bool not null,
	LineDown	bool not null,
	LineLeft	bool not null,
	LineRight	bool not null,
	LineUpSign	int not null,
	LineDownSign	int not null,
	LineLeftSign	int not null,
	LineRightSign	int not null,
	LineWidth	float not null,
	LeftTopX	float not null,
	LeftTopY	float not null,
	XLen	float not null,
	YLen	float not null,
	LineUpWidth	float not null,
	LineDownWidth	float not null,
	LineRightWidth	float not null,
	LineLeftWidth	float not null,
	FaceName	national varchar(32) not null,
	LogoPath	national varchar(500) not null,
	SerialPath	national varchar(500) not null,
	TextValue	national varchar(500) not null,
	primary key (DesignPrintTableRowID,DesignPrintTableID,OrderCate,OrderID,DesignPlanID)
);

drop table if exists	SJ_ProductInfo;
create table SJ_ProductInfo
(
	DesignProductID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	ProductID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	DockObjID	int not null,
	DockObjType	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	YPos	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignProductID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_RemarkInfo;
create table SJ_RemarkInfo
(
	DesignRemarkID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	DesignPrintID	int not null,
	PrintID	int not null,
	ViewType	int not null,
	BGColor	bigint not null,
	ForeColor	bigint not null,
	FontSize	int not null,
	FontStyle	int not null,
	LineSpace	int not null,
	ArrowID	int not null,
	ArrowStyle	int not null,
	FrameStyle	int not null,
	FrameColor	bigint not null,
	DirectLine	int not null,
	DirectStyle	int not null,
	DirectLineStyle	int not null,
	CommentFrameStyle	int not null,
	IsSingleMode	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	StrickOut	bool not null,
	UnderLine	bool not null,
	Italic	bool not null,
	Bold	bool not null,
	FrameWidth	float not null,
	ArrowX	float not null,
	ArrowY	float not null,
	StartX	float not null,
	StartY	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	FaceName	national varchar(32) not null,
	RemarkText	national varchar(500) not null,
	primary key (DesignRemarkID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_ShapeInfo;
create table SJ_ShapeInfo
(
	DesignShapeID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	DesignPrintID	int not null,
	PrintID	int not null,
	ViewType	int not null,
	ShapeType	int not null,
	LineWidth	int not null,
	LineStyle	int not null,
	StartX	float not null,
	StartY	float not null,
	StopX	float not null,
	StopY	float not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	AttachFilePath	national varchar(255) not null,
	primary key (DesignShapeID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_SkinInfo;
create table SJ_SkinInfo
(
	DesignSkinID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	DecorID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	GTypeID	int not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	GroundLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignSkinID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_TableInfo;
create table SJ_TableInfo
(
	DesignTableID	int not null,
	OrderCate	int not null,
	DesignPlanID	int not null,
	OrderID	bigint not null,
	TableID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	TableIndex	int not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	ZLen	float not null,
	YPos	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignTableID,OrderCate,DesignPlanID,OrderID)
);

drop table if exists	SJ_TablePartInfo;
create table SJ_TablePartInfo
(
	DesignTablePartID	int not null,
	DesignTableID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DecorLineID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	TableSideIndex	int not null,
	IsUserSetYLen	bool not null,
	GTypeID	int not null,
	MaterialID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	DefaultYLen	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignTablePartID,DesignTableID,OrderCate,OrderID)
);

drop table if exists	SJ_TableSideInfo;
create table SJ_TableSideInfo
(
	DesignTableSideID	int not null,
	DesignTableID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	TableTopID	int not null,
	TableTopSideID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	TableSideIndex	int not null,
	IsUseTableMat	bool not null,
	MaterialID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignTableSideID,OrderID)
);

drop table if exists	SJ_WallDecorInfo;
create table SJ_WallDecorInfo
(
	DesignWallDecorID	int not null,
	DesignWallID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	DesignPlanID	int not null,
	DecorID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	IsModelRevers	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	OffsetXLen	float not null,
	OffsetYLen	float not null,
	OffsetZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignWallDecorID,DesignWallID,OrderCate,OrderID)
);

drop table if exists	SJ_WallInfo;
create table SJ_WallInfo
(
	DesignWallID	int not null,
	DesignPlanID	int not null,
	OrderCate	int not null,
	OrderID	bigint not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	WallType	int not null,
	WallIndex	int not null,
	GroupID	int not null,
	DockObjID	int not null,
	DockXPos	float not null,
	DockYPos	float not null,
	DecorID	int not null,
	GridStyle	int not null,
	HasMark	bool not null,
	IsVisible	bool not null,
	IsLocked	bool not null,
	StartX	float not null,
	StartY	float not null,
	EndX	float not null,
	EndY	float not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	GroundLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DesignWallID,DesignPlanID,OrderCate,OrderID)
);

