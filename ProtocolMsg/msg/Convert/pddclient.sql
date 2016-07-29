/*==============================================================*/
/* DBMS name:      Microsoft SQL Server 2008                    */
/* Created on:     2014/7/1 18:16:53                            */
/*==============================================================*/


if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabBoardGapInfo')
            and   type = 'U')
   drop table SJ_CabBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabBoardInfo')
            and   type = 'U')
   drop table SJ_CabBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabBoardSealInfo')
            and   type = 'U')
   drop table SJ_CabBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorBoardGapInfo')
            and   type = 'U')
   drop table SJ_CabDoorBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorBoardInfo')
            and   type = 'U')
   drop table SJ_CabDoorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorBoardSealInfo')
            and   type = 'U')
   drop table SJ_CabDoorBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorHWFInfo')
            and   type = 'U')
   drop table SJ_CabDoorHWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorHandleInfo')
            and   type = 'U')
   drop table SJ_CabDoorHandleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorInfo')
            and   type = 'U')
   drop table SJ_CabDoorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorRegionInfo')
            and   type = 'U')
   drop table SJ_CabDoorRegionInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorSlideInfo')
            and   type = 'U')
   drop table SJ_CabDoorSlideInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabDoorSystemInfo')
            and   type = 'U')
   drop table SJ_CabDoorSystemInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabFNFHWFInfo')
            and   type = 'U')
   drop table SJ_CabFNFHWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabFNFHoleInfo')
            and   type = 'U')
   drop table SJ_CabFNFHoleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabFNFInfo')
            and   type = 'U')
   drop table SJ_CabFNFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabFNFPartInfo')
            and   type = 'U')
   drop table SJ_CabFNFPartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabFNFPartSealInfo')
            and   type = 'U')
   drop table SJ_CabFNFPartSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_CabInfo')
            and   type = 'U')
   drop table SJ_CabInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_DecorBoardInfo')
            and   type = 'U')
   drop table SJ_DecorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_DecorBoardUnitInfo')
            and   type = 'U')
   drop table SJ_DecorBoardUnitInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_DecorBoardUnitSealInfo')
            and   type = 'U')
   drop table SJ_DecorBoardUnitSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_DecorInfo')
            and   type = 'U')
   drop table SJ_DecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_DecorLineInfo')
            and   type = 'U')
   drop table SJ_DecorLineInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_DesignPlanInfo')
            and   type = 'U')
   drop table SJ_DesignPlanInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_FittingInfo')
            and   type = 'U')
   drop table SJ_FittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_HWFInfo')
            and   type = 'U')
   drop table SJ_HWFInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_MarkInfo')
            and   type = 'U')
   drop table SJ_MarkInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_MatrixInfo')
            and   type = 'U')
   drop table SJ_MatrixInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_OrderAddedInfo')
            and   type = 'U')
   drop table SJ_OrderAddedInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_OrderDataInfo')
            and   type = 'U')
   drop table SJ_OrderDataInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PackInfo')
            and   type = 'U')
   drop table SJ_PackInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PointInfo')
            and   type = 'U')
   drop table SJ_PointInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PrintElementInfo')
            and   type = 'U')
   drop table SJ_PrintElementInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PrintGroupInfo')
            and   type = 'U')
   drop table SJ_PrintGroupInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PrintInfo')
            and   type = 'U')
   drop table SJ_PrintInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PrintTableInfo')
            and   type = 'U')
   drop table SJ_PrintTableInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PrintTableRowColInfo')
            and   type = 'U')
   drop table SJ_PrintTableRowColInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_PrintTableRowInfo')
            and   type = 'U')
   drop table SJ_PrintTableRowInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_ProductInfo')
            and   type = 'U')
   drop table SJ_ProductInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_RemarkInfo')
            and   type = 'U')
   drop table SJ_RemarkInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_ShapeInfo')
            and   type = 'U')
   drop table SJ_ShapeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_SkinInfo')
            and   type = 'U')
   drop table SJ_SkinInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_TableInfo')
            and   type = 'U')
   drop table SJ_TableInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_TablePartInfo')
            and   type = 'U')
   drop table SJ_TablePartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_TableSideInfo')
            and   type = 'U')
   drop table SJ_TableSideInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_WallDecorInfo')
            and   type = 'U')
   drop table SJ_WallDecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SJ_WallInfo')
            and   type = 'U')
   drop table SJ_WallInfo
go

/*==============================================================*/
/* Table: SJ_CabBoardGapInfo                                    */
/*==============================================================*/
create table SJ_CabBoardGapInfo (
   CabBoardGapID        int                  not null,
   CabBoardID           int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   CabStructBoardID     int                  not null,
   CabStructBoardGapID  int                  not null,
   GapPos               int                  not null,
   GapIndex             int                  not null,
   GapType              int                  not null,
   GapShape             int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABBOARDGAPINFO primary key (CabBoardGapID, CabBoardID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabBoardInfo                                       */
/*==============================================================*/
create table SJ_CabBoardInfo (
   CabBoardID           int                  not null,
   CabID                int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   CabinetSizeID        int                  not null,
   CabStructBoardID     int                  not null,
   CabinetSizeBoardID   int                  not null,
   CabMatPlanID         int                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   SkinDirection        int                  not null,
   SealRuleID           int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   IsChangedOffset      bit                  not null,
   IsFakeDel            bit                  not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   CabBoardName         nvarchar(50)         not null,
   constraint PK_SJ_CABBOARDINFO primary key (CabBoardID, CabID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabBoardSealInfo                                   */
/*==============================================================*/
create table SJ_CabBoardSealInfo (
   CabBoardSealID       int                  not null,
   CabBoardID           int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   CabStructBoardSealID int                  not null,
   CabStructBoardID     int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   SealType             int                  not null,
   SealIndex            int                  not null,
   MaterialID           int                  not null,
   PreMill              float                not null,
   constraint PK_SJ_CABBOARDSEALINFO primary key (CabBoardSealID, CabBoardID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorBoardGapInfo                                */
/*==============================================================*/
create table SJ_CabDoorBoardGapInfo (
   CabDoorBoardGapID    int                  not null,
   CabDoorBoardID       int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DoorBoardGapID       int                  not null,
   DoorBoardID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   GapPos               int                  not null,
   GapIndex             int                  not null,
   GapType              int                  not null,
   GapShape             int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORBOARDGAPINFO primary key (CabDoorBoardGapID, CabDoorBoardID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorBoardInfo                                   */
/*==============================================================*/
create table SJ_CabDoorBoardInfo (
   CabDoorBoardID       int                  not null,
   CabDoorID            int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DoorBoardID          int                  not null,
   DoorID               int                  not null,
   DoorBoardIndex       int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   DoorMatPlanID        int                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   SkinDirection        int                  not null,
   SealRuleID           int                  not null,
   ModelID              int                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORBOARDINFO primary key (CabDoorBoardID, CabDoorID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorBoardSealInfo                               */
/*==============================================================*/
create table SJ_CabDoorBoardSealInfo (
   CabDoorBoardSealID   int                  not null,
   CabDoorBoardID       int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DoorBoardID          int                  not null,
   SealIndex            int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   SealType             int                  not null,
   MaterialID           int                  not null,
   PreMill              float                not null,
   constraint PK_SJ_CABDOORBOARDSEALINFO primary key (CabDoorBoardSealID, CabDoorBoardID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorHWFInfo                                     */
/*==============================================================*/
create table SJ_CabDoorHWFInfo (
   CabDoorHWFID         int                  not null,
   CabDoorRegionID      int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   HWFittingID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   SettingCountRuleID   int                  not null,
   UseCount             int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORHWFINFO primary key (CabDoorHWFID, CabDoorRegionID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorHandleInfo                                  */
/*==============================================================*/
create table SJ_CabDoorHandleInfo (
   CabDoorHandleID      int                  not null,
   CabParentID          int                  not null,
   ParentType           int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   CabDesignDoorRegionID int                  not null,
   CabDesignDoorRegionHandleID int                  not null,
   OwnerID              int                  not null,
   DoorMatPlanID        int                  not null,
   HandleID             int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   MatchType            int                  not null,
   IsChangedOffset      bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   RealXLen             float                not null,
   RealYLen             float                not null,
   RealZLen             float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   ArcZ                 float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORHANDLEINFO primary key (CabDoorHandleID, CabParentID, ParentType, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorInfo                                        */
/*==============================================================*/
create table SJ_CabDoorInfo (
   CabDoorID            int                  not null,
   CabParentID          int                  not null,
   ParentType           int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   OwnerID              int                  not null,
   DoorMatPlanID        int                  not null,
   DoorID               int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORINFO primary key (CabDoorID, CabParentID, ParentType, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorRegionInfo                                  */
/*==============================================================*/
create table SJ_CabDoorRegionInfo (
   CabDoorRegionID      int                  not null,
   CabDoorSystemID      int                  not null,
   ParentCabRegionID    int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DoorSystemRegionID   int                  not null,
   DoorSystemID         int                  not null,
   CabDesignDoorRegionID int                  not null,
   CabDesignDoorSystemID int                  not null,
   CabDesignID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsUserDefineSize     bit                  not null,
   IsUserDefinePos      bit                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   XAdjustLen           float                not null,
   YAdjustLen           float                not null,
   RealXLen             float                not null,
   RealYLen             float                not null,
   RealZLen             float                not null,
   CutXLen              float                not null,
   CutYLen              float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   RealXOffsetLen       float                not null,
   RealYOffsetLen       float                not null,
   RealZOffsetLen       float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORREGIONINFO primary key (CabDoorRegionID, CabDoorSystemID, ParentCabRegionID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorSlideInfo                                   */
/*==============================================================*/
create table SJ_CabDoorSlideInfo (
   CabDoorSlideID       int                  not null,
   CabDoorRegionID      int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DoorSystemRegionID   int                  not null,
   SlideID              int                  not null,
   GTypeID              int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   SlidePosition        int                  not null,
   SupplyType           int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   RealXLen             float                not null,
   RealYLen             float                not null,
   RealZLen             float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORSLIDEINFO primary key (CabDoorSlideID, CabDoorRegionID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabDoorSystemInfo                                  */
/*==============================================================*/
create table SJ_CabDoorSystemInfo (
   CabDoorSystemID      int                  not null,
   CabID                int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   CabDesignDoorSystemID int                  not null,
   CabDesignID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   DoorSystemID         int                  not null,
   DoorMatPlanID        int                  not null,
   SupplyType           int                  not null,
   IsFakeDel            bit                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   XAdjustLen           float                not null,
   YAdjustLen           float                not null,
   RealXLen             float                not null,
   RealYLen             float                not null,
   RealZLen             float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   RealXOffsetLen       float                not null,
   RealYOffsetLen       float                not null,
   RealZOffsetLen       float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABDOORSYSTEMINFO primary key (CabDoorSystemID, CabID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabFNFHWFInfo                                      */
/*==============================================================*/
create table SJ_CabFNFHWFInfo (
   CabFNFHWFID          int                  not null,
   CabFNFID             int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   FNFittingID          int                  not null,
   HWFittingID          int                  not null,
   FittingType          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsFakeDel            int                  not null,
   UseCount             int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABFNFHWFINFO primary key (CabFNFHWFID, CabFNFID, OrderCate, OrderID, DesignPlanID)
)
go

declare @CurrentUser sysname
select @CurrentUser = user_name()
execute sys.sp_addextendedproperty 'MS_Description', 
   '保存的是CabFNF的五金配套小件',
   'user', @CurrentUser, 'table', 'SJ_CabFNFHWFInfo'
go

/*==============================================================*/
/* Table: SJ_CabFNFHoleInfo                                     */
/*==============================================================*/
create table SJ_CabFNFHoleInfo (
   CabFNFHoleID         int                  not null,
   CabFNFID             int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   HoleID               int                  not null,
   FNFittingID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   HoleTypeID           int                  not null,
   HolePicID            int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   OverHeight           float                not null,
   MinXDistance         float                not null,
   MinZDistance         float                not null,
   constraint PK_SJ_CABFNFHOLEINFO primary key (CabFNFHoleID, CabFNFID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabFNFInfo                                         */
/*==============================================================*/
create table SJ_CabFNFInfo (
   CabFNFID             int                  not null,
   DesignOwnerID        int                  not null,
   DesignOwnerGTypeID   int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   ContainerID          int                  not null,
   ContainerGTypeID     int                  not null,
   CabDesignFNFittingID int                  not null,
   FNFittingID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   HasMark              bit                  not null,
   IsFakeDel            bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   MaterialID           int                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   RealXLen             float                not null,
   RealYLen             float                not null,
   RealZLen             float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   YPos                 float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   UserMemo             nvarchar(500)        not null,
   constraint PK_SJ_CABFNFINFO primary key (CabFNFID, DesignOwnerID, DesignOwnerGTypeID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabFNFPartInfo                                     */
/*==============================================================*/
create table SJ_CabFNFPartInfo (
   CabFNFPartID         int                  not null,
   CabFNFID             int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   FNFittingPartID      int                  not null,
   FNFittingID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   HWFittingID          int                  not null,
   MaterialID           int                  not null,
   SealRuleID           int                  not null,
   PartType             int                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   RealXLen             float                not null,
   RealYLen             float                not null,
   RealZLen             float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABFNFPARTINFO primary key (CabFNFPartID, CabFNFID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabFNFPartSealInfo                                 */
/*==============================================================*/
create table SJ_CabFNFPartSealInfo (
   CabFNFPartSealID     int                  not null,
   CabFNFPartID         int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   FNFittingPartID      int                  not null,
   SealType             int                  not null,
   SealIndex            int                  not null,
   MaterialID           int                  not null,
   PreMill              float                not null,
   constraint PK_SJ_CABFNFPARTSEALINFO primary key (CabFNFPartSealID, CabFNFPartID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_CabInfo                                            */
/*==============================================================*/
create table SJ_CabInfo (
   CabID                int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   CabDesignID          int                  not null,
   CabinetSizeID        int                  not null,
   CabStructID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   CabMatPlanID         int                  not null,
   SealRuleID           int                  not null,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   ShapeXLen            float                not null,
   ShapeZLen            float                not null,
   GapXLen              float                not null,
   GapYLen              float                not null,
   GapZLen              float                not null,
   YPos                 float                not null,
   FootID               int                  not null,
   FootCount            int                  not null,
   FootYLen             float                not null,
   IsStandard           bit                  not null,
   HasMark              bit                  not null default 0,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_CABINFO primary key (CabID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_DecorBoardInfo                                     */
/*==============================================================*/
create table SJ_DecorBoardInfo (
   DesignDecorBoardID   int                  not null,
   DesignPlanID         int                  not null,
   DesignParentID       int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DecorBoardID         int                  not null,
   DecorParentID        int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   GroupID              int                  not null,
   GroupIndex           int                  not null,
   GTypeID              int                  not null,
   IsAutoFit            bit                  not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   IsChangedSize        bit                  not null,
   IsDragIn             bit                  not null,
   DoorMatPlanID        int                  not null,
   CabMatPlanID         int                  not null,
   DoorID               int                  not null,
   TargetType           int                  not null,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   MatID                int                  not null,
   MatGType             int                  not null,
   SupplyType           int                  not null,
   ModelID              int                  not null,
   YPos                 float                not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_DECORBOARDINFO primary key (DesignDecorBoardID, DesignPlanID, DesignParentID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_DecorBoardUnitInfo                                 */
/*==============================================================*/
create table SJ_DecorBoardUnitInfo (
   DesignDecorBoardUnitID int                  not null,
   DesignDecorBoardID   int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DecorBoardUnitID     int                  not null,
   DecorBoardID         int                  not null,
   DecorBoardUnitIndex  int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsUseDoor            bit                  not null,
   DoorMatPlanID        int                  not null,
   CabMatPlanID         int                  not null,
   DoorID               int                  not null,
   TargetType           int                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   SupplyType           int                  not null,
   SealRuleID           int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   XOffsetLen           float                not null,
   YOffsetLen           float                not null,
   ZOffsetLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_DECORBOARDUNITINFO primary key (DesignDecorBoardUnitID, DesignDecorBoardID, OrderCate, OrderID)
)
go

declare @CurrentUser sysname
select @CurrentUser = user_name()
execute sp_addextendedproperty 'MS_Description', 
   '1,2,4,8中的一个',
   'user', @CurrentUser, 'table', 'SJ_DecorBoardUnitInfo', 'column', 'TargetType'
go

/*==============================================================*/
/* Table: SJ_DecorBoardUnitSealInfo                             */
/*==============================================================*/
create table SJ_DecorBoardUnitSealInfo (
   DesignDecorBoardUnitSealID int                  not null,
   DesignDecorBoardUnitID int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   DecorBoardUnitID     int                  not null,
   DecorBoardUnitSealID int                  not null,
   SealIndex            int                  not null,
   SealType             int                  not null,
   MaterialID           int                  not null,
   PreMill              float                not null,
   constraint PK_SJ_DECORBOARDUNITSEALINFO primary key (DesignDecorBoardUnitSealID, DesignDecorBoardUnitID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_DecorInfo                                          */
/*==============================================================*/
create table SJ_DecorInfo (
   DesignDecorID        int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   DecorID              int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   YPos                 float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_DECORINFO primary key (DesignDecorID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_DecorLineInfo                                      */
/*==============================================================*/
create table SJ_DecorLineInfo (
   DesignDecorLineID    int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   DecorLineID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   GTypeID              int                  not null,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   MaterialID           int                  not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_DECORLINEINFO primary key (DesignDecorLineID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_DesignPlanInfo                                     */
/*==============================================================*/
create table SJ_DesignPlanInfo (
   DesignPlanID         int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   CurScale             float                not null default 1,
   IsActive             bit                  not null default 1,
   SkyDecorID           int                  not null default 0,
   FloorDecorID         int                  null default 0,
   WallDecorID          int                  not null default 0,
   DesignerID           int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   DesignPlanName       nvarchar(50)         not null,
   DesignPlanMemo       nvarchar(500)        not null,
   constraint PK_SJ_DESIGNPLANINFO primary key (DesignPlanID, OrderID, OrderCate)
)
go

/*==============================================================*/
/* Table: SJ_FittingInfo                                        */
/*==============================================================*/
create table SJ_FittingInfo (
   DesignFittingID      int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   FittingID            int                  not null,
   GTypeID              int                  not null,
   SupplyType           int                  not null,
   FittingCount         int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_FITTINGINFO primary key (DesignFittingID, OrderCate, DesignPlanID, OrderID, FittingID)
)
go

/*==============================================================*/
/* Table: SJ_HWFInfo                                            */
/*==============================================================*/
create table SJ_HWFInfo (
   DesignHWFID          int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   HWFittingID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   UseCount             int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_HWFINFO primary key (DesignHWFID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_MarkInfo                                           */
/*==============================================================*/
create table SJ_MarkInfo (
   DesignMarkID         int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   DesignPrintID        int                  not null,
   PrintID              int                  not null,
   ViewType             int                  not null default 0,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   MarkType             int                  not null,
   FontSize             int                  not null,
   StartX               float                not null,
   StartY               float                not null,
   OffsetX              float                not null,
   OffsetY              float                not null,
   StopX                float                not null,
   StopY                float                not null,
   TopLeftX             float                not null,
   TopLeftY             float                not null,
   Width                float                not null,
   Height               float                not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   EditSign             bit                  not null,
   StrickOut            bit                  not null,
   UnderLine            bit                  not null,
   Italic               bit                  not null,
   Bold                 bit                  not null,
   BGColor              bigint               not null,
   FontColor            bigint               not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   FaceName             nvarchar(32)         not null,
   RemarkText           nvarchar(255)        not null,
   constraint PK_SJ_MARKINFO primary key (DesignMarkID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_MatrixInfo                                         */
/*==============================================================*/
create table SJ_MatrixInfo (
   OrderID              bigint               not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   TransObjID           bigint               not null,
   TransObjType         int                  not null,
   MajorCurSel          int                  not null default -1,
   MinorCurSel          int                  not null default -1,
   MatCurIndex          int                  not null default -1,
   CabMatPlanID         int                  not null default -1,
   M11                  float                not null,
   M12                  float                not null,
   M13                  float                not null,
   M21                  float                not null,
   M22                  float                not null,
   M23                  float                not null,
   M31                  float                not null,
   M32                  float                not null,
   M33                  float                not null,
   M41                  float                not null,
   M42                  float                not null,
   M43                  float                not null,
   M44                  float                not null,
   constraint PK_SJ_MATRIXINFO primary key (OrderID, OrderCate, DesignPlanID, TransObjID)
)
go

/*==============================================================*/
/* Table: SJ_OrderAddedInfo                                     */
/*==============================================================*/
create table SJ_OrderAddedInfo (
   OrderAddedID         int                  not null,
   OrderID              bigint               not null,
   OrderCate            int                  not null,
   FactoryID            int                  not null,
   UseCount             int                  not null,
   UnitPrice            float                not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   AddedName            nvarchar(50)         not null,
   MatName              nvarchar(50)         not null,
   UnitName             nvarchar(50)         not null,
   SpecName             nvarchar(50)         not null,
   AttachFileName       nvarchar(255)        not null default '',
   constraint PK_SJ_ORDERADDEDINFO primary key (OrderAddedID, OrderID, OrderCate)
)
go

/*==============================================================*/
/* Table: SJ_OrderDataInfo                                      */
/*==============================================================*/
create table SJ_OrderDataInfo (
   OrderID              bigint               not null,
   OrderCate            int                  not null default 1,
   FactoryID            int                  not null default 0,
   ShopID               int                  not null default 0,
   MaxMetaID            int                  not null default 0,
   DesignerID           int                  not null default 0,
   SellerID             int                  not null default 0,
   PreSurveyorID        int                  not null default 0,
   ReSurveyorID         int                  not null default 0,
   IsNew                bit                  not null default 1,
   IsShare              bit                  not null default 0,
   IsUpload             bit                  not null default 0,
   CreateTime           datetime             not null default getdate(),
   PreSurveyTime        datetime             not null default getdate(),
   ReSurveyTime         datetime             not null default getdate(),
   OrderTime            datetime             not null default getdate(),
   DeliveryTime         datetime             not null default getdate(),
   InstallTime          datetime             not null default getdate(),
   GeoCode              nchar(6)             not null default '',
   OrderTitle           nvarchar(100)        not null default '',
   CustomerName         nvarchar(32)         not null default '',
   CustomerTel          nvarchar(32)         not null default '',
   CustomerPostcode     nvarchar(10)         not null default '',
   CustomerQQ           nvarchar(32)         not null,
   CustomerEmail        nvarchar(50)         not null,
   InstallAddress       nvarchar(200)        not null default '',
   OrderMemo            nvarchar(500)        not null default '',
   AttachFilePath       nvarchar(256)        not null default '',
   constraint PK_SJ_ORDERDATAINFO primary key (OrderID, OrderCate)
)
go

/*==============================================================*/
/* Table: SJ_PackInfo                                           */
/*==============================================================*/
create table SJ_PackInfo (
   DesignPackID         int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   FittingPackID        int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsSeparate           bit                  not null,
   UseCount             int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_PACKINFO primary key (DesignPackID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_PointInfo                                          */
/*==============================================================*/
create table SJ_PointInfo (
   DesignPlanID         int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   TransObjID           int                  not null,
   TransObjType         int                  not null,
   PointIndex           int                  not null,
   CoordX               float                not null,
   CoordY               float                not null,
   CoordZ               float                not null,
   constraint PK_SJ_POINTINFO primary key (DesignPlanID, OrderCate, OrderID, TransObjID, TransObjType, PointIndex)
)
go

/*==============================================================*/
/* Table: SJ_PrintElementInfo                                   */
/*==============================================================*/
create table SJ_PrintElementInfo (
   DesignPrintElementID int                  not null,
   DesignPrintGroupID   int                  not null,
   DesignPrintID        int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   ObjType              int                  not null,
   ObjID                int                  not null,
   PrintGroupID         int                  not null,
   ViewType             int                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_PRINTELEMENTINFO primary key (DesignPrintElementID, DesignPrintGroupID, DesignPrintID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_PrintGroupInfo                                     */
/*==============================================================*/
create table SJ_PrintGroupInfo (
   DesignPrintGroupID   int                  not null,
   DesignPrintID        int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   PrintID              int                  not null,
   PrintGroupID         int                  not null,
   ManyViewPort         bit                  not null,
   FrameStyle           int                  not null,
   FrameColorR          int                  not null,
   FrameColorG          int                  not null,
   FrameColorB          int                  not null,
   FrameColorA          int                  not null,
   FrameWidth           float                not null,
   LeftX                float                not null,
   RightY               float                not null,
   ScaleX               float                not null,
   ScaleY               float                not null,
   ScaleOffsetX         float                not null,
   ScaleOffsetY         float                not null,
   ScaleFactor          float                not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_PRINTGROUPINFO primary key (DesignPrintGroupID, DesignPrintID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_PrintInfo                                          */
/*==============================================================*/
create table SJ_PrintInfo (
   DesignPrintID        int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   PrintID              int                  not null,
   PageBorderStyle      int                  not null default 0,
   PageBorderColor      bigint               not null default 0,
   PageBorderWidth      float                not null default 0,
   ShaderPicTopX        float                not null default 0,
   ShaderPicTopY        float                not null default 0,
   ShaderPicHeight      float                not null default 0,
   ShaderPicWidth       float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   PrintName            nvarchar(50)         not null,
   ShaderPicPath        nvarchar(255)        not null default '',
   constraint PK_SJ_PRINTINFO primary key (DesignPrintID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_PrintTableInfo                                     */
/*==============================================================*/
create table SJ_PrintTableInfo (
   DesignPrintTableID   int                  not null,
   DesignPrintID        int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   TableSign            int                  not null,
   WhichLine            int                  not null,
   Align                int                  not null,
   LogoSign             int                  not null,
   TextPos              int                  not null,
   SetLine              bit                  not null,
   HasLogo              bit                  not null,
   IsSelected           bit                  not null,
   LineUp               bit                  not null,
   LineDown             bit                  not null,
   LineLeft             bit                  not null,
   LineRight            bit                  not null,
   LineUpSign           int                  not null,
   LineDownSign         int                  not null,
   LineLeftSign         int                  not null,
   LineRightSign        int                  not null,
   LineWidth            float                not null,
   LeftTopX             float                not null,
   LeftTopY             float                not null,
   XLen                 float                not null,
   YLen                 float                not null,
   LineUpWidth          float                not null,
   LineDownWidth        float                not null,
   LineRightWidth       float                not null,
   LineLeftWidth        float                not null,
   FaceName             nvarchar(32)         not null,
   LogoPath             nvarchar(500)        not null,
   SerialPath           nvarchar(500)        not null,
   TextValue            nvarchar(500)        not null,
   constraint PK_SJ_PRINTTABLEINFO primary key (DesignPrintTableID, DesignPrintID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_PrintTableRowColInfo                               */
/*==============================================================*/
create table SJ_PrintTableRowColInfo (
   DesignPrintTableRowColID int                  not null,
   DesignPrintTableRowID int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   TableSign            int                  not null,
   RowNumber            int                  not null,
   ColNumber            int                  not null,
   WhichLine            int                  not null,
   Align                int                  not null,
   LogoSign             int                  not null,
   TextPos              int                  not null,
   SetLine              bit                  not null,
   HasLogo              bit                  not null,
   IsSelected           bit                  not null,
   LineUp               bit                  not null,
   LineDown             bit                  not null,
   LineLeft             bit                  not null,
   LineRight            bit                  not null,
   LineUpSign           int                  not null,
   LineDownSign         int                  not null,
   LineLeftSign         int                  not null,
   LineRightSign        int                  not null,
   LineWidth            float                not null,
   LeftTopX             float                not null,
   LeftTopY             float                not null,
   XLen                 float                not null,
   YLen                 float                not null,
   LineUpWidth          float                not null,
   LineDownWidth        float                not null,
   LineRightWidth       float                not null,
   LineLeftWidth        float                not null,
   FaceName             nvarchar(32)         not null,
   LogoPath             nvarchar(500)        not null,
   SerialPath           nvarchar(500)        not null,
   TextValue            nvarchar(500)        not null,
   constraint PK_SJ_PRINTTABLEROWCOLINFO primary key (DesignPrintTableRowColID, DesignPrintTableRowID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_PrintTableRowInfo                                  */
/*==============================================================*/
create table SJ_PrintTableRowInfo (
   DesignPrintTableRowID int                  not null,
   DesignPrintTableID   int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   TableSign            int                  not null,
   RowNumber            int                  not null,
   WhichLine            int                  not null,
   Align                int                  not null,
   LogoSign             int                  not null,
   TextPos              int                  not null,
   SetLine              bit                  not null,
   HasLogo              bit                  not null,
   IsSelected           bit                  not null,
   LineUp               bit                  not null,
   LineDown             bit                  not null,
   LineLeft             bit                  not null,
   LineRight            bit                  not null,
   LineUpSign           int                  not null,
   LineDownSign         int                  not null,
   LineLeftSign         int                  not null,
   LineRightSign        int                  not null,
   LineWidth            float                not null,
   LeftTopX             float                not null,
   LeftTopY             float                not null,
   XLen                 float                not null,
   YLen                 float                not null,
   LineUpWidth          float                not null,
   LineDownWidth        float                not null,
   LineRightWidth       float                not null,
   LineLeftWidth        float                not null,
   FaceName             nvarchar(32)         not null,
   LogoPath             nvarchar(500)        not null,
   SerialPath           nvarchar(500)        not null,
   TextValue            nvarchar(500)        not null,
   constraint PK_SJ_PRINTTABLEROWINFO primary key (DesignPrintTableRowID, DesignPrintTableID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_ProductInfo                                        */
/*==============================================================*/
create table SJ_ProductInfo (
   DesignProductID      int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   ProductID            int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   DockObjID            int                  not null,
   DockObjType          int                  not null,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   YPos                 float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_PRODUCTINFO primary key (DesignProductID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_RemarkInfo                                         */
/*==============================================================*/
create table SJ_RemarkInfo (
   DesignRemarkID       int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   DesignPrintID        int                  not null,
   PrintID              int                  not null,
   ViewType             int                  not null default 0,
   BGColor              bigint               not null,
   ForeColor            bigint               not null,
   FontSize             int                  not null,
   FontStyle            int                  not null,
   LineSpace            int                  not null,
   ArrowID              int                  not null,
   ArrowStyle           int                  not null,
   FrameStyle           int                  not null,
   FrameColor           bigint               not null,
   DirectLine           int                  not null,
   DirectStyle          int                  not null,
   DirectLineStyle      int                  not null,
   CommentFrameStyle    int                  not null,
   IsSingleMode         bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   StrickOut            bit                  not null,
   UnderLine            bit                  not null,
   Italic               bit                  not null,
   Bold                 bit                  not null,
   FrameWidth           float                not null,
   ArrowX               float                not null,
   ArrowY               float                not null,
   StartX               float                not null,
   StartY               float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   FaceName             nvarchar(32)         not null,
   RemarkText           nvarchar(500)        not null,
   constraint PK_SJ_REMARKINFO primary key (DesignRemarkID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_ShapeInfo                                          */
/*==============================================================*/
create table SJ_ShapeInfo (
   DesignShapeID        int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   DesignPrintID        int                  not null,
   PrintID              int                  not null,
   ViewType             int                  not null default 0,
   ShapeType            int                  not null,
   LineWidth            int                  not null,
   LineStyle            int                  not null,
   StartX               float                not null,
   StartY               float                not null,
   StopX                float                not null,
   StopY                float                not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   AttachFilePath       nvarchar(255)        not null,
   constraint PK_SJ_SHAPEINFO primary key (DesignShapeID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_SkinInfo                                           */
/*==============================================================*/
create table SJ_SkinInfo (
   DesignSkinID         int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   DecorID              int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   GTypeID              int                  not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   GroundLen            float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_SKININFO primary key (DesignSkinID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_TableInfo                                          */
/*==============================================================*/
create table SJ_TableInfo (
   DesignTableID        int                  not null,
   OrderCate            int                  not null,
   DesignPlanID         int                  not null,
   OrderID              bigint               not null,
   TableID              int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   TableIndex           int                  not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   ZLen                 float                not null,
   YPos                 float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_TABLEINFO primary key (DesignTableID, OrderCate, DesignPlanID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_TablePartInfo                                      */
/*==============================================================*/
create table SJ_TablePartInfo (
   DesignTablePartID    int                  not null,
   DesignTableID        int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DecorLineID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   TableSideIndex       int                  not null,
   IsUserSetYLen        bit                  not null,
   GTypeID              int                  not null,
   MaterialID           int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   DefaultYLen          int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_TABLEPARTINFO primary key (DesignTablePartID, OrderCate, DesignTableID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_TableSideInfo                                      */
/*==============================================================*/
create table SJ_TableSideInfo (
   DesignTableSideID    int                  not null,
   DesignTableID        int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   TableTopID           int                  not null,
   TableTopSideID       int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   TableSideIndex       int                  not null,
   IsUseTableMat        bit                  not null,
   MaterialID           int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_TABLESIDEINFO primary key (DesignTableSideID, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_WallDecorInfo                                      */
/*==============================================================*/
create table SJ_WallDecorInfo (
   DesignWallDecorID    int                  not null,
   DesignWallID         int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   DesignPlanID         int                  not null,
   DecorID              int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsModelRevers        bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   OffsetXLen           float                not null,
   OffsetYLen           float                not null,
   OffsetZLen           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_WALLDECORINFO primary key (DesignWallDecorID, DesignWallID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SJ_WallInfo                                           */
/*==============================================================*/
create table SJ_WallInfo (
   DesignWallID         int                  not null,
   DesignPlanID         int                  not null,
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   WallType             int                  not null,
   WallIndex            int                  not null,
   GroupID              int                  not null,
   DockObjID            int                  not null default 0,
   DockXPos             float                not null default 0,
   DockYPos             float                not null default 0,
   DecorID              int                  not null,
   GridStyle            int                  not null,
   HasMark              bit                  not null,
   IsVisible            bit                  not null,
   IsLocked             bit                  not null,
   StartX               float                not null,
   StartY               float                not null,
   EndX                 float                not null,
   EndY                 float                not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   GroundLen            float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_SJ_WALLINFO primary key (DesignWallID, DesignPlanID, OrderCate, OrderID)
)
go

