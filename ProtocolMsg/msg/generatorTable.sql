if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabBoardGapInfo')
            and   type = 'U')
   drop table DS_CabBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabBoardInfo')
            and   type = 'U')
   drop table DS_CabBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabBoardSealInfo')
            and   type = 'U')
   drop table DS_CabBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorBoardGapInfo')
            and   type = 'U')
   drop table DS_CabDoorBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorBoardInfo')
            and   type = 'U')
   drop table DS_CabDoorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorBoardSealInfo')
            and   type = 'U')
   drop table DS_CabDoorBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorHWFInfo')
            and   type = 'U')
   drop table DS_CabDoorHWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorHandleInfo')
            and   type = 'U')
   drop table DS_CabDoorHandleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorInfo')
            and   type = 'U')
   drop table DS_CabDoorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorRegionInfo')
            and   type = 'U')
   drop table DS_CabDoorRegionInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorSlideInfo')
            and   type = 'U')
   drop table DS_CabDoorSlideInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabDoorSystemInfo')
            and   type = 'U')
   drop table DS_CabDoorSystemInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabFNFHoleInfo')
            and   type = 'U')
   drop table DS_CabFNFHoleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabFNFInfo')
            and   type = 'U')
   drop table DS_CabFNFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabFNFPartInfo')
            and   type = 'U')
   drop table DS_CabFNFPartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabFNFPartSealInfo')
            and   type = 'U')
   drop table DS_CabFNFPartSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_CabInfo')
            and   type = 'U')
   drop table DS_CabInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardInfo')
            and   type = 'U')
   drop table DS_DecorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitDoorBoardGapInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitDoorBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitDoorBoardInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitDoorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitDoorBoardSealInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitDoorBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitDoorInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitDoorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitHWFInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitHWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitHandleInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitHandleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorBoardUnitSealInfo')
            and   type = 'U')
   drop table DS_DecorBoardUnitSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorInfo')
            and   type = 'U')
   drop table DS_DecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DecorLineInfo')
            and   type = 'U')
   drop table DS_DecorLineInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_DesignPlanInfo')
            and   type = 'U')
   drop table DS_DesignPlanInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_FittingInfo')
            and   type = 'U')
   drop table DS_FittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_HWFInfo')
            and   type = 'U')
   drop table DS_HWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_MarkInfo')
            and   type = 'U')
   drop table DS_MarkInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_MatrixInfo')
            and   type = 'U')
   drop table DS_MatrixInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_OrderAddedInfo')
            and   type = 'U')
   drop table DS_OrderAddedInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_OrderDataInfo')
            and   type = 'U')
   drop table DS_OrderDataInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PackInfo')
            and   type = 'U')
   drop table DS_PackInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PointInfo')
            and   type = 'U')
   drop table DS_PointInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PrintElementInfo')
            and   type = 'U')
   drop table DS_PrintElementInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PrintGroupInfo')
            and   type = 'U')
   drop table DS_PrintGroupInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PrintInfo')
            and   type = 'U')
   drop table DS_PrintInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PrintTableInfo')
            and   type = 'U')
   drop table DS_PrintTableInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PrintTableRowColInfo')
            and   type = 'U')
   drop table DS_PrintTableRowColInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_PrintTableRowInfo')
            and   type = 'U')
   drop table DS_PrintTableRowInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_ProductInfo')
            and   type = 'U')
   drop table DS_ProductInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_RemarkInfo')
            and   type = 'U')
   drop table DS_RemarkInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_ShapeInfo')
            and   type = 'U')
   drop table DS_ShapeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_SkinInfo')
            and   type = 'U')
   drop table DS_SkinInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_TableInfo')
            and   type = 'U')
   drop table DS_TableInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_TablePartInfo')
            and   type = 'U')
   drop table DS_TablePartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_TableSideInfo')
            and   type = 'U')
   drop table DS_TableSideInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_WallDecorInfo')
            and   type = 'U')
   drop table DS_WallDecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('DS_WallInfo')
            and   type = 'U')
   drop table DS_WallInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabBoardGapInfo')
            and   type = 'U')
   drop table GC_CabBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabBoardInfo')
            and   type = 'U')
   drop table GC_CabBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabBoardSealInfo')
            and   type = 'U')
   drop table GC_CabBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorBoardGapInfo')
            and   type = 'U')
   drop table GC_CabDoorBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorBoardInfo')
            and   type = 'U')
   drop table GC_CabDoorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorBoardSealInfo')
            and   type = 'U')
   drop table GC_CabDoorBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorHWFInfo')
            and   type = 'U')
   drop table GC_CabDoorHWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorHandleInfo')
            and   type = 'U')
   drop table GC_CabDoorHandleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorInfo')
            and   type = 'U')
   drop table GC_CabDoorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorRegionInfo')
            and   type = 'U')
   drop table GC_CabDoorRegionInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorSlideInfo')
            and   type = 'U')
   drop table GC_CabDoorSlideInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabDoorSystemInfo')
            and   type = 'U')
   drop table GC_CabDoorSystemInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabFNFHoleInfo')
            and   type = 'U')
   drop table GC_CabFNFHoleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabFNFInfo')
            and   type = 'U')
   drop table GC_CabFNFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabFNFPartInfo')
            and   type = 'U')
   drop table GC_CabFNFPartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabFNFPartSealInfo')
            and   type = 'U')
   drop table GC_CabFNFPartSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_CabInfo')
            and   type = 'U')
   drop table GC_CabInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardInfo')
            and   type = 'U')
   drop table GC_DecorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitDoorBoardGapInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitDoorBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitDoorBoardInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitDoorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitDoorBoardSealInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitDoorBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitDoorInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitDoorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitHWFInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitHWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitHandleInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitHandleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorBoardUnitSealInfo')
            and   type = 'U')
   drop table GC_DecorBoardUnitSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorInfo')
            and   type = 'U')
   drop table GC_DecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DecorLineInfo')
            and   type = 'U')
   drop table GC_DecorLineInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_DesignPlanInfo')
            and   type = 'U')
   drop table GC_DesignPlanInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_FittingInfo')
            and   type = 'U')
   drop table GC_FittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_HWFInfo')
            and   type = 'U')
   drop table GC_HWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_MarkInfo')
            and   type = 'U')
   drop table GC_MarkInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_MatrixInfo')
            and   type = 'U')
   drop table GC_MatrixInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_OrderAddedInfo')
            and   type = 'U')
   drop table GC_OrderAddedInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_OrderDataInfo')
            and   type = 'U')
   drop table GC_OrderDataInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PackInfo')
            and   type = 'U')
   drop table GC_PackInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PointInfo')
            and   type = 'U')
   drop table GC_PointInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PrintElementInfo')
            and   type = 'U')
   drop table GC_PrintElementInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PrintGroupInfo')
            and   type = 'U')
   drop table GC_PrintGroupInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PrintInfo')
            and   type = 'U')
   drop table GC_PrintInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PrintTableInfo')
            and   type = 'U')
   drop table GC_PrintTableInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PrintTableRowColInfo')
            and   type = 'U')
   drop table GC_PrintTableRowColInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_PrintTableRowInfo')
            and   type = 'U')
   drop table GC_PrintTableRowInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_ProductInfo')
            and   type = 'U')
   drop table GC_ProductInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_RemarkInfo')
            and   type = 'U')
   drop table GC_RemarkInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_ShapeInfo')
            and   type = 'U')
   drop table GC_ShapeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_SkinInfo')
            and   type = 'U')
   drop table GC_SkinInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_TableInfo')
            and   type = 'U')
   drop table GC_TableInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_TablePartInfo')
            and   type = 'U')
   drop table GC_TablePartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_TableSideInfo')
            and   type = 'U')
   drop table GC_TableSideInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_WallDecorInfo')
            and   type = 'U')
   drop table GC_WallDecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GC_WallInfo')
            and   type = 'U')
   drop table GC_WallInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('LS_BoardGapInfo')
            and   type = 'U')
   drop table LS_BoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('LS_BoardInfo')
            and   type = 'U')
   drop table LS_BoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('LS_BoardSealInfo')
            and   type = 'U')
   drop table LS_BoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('LS_Objects')
            and   type = 'U')
   drop table LS_Objects
go

if exists (select 1
            from  sysobjects
           where  id = object_id('LS_OrderInfo')
            and   type = 'U')
   drop table LS_OrderInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('ZB_BoardGapInfo')
            and   type = 'U')
   drop table ZB_BoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('ZB_BoardInfo')
            and   type = 'U')
   drop table ZB_BoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('ZB_BoardSealInfo')
            and   type = 'U')
   drop table ZB_BoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('ZB_Objects')
            and   type = 'U')
   drop table ZB_Objects
go

if exists (select 1
            from  sysobjects
           where  id = object_id('ZB_OrderInfo')
            and   type = 'U')
   drop table ZB_OrderInfo
go

create table DS_CabBoardGapInfo (
	CabBoardGapID	int		not null,
	CabBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CabStructBoardID	int		not null,
	CabStructBoardGapID	int		not null,
	GapPos	int		not null,
	GapIndex	int		not null,
	GapType	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABBOARDGAPINFO primary key nonclustered (CabBoardGapID,CabBoardID,OrderCate,OrderID)
)
go

create table DS_CabBoardInfo (
	CabBoardID	int		not null,
	CabinetID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CabinetSizeID	int		not null,
	CabStructBoardID	int		not null,
	CabinetSizeBoardID	int		not null,
	CabMatPlanID	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	SealRuleID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	IsSwitchXY	int		not null,
	IsCanDel	int		not null,
	IsCanRelocate	int		not null,
	IsChangedOffset	int		not null,
	IsFakeDel	int		not null,
	MatSkinDirection	int		not null,
	SkinDirection	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	XOffsetFormula	nvarchar(255)		not null,
	YOffsetFormula	nvarchar(255)		not null,
	ZOffsetFormula	nvarchar(255)		not null,
	CabBoardName	nvarchar(50)		not null,
   constraint PK_DS_CABBOARDINFO primary key nonclustered (CabBoardID,CabinetID,OrderCate,OrderID)
)
go

create table DS_CabBoardSealInfo (
	CabBoardSealID	int		not null,
	CabBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	CabStructBoardSealID	int		not null,
	CabStructBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	SealType	int		not null,
	SealIndex	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_DS_CABBOARDSEALINFO primary key nonclustered (CabBoardSealID,CabBoardID,OrderCate,OrderID)
)
go

create table DS_CabDoorBoardGapInfo (
	CabDoorBoardGapID	int		not null,
	CabDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardGapID	int		not null,
	DoorBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GapPos	int		not null,
	GapIndex	int		not null,
	GapType	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORBOARDGAPINFO primary key nonclustered (CabDoorBoardGapID,CabDoorBoardID,OrderCate,OrderID)
)
go

create table DS_CabDoorBoardInfo (
	CabDoorBoardID	int		not null,
	CabDoorID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DoorBoardID	int		not null,
	DoorID	int		not null,
	IsUseDefaultMat	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	CoverID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	DoorBoardIndex	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	SealRuleID	int		not null,
	SplitType	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORBOARDINFO primary key nonclustered (CabDoorBoardID,CabDoorID,OrderCate,OrderID)
)
go

create table DS_CabDoorBoardSealInfo (
	CabDoorBoardSealID	int		not null,
	CabDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardID	int		not null,
	SealIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	SealType	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_DS_CABDOORBOARDSEALINFO primary key nonclustered (CabDoorBoardSealID,CabDoorBoardID,OrderCate,OrderID)
)
go

create table DS_CabDoorHWFInfo (
	CabDoorHWFID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	HWFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SettingCountRuleID	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORHWFINFO primary key nonclustered (CabDoorHWFID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table DS_CabDoorHandleInfo (
	CabDoorHandleID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	CabDesignDoorRegionID	int		not null,
	CabDesignDoorRegionHandleID	int		not null,
	DoorSystemRegionID	int		not null,
	HandleID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	MatchType	int		not null,
	IsSplit	int		not null,
	IsMatchXLen	int		not null,
	IsEmbed	int		not null,
	IsChangedOffset	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	EffectLen	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORHANDLEINFO primary key nonclustered (CabDoorHandleID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table DS_CabDoorInfo (
	CabDoorID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DoorSystemRegionID	int		not null,
	DoorMatPlanID	int		not null,
	DoorID	int		not null,
	CoverID	int		not null,
	DoorCoverID	int		not null,
	CombineType	int		not null,
	MaterialID	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	SkinID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORINFO primary key nonclustered (CabDoorID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table DS_CabDoorRegionInfo (
	CabDoorRegionID	int		not null,
	CabDoorSystemID	int		not null,
	ParentCabRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorSystemRegionID	int		not null,
	DoorSystemID	int		not null,
	CabDesignDoorRegionID	int		not null,
	CabDesignDoorSystemID	int		not null,
	CabDesignID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	RegionIndex	int		not null,
	CutDirection	int		not null,
	IsSlide	int		not null,
	IsRound	int		not null,
	IsGroup	int		not null,
	IsUseCustomThick	int		not null,
	IsCanResize	int		not null,
	IsUserDefineSize	int		not null,
	IsUserDefinePos	int		not null,
	IsUseDefaultSize	int		not null,
	IsUseCutFormula	int		not null,
	LenPrecision	int		not null,
	OpenDoorType	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	DoorFunction	int		not null,
	ParentID	int		not null,
	DefaultXLen	float		not null,
	DefaultYLen	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	YAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	CutXLen	float		not null,
	CutYLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	RealXOffsetLen	float		not null,
	RealYOffsetLen	float		not null,
	RealZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORREGIONINFO primary key nonclustered (CabDoorRegionID,CabDoorSystemID,ParentCabRegionID,OrderCate,OrderID)
)
go

create table DS_CabDoorSlideInfo (
	CabDoorSlideID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorSystemRegionID	int		not null,
	SlideID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	IsMatchXLen	int		not null,
	IsEmbed	int		not null,
	SlidePosition	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	EffectLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORSLIDEINFO primary key nonclustered (CabDoorSlideID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table DS_CabDoorSystemInfo (
	CabDoorSystemID	int		not null,
	CabinetID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	CabDesignDoorSystemID	int		not null,
	CabDesignID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DoorSystemID	int		not null,
	DoorMatPlanID	int		not null,
	CoverID	int		not null,
	InstallFaceType	int		not null,
	SupplyType	int		not null,
	MatchCabShape	int		not null,
	InstallType	int		not null,
	IsFakeDel	int		not null,
	IsCanDel	int		not null,
	MaterialID	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	YAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	RealXOffsetLen	float		not null,
	RealYOffsetLen	float		not null,
	RealZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABDOORSYSTEMINFO primary key nonclustered (CabDoorSystemID,CabinetID,OrderCate,OrderID)
)
go

create table DS_CabFNFHoleInfo (
	CabFNFHoleID	int		not null,
	CabFNFID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	HoleID	int		not null,
	FNFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	HoleTypeID	int		not null,
	HolePicID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	OverHeight	float		not null,
	MinXDistance	float		not null,
	MinZDistance	float		not null,
   constraint PK_DS_CABFNFHOLEINFO primary key nonclustered (CabFNFHoleID,CabFNFID,OrderCate,OrderID)
)
go

create table DS_CabFNFInfo (
	CabFNFID	int		not null,
	DesignOwnerID	int		not null,
	DesignOwnerGTypeID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	ContainerID	int		not null,
	ContainerGTypeID	int		not null,
	CabDesignFNFittingID	int		not null,
	FNFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsEntire	int		not null,
	IsCanDel	int		not null,
	IsFakeDel	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	MatSkinDirection	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	DefaultYPos	float		not null,
	YPos	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	UserMemo	nvarchar(500)		not null,
   constraint PK_DS_CABFNFINFO primary key nonclustered (CabFNFID,DesignOwnerID,DesignOwnerGTypeID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_CabFNFPartInfo (
	CabFNFPartID	int		not null,
	CabFNFID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FNFittingPartID	int		not null,
	FNFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsUseMain	int		not null,
	IsSplit	int		not null,
	HWFittingID	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	SealRuleID	int		not null,
	PartType	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABFNFPARTINFO primary key nonclustered (CabFNFPartID,CabFNFID,OrderCate,OrderID)
)
go

create table DS_CabFNFPartSealInfo (
	CabFNFPartSealID	int		not null,
	CabFNFPartID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	FNFittingPartID	int		not null,
	SealType	int		not null,
	SealIndex	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_DS_CABFNFPARTSEALINFO primary key nonclustered (CabFNFPartSealID,CabFNFPartID,OrderCate,OrderID)
)
go

create table DS_CabInfo (
	CabinetID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	CabDesignID	int		not null,
	CabinetSizeID	int		not null,
	CabFunction	int		not null,
	CabStructID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CabGapType	int		not null,
	CabShapeID	int		not null,
	PosType	int		not null,
	CabMatPlanID	int		not null,
	SourceID	int		not null,
	SourceType	int		not null,
	TransCode	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	SealRuleID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	ShapeXLen	float		not null,
	ShapeZLen	float		not null,
	GapXLen	float		not null,
	GapYLen	float		not null,
	GapZLen	float		not null,
	YPos	float		not null,
	FootCount	int		not null,
	FootID	int		not null,
	FootYLen	float		not null,
	IsSysFootRule	int		not null,
	IsStandard	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_CABINFO primary key nonclustered (CabinetID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_DecorBoardInfo (
	DesignDecorBoardID	int		not null,
	DesignPlanID	int		not null,
	DesignParentID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DecorBoardID	int		not null,
	DecorParentID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GTypeID	int		not null,
	IsAutoFit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	IsChangedSize	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	DoorModelPlanID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	MaterialID	int		not null,
	SourceGType	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	DefaultYPos	float		not null,
	YPos	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDINFO primary key nonclustered (DesignDecorBoardID,DesignPlanID,DesignParentID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitDoorBoardGapInfo (
	DesignDBUDoorBoardGapID	int		not null,
	DesignDBUDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardGapID	int		not null,
	DoorBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GapPos	int		not null,
	GapIndex	int		not null,
	GapType	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDUNITDOORBOARDGAPINFO primary key nonclustered (DesignDBUDoorBoardGapID,DesignDBUDoorBoardID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitDoorBoardInfo (
	DesignDBUDoorBoardID	int		not null,
	DesignDBUDoorID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardID	int		not null,
	DoorID	int		not null,
	DoorBoardIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsUseDefaultMat	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	CoverID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	SealRuleID	int		not null,
	SplitType	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDUNITDOORBOARDINFO primary key nonclustered (DesignDBUDoorBoardID,DesignDBUDoorID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitDoorBoardSealInfo (
	DesignDBUDoorBoardSealID	int		not null,
	DesignDBUDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardID	int		not null,
	SealIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	SealType	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_DS_DECORBOARDUNITDOORBOARDSEALINFO primary key nonclustered (DesignDBUDoorBoardSealID,DesignDBUDoorBoardID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitDoorInfo (
	DesignDBUDoorID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitID	int		not null,
	DoorMatPlanID	int		not null,
	DoorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CoverID	int		not null,
	DoorCoverID	int		not null,
	CombineType	int		not null,
	MaterialID	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	SkinID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDUNITDOORINFO primary key nonclustered (DesignDBUDoorID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitHWFInfo (
	DesignDBUHWFID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitID	int		not null,
	HWFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SettingCountRuleID	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDUNITHWFINFO primary key nonclustered (DesignDBUHWFID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitHandleInfo (
	DesignDBUHandleID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitHandleID	int		not null,
	DecorBoardUnitID	int		not null,
	HandleID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	MatchType	int		not null,
	IsSplit	int		not null,
	IsMatchXLen	int		not null,
	IsEmbed	int		not null,
	IsChangedOffset	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	EffectLen	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDUNITHANDLEINFO primary key nonclustered (DesignDBUHandleID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitInfo (
	DesignDecorBoardUnitID	int		not null,
	DesignDecorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitID	int		not null,
	DecorBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsUseDoor	int		not null,
	IsUseDefaultMat	int		not null,
	DefaultOpenType	int		not null,
	SplitType	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	DecorBoardUnitIndex	int		not null,
	GTypeID	int		not null,
	SealRuleID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORBOARDUNITINFO primary key nonclustered (DesignDecorBoardUnitID,DesignDecorBoardID,OrderCate,OrderID)
)
go

create table DS_DecorBoardUnitSealInfo (
	DesignDecorBoardUnitSealID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DecorBoardUnitID	int		not null,
	DecorBoardUnitSealID	int		not null,
	SealIndex	int		not null,
	SealType	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_DS_DECORBOARDUNITSEALINFO primary key nonclustered (DesignDecorBoardUnitSealID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table DS_DecorInfo (
	DesignDecorID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DecorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	YPos	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORINFO primary key nonclustered (DesignDecorID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_DecorLineInfo (
	DesignDecorLineID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DecorLineID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GTypeID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	ZOffset	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_DECORLINEINFO primary key nonclustered (DesignDecorLineID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_DesignPlanInfo (
	DesignPlanID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	ProductSeriesID	int		not null,
	DesignerID	int		not null,
	UpdaterID	int		not null,
	WallDecorID	int		not null,
	WallSkinID	int		not null,
	IsWallStretch	int		not null,
	IsActive	int		not null,
	CurScale	float		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	DesignPlanName	nvarchar(50)		not null,
	DesignPlanMemo	nvarchar(500)		not null,
   constraint PK_DS_DESIGNPLANINFO primary key nonclustered (DesignPlanID,OrderCate,OrderID)
)
go

create table DS_FittingInfo (
	DesignFittingID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	FittingPackID	int		not null,
	FittingID	int		not null,
	GTypeID	int		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	ShowID	int		not null,
	UnitID	int		not null,
	FittingCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_FITTINGINFO primary key nonclustered (DesignFittingID,OrderCate,DesignPlanID,OrderID,FittingPackID,FittingID)
)
go

create table DS_HWFInfo (
	DesignHWFID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	HWFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_HWFINFO primary key nonclustered (DesignHWFID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_MarkInfo (
	DesignMarkID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DesignPrintID	int		not null,
	PrintID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	MarkType	int		not null,
	StartX	float		not null,
	StartY	float		not null,
	OffsetX	float		not null,
	OffsetY	float		not null,
	StopX	float		not null,
	StopY	float		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_MARKINFO primary key nonclustered (DesignMarkID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_MatrixInfo (
	OrderID	bigint		not null,
	OrderCate	int		not null,
	DesignPlanID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TransObjID	bigint		not null,
	TransObjType	int		not null,
	M11	float		not null,
	M12	float		not null,
	M13	float		not null,
	M21	float		not null,
	M22	float		not null,
	M23	float		not null,
	M31	float		not null,
	M32	float		not null,
	M33	float		not null,
	M41	float		not null,
	M42	float		not null,
	M43	float		not null,
	M44	float		not null,
   constraint PK_DS_MATRIXINFO primary key nonclustered (OrderID,OrderCate,DesignPlanID,TransObjID)
)
go

create table DS_OrderAddedInfo (
	OrderAddedID	int		not null,
	OrderID	bigint		not null,
	OrderCate	int		not null,
	FactoryID	int		not null,
	UseCount	int		not null,
	UnitPrice	float		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	AddedName	nvarchar(50)		not null,
	MatName	nvarchar(50)		not null,
	UnitName	nvarchar(50)		not null,
	SpecName	nvarchar(50)		not null,
   constraint PK_DS_ORDERADDEDINFO primary key nonclustered (OrderAddedID,OrderID,OrderCate)
)
go

create table DS_OrderDataInfo (
	OrderID	bigint		not null,
	OrderCate	int		not null,
	FactoryID	int		not null,
	ShopID	int		not null,
	MaxMetaID	int		not null,
	DesignerID	int		not null,
	SellerID	int		not null,
	PreSurveyorID	int		not null,
	ReSurveyorID	int		not null,
	IsNew	int		not null,
	IsShare	int		not null,
	IsUpload	int		not null,
	CreateTime	datetime		not null,
	PreSurveyTime	datetime		not null,
	ReSurveyTime	datetime		not null,
	OrderTime	datetime		not null,
	DeliveryTime	datetime		not null,
	InstallTime	datetime		not null,
	GeoCode	nvarchar(6)		not null,
	OrderTitle	nvarchar(100)		not null,
	CustomerName	nvarchar(32)		not null,
	CustomerTel	nvarchar(32)		not null,
	CustomerPostcode	nvarchar(10)		not null,
	CustomerQQ	nvarchar(32)		not null,
	CustomerEmail	nvarchar(50)		not null,
	InstallAddress	nvarchar(200)		not null,
	OrderMemo	nvarchar(500)		not null,
	AttachFilePath	nvarchar(256)		not null,
   constraint PK_DS_ORDERDATAINFO primary key nonclustered (OrderID,OrderCate)
)
go

create table DS_PackInfo (
	DesignPackID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	FittingPackID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	IsSeparate	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_PACKINFO primary key nonclustered (DesignPackID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_PointInfo (
	DesignPlanID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TransObjID	int		not null,
	TransObjType	int		not null,
	PointIndex	int		not null,
	CoordX	float		not null,
	CoordY	float		not null,
	CoordZ	float		not null,
   constraint PK_DS_POINTINFO primary key nonclustered (DesignPlanID,OrderCate,OrderID,TransObjID,TransObjType,PointIndex)
)
go

create table DS_PrintElementInfo (
	DesignPrintElementID	int		not null,
	DesignPrintGroupID	int		not null,
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	ObjType	int		not null,
	ObjID	int		not null,
	PrintGroupID	int		not null,
	ViewType	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_PRINTELEMENTINFO primary key nonclustered (DesignPrintElementID,DesignPrintGroupID,DesignPrintID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_PrintGroupInfo (
	DesignPrintGroupID	int		not null,
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	PrintID	int		not null,
	PrintGroupID	int		not null,
	ManyViewPort	int		not null,
	FrameStyle	int		not null,
	FrameColorR	int		not null,
	FrameColorG	int		not null,
	FrameColorB	int		not null,
	FrameColorA	int		not null,
	FrameWidth	float		not null,
	LeftX	float		not null,
	RightY	float		not null,
	ScaleX	float		not null,
	ScaleY	float		not null,
	ScaleOffsetX	float		not null,
	ScaleOffsetY	float		not null,
	ScaleFactor	float		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_PRINTGROUPINFO primary key nonclustered (DesignPrintGroupID,DesignPrintID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_PrintInfo (
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	PrintID	int		not null,
	PageBorderStyle	int		not null,
	PageBorderColor	bigint		not null,
	PageBorderWidth	float		not null,
	ShaderPicTopX	float		not null,
	ShaderPicTopY	float		not null,
	ShaderPicHeight	float		not null,
	ShaderPicWidth	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	PrintName	nvarchar(50)		not null,
	ShaderPicPath	nvarchar(255)		not null,
   constraint PK_DS_PRINTINFO primary key nonclustered (DesignPrintID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_PrintTableInfo (
	DesignPrintTableID	int		not null,
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableSign	int		not null,
	WhichLine	int		not null,
	Align	int		not null,
	LogoSign	int		not null,
	TextPos	int		not null,
	SetLine	int		not null,
	HasLogo	int		not null,
	IsSelected	int		not null,
	LineUp	int		not null,
	LineDown	int		not null,
	LineLeft	int		not null,
	LineRight	int		not null,
	LineUpSign	int		not null,
	LineDownSign	int		not null,
	LineLeftSign	int		not null,
	LineRightSign	int		not null,
	LineWidth	float		not null,
	LeftTopX	float		not null,
	LeftTopY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	LineUpWidth	float		not null,
	LineDownWidth	float		not null,
	LineRightWidth	float		not null,
	LineLeftWidth	float		not null,
	FaceName	nvarchar(32)		not null,
	LogoPath	nvarchar(500)		not null,
	SerialPath	nvarchar(500)		not null,
	TextValue	nvarchar(500)		not null,
   constraint PK_DS_PRINTTABLEINFO primary key nonclustered (DesignPrintTableID,DesignPrintID,OrderCate,OrderID,DesignPlanID)
)
go

create table DS_PrintTableRowColInfo (
	DesignPrintTableRowColID	int		not null,
	DesignPrintTableRowID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableSign	int		not null,
	RowNumber	int		not null,
	ColNumber	int		not null,
	WhichLine	int		not null,
	Align	int		not null,
	LogoSign	int		not null,
	TextPos	int		not null,
	SetLine	int		not null,
	HasLogo	int		not null,
	IsSelected	int		not null,
	LineUp	int		not null,
	LineDown	int		not null,
	LineLeft	int		not null,
	LineRight	int		not null,
	LineUpSign	int		not null,
	LineDownSign	int		not null,
	LineLeftSign	int		not null,
	LineRightSign	int		not null,
	LineWidth	float		not null,
	LeftTopX	float		not null,
	LeftTopY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	LineUpWidth	float		not null,
	LineDownWidth	float		not null,
	LineRightWidth	float		not null,
	LineLeftWidth	float		not null,
	FaceName	nvarchar(32)		not null,
	LogoPath	nvarchar(500)		not null,
	SerialPath	nvarchar(500)		not null,
	TextValue	nvarchar(500)		not null,
   constraint PK_DS_PRINTTABLEROWCOLINFO primary key nonclustered (DesignPrintTableRowColID,DesignPrintTableRowID,OrderCate,OrderID,DesignPlanID)
)
go

create table DS_PrintTableRowInfo (
	DesignPrintTableRowID	int		not null,
	DesignPrintTableID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableSign	int		not null,
	RowNumber	int		not null,
	WhichLine	int		not null,
	Align	int		not null,
	LogoSign	int		not null,
	TextPos	int		not null,
	SetLine	int		not null,
	HasLogo	int		not null,
	IsSelected	int		not null,
	LineUp	int		not null,
	LineDown	int		not null,
	LineLeft	int		not null,
	LineRight	int		not null,
	LineUpSign	int		not null,
	LineDownSign	int		not null,
	LineLeftSign	int		not null,
	LineRightSign	int		not null,
	LineWidth	float		not null,
	LeftTopX	float		not null,
	LeftTopY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	LineUpWidth	float		not null,
	LineDownWidth	float		not null,
	LineRightWidth	float		not null,
	LineLeftWidth	float		not null,
	FaceName	nvarchar(32)		not null,
	LogoPath	nvarchar(500)		not null,
	SerialPath	nvarchar(500)		not null,
	TextValue	nvarchar(500)		not null,
   constraint PK_DS_PRINTTABLEROWINFO primary key nonclustered (DesignPrintTableRowID,DesignPrintTableID,OrderCate,OrderID,DesignPlanID)
)
go

create table DS_ProductInfo (
	DesignProductID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	ProductID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	YPos	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_PRODUCTINFO primary key nonclustered (DesignProductID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_RemarkInfo (
	DesignRemarkID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DesignPrintID	int		not null,
	PrintID	int		not null,
	BGColor	bigint		not null,
	ForeColor	bigint		not null,
	FontSize	int		not null,
	FontStyle	int		not null,
	LineSpace	int		not null,
	ArrowID	int		not null,
	ArrowStyle	int		not null,
	FrameStyle	int		not null,
	FrameColor	bigint		not null,
	DirectLine	int		not null,
	DirectStyle	int		not null,
	DirectLineStyle	int		not null,
	CommentFrameStyle	int		not null,
	IsSingleMode	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	FrameWidth	float		not null,
	ArrowX	float		not null,
	ArrowY	float		not null,
	StartX	float		not null,
	StartY	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	FaceName	nvarchar(32)		not null,
	RemarkText	nvarchar(500)		not null,
   constraint PK_DS_REMARKINFO primary key nonclustered (DesignRemarkID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_ShapeInfo (
	DesignShapeID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DesignPrintID	int		not null,
	PrintID	int		not null,
	ShapeType	int		not null,
	LineWidth	int		not null,
	LineStyle	int		not null,
	StartX	float		not null,
	StartY	float		not null,
	StopX	float		not null,
	StopY	float		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	AttachFilePath	nvarchar(255)		not null,
   constraint PK_DS_SHAPEINFO primary key nonclustered (DesignShapeID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_SkinInfo (
	DesignSkinID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DecorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSkinStretch	int		not null,
	GTypeID	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SkinID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	GroundLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_SKININFO primary key nonclustered (DesignSkinID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_TableInfo (
	DesignTableID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	TableID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TableIndex	int		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	UnitID	int		not null,
	ZLen	float		not null,
	YPos	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_TABLEINFO primary key nonclustered (DesignTableID,OrderCate,DesignPlanID,OrderID)
)
go

create table DS_TablePartInfo (
	DesignTablePartID	int		not null,
	DesignTableID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorLineID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TableSideIndex	int		not null,
	IsSplit	int		not null,
	IsUserSetYLen	int		not null,
	GTypeID	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	DefaultYLen	int		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_TABLEPARTINFO primary key nonclustered (DesignTablePartID,DesignTableID,OrderCate,OrderID)
)
go

create table DS_TableSideInfo (
	DesignTableSideID	int		not null,
	DesignTableID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableTopID	int		not null,
	TableTopSideID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TableSideIndex	int		not null,
	IsUseTableMat	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	SideWidth	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_TABLESIDEINFO primary key nonclustered (DesignTableSideID,OrderID)
)
go

create table DS_WallDecorInfo (
	DesignWallDecorID	int		not null,
	DesignWallID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	IsModelRevers	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	OffsetXLen	float		not null,
	OffsetYLen	float		not null,
	OffsetZLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_WALLDECORINFO primary key nonclustered (DesignWallDecorID,DesignWallID,OrderCate,OrderID)
)
go

create table DS_WallInfo (
	DesignWallID	int		not null,
	DesignPlanID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	WallType	int		not null,
	WallIndex	int		not null,
	GroupID	int		not null,
	DecorID	int		not null,
	SkinID	int		not null,
	IsSkinStretch	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	StartX	float		not null,
	StartY	float		not null,
	EndX	float		not null,
	EndY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	GroundLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_DS_WALLINFO primary key nonclustered (DesignWallID,DesignPlanID,OrderCate,OrderID)
)
go

create table GC_CabBoardGapInfo (
	CabBoardGapID	int		not null,
	CabBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CabStructBoardID	int		not null,
	CabStructBoardGapID	int		not null,
	GapPos	int		not null,
	GapIndex	int		not null,
	GapType	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABBOARDGAPINFO primary key nonclustered (CabBoardGapID,CabBoardID,OrderCate,OrderID)
)
go

create table GC_CabBoardInfo (
	CabBoardID	int		not null,
	CabinetID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CabinetSizeID	int		not null,
	CabStructBoardID	int		not null,
	CabinetSizeBoardID	int		not null,
	CabMatPlanID	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	SealRuleID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	IsSwitchXY	int		not null,
	IsCanDel	int		not null,
	IsCanRelocate	int		not null,
	IsChangedOffset	int		not null,
	IsFakeDel	int		not null,
	MatSkinDirection	int		not null,
	SkinDirection	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	XOffsetFormula	nvarchar(255)		not null,
	YOffsetFormula	nvarchar(255)		not null,
	ZOffsetFormula	nvarchar(255)		not null,
	CabBoardName	nvarchar(50)		not null,
   constraint PK_GC_CABBOARDINFO primary key nonclustered (CabBoardID,CabinetID,OrderCate,OrderID)
)
go

create table GC_CabBoardSealInfo (
	CabBoardSealID	int		not null,
	CabBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	CabStructBoardSealID	int		not null,
	CabStructBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	SealType	int		not null,
	SealIndex	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_GC_CABBOARDSEALINFO primary key nonclustered (CabBoardSealID,CabBoardID,OrderCate,OrderID)
)
go

create table GC_CabDoorBoardGapInfo (
	CabDoorBoardGapID	int		not null,
	CabDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardGapID	int		not null,
	DoorBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GapPos	int		not null,
	GapIndex	int		not null,
	GapType	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORBOARDGAPINFO primary key nonclustered (CabDoorBoardGapID,CabDoorBoardID,OrderCate,OrderID)
)
go

create table GC_CabDoorBoardInfo (
	CabDoorBoardID	int		not null,
	CabDoorID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DoorBoardID	int		not null,
	DoorID	int		not null,
	IsUseDefaultMat	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	CoverID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	DoorBoardIndex	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	SealRuleID	int		not null,
	SplitType	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORBOARDINFO primary key nonclustered (CabDoorBoardID,CabDoorID,OrderCate,OrderID)
)
go

create table GC_CabDoorBoardSealInfo (
	CabDoorBoardSealID	int		not null,
	CabDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardID	int		not null,
	SealIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	SealType	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_GC_CABDOORBOARDSEALINFO primary key nonclustered (CabDoorBoardSealID,CabDoorBoardID,OrderCate,OrderID)
)
go

create table GC_CabDoorHWFInfo (
	CabDoorHWFID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	HWFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SettingCountRuleID	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORHWFINFO primary key nonclustered (CabDoorHWFID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table GC_CabDoorHandleInfo (
	CabDoorHandleID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	CabDesignDoorRegionID	int		not null,
	CabDesignDoorRegionHandleID	int		not null,
	DoorSystemRegionID	int		not null,
	HandleID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	MatchType	int		not null,
	IsSplit	int		not null,
	IsMatchXLen	int		not null,
	IsEmbed	int		not null,
	IsChangedOffset	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	EffectLen	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORHANDLEINFO primary key nonclustered (CabDoorHandleID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table GC_CabDoorInfo (
	CabDoorID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DoorSystemRegionID	int		not null,
	DoorMatPlanID	int		not null,
	DoorID	int		not null,
	CoverID	int		not null,
	DoorCoverID	int		not null,
	CombineType	int		not null,
	MaterialID	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	SkinID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORINFO primary key nonclustered (CabDoorID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table GC_CabDoorRegionInfo (
	CabDoorRegionID	int		not null,
	CabDoorSystemID	int		not null,
	ParentCabRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorSystemRegionID	int		not null,
	DoorSystemID	int		not null,
	CabDesignDoorRegionID	int		not null,
	CabDesignDoorSystemID	int		not null,
	CabDesignID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	RegionIndex	int		not null,
	CutDirection	int		not null,
	IsSlide	int		not null,
	IsRound	int		not null,
	IsGroup	int		not null,
	IsUseCustomThick	int		not null,
	IsCanResize	int		not null,
	IsUserDefineSize	int		not null,
	IsUserDefinePos	int		not null,
	IsUseDefaultSize	int		not null,
	IsUseCutFormula	int		not null,
	LenPrecision	int		not null,
	OpenDoorType	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	DoorFunction	int		not null,
	ParentID	int		not null,
	DefaultXLen	float		not null,
	DefaultYLen	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	YAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	CutXLen	float		not null,
	CutYLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	RealXOffsetLen	float		not null,
	RealYOffsetLen	float		not null,
	RealZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORREGIONINFO primary key nonclustered (CabDoorRegionID,CabDoorSystemID,ParentCabRegionID,OrderCate,OrderID)
)
go

create table GC_CabDoorSlideInfo (
	CabDoorSlideID	int		not null,
	CabDoorRegionID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorSystemRegionID	int		not null,
	SlideID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	IsMatchXLen	int		not null,
	IsEmbed	int		not null,
	SlidePosition	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	EffectLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORSLIDEINFO primary key nonclustered (CabDoorSlideID,CabDoorRegionID,OrderCate,OrderID)
)
go

create table GC_CabDoorSystemInfo (
	CabDoorSystemID	int		not null,
	CabinetID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	CabDesignDoorSystemID	int		not null,
	CabDesignID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DoorSystemID	int		not null,
	DoorMatPlanID	int		not null,
	CoverID	int		not null,
	InstallFaceType	int		not null,
	SupplyType	int		not null,
	MatchCabShape	int		not null,
	InstallType	int		not null,
	IsFakeDel	int		not null,
	IsCanDel	int		not null,
	MaterialID	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	YAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	RealXOffsetLen	float		not null,
	RealYOffsetLen	float		not null,
	RealZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABDOORSYSTEMINFO primary key nonclustered (CabDoorSystemID,CabinetID,OrderCate,OrderID)
)
go

create table GC_CabFNFHoleInfo (
	CabFNFHoleID	int		not null,
	CabFNFID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	HoleID	int		not null,
	FNFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	HoleTypeID	int		not null,
	HolePicID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	OverHeight	float		not null,
	MinXDistance	float		not null,
	MinZDistance	float		not null,
   constraint PK_GC_CABFNFHOLEINFO primary key nonclustered (CabFNFHoleID,CabFNFID,OrderCate,OrderID)
)
go

create table GC_CabFNFInfo (
	CabFNFID	int		not null,
	DesignOwnerID	int		not null,
	DesignOwnerGTypeID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	ContainerID	int		not null,
	ContainerGTypeID	int		not null,
	CabDesignFNFittingID	int		not null,
	FNFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsEntire	int		not null,
	IsCanDel	int		not null,
	IsFakeDel	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	MatSkinDirection	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	DefaultYPos	float		not null,
	YPos	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	UserMemo	nvarchar(500)		not null,
   constraint PK_GC_CABFNFINFO primary key nonclustered (CabFNFID,DesignOwnerID,DesignOwnerGTypeID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_CabFNFPartInfo (
	CabFNFPartID	int		not null,
	CabFNFID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FNFittingPartID	int		not null,
	FNFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsUseMain	int		not null,
	IsSplit	int		not null,
	HWFittingID	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	SealRuleID	int		not null,
	PartType	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABFNFPARTINFO primary key nonclustered (CabFNFPartID,CabFNFID,OrderCate,OrderID)
)
go

create table GC_CabFNFPartSealInfo (
	CabFNFPartSealID	int		not null,
	CabFNFPartID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	FNFittingPartID	int		not null,
	SealType	int		not null,
	SealIndex	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_GC_CABFNFPARTSEALINFO primary key nonclustered (CabFNFPartSealID,CabFNFPartID,OrderCate,OrderID)
)
go

create table GC_CabInfo (
	CabinetID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	CabDesignID	int		not null,
	CabinetSizeID	int		not null,
	CabFunction	int		not null,
	CabStructID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CabGapType	int		not null,
	CabShapeID	int		not null,
	PosType	int		not null,
	CabMatPlanID	int		not null,
	SourceID	int		not null,
	SourceType	int		not null,
	TransCode	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	SealRuleID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	ShapeXLen	float		not null,
	ShapeZLen	float		not null,
	GapXLen	float		not null,
	GapYLen	float		not null,
	GapZLen	float		not null,
	YPos	float		not null,
	FootCount	int		not null,
	FootID	int		not null,
	FootYLen	float		not null,
	IsSysFootRule	int		not null,
	IsStandard	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_CABINFO primary key nonclustered (CabinetID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_DecorBoardInfo (
	DesignDecorBoardID	int		not null,
	DesignPlanID	int		not null,
	DesignParentID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DecorBoardID	int		not null,
	DecorParentID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GTypeID	int		not null,
	IsAutoFit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	IsChangedSize	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	DoorModelPlanID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	MaterialID	int		not null,
	SourceGType	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	DefaultYPos	float		not null,
	YPos	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDINFO primary key nonclustered (DesignDecorBoardID,DesignPlanID,DesignParentID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitDoorBoardGapInfo (
	DesignDBUDoorBoardGapID	int		not null,
	DesignDBUDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardGapID	int		not null,
	DoorBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GapPos	int		not null,
	GapIndex	int		not null,
	GapType	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDUNITDOORBOARDGAPINFO primary key nonclustered (DesignDBUDoorBoardGapID,DesignDBUDoorBoardID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitDoorBoardInfo (
	DesignDBUDoorBoardID	int		not null,
	DesignDBUDoorID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardID	int		not null,
	DoorID	int		not null,
	DoorBoardIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsUseDefaultMat	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	CoverID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	SealRuleID	int		not null,
	SplitType	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDUNITDOORBOARDINFO primary key nonclustered (DesignDBUDoorBoardID,DesignDBUDoorID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitDoorBoardSealInfo (
	DesignDBUDoorBoardSealID	int		not null,
	DesignDBUDoorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DoorBoardID	int		not null,
	SealIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	SealType	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_GC_DECORBOARDUNITDOORBOARDSEALINFO primary key nonclustered (DesignDBUDoorBoardSealID,DesignDBUDoorBoardID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitDoorInfo (
	DesignDBUDoorID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitID	int		not null,
	DoorMatPlanID	int		not null,
	DoorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	CoverID	int		not null,
	DoorCoverID	int		not null,
	CombineType	int		not null,
	MaterialID	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	SkinID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDUNITDOORINFO primary key nonclustered (DesignDBUDoorID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitHWFInfo (
	DesignDBUHWFID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitID	int		not null,
	HWFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SettingCountRuleID	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDUNITHWFINFO primary key nonclustered (DesignDBUHWFID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitHandleInfo (
	DesignDBUHandleID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitHandleID	int		not null,
	DecorBoardUnitID	int		not null,
	HandleID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	MatchType	int		not null,
	IsSplit	int		not null,
	IsMatchXLen	int		not null,
	IsEmbed	int		not null,
	IsChangedOffset	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XAdjustLen	float		not null,
	RealXLen	float		not null,
	RealYLen	float		not null,
	RealZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	EffectLen	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDUNITHANDLEINFO primary key nonclustered (DesignDBUHandleID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitInfo (
	DesignDecorBoardUnitID	int		not null,
	DesignDecorBoardID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorBoardUnitID	int		not null,
	DecorBoardID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsUseDoor	int		not null,
	IsUseDefaultMat	int		not null,
	DefaultOpenType	int		not null,
	SplitType	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	SkinDirection	int		not null,
	MatSkinDirection	int		not null,
	DoorMatPlanID	int		not null,
	CabMatPlanID	int		not null,
	SourceType	int		not null,
	DecorBoardUnitIndex	int		not null,
	GTypeID	int		not null,
	SealRuleID	int		not null,
	XDock	int		not null,
	YDock	int		not null,
	ZDock	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	XOffsetLen	float		not null,
	YOffsetLen	float		not null,
	ZOffsetLen	float		not null,
	ArcX	float		not null,
	ArcY	float		not null,
	ArcZ	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORBOARDUNITINFO primary key nonclustered (DesignDecorBoardUnitID,DesignDecorBoardID,OrderCate,OrderID)
)
go

create table GC_DecorBoardUnitSealInfo (
	DesignDecorBoardUnitSealID	int		not null,
	DesignDecorBoardUnitID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	DecorBoardUnitID	int		not null,
	DecorBoardUnitSealID	int		not null,
	SealIndex	int		not null,
	SealType	int		not null,
	MaterialID	int		not null,
	SkinID	int		not null,
	PreMill	float		not null,
   constraint PK_GC_DECORBOARDUNITSEALINFO primary key nonclustered (DesignDecorBoardUnitSealID,DesignDecorBoardUnitID,OrderCate,OrderID)
)
go

create table GC_DecorInfo (
	DesignDecorID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DecorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	YPos	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORINFO primary key nonclustered (DesignDecorID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_DecorLineInfo (
	DesignDecorLineID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DecorLineID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	GTypeID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	ZOffset	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_DECORLINEINFO primary key nonclustered (DesignDecorLineID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_DesignPlanInfo (
	DesignPlanID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	ProductSeriesID	int		not null,
	DesignerID	int		not null,
	UpdaterID	int		not null,
	WallDecorID	int		not null,
	WallSkinID	int		not null,
	IsWallStretch	int		not null,
	IsActive	int		not null,
	CurScale	float		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	DesignPlanName	nvarchar(50)		not null,
	DesignPlanMemo	nvarchar(500)		not null,
   constraint PK_GC_DESIGNPLANINFO primary key nonclustered (DesignPlanID,OrderCate,OrderID)
)
go

create table GC_FittingInfo (
	DesignFittingID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	FittingPackID	int		not null,
	FittingID	int		not null,
	GTypeID	int		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	ShowID	int		not null,
	UnitID	int		not null,
	FittingCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_FITTINGINFO primary key nonclustered (DesignFittingID,OrderCate,DesignPlanID,OrderID,FittingPackID,FittingID)
)
go

create table GC_HWFInfo (
	DesignHWFID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	HWFittingID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_HWFINFO primary key nonclustered (DesignHWFID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_MarkInfo (
	DesignMarkID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DesignPrintID	int		not null,
	PrintID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	MarkType	int		not null,
	StartX	float		not null,
	StartY	float		not null,
	OffsetX	float		not null,
	OffsetY	float		not null,
	StopX	float		not null,
	StopY	float		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_MARKINFO primary key nonclustered (DesignMarkID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_MatrixInfo (
	OrderID	bigint		not null,
	OrderCate	int		not null,
	DesignPlanID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TransObjID	bigint		not null,
	TransObjType	int		not null,
	M11	float		not null,
	M12	float		not null,
	M13	float		not null,
	M21	float		not null,
	M22	float		not null,
	M23	float		not null,
	M31	float		not null,
	M32	float		not null,
	M33	float		not null,
	M41	float		not null,
	M42	float		not null,
	M43	float		not null,
	M44	float		not null,
   constraint PK_GC_MATRIXINFO primary key nonclustered (OrderID,OrderCate,DesignPlanID,TransObjID)
)
go

create table GC_OrderAddedInfo (
	OrderAddedID	int		not null,
	OrderID	bigint		not null,
	OrderCate	int		not null,
	FactoryID	int		not null,
	UseCount	int		not null,
	UnitPrice	float		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	AddedName	nvarchar(50)		not null,
	MatName	nvarchar(50)		not null,
	UnitName	nvarchar(50)		not null,
	SpecName	nvarchar(50)		not null,
   constraint PK_GC_ORDERADDEDINFO primary key nonclustered (OrderAddedID,OrderID,OrderCate)
)
go

create table GC_OrderDataInfo (
	OrderID	bigint		not null,
	OrderCate	int		not null,
	FactoryID	int		not null,
	ShopID	int		not null,
	MaxMetaID	int		not null,
	DesignerID	int		not null,
	SellerID	int		not null,
	PreSurveyorID	int		not null,
	ReSurveyorID	int		not null,
	IsNew	int		not null,
	IsShare	int		not null,
	IsUpload	int		not null,
	CreateTime	datetime		not null,
	PreSurveyTime	datetime		not null,
	ReSurveyTime	datetime		not null,
	OrderTime	datetime		not null,
	DeliveryTime	datetime		not null,
	InstallTime	datetime		not null,
	GeoCode	nvarchar(6)		not null,
	OrderTitle	nvarchar(100)		not null,
	CustomerName	nvarchar(32)		not null,
	CustomerTel	nvarchar(32)		not null,
	CustomerPostcode	nvarchar(10)		not null,
	CustomerQQ	nvarchar(32)		not null,
	CustomerEmail	nvarchar(50)		not null,
	InstallAddress	nvarchar(200)		not null,
	OrderMemo	nvarchar(500)		not null,
	AttachFilePath	nvarchar(256)		not null,
   constraint PK_GC_ORDERDATAINFO primary key nonclustered (OrderID,OrderCate)
)
go

create table GC_PackInfo (
	DesignPackID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	FittingPackID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	IsSeparate	int		not null,
	UnitID	int		not null,
	UseCount	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_PACKINFO primary key nonclustered (DesignPackID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_PointInfo (
	DesignPlanID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TransObjID	int		not null,
	TransObjType	int		not null,
	PointIndex	int		not null,
	CoordX	float		not null,
	CoordY	float		not null,
	CoordZ	float		not null,
   constraint PK_GC_POINTINFO primary key nonclustered (DesignPlanID,OrderCate,OrderID,TransObjID,TransObjType,PointIndex)
)
go

create table GC_PrintElementInfo (
	DesignPrintElementID	int		not null,
	DesignPrintGroupID	int		not null,
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	ObjType	int		not null,
	ObjID	int		not null,
	PrintGroupID	int		not null,
	ViewType	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_PRINTELEMENTINFO primary key nonclustered (DesignPrintElementID,DesignPrintGroupID,DesignPrintID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_PrintGroupInfo (
	DesignPrintGroupID	int		not null,
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	PrintID	int		not null,
	PrintGroupID	int		not null,
	ManyViewPort	int		not null,
	FrameStyle	int		not null,
	FrameColorR	int		not null,
	FrameColorG	int		not null,
	FrameColorB	int		not null,
	FrameColorA	int		not null,
	FrameWidth	float		not null,
	LeftX	float		not null,
	RightY	float		not null,
	ScaleX	float		not null,
	ScaleY	float		not null,
	ScaleOffsetX	float		not null,
	ScaleOffsetY	float		not null,
	ScaleFactor	float		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_PRINTGROUPINFO primary key nonclustered (DesignPrintGroupID,DesignPrintID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_PrintInfo (
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	PrintID	int		not null,
	PageBorderStyle	int		not null,
	PageBorderColor	bigint		not null,
	PageBorderWidth	float		not null,
	ShaderPicTopX	float		not null,
	ShaderPicTopY	float		not null,
	ShaderPicHeight	float		not null,
	ShaderPicWidth	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	PrintName	nvarchar(50)		not null,
	ShaderPicPath	nvarchar(255)		not null,
   constraint PK_GC_PRINTINFO primary key nonclustered (DesignPrintID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_PrintTableInfo (
	DesignPrintTableID	int		not null,
	DesignPrintID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableSign	int		not null,
	WhichLine	int		not null,
	Align	int		not null,
	LogoSign	int		not null,
	TextPos	int		not null,
	SetLine	int		not null,
	HasLogo	int		not null,
	IsSelected	int		not null,
	LineUp	int		not null,
	LineDown	int		not null,
	LineLeft	int		not null,
	LineRight	int		not null,
	LineUpSign	int		not null,
	LineDownSign	int		not null,
	LineLeftSign	int		not null,
	LineRightSign	int		not null,
	LineWidth	float		not null,
	LeftTopX	float		not null,
	LeftTopY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	LineUpWidth	float		not null,
	LineDownWidth	float		not null,
	LineRightWidth	float		not null,
	LineLeftWidth	float		not null,
	FaceName	nvarchar(32)		not null,
	LogoPath	nvarchar(500)		not null,
	SerialPath	nvarchar(500)		not null,
	TextValue	nvarchar(500)		not null,
   constraint PK_GC_PRINTTABLEINFO primary key nonclustered (DesignPrintTableID,DesignPrintID,OrderCate,OrderID,DesignPlanID)
)
go

create table GC_PrintTableRowColInfo (
	DesignPrintTableRowColID	int		not null,
	DesignPrintTableRowID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableSign	int		not null,
	RowNumber	int		not null,
	ColNumber	int		not null,
	WhichLine	int		not null,
	Align	int		not null,
	LogoSign	int		not null,
	TextPos	int		not null,
	SetLine	int		not null,
	HasLogo	int		not null,
	IsSelected	int		not null,
	LineUp	int		not null,
	LineDown	int		not null,
	LineLeft	int		not null,
	LineRight	int		not null,
	LineUpSign	int		not null,
	LineDownSign	int		not null,
	LineLeftSign	int		not null,
	LineRightSign	int		not null,
	LineWidth	float		not null,
	LeftTopX	float		not null,
	LeftTopY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	LineUpWidth	float		not null,
	LineDownWidth	float		not null,
	LineRightWidth	float		not null,
	LineLeftWidth	float		not null,
	FaceName	nvarchar(32)		not null,
	LogoPath	nvarchar(500)		not null,
	SerialPath	nvarchar(500)		not null,
	TextValue	nvarchar(500)		not null,
   constraint PK_GC_PRINTTABLEROWCOLINFO primary key nonclustered (DesignPrintTableRowColID,DesignPrintTableRowID,OrderCate,OrderID,DesignPlanID)
)
go

create table GC_PrintTableRowInfo (
	DesignPrintTableRowID	int		not null,
	DesignPrintTableID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableSign	int		not null,
	RowNumber	int		not null,
	WhichLine	int		not null,
	Align	int		not null,
	LogoSign	int		not null,
	TextPos	int		not null,
	SetLine	int		not null,
	HasLogo	int		not null,
	IsSelected	int		not null,
	LineUp	int		not null,
	LineDown	int		not null,
	LineLeft	int		not null,
	LineRight	int		not null,
	LineUpSign	int		not null,
	LineDownSign	int		not null,
	LineLeftSign	int		not null,
	LineRightSign	int		not null,
	LineWidth	float		not null,
	LeftTopX	float		not null,
	LeftTopY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	LineUpWidth	float		not null,
	LineDownWidth	float		not null,
	LineRightWidth	float		not null,
	LineLeftWidth	float		not null,
	FaceName	nvarchar(32)		not null,
	LogoPath	nvarchar(500)		not null,
	SerialPath	nvarchar(500)		not null,
	TextValue	nvarchar(500)		not null,
   constraint PK_GC_PRINTTABLEROWINFO primary key nonclustered (DesignPrintTableRowID,DesignPrintTableID,OrderCate,OrderID,DesignPlanID)
)
go

create table GC_ProductInfo (
	DesignProductID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	ProductID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	DockObjID	int		not null,
	DockObjType	int		not null,
	ShowID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	YPos	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_PRODUCTINFO primary key nonclustered (DesignProductID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_RemarkInfo (
	DesignRemarkID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DesignPrintID	int		not null,
	PrintID	int		not null,
	BGColor	bigint		not null,
	ForeColor	bigint		not null,
	FontSize	int		not null,
	FontStyle	int		not null,
	LineSpace	int		not null,
	ArrowID	int		not null,
	ArrowStyle	int		not null,
	FrameStyle	int		not null,
	FrameColor	bigint		not null,
	DirectLine	int		not null,
	DirectStyle	int		not null,
	DirectLineStyle	int		not null,
	CommentFrameStyle	int		not null,
	IsSingleMode	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	FrameWidth	float		not null,
	ArrowX	float		not null,
	ArrowY	float		not null,
	StartX	float		not null,
	StartY	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	FaceName	nvarchar(32)		not null,
	RemarkText	nvarchar(500)		not null,
   constraint PK_GC_REMARKINFO primary key nonclustered (DesignRemarkID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_ShapeInfo (
	DesignShapeID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DesignPrintID	int		not null,
	PrintID	int		not null,
	ShapeType	int		not null,
	LineWidth	int		not null,
	LineStyle	int		not null,
	StartX	float		not null,
	StartY	float		not null,
	StopX	float		not null,
	StopY	float		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
	AttachFilePath	nvarchar(255)		not null,
   constraint PK_GC_SHAPEINFO primary key nonclustered (DesignShapeID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_SkinInfo (
	DesignSkinID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	DecorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSkinStretch	int		not null,
	GTypeID	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SkinID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	GroundLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_SKININFO primary key nonclustered (DesignSkinID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_TableInfo (
	DesignTableID	int		not null,
	OrderCate	int		not null,
	DesignPlanID	int		not null,
	OrderID	bigint		not null,
	TableID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TableIndex	int		not null,
	IsSplit	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	UnitID	int		not null,
	ZLen	float		not null,
	YPos	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_TABLEINFO primary key nonclustered (DesignTableID,OrderCate,DesignPlanID,OrderID)
)
go

create table GC_TablePartInfo (
	DesignTablePartID	int		not null,
	DesignTableID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorLineID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TableSideIndex	int		not null,
	IsSplit	int		not null,
	IsUserSetYLen	int		not null,
	GTypeID	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	DefaultYLen	int		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_TABLEPARTINFO primary key nonclustered (DesignTablePartID,DesignTableID,OrderCate,OrderID)
)
go

create table GC_TableSideInfo (
	DesignTableSideID	int		not null,
	DesignTableID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	TableTopID	int		not null,
	TableTopSideID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	TableSideIndex	int		not null,
	IsUseTableMat	int		not null,
	MaterialID	int		not null,
	TransCode	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	SideWidth	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_TABLESIDEINFO primary key nonclustered (DesignTableSideID,OrderID)
)
go

create table GC_WallDecorInfo (
	DesignWallDecorID	int		not null,
	DesignWallID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	DesignPlanID	int		not null,
	DecorID	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	IsSplit	int		not null,
	IsModelRevers	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	SupplyType	int		not null,
	GTypeID	int		not null,
	ShowID	int		not null,
	SkinID	int		not null,
	ModelID	int		not null,
	TopViewID	int		not null,
	FrontViewID	int		not null,
	RightViewID	int		not null,
	UnitID	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	OffsetXLen	float		not null,
	OffsetYLen	float		not null,
	OffsetZLen	float		not null,
	ModelArcX	float		not null,
	ModelArcY	float		not null,
	ModelArcZ	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_WALLDECORINFO primary key nonclustered (DesignWallDecorID,DesignWallID,OrderCate,OrderID)
)
go

create table GC_WallInfo (
	DesignWallID	int		not null,
	DesignPlanID	int		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	WallType	int		not null,
	WallIndex	int		not null,
	GroupID	int		not null,
	DecorID	int		not null,
	SkinID	int		not null,
	IsSkinStretch	int		not null,
	HasMark	int		not null,
	IsVisible	int		not null,
	IsLocked	int		not null,
	StartX	float		not null,
	StartY	float		not null,
	EndX	float		not null,
	EndY	float		not null,
	XLen	float		not null,
	YLen	float		not null,
	ZLen	float		not null,
	GroundLen	float		not null,
	CreatorID	int		not null,
	UpdaterID	int		not null,
	CreateTime	datetime		not null,
	UpdateTime	datetime		not null,
   constraint PK_GC_WALLINFO primary key nonclustered (DesignWallID,DesignPlanID,OrderCate,OrderID)
)
go

create table LS_BoardGapInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	BoardID	bigint		not null,
	GapIndex	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffset	float		not null,
	YOffset	float		not null,
	ZOffset	float		not null,
	OrderCode	nvarchar(50)		not null,
   constraint PK_LS_BOARDGAPINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table LS_BoardInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	BoardType	int		not null,
	ObjectID	bigint		not null,
	MaterialID	int		not null,
	CabinetID	bigint		not null,
	CoverID	int		not null,
	Grain	int		not null,
	IsUserAdd	int		not null,
	XLength	float		not null,
	YLength	float		not null,
	ZLength	float		not null,
	CutXLength	float		not null,
	CutYLength	float		not null,
	OrderCode	nvarchar(50)		not null,
	Name	nvarchar(50)		not null,
	ObjectName	nvarchar(50)		not null,
	ObjectCode	nvarchar(50)		not null,
	MaterialName	nvarchar(50)		not null,
	CabinetName	nvarchar(50)		not null,
	CabinetCode	nvarchar(50)		not null,
	CoverName	nvarchar(50)		not null,
	CoverCode	nvarchar(50)		not null,
   constraint PK_LS_BOARDINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table LS_BoardSealInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	BoardID	bigint		not null,
	SealIndex	int		not null,
	MaterialID	int		not null,
	PreMill	float		not null,
	OrderCode	nvarchar(50)		not null,
	MaterialCode	nvarchar(20)		not null,
	MaterialName	nvarchar(50)		not null,
   constraint PK_LS_BOARDSEALINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table LS_Objects (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	ObjectType	int		not null,
	ParentID	bigint		not null,
	GType	int		not null,
	XLength	float		not null,
	YLength	float		not null,
	ZLength	float		not null,
	ShapeXLength	float		not null,
	ShapeZLength	float		not null,
	GapXLength	float		not null,
	GapYLength	float		not null,
	GapZLength	float		not null,
	Amount	float		not null,
	IsStandard	int		not null,
	IsUserAdd	int		not null,
	MaterialPlanID	int		not null,
	CabGapType	int		not null,
	CabShape	int		not null,
	CoverID	int		not null,
	OrderCode	nvarchar(50)		not null,
	UnitName	nvarchar(50)		not null,
	Name	nvarchar(50)		not null,
	Code	nvarchar(20)		not null,
	MaterialPlanName	nvarchar(50)		not null,
	BarCode	nvarchar(50)		not null,
	CoverName	nvarchar(50)		not null,
	CoverCode	nvarchar(20)		not null,
	Remarks	nvarchar(500)		not null,
   constraint PK_LS_OBJECTS primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table LS_OrderInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	ParentID	bigint		not null,
	OrderType	int		not null,
	OrderIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	ShopID	int		not null,
	PreSurveyorID	int		not null,
	ReSurveyorID	int		not null,
	DesignerID	int		not null,
	SellerID	int		not null,
	AuditorID	int		not null,
	CreateTime	datetime		not null,
	PreSurveyTime	datetime		not null,
	ReSurveyTime	datetime		not null,
	OrderTime	datetime		not null,
	DeliveryTime	datetime		not null,
	InstallTime	datetime		not null,
	ShopName	nvarchar(50)		not null,
	ShopCode	nvarchar(20)		not null,
	OrderCode	nvarchar(50)		not null,
	DesignerName	nvarchar(20)		not null,
	DesignerUserCode	nvarchar(32)		not null,
	PreSurveyorName	nvarchar(20)		not null,
	PreSurveyorCode	nvarchar(32)		not null,
	ReSurveyorName	nvarchar(20)		not null,
	ReSurveyorCode	nvarchar(32)		not null,
	SellerName	nvarchar(20)		not null,
	SellerUserCode	nvarchar(32)		not null,
	AuditorName	nvarchar(20)		not null,
	AuditorUserCode	nvarchar(32)		not null,
	GeoName	nvarchar(50)		not null,
	OrderTitle	nvarchar(100)		not null,
	CustomerName	nvarchar(50)		not null,
	CustomerTel	nvarchar(50)		not null,
	CustomerPostCode	nvarchar(10)		not null,
	CustomerQQ	nvarchar(50)		not null,
	CustomerEmail	nvarchar(50)		not null,
	InstallAddress	nvarchar(200)		not null,
	OrderRemarks	nvarchar(500)		not null,
	PlanName	nvarchar(50)		not null,
	PlanRemarks	nvarchar(500)		not null,
	AttachFilePath	nvarchar(255)		not null,
   constraint PK_LS_ORDERINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table ZB_BoardGapInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	BoardID	bigint		not null,
	GapIndex	int		not null,
	GapShape	int		not null,
	XLen	float		not null,
	YLen	float		not null,
	XOffset	float		not null,
	YOffset	float		not null,
	ZOffset	float		not null,
	OrderCode	nvarchar(50)		not null,
   constraint PK_ZB_BOARDGAPINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table ZB_BoardInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	BoardType	int		not null,
	ObjectID	bigint		not null,
	MaterialID	int		not null,
	CabinetID	bigint		not null,
	CoverID	int		not null,
	Grain	int		not null,
	IsUserAdd	int		not null,
	XLength	float		not null,
	YLength	float		not null,
	ZLength	float		not null,
	CutXLength	float		not null,
	CutYLength	float		not null,
	OrderCode	nvarchar(50)		not null,
	Name	nvarchar(50)		not null,
	ObjectName	nvarchar(50)		not null,
	ObjectCode	nvarchar(50)		not null,
	MaterialName	nvarchar(50)		not null,
	CabinetName	nvarchar(50)		not null,
	CabinetCode	nvarchar(50)		not null,
	CoverName	nvarchar(50)		not null,
	CoverCode	nvarchar(50)		not null,
   constraint PK_ZB_BOARDINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table ZB_BoardSealInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	BoardID	bigint		not null,
	SealIndex	int		not null,
	MaterialID	int		not null,
	PreMill	float		not null,
	OrderCode	nvarchar(50)		not null,
	MaterialCode	nvarchar(20)		not null,
	MaterialName	nvarchar(50)		not null,
   constraint PK_ZB_BOARDSEALINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table ZB_Objects (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	FactoryID	int		not null,
	ObjectType	int		not null,
	ParentID	bigint		not null,
	GType	int		not null,
	XLength	float		not null,
	YLength	float		not null,
	ZLength	float		not null,
	ShapeXLength	float		not null,
	ShapeZLength	float		not null,
	GapXLength	float		not null,
	GapYLength	float		not null,
	GapZLength	float		not null,
	Amount	float		not null,
	IsStandard	int		not null,
	IsUserAdd	int		not null,
	MaterialPlanID	int		not null,
	CabGapType	int		not null,
	CabShape	int		not null,
	CoverID	int		not null,
	OrderCode	nvarchar(50)		not null,
	UnitName	nvarchar(50)		not null,
	Name	nvarchar(50)		not null,
	Code	nvarchar(20)		not null,
	MaterialPlanName	nvarchar(50)		not null,
	BarCode	nvarchar(50)		not null,
	CoverName	nvarchar(50)		not null,
	CoverCode	nvarchar(20)		not null,
	Remarks	nvarchar(500)		not null,
   constraint PK_ZB_OBJECTS primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

create table ZB_OrderInfo (
	ItemID	bigint		not null,
	OrderCate	int		not null,
	OrderID	bigint		not null,
	ParentID	bigint		not null,
	OrderType	int		not null,
	OrderIndex	int		not null,
	FactoryID	int		not null,
	VerCode	bigint		not null,
	ShopID	int		not null,
	PreSurveyorID	int		not null,
	ReSurveyorID	int		not null,
	DesignerID	int		not null,
	SellerID	int		not null,
	AuditorID	int		not null,
	CreateTime	datetime		not null,
	PreSurveyTime	datetime		not null,
	ReSurveyTime	datetime		not null,
	OrderTime	datetime		not null,
	DeliveryTime	datetime		not null,
	InstallTime	datetime		not null,
	ShopName	nvarchar(50)		not null,
	ShopCode	nvarchar(20)		not null,
	OrderCode	nvarchar(50)		not null,
	DesignerName	nvarchar(20)		not null,
	DesignerUserCode	nvarchar(32)		not null,
	PreSurveyorName	nvarchar(20)		not null,
	PreSurveyorCode	nvarchar(32)		not null,
	ReSurveyorName	nvarchar(20)		not null,
	ReSurveyorCode	nvarchar(32)		not null,
	SellerName	nvarchar(20)		not null,
	SellerUserCode	nvarchar(32)		not null,
	AuditorName	nvarchar(20)		not null,
	AuditorUserCode	nvarchar(32)		not null,
	GeoName	nvarchar(50)		not null,
	OrderTitle	nvarchar(100)		not null,
	CustomerName	nvarchar(50)		not null,
	CustomerTel	nvarchar(50)		not null,
	CustomerPostCode	nvarchar(10)		not null,
	CustomerQQ	nvarchar(50)		not null,
	CustomerEmail	nvarchar(50)		not null,
	InstallAddress	nvarchar(200)		not null,
	OrderRemarks	nvarchar(500)		not null,
	PlanName	nvarchar(50)		not null,
	PlanRemarks	nvarchar(500)		not null,
	AttachFilePath	nvarchar(255)		not null,
   constraint PK_ZB_ORDERINFO primary key nonclustered (ItemID,OrderCate,OrderID)
)
go

