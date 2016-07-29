drop table if exists	JK_CabBoardMatInfo;
create table JK_CabBoardMatInfo
(
	CabMatPlanID	int not null,
	CabStructBoardID	int not null,
	IsDefault	bool not null,
	MatID	int not null,
	MatGType	int not null,
	SealRuleID	int not null,
	SkinDirection	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	IsUseDefaultSkinDirection	bool not null,
	primary key (CabMatPlanID,CabStructBoardID,MatID,MatGType,VerCode,FactoryID)
);

drop table if exists	JK_CabBoardMatSkinInfo;
create table JK_CabBoardMatSkinInfo
(
	CabMatPlanID	int not null,
	CabStructBoardID	int not null,
	SkinDirection	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	IsUseDefaultSkinDirection	bool not null,
	primary key (CabMatPlanID,CabStructBoardID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignBoardSealEdgeInfo;
create table JK_CabDesignBoardSealEdgeInfo
(
	CabDesignBoardSealID	int not null,
	SealIndex	int not null,
	SealMatID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (CabDesignBoardSealID,SealIndex,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignBoardSealInfo;
create table JK_CabDesignBoardSealInfo
(
	CabDesignBoardSealID	int not null,
	CabStructBoardID	int not null,
	CabStructID	int not null,
	CabDesignID	int not null,
	MaterialID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (CabDesignBoardSealID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignDoorRegionHandleInfo;
create table JK_CabDesignDoorRegionHandleInfo
(
	CabDesignDoorRegionHandleID	int not null,
	CabDesignDoorRegionID	int not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	ArcZ	float not null,
	HandleID	int not null,
	MatchType	int not null,
	primary key (CabDesignDoorRegionHandleID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignDoorRegionInfo;
create table JK_CabDesignDoorRegionInfo
(
	CabDesignDoorRegionID	int not null,
	CabDesignID	int not null,
	IsDel	bool not null,
	IsGroup	bool not null,
	XLen	float not null,
	YLen	float not null,
	IsCanResize	bool not null,
	MinXLen	float not null,
	MaxXLen	float not null,
	XLenStep	float not null,
	MinYLen	float not null,
	MaxYLen	float not null,
	YLenStep	float not null,
	DefaultMatID	int not null,
	DefaultModelID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	DefaultDoorID	int not null,
	CabDesignDoorSystemID	int not null,
	DoorSystemID	int not null,
	IsUseDefaultSize	bool not null,
	IsUseCutFormula	bool not null,
	DoorRegionID	int not null,
	primary key (CabDesignDoorRegionID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignDoorSystemInfo;
create table JK_CabDesignDoorSystemInfo
(
	CabDesignDoorSystemID	int not null,
	CabDesignID	int not null,
	IsDel	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	DoorSystemID	int not null,
	InstallFaceType	int not null,
	XAdjustLen	float not null,
	YAdjustLen	float not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	IsCanDel	bool not null,
	XFormula	national varchar(500) not null,
	YFormula	national varchar(500) not null,
	ZLen	float not null,
	primary key (CabDesignDoorSystemID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignFNFittingInfo;
create table JK_CabDesignFNFittingInfo
(
	CabDesignFNFittingID	int not null,
	ContainerID	int not null,
	ContainerGTypeID	int not null,
	IsCanDel	bool not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	ZFormula	national varchar(255) not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	IsDel	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (CabDesignFNFittingID,ContainerGTypeID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignFNFittingMapInfo;
create table JK_CabDesignFNFittingMapInfo
(
	FNFittingID	int not null,
	CabDesignFNFittingID	int not null,
	IsDefault	bool not null,
	FNType	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (FNFittingID,CabDesignFNFittingID,FNType,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignFootInfo;
create table JK_CabDesignFootInfo
(
	CabDesignID	int not null,
	FootID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (CabDesignID,FootID,VerCode,FactoryID)
);

drop table if exists	JK_CabDesignInfo;
create table JK_CabDesignInfo
(
	CabDesignID	int not null,
	IsDel	bool not null,
	GroupID	int not null,
	CabFunction	int not null,
	CabStructID	int not null,
	PosType	int not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	CabDesignCode	national varchar(20) not null,
	CabDesignName	national varchar(50) not null,
	CabDesignMemo	national varchar(500) not null,
	VerCode	bigint not null,
	PhotoID	int not null,
	IsActive	bool not null,
	primary key (CabDesignID,FactoryID,VerCode)
);

drop table if exists	JK_CabDesignMatInfo;
create table JK_CabDesignMatInfo
(
	CabDesignID	int not null,
	CabMatPlanID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (CabDesignID,CabMatPlanID,VerCode,FactoryID)
);

drop table if exists	JK_CabMatPlanInfo;
create table JK_CabMatPlanInfo
(
	CabMatPlanID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	FactoryID	int not null,
	MatGType	int not null,
	MatID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	CabMatPlanCode	national varchar(20) not null,
	CabMatPlanName	national varchar(50) not null,
	CabMatPlanMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (CabMatPlanID,FactoryID,VerCode)
);

drop table if exists	JK_CabStructBoardGapInfo;
create table JK_CabStructBoardGapInfo
(
	CabStructBoardGapID	int not null,
	CabStructBoardID	int not null,
	GapPos	int not null,
	GapIndex	int not null,
	GapType	int not null,
	GapShape	int not null,
	XLenFormula	national varchar(255) not null,
	YLenFormula	national varchar(255) not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	VerCode	bigint not null,
	primary key (CabStructBoardGapID,FactoryID,VerCode)
);

drop table if exists	JK_CabStructBoardInfo;
create table JK_CabStructBoardInfo
(
	CabStructBoardID	int not null,
	CabStructID	int not null,
	IsDel	bool not null,
	IsUseMain	bool not null,
	IsCanRepeat	bool not null,
	IsCanDel	bool not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	ArcX	float not null,
	ArcY	float not null,
	ArcZ	float not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	CabStructBoardName	national varchar(50) not null,
	DefaultSkinDirection	int not null,
	VerCode	bigint not null,
	primary key (CabStructBoardID,FactoryID,VerCode)
);

drop table if exists	JK_CabStructBoardSealInfo;
create table JK_CabStructBoardSealInfo
(
	CabStructBoardSealID	int not null,
	SealOrder	int not null,
	CabStructBoardID	int not null,
	SealType	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	SealIndex	int not null,
	primary key (CabStructBoardSealID,VerCode,FactoryID)
);

drop table if exists	JK_CabStructGapInfo;
create table JK_CabStructGapInfo
(
	CabStructGapID	int not null,
	CabStructID	int not null,
	IsDel	bool not null,
	FactoryID	int not null,
	CabGapType	int not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	ZFormula	national varchar(255) not null,
	XVar	national varchar(20) not null,
	YVar	national varchar(20) not null,
	ZVar	national varchar(20) not null,
	XVarName	national varchar(50) not null,
	YVarName	national varchar(50) not null,
	ZVarName	national varchar(50) not null,
	CabStructCabStructGapCode	national varchar(20) not null,
	CabStructGapName	national varchar(50) not null,
	CabStructGapMemo	national varchar(500) not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	VerCode	bigint not null,
	primary key (CabStructGapID,FactoryID,VerCode)
);

drop table if exists	JK_CabStructInfo;
create table JK_CabStructInfo
(
	CabStructID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	CabGapType	int not null,
	CabShapeID	int not null,
	VirtualXLen	float not null,
	VirtualYLen	float not null,
	VirtualZLen	float not null,
	VirtualShapeXLen	float not null,
	VirtualShapeZLen	float not null,
	VirtualGapXLen	float not null,
	VirtualGapYLen	float not null,
	VirtualGapZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	CabStructCode	national varchar(20) not null,
	CabStructName	national varchar(50) not null,
	CabStructMemo	national varchar(500) not null,
	primary key (CabStructID,FactoryID,VerCode)
);

drop table if exists	JK_CabStructMatPlanMapInfo;
create table JK_CabStructMatPlanMapInfo
(
	CabMatPlanID	int not null,
	CabStructID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (CabMatPlanID,CabStructID,VerCode,FactoryID)
);

drop table if exists	JK_CabinetSizeBoardInfo;
create table JK_CabinetSizeBoardInfo
(
	CabinetSizeBoardID	int not null,
	CabinetSizeID	int not null,
	IsDel	bool not null,
	CabStructBoardID	int not null,
	IsCanRelocate	bool not null,
	IsCanDel	bool not null,
	FactoryID	int not null,
	CreateTime	datetime not null,
	CreatorID	int not null,
	UpdateTime	datetime not null,
	UpdaterID	int not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	CabStructBoardName	national varchar(50) not null,
	VerCode	bigint not null,
	primary key (CabinetSizeBoardID,FactoryID,VerCode)
);

drop table if exists	JK_CabinetSizeInfo;
create table JK_CabinetSizeInfo
(
	CabDesignID	int not null,
	IsDel	bool not null,
	CabinetSizeID	int not null,
	PhotoID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	IsStandard	bool not null,
	MinXLen	float not null,
	MaxXLen	float not null,
	XLenStep	float not null,
	MinYLen	float not null,
	MaxYLen	float not null,
	YLenStep	float not null,
	MinZLen	float not null,
	MaxZLen	float not null,
	ZLenStep	float not null,
	ShapeXLen	float not null,
	ShapeZLen	float not null,
	GapXLen	float not null,
	GapYLen	float not null,
	GapZLen	float not null,
	ShapeMinXLen	float not null,
	ShapeMaxXLen	float not null,
	ShapeXLenStep	float not null,
	ShapeMinZLen	float not null,
	ShapeMaxZLen	float not null,
	ShapeZLenStep	float not null,
	GapMinXLen	float not null,
	GapMaxXLen	float not null,
	GapXLenStep	float not null,
	GapMinYLen	float not null,
	GapMaxYLen	float not null,
	GapYLenStep	float not null,
	GapMinZLen	float not null,
	GapMaxZLen	float not null,
	GapZLenStep	float not null,
	FootCount	int not null,
	IsSysFootRule	bool not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	CabinetSizeCode	national varchar(20) not null,
	CabinetSizeName	national varchar(50) not null,
	CabinetSizeMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (CabinetSizeID,FactoryID,VerCode)
);

drop table if exists	JK_CabinetSizeStructBoardInfo;
create table JK_CabinetSizeStructBoardInfo
(
	CabStructBoardID	int not null,
	CabinetSizeID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (CabStructBoardID,CabinetSizeID,VerCode,FactoryID)
);

drop table if exists	JK_DecorBoardFrameMapInfo;
create table JK_DecorBoardFrameMapInfo
(
	DecorBoardID	int not null,
	DecorFrameID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DecorBoardID,DecorFrameID,VerCode,FactoryID)
);

drop table if exists	JK_DecorBoardInfo;
create table JK_DecorBoardInfo
(
	DecorBoardID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	SourceType	int not null,
	DefaultYPos	float not null,
	DecorBoardCode	national varchar(20) not null,
	DecorBoardName	national varchar(50) not null,
	DecorBoardMemo	national varchar(500) not null,
	VerCode	bigint not null,
	GTypeID	int not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	ZLen	float not null,
	IsCanResize	bool not null,
	MinXLen	float not null,
	MaxXLen	float not null,
	XLenStep	float not null,
	MinYLen	float not null,
	MaxYLen	float not null,
	YLenStep	float not null,
	XDock	int not null,
	YDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	PhotoID	int not null,
	primary key (DecorBoardID,FactoryID,VerCode)
);

drop table if exists	JK_DecorBoardMatInfo;
create table JK_DecorBoardMatInfo
(
	DecorBoardID	int not null,
	MatID	int not null,
	MatGType	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DecorBoardID,MatID,MatGType,VerCode,FactoryID)
);

drop table if exists	JK_DecorBoardUnitInfo;
create table JK_DecorBoardUnitInfo
(
	DecorBoardUnitID	int not null,
	IsDel	bool not null,
	DecorBoardID	int not null,
	SplitType	int not null,
	SkinDirection	int not null,
	ArcX	float not null,
	ArcY	float not null,
	ArcZ	float not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	DecorBoardUnitIndex	int not null,
	DecorBoardUnitName	national varchar(50) not null,
	DecorBoardUnitMemo	national varchar(500) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	IsUseDefaultMat	bool not null,
	primary key (DecorBoardUnitID,VerCode,FactoryID)
);

drop table if exists	JK_DecorBoardUnitMatInfo;
create table JK_DecorBoardUnitMatInfo
(
	DecorBoardUnitID	int not null,
	MatID	int not null,
	MatGType	int not null,
	IsDefault	bool not null,
	DefaultSealRuleID	int not null,
	SkinDirection	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DecorBoardUnitID,MatID,MatGType,VerCode,FactoryID)
);

drop table if exists	JK_DecorBoardUnitSealInfo;
create table JK_DecorBoardUnitSealInfo
(
	DecorBoardUnitID	int not null,
	SealIndex	int not null,
	SealType	int not null,
	DefaultMaterialID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	SealOrder	int not null,
	DecorBoardUnitSealID	int not null,
	primary key (VerCode,FactoryID,DecorBoardUnitSealID)
);

drop table if exists	JK_DecorInfo;
create table JK_DecorInfo
(
	DecorID	int not null,
	GroupID	int not null,
	FactoryID	int not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	IsDel	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	ShowID	int not null,
	SkinID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	DecorCode	national varchar(20) not null,
	DecorName	national varchar(50) not null,
	DecorMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (DecorID,FactoryID,VerCode)
);

drop table if exists	JK_DecorLineInfo;
create table JK_DecorLineInfo
(
	DecorLineID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	GTypeID	int not null,
	ShowID	int not null,
	ModelID	int not null,
	ZOffset	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	DecorLineCode	national varchar(20) not null,
	DecorLineName	national varchar(50) not null,
	DecorLineMemo	national varchar(500) not null,
	VerCode	bigint not null,
	DefaultYLen	float not null,
	primary key (DecorLineID,FactoryID,VerCode)
);

drop table if exists	JK_DecorLineMatInfo;
create table JK_DecorLineMatInfo
(
	DecorLineID	int not null,
	MaterialID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DecorLineID,MaterialID,VerCode,FactoryID)
);

drop table if exists	JK_DecorUnitHWFittingMapInfo;
create table JK_DecorUnitHWFittingMapInfo
(
	DecorBoardUnitID	int not null,
	HWFittingID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DecorBoardUnitID,HWFittingID,VerCode,FactoryID)
);

drop table if exists	JK_DoorBoardGapInfo;
create table JK_DoorBoardGapInfo
(
	DoorBoardGapID	int not null,
	DoorBoardID	int not null,
	GapPos	int not null,
	GapIndex	int not null,
	GapType	int not null,
	GapShape	int not null,
	XLenFormula	national varchar(255) not null,
	YLenFormula	national varchar(255) not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	VerCode	bigint not null,
	primary key (DoorBoardGapID,FactoryID,VerCode)
);

drop table if exists	JK_DoorBoardInfo;
create table JK_DoorBoardInfo
(
	DoorBoardID	int not null,
	DoorID	int not null,
	IsDel	bool not null,
	IsUseDefaultMat	bool not null,
	SplitType	int not null,
	SkinDirection	int not null,
	ArcX	float not null,
	ArcY	float not null,
	ArcZ	float not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	DoorBoardIndex	int not null,
	DoorBoardName	national varchar(50) not null,
	DoorBoardMemo	national varchar(500) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DoorBoardID,VerCode,FactoryID)
);

drop table if exists	JK_DoorBoardMatMapInfo;
create table JK_DoorBoardMatMapInfo
(
	DoorBoardID	int not null,
	MatID	int not null,
	MatGType	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorBoardID,MatID,MatGType,VerCode,FactoryID)
);

drop table if exists	JK_DoorBoardSealInfo;
create table JK_DoorBoardSealInfo
(
	DoorBoardID	int not null,
	SealOrder	int not null,
	SealType	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	SealIndex	int not null,
	primary key (DoorBoardID,SealOrder,VerCode,FactoryID)
);

drop table if exists	JK_DoorInfo;
create table JK_DoorInfo
(
	DoorID	int not null,
	GroupID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	IsDel	bool not null,
	IsActive	bool not null,
	GTypeID	int not null,
	CombineType	int not null,
	PhotoID	int not null,
	VirtualContainerXLen	float not null,
	VirtualContainerYLen	float not null,
	VirtualContainerZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	DoorCode	national varchar(20) not null,
	DoorName	national varchar(50) not null,
	DoorMemo	national varchar(500) not null,
	primary key (DoorID,FactoryID,VerCode)
);

drop table if exists	JK_DoorMatMapInfo;
create table JK_DoorMatMapInfo
(
	DoorID	int not null,
	DoorMatPlanID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorID,DoorMatPlanID,VerCode,FactoryID)
);

drop table if exists	JK_DoorMatPlanHandleMapInfo;
create table JK_DoorMatPlanHandleMapInfo
(
	DoorMatPlanID	int not null,
	HandleID	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorMatPlanID,HandleID,VerCode,FactoryID)
);

drop table if exists	JK_DoorMatPlanInfo;
create table JK_DoorMatPlanInfo
(
	DoorMatPlanID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	MatID	int not null,
	MatGType	int not null,
	DoorMatPlanCode	national varchar(20) not null,
	DoorMatPlanName	national varchar(50) not null,
	DoorMatPlanMemo	national varchar(500) not null,
	VerCode	bigint not null,
	ModelID	int not null,
	IsCanSeal	bool not null,
	primary key (DoorMatPlanID,FactoryID,VerCode)
);

drop table if exists	JK_DoorRegionHWFittingMapInfo;
create table JK_DoorRegionHWFittingMapInfo
(
	DoorSystemRegionID	int not null,
	HWFittingID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorSystemRegionID,HWFittingID,VerCode,FactoryID)
);

drop table if exists	JK_DoorSystemInfo;
create table JK_DoorSystemInfo
(
	DoorSystemID	int not null,
	FactoryID	int not null,
	VerCode	bigint not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	SupplyType	int not null,
	MatchCabShape	int not null,
	InstallType	int not null,
	VirtualXLen	float not null,
	VirtualYLen	float not null,
	VirtualShapeXLen	float not null,
	VirtualShapeZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	DoorSystemCode	national varchar(20) not null,
	DoorSystemName	national varchar(50) not null,
	DoorSystemMemo	national varchar(500) not null,
	primary key (DoorSystemID,FactoryID,VerCode)
);

drop table if exists	JK_DoorSystemMatMapInfo;
create table JK_DoorSystemMatMapInfo
(
	DoorSystemID	int not null,
	DoorMatPlanID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorSystemID,DoorMatPlanID,VerCode,FactoryID)
);

drop table if exists	JK_DoorSystemRegionDoorMapInfo;
create table JK_DoorSystemRegionDoorMapInfo
(
	DoorSystemRegionID	int not null,
	DoorID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorSystemRegionID,DoorID,VerCode,FactoryID)
);

drop table if exists	JK_DoorSystemRegionInfo;
create table JK_DoorSystemRegionInfo
(
	DoorSystemRegionID	int not null,
	DoorSystemID	int not null,
	ParentID	int not null,
	IsDel	bool not null,
	RegionIndex	int not null,
	CutDirection	int not null,
	CutFormula	national varchar(255) not null,
	IsSlide	bool not null,
	IsRound	bool not null,
	LenPrecision	int not null,
	OpenDoorType	int not null,
	XAdjustLen	float not null,
	YAdjustLen	float not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	IsCanResize	bool not null,
	DoorFunction	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	HandleXDock	int not null,
	HandleYDock	int not null,
	HandleZDock	int not null,
	HandleXOffsetFormula	national varchar(255) not null,
	HandleYOffsetFormula	national varchar(255) not null,
	HandleZOffsetFormula	national varchar(255) not null,
	ZLen	float not null,
	DoorBoardMatType	int not null,
	DoorBoardMatID	int not null,
	IsUseCustomThick	bool not null,
	primary key (DoorSystemRegionID,VerCode,FactoryID)
);

drop table if exists	JK_DoorSystemRegionSlideMapInfo;
create table JK_DoorSystemRegionSlideMapInfo
(
	DoorSystemRegionID	int not null,
	SlideID	int not null,
	SlidePosition	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (DoorSystemRegionID,SlideID,SlidePosition,VerCode,FactoryID)
);

drop table if exists	JK_DoorSystemRegionSlidePositionSizeInfo;
create table JK_DoorSystemRegionSlidePositionSizeInfo
(
	DoorSystemRegionID	int not null,
	SlidePosition	int not null,
	XAdjustLen	float not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (DoorSystemRegionID,SlidePosition,VerCode,FactoryID)
);

drop table if exists	JK_FNFittingInfo;
create table JK_FNFittingInfo
(
	FNFittingID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	IsEntire	bool not null,
	ShowID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	MinInstallX	float not null,
	MinInstallY	float not null,
	MinInstallZ	float not null,
	MinXLen	float not null,
	MaxXLen	float not null,
	MinYLen	float not null,
	MaxYLen	float not null,
	MinZLen	float not null,
	MaxZLen	float not null,
	IsMatchXLen	bool not null,
	IsMatchYLen	bool not null,
	IsMatchZLen	bool not null,
	DefaultYPos	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	FNFittingCode	national varchar(20) not null,
	FNFittingName	national varchar(50) not null,
	FNFittingMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (FNFittingID,FactoryID,VerCode)
);

drop table if exists	JK_FNFittingMatInfo;
create table JK_FNFittingMatInfo
(
	FNFittingID	int not null,
	MaterialID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (FNFittingID,MaterialID,VerCode,FactoryID)
);

drop table if exists	JK_FNFittingPartInfo;
create table JK_FNFittingPartInfo
(
	FNFittingPartID	int not null,
	PartType	int not null,
	IsDel	bool not null,
	FNFittingID	int not null,
	IsUseMain	bool not null,
	SkinDirection	int not null,
	SplitType	int not null,
	ArcX	float not null,
	ArcY	float not null,
	ArcZ	float not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffsetFormula	national varchar(255) not null,
	YOffsetFormula	national varchar(255) not null,
	ZOffsetFormula	national varchar(255) not null,
	FNFittingPartCode	national varchar(20) not null,
	FNFittingPartName	national varchar(50) not null,
	FNFittingPartMemo	national varchar(500) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FNFittingPartID,VerCode,FactoryID)
);

drop table if exists	JK_FNFittingPartMatInfo;
create table JK_FNFittingPartMatInfo
(
	FNFittingPartID	int not null,
	MaterialID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	MatGType	int not null,
	primary key (FNFittingPartID,MaterialID,VerCode,FactoryID,MatGType)
);

drop table if exists	JK_FNFittingPartSealInfo;
create table JK_FNFittingPartSealInfo
(
	FNFittingPartID	int not null,
	SealOrder	int not null,
	SealIndex	int not null,
	SealType	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FNFittingPartID,SealOrder,VerCode,FactoryID)
);

drop table if exists	JK_FittingInfo;
create table JK_FittingInfo
(
	FittingID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	GTypeID	int not null,
	SupplyType	int not null,
	ShowID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	FittingCode	national varchar(20) not null,
	FittingName	national varchar(50) not null,
	FittingMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (FittingID,FactoryID,VerCode)
);

drop table if exists	JK_FittingRuleInfo;
create table JK_FittingRuleInfo
(
	FittingRuleID	int not null,
	OwnerID	int not null,
	OwnerGTypeID	int not null,
	IsDefault	bool not null,
	IsCanDel	bool not null,
	MinLen	float not null,
	MaxLen	float not null,
	FittingID	int not null,
	FittingType	int not null,
	UseCount	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FittingRuleID,VerCode,FactoryID)
);

drop table if exists	JK_FormulaConstInfo;
create table JK_FormulaConstInfo
(
	FactoryID	int not null,
	VerCode	bigint not null,
	ConstCode	national varchar(20) not null,
	ConstText	national varchar(20) not null,
	ConstValue	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FactoryID,VerCode,ConstCode)
);

drop table if exists	JK_GroupInfo;
create table JK_GroupInfo
(
	GroupID	int not null,
	ParentID	int not null,
	FactoryID	int not null,
	IsDel	bool not null,
	GTypeID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	GroupCode	national varchar(20) not null,
	GroupName	national varchar(50) not null,
	GroupMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (GroupID,FactoryID,VerCode)
);

drop table if exists	JK_HWFittingInfo;
create table JK_HWFittingInfo
(
	HWFittingID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	ShowID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	SettingCountRuleID	int not null,
	IsMatchXLen	bool not null,
	IsMatchYLen	bool not null,
	IsMatchZLen	bool not null,
	EffectLen	float not null,
	XAdjustLen	float not null,
	IsEmbed	bool not null,
	InstallDirection	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	HWFittingCode	national varchar(20) not null,
	HWFittingName	national varchar(50) not null,
	HWFittingMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (HWFittingID,FactoryID,VerCode)
);

drop table if exists	JK_HoleRuleInfo;
create table JK_HoleRuleInfo
(
	HoleID	int not null,
	FNFittingID	int not null,
	HoleTypeID	int not null,
	XLen	float not null,
	YLen	float not null,
	OverHeight	float not null,
	HolePicID	int not null,
	MinXDistance	float not null,
	MinZDistance	float not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (HoleID,FNFittingID,VerCode,FactoryID)
);

drop table if exists	JK_MaterialInfo;
create table JK_MaterialInfo
(
	MaterialID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	ShowID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	IsMatchXLen	bool not null,
	IsMatchYLen	bool not null,
	IsMatchZLen	bool not null,
	SkinID	int not null,
	SkinDirection	int not null,
	TransCode	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	MaterialCode	national varchar(20) not null,
	MaterialName	national varchar(50) not null,
	MaterialMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (MaterialID,FactoryID,VerCode)
);

drop table if exists	JK_MaterialSealRuleMapInfo;
create table JK_MaterialSealRuleMapInfo
(
	MaterialID	int not null,
	SealRuleID	int not null,
	IsCabDef	bool not null,
	IsDoorDef	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (MaterialID,SealRuleID,VerCode,FactoryID)
);

drop table if exists	JK_ModelInfo;
create table JK_ModelInfo
(
	ModelID	int not null,
	GroupID	int not null,
	FactoryID	int not null,
	GTypeID	int not null,
	ArcX	float not null,
	ArcY	float not null,
	ArcZ	float not null,
	IsDel	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	ModelCode	national varchar(20) not null,
	ModelName	national varchar(50) not null,
	RelativePath	national varchar(255) not null,
	ModelMemo	national varchar(500) not null,
	HASHCode	national varchar(32) not null,
	VerCode	bigint not null,
	FrontViewID	int not null,
	RightViewID	int not null,
	TopViewID	int not null,
	PhotoID	int not null,
	primary key (ModelID,FactoryID,VerCode)
);

drop table if exists	JK_NumberRuleInfo;
create table JK_NumberRuleInfo
(
	NumberRuleID	int not null,
	FittingID	int not null,
	MinLen	float not null,
	MaxLen	float not null,
	UseCount	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (NumberRuleID,VerCode,FactoryID)
);

drop table if exists	JK_PackageInfo;
create table JK_PackageInfo
(
	FittingPackID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	IsSeparate	bool not null,
	GTypeID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	FittingPackCode	national varchar(20) not null,
	FittingPackName	national varchar(50) not null,
	FittingPackMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (FittingPackID,FactoryID,VerCode)
);

drop table if exists	JK_PackageMapInfo;
create table JK_PackageMapInfo
(
	PackageID	int not null,
	FittingID	int not null,
	FittingCount	int not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	primary key (PackageID,FittingID,VerCode,FactoryID)
);

drop table if exists	JK_ProductInfo;
create table JK_ProductInfo
(
	ProductID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	IsSplit	bool not null,
	SupplyType	int not null,
	GTypeID	int not null,
	ShowID	int not null,
	ModelID	int not null,
	XLen	float not null,
	YLen	float not null,
	ZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	ProductCode	national varchar(20) not null,
	ProductName	national varchar(50) not null,
	ProductMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (ProductID,FactoryID,VerCode)
);

drop table if exists	JK_ProductSeriesInfo;
create table JK_ProductSeriesInfo
(
	ProductSeriesID	int not null,
	FactoryID	int not null,
	GroupID	int not null,
	IsDel	bool not null,
	IsActive	bool not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	ProductSeriesCode	national varchar(20) not null,
	ProductSeriesName	national varchar(50) not null,
	ProductSeriesMemo	national varchar(500) not null,
	VerCode	bigint not null,
	primary key (ProductSeriesID,FactoryID,VerCode)
);

drop table if exists	JK_ProductSeriesValidInfo;
create table JK_ProductSeriesValidInfo
(
	ProductSeriesID	int not null,
	ProductSeriesItemID	int not null,
	PSType	int not null,
	ParentID	int not null,
	IsDefault	bool not null,
	IsGroup	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	DefaultItemID	int not null,
	primary key (ProductSeriesID,ProductSeriesItemID,PSType,IsGroup,VerCode,FactoryID)
);

drop table if exists	JK_ResourceInfo;
create table JK_ResourceInfo
(
	ResourceID	int not null,
	GroupID	int not null,
	FactoryID	int not null,
	GTypeID	int not null,
	IsDel	bool not null,
	XLen	float not null,
	YLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	ResourceCode	national varchar(20) not null,
	ResourceName	national varchar(50) not null,
	RelativePath	national varchar(255) not null,
	ResourceMemo	national varchar(500) not null,
	HASHCode	national varchar(32) not null,
	VerCode	bigint not null,
	primary key (ResourceID,FactoryID,VerCode)
);

drop table if exists	JK_SealRuleInfo;
create table JK_SealRuleInfo
(
	SealRuleID	int not null,
	IsDel	bool not null,
	VisibleSealID	int not null,
	InvisibleSealID	int not null,
	VisPreMill	float not null,
	InvisPreMill	float not null,
	STypeID	int not null,
	SealRuleName	national varchar(50) not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (SealRuleID,VerCode,FactoryID)
);

drop table if exists	JK_SysConfigInfo;
create table JK_SysConfigInfo
(
	FactoryID	int not null,
	VerCode	bigint not null,
	ConfigID	int not null,
	TableFrontLen	float not null,
	TableSideLen	float not null,
	BaseCabDefaultYPos	float not null,
	BaseCabSideLen	float not null,
	WallCabDefaultYPos	float not null,
	WallCabSideLen	float not null,
	ToekickFrontLen	float not null,
	DefaultBarHeight	float not null,
	DefaultSealExtraLen	float not null,
	DefaultSealPreMillLen	float not null,
	ShelfDefaultYPos	float not null,
	BGPanelDefaultYPos	float not null,
	TableToCabDefaultYLen	float not null,
	DefaultBaseCabinetXLen	float not null,
	DefaultBaseCabinetYLen	float not null,
	DefaultBaseCabinetZLen	float not null,
	DefaultWallCabinetXLen	float not null,
	DefaultWallCabinetYLen	float not null,
	DefaultWallCabinetZLen	float not null,
	DefaultLCabinetXLen	float not null,
	DefaultLCabinetZLen	float not null,
	DefaultCabinetBoardThick	float not null,
	DefaultDoorBoardThick	float not null,
	DefaultThinBoardThick	float not null,
	DefaultDecorLineHeight	float not null,
	DefaultDrawerXLen	float not null,
	DefaultDrawerYLen	float not null,
	DefaultDrawerZLen	float not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FactoryID,VerCode,ConfigID)
);

drop table if exists	JK_SysRuleConfigInfo;
create table JK_SysRuleConfigInfo
(
	FactoryID	int not null,
	VerCode	bigint not null,
	IsDel	bool not null,
	RuleConfigID	int not null,
	RuleTypeID	int not null,
	CabType	int not null,
	MinXLen	float not null,
	MinYLen	float not null,
	MaxXLen	float not null,
	MaxYLen	float not null,
	UseCount	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FactoryID,VerCode,RuleConfigID)
);

drop table if exists	JK_SysRuleTypeInfo;
create table JK_SysRuleTypeInfo
(
	FactoryID	int not null,
	VerCode	bigint not null,
	RuleTypeID	int not null,
	IsDel	bool not null,
	RuleTypeName	national varchar(20) not null,
	IsDefault	bool not null,
	RType	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (FactoryID,VerCode,RuleTypeID)
);

drop table if exists	JK_TableTopSideInfo;
create table JK_TableTopSideInfo
(
	TableTopSideID	int not null,
	TableTopID	int not null,
	IsDel	bool not null,
	ModelID	int not null,
	ShowID	int not null,
	SideWidth	float not null,
	MaterialID	int not null,
	IsDefault	bool not null,
	VerCode	bigint not null,
	FactoryID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (TableTopSideID,VerCode,FactoryID)
);

