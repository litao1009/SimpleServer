/*==============================================================*/
/* DBMS name:      Microsoft SQL Server 2008                    */
/* Created on:     2014/6/13 11:48:29                           */
/*==============================================================*/


if exists (select 1
            from  sysobjects
           where  id = object_id('GL_AppleseedInfo')
            and   type = 'U')
   drop table GL_AppleseedInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_BaseBoardInfo')
            and   type = 'U')
   drop table GL_BaseBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabBoardMatInfo')
            and   type = 'U')
   drop table JK_CabBoardMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabBoardMatSkinInfo')
            and   type = 'U')
   drop table JK_CabBoardMatSkinInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignBoardSealEdgeInfo')
            and   type = 'U')
   drop table JK_CabDesignBoardSealEdgeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignBoardSealInfo')
            and   type = 'U')
   drop table JK_CabDesignBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignDoorRegionHandleInfo')
            and   type = 'U')
   drop table JK_CabDesignDoorRegionHandleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignDoorRegionInfo')
            and   type = 'U')
   drop table JK_CabDesignDoorRegionInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignDoorSystemInfo')
            and   type = 'U')
   drop table JK_CabDesignDoorSystemInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignFNFittingInfo')
            and   type = 'U')
   drop table JK_CabDesignFNFittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignFNFittingMapInfo')
            and   type = 'U')
   drop table JK_CabDesignFNFittingMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignFootInfo')
            and   type = 'U')
   drop table JK_CabDesignFootInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignInfo')
            and   type = 'U')
   drop table JK_CabDesignInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabDesignMatInfo')
            and   type = 'U')
   drop table JK_CabDesignMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabMatPlanInfo')
            and   type = 'U')
   drop table JK_CabMatPlanInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabStructBoardGapInfo')
            and   type = 'U')
   drop table JK_CabStructBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabStructBoardInfo')
            and   type = 'U')
   drop table JK_CabStructBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabStructBoardSealInfo')
            and   type = 'U')
   drop table JK_CabStructBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabStructGapInfo')
            and   type = 'U')
   drop table JK_CabStructGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabStructInfo')
            and   type = 'U')
   drop table JK_CabStructInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabStructMatPlanMapInfo')
            and   type = 'U')
   drop table JK_CabStructMatPlanMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabinetSizeBoardInfo')
            and   type = 'U')
   drop table JK_CabinetSizeBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabinetSizeInfo')
            and   type = 'U')
   drop table JK_CabinetSizeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_CabinetSizeStructBoardInfo')
            and   type = 'U')
   drop table JK_CabinetSizeStructBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorBoardFrameMapInfo')
            and   type = 'U')
   drop table JK_DecorBoardFrameMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorBoardInfo')
            and   type = 'U')
   drop table JK_DecorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorBoardMatInfo')
            and   type = 'U')
   drop table JK_DecorBoardMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorBoardUnitInfo')
            and   type = 'U')
   drop table JK_DecorBoardUnitInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorBoardUnitMatInfo')
            and   type = 'U')
   drop table JK_DecorBoardUnitMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorBoardUnitSealInfo')
            and   type = 'U')
   drop table JK_DecorBoardUnitSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorInfo')
            and   type = 'U')
   drop table JK_DecorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorLineInfo')
            and   type = 'U')
   drop table JK_DecorLineInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorLineMatInfo')
            and   type = 'U')
   drop table JK_DecorLineMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DecorUnitHWFittingMapInfo')
            and   type = 'U')
   drop table JK_DecorUnitHWFittingMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorBoardGapInfo')
            and   type = 'U')
   drop table JK_DoorBoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorBoardInfo')
            and   type = 'U')
   drop table JK_DoorBoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorBoardMatMapInfo')
            and   type = 'U')
   drop table JK_DoorBoardMatMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorBoardSealInfo')
            and   type = 'U')
   drop table JK_DoorBoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorInfo')
            and   type = 'U')
   drop table JK_DoorInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorMatMapInfo')
            and   type = 'U')
   drop table JK_DoorMatMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorMatPlanHandleMapInfo')
            and   type = 'U')
   drop table JK_DoorMatPlanHandleMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorMatPlanInfo')
            and   type = 'U')
   drop table JK_DoorMatPlanInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorRegionHWFittingMapInfo')
            and   type = 'U')
   drop table JK_DoorRegionHWFittingMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorSystemInfo')
            and   type = 'U')
   drop table JK_DoorSystemInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorSystemMatMapInfo')
            and   type = 'U')
   drop table JK_DoorSystemMatMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorSystemRegionDoorMapInfo')
            and   type = 'U')
   drop table JK_DoorSystemRegionDoorMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorSystemRegionInfo')
            and   type = 'U')
   drop table JK_DoorSystemRegionInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorSystemRegionSlideMapInfo')
            and   type = 'U')
   drop table JK_DoorSystemRegionSlideMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_DoorSystemRegionSlidePositionSizeInfo')
            and   type = 'U')
   drop table JK_DoorSystemRegionSlidePositionSizeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FNFittingInfo')
            and   type = 'U')
   drop table JK_FNFittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FNFittingMatInfo')
            and   type = 'U')
   drop table JK_FNFittingMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FNFittingPartInfo')
            and   type = 'U')
   drop table JK_FNFittingPartInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FNFittingPartMatInfo')
            and   type = 'U')
   drop table JK_FNFittingPartMatInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FNFittingPartSealInfo')
            and   type = 'U')
   drop table JK_FNFittingPartSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FittingInfo')
            and   type = 'U')
   drop table JK_FittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FittingRuleInfo')
            and   type = 'U')
   drop table JK_FittingRuleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_FormulaConstInfo')
            and   type = 'U')
   drop table JK_FormulaConstInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_GroupInfo')
            and   type = 'U')
   drop table JK_GroupInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_HWFittingInfo')
            and   type = 'U')
   drop table JK_HWFittingInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_HoleRuleInfo')
            and   type = 'U')
   drop table JK_HoleRuleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_MaterialInfo')
            and   type = 'U')
   drop table JK_MaterialInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_MaterialSealRuleMapInfo')
            and   type = 'U')
   drop table JK_MaterialSealRuleMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_ModelInfo')
            and   type = 'U')
   drop table JK_ModelInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_NumberRuleInfo')
            and   type = 'U')
   drop table JK_NumberRuleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_PackageInfo')
            and   type = 'U')
   drop table JK_PackageInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_PackageMapInfo')
            and   type = 'U')
   drop table JK_PackageMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_ProductInfo')
            and   type = 'U')
   drop table JK_ProductInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_ProductSeriesInfo')
            and   type = 'U')
   drop table JK_ProductSeriesInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_ProductSeriesValidInfo')
            and   type = 'U')
   drop table JK_ProductSeriesValidInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_ResourceInfo')
            and   type = 'U')
   drop table JK_ResourceInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_SealRuleInfo')
            and   type = 'U')
   drop table JK_SealRuleInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_SysConfigInfo')
            and   type = 'U')
   drop table JK_SysConfigInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_SysRuleConfigInfo')
            and   type = 'U')
   drop table JK_SysRuleConfigInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_SysRuleTypeInfo')
            and   type = 'U')
   drop table JK_SysRuleTypeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JK_TableTopSideInfo')
            and   type = 'U')
   drop table JK_TableTopSideInfo
go

/*==============================================================*/
/* Table: GL_AppleseedInfo                                      */
/*==============================================================*/
create table GL_AppleseedInfo (
   ItemID               int                  identity(1,1),
   ItemName             nvarchar(50)         not null,
   ItemData             nvarchar(1000)       not null,
   constraint PK_GL_APPLESEEDINFO primary key (ItemID)
)
go

/*==============================================================*/
/* Table: GL_BaseBoardInfo                                      */
/*==============================================================*/
create table GL_BaseBoardInfo (
   CabShape             int                  not null,
   CabGapType           int                  not null,
   BoardType            int                  not null,
   BoardPosition        int                  not null,
   FactoryID            int                  not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffset              nvarchar(255)        not null,
   YOffset              nvarchar(255)        not null,
   ZOffset              nvarchar(255)        not null,
   ArcX                 float                not null,
   ArcY                 float                not null,
   ArcZ                 float                not null,
   Name                 nvarchar(50)         not null,
   constraint PK_GL_BASEBOARDINFO primary key (CabShape, CabGapType, BoardType, BoardPosition, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabBoardMatInfo                                    */
/*==============================================================*/
create table JK_CabBoardMatInfo (
   CabMatPlanID         int                  not null,
   CabStructBoardID     int                  not null,
   IsDefault            bit                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   SealRuleID           int                  not null,
   SkinDirection        int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   IsUseDefaultSkinDirection bit                  not null,
   constraint PK_JK_CABBOARDMATINFO primary key (CabMatPlanID, CabStructBoardID, MatID, MatGType, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabBoardMatSkinInfo                                */
/*==============================================================*/
create table JK_CabBoardMatSkinInfo (
   CabMatPlanID         int                  not null,
   CabStructBoardID     int                  not null,
   SkinDirection        int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   IsUseDefaultSkinDirection bit                  not null,
   constraint PK_JK_CABBOARDMATSKININFO primary key (CabMatPlanID, CabStructBoardID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignBoardSealEdgeInfo                         */
/*==============================================================*/
create table JK_CabDesignBoardSealEdgeInfo (
   CabDesignBoardSealID int                  not null,
   SealIndex            int                  not null,
   SealMatID            int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABDESIGNBOARDSEALEDGEIN primary key (CabDesignBoardSealID, SealIndex, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignBoardSealInfo                             */
/*==============================================================*/
create table JK_CabDesignBoardSealInfo (
   CabDesignBoardSealID int                  not null,
   CabStructBoardID     int                  not null,
   CabStructID          int                  not null,
   CabDesignID          int                  not null,
   MaterialID           int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABDESIGNBOARDSEALINFO primary key (CabDesignBoardSealID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignDoorRegionHandleInfo                      */
/*==============================================================*/
create table JK_CabDesignDoorRegionHandleInfo (
   CabDesignDoorRegionHandleID int                  not null,
   CabDesignDoorRegionID int                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   ArcZ                 float                not null,
   HandleID             int                  not null,
   MatchType            int                  not null,
   constraint PK_JK_CABDESIGNDOORREGIONHANDL primary key (CabDesignDoorRegionHandleID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignDoorRegionInfo                            */
/*==============================================================*/
create table JK_CabDesignDoorRegionInfo (
   CabDesignDoorRegionID int                  not null,
   CabDesignID          int                  not null,
   IsDel                bit                  not null default 0,
   IsGroup              bit                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   IsCanResize          bit                  not null,
   MinXLen              float                not null,
   MaxXLen              float                not null,
   XLenStep             float                not null,
   MinYLen              float                not null,
   MaxYLen              float                not null,
   YLenStep             float                not null,
   DefaultMatID         int                  not null,
   DefaultModelID       int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   DefaultDoorID        int                  not null,
   CabDesignDoorSystemID int                  not null,
   DoorSystemID         int                  not null,
   IsUseDefaultSize     bit                  not null,
   IsUseCutFormula      bit                  not null,
   DoorRegionID         int                  not null,
   constraint PK_JK_CABDESIGNDOORREGIONINFO primary key (CabDesignDoorRegionID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignDoorSystemInfo                            */
/*==============================================================*/
create table JK_CabDesignDoorSystemInfo (
   CabDesignDoorSystemID int                  not null,
   CabDesignID          int                  not null,
   IsDel                bit                  not null default 0,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   DoorSystemID         int                  not null,
   InstallFaceType      int                  not null,
   XAdjustLen           float                not null,
   YAdjustLen           float                not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   IsCanDel             bit                  not null,
   XFormula             nvarchar(500)        not null,
   YFormula             nvarchar(500)        not null,
   ZLen                 float                not null,
   constraint PK_JK_CABDESIGNDOORSYSTEMINFO primary key (CabDesignDoorSystemID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignFNFittingInfo                             */
/*==============================================================*/
create table JK_CabDesignFNFittingInfo (
   CabDesignFNFittingID int                  not null,
   ContainerID          int                  not null,
   ContainerGTypeID     int                  not null,
   IsCanDel             bit                  not null default 0,
   XFormula             nvarchar(255)        null,
   YFormula             nvarchar(255)        null,
   ZFormula             nvarchar(255)        null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   IsDel                bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_CABDESIGNFNFITTINGINFO primary key (CabDesignFNFittingID, ContainerGTypeID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignFNFittingMapInfo                          */
/*==============================================================*/
create table JK_CabDesignFNFittingMapInfo (
   FNFittingID          int                  not null,
   CabDesignFNFittingID int                  not null,
   IsDefault            bit                  not null,
   FNType               int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABDESIGNDOORREGIONFITTINGMAPINFO primary key (FNFittingID, CabDesignFNFittingID, FNType, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignFootInfo                                  */
/*==============================================================*/
create table JK_CabDesignFootInfo (
   CabDesignID          int                  not null,
   FootID               int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABDESIGNFOOTINFO primary key (CabDesignID, FootID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabDesignInfo                                      */
/*==============================================================*/
create table JK_CabDesignInfo (
   CabDesignID          int                  not null,
   IsDel                bit                  not null default 0,
   GroupID              int                  not null,
   CabFunction          int                  not null,
   CabStructID          int                  not null,
   PosType              int                  not null default 0,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   CabDesignCode        nvarchar(20)         not null,
   CabDesignName        nvarchar(50)         not null,
   CabDesignMemo        nvarchar(500)        not null,
   VerCode              bigint               not null,
   PhotoID              int                  not null,
   IsActive             bit                  not null,
   constraint PK_JK_CABDESIGNINFO primary key (CabDesignID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabDesignMatInfo                                   */
/*==============================================================*/
create table JK_CabDesignMatInfo (
   CabDesignID          int                  not null,
   CabMatPlanID         int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABDESIGNMATINFO primary key (CabDesignID, CabMatPlanID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabMatPlanInfo                                     */
/*==============================================================*/
create table JK_CabMatPlanInfo (
   CabMatPlanID         int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null default 0,
   FactoryID            int                  not null,
   MatGType             int                  not null,
   MatID                int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   CabMatPlanCode       nvarchar(20)         not null,
   CabMatPlanName       nvarchar(50)         not null,
   CabMatPlanMemo       nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_CABMATPLANINFO primary key (CabMatPlanID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabStructBoardGapInfo                              */
/*==============================================================*/
create table JK_CabStructBoardGapInfo (
   CabStructBoardGapID  int                  not null,
   CabStructBoardID     int                  not null,
   GapPos               int                  not null,
   GapIndex             int                  not null,
   GapType              int                  not null,
   GapShape             int                  not null,
   XLenFormula          nvarchar(255)        not null,
   YLenFormula          nvarchar(255)        not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   VerCode              bigint               not null,
   constraint PK_JK_CABSTRUCTBOARDGAPINFO primary key (CabStructBoardGapID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabStructBoardInfo                                 */
/*==============================================================*/
create table JK_CabStructBoardInfo (
   CabStructBoardID     int                  not null,
   CabStructID          int                  not null,
   IsDel                bit                  not null default 0,
   IsUseMain            bit                  not null,
   IsCanRepeat          bit                  not null,
   IsCanDel             bit                  not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   ArcX                 float                not null,
   ArcY                 float                not null,
   ArcZ                 float                not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   CabStructBoardName   nvarchar(50)         not null,
   DefaultSkinDirection int                  not null,
   VerCode              bigint               not null,
   constraint PK_JK_CABSTRUCTBOARDINFO primary key (CabStructBoardID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabStructBoardSealInfo                             */
/*==============================================================*/
create table JK_CabStructBoardSealInfo (
   CabStructBoardSealID int                  not null,
   SealOrder            int                  not null,
   CabStructBoardID     int                  not null,
   SealType             int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   SealIndex            int                  not null,
   constraint PK_JK_CABSTRUCTBOARDSEALINFO primary key (CabStructBoardSealID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabStructGapInfo                                   */
/*==============================================================*/
create table JK_CabStructGapInfo (
   CabStructGapID       int                  not null,
   CabStructID          int                  not null,
   IsDel                bit                  not null default 0,
   FactoryID            int                  not null,
   CabGapType           int                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       Nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   ZFormula             nvarchar(255)        not null,
   XVar                 nvarchar(20)         not null,
   YVar                 nvarchar(20)         not null,
   ZVar                 nvarchar(20)         not null,
   XVarName             nvarchar(50)         not null,
   YVarName             nvarchar(50)         not null,
   ZVarName             nvarchar(50)         not null,
   CabStructCabStructGapCode nvarchar(20)         not null,
   CabStructGapName     nvarchar(50)         not null,
   CabStructGapMemo     nvarchar(500)        not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   VerCode              bigint               not null,
   constraint PK_JK_CABSTRUCTGAPINFO primary key (CabStructGapID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabStructInfo                                      */
/*==============================================================*/
create table JK_CabStructInfo (
   CabStructID          int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   CabGapType           int                  not null,
   CabShapeID           int                  not null,
   VirtualXLen          float                not null default 0,
   VirtualYLen          float                not null default 0,
   VirtualZLen          float                not null default 0,
   VirtualShapeXLen     float                not null default 0,
   VirtualShapeZLen     float                not null default 0,
   VirtualGapXLen       float                not null default 0,
   VirtualGapYLen       float                not null default 0,
   VirtualGapZLen       float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   CabStructCode        nvarchar(20)         not null,
   CabStructName        nvarchar(50)         not null,
   CabStructMemo        nvarchar(500)        not null,
   constraint PK_JK_CABSTRUCTINFO primary key (CabStructID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabStructMatPlanMapInfo                            */
/*==============================================================*/
create table JK_CabStructMatPlanMapInfo (
   CabMatPlanID         int                  not null,
   CabStructID          int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABSTRUCTMATPLANMAPINFO primary key (CabMatPlanID, CabStructID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_CabinetSizeBoardInfo                               */
/*==============================================================*/
create table JK_CabinetSizeBoardInfo (
   CabinetSizeBoardID   int                  not null,
   CabinetSizeID        int                  not null,
   IsDel                bit                  not null default 0,
   CabStructBoardID     int                  not null,
   IsCanRelocate        bit                  not null,
   IsCanDel             bit                  not null,
   FactoryID            int                  not null,
   CreateTime           datetime             not null,
   CreatorID            int                  not null,
   UpdateTime           datetime             not null,
   UpdaterID            int                  not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   CabStructBoardName   nvarchar(50)         not null,
   VerCode              bigint               not null,
   constraint PK_JK_CABINETSIZEBOARDINFO primary key (CabinetSizeBoardID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabinetSizeInfo                                    */
/*==============================================================*/
create table JK_CabinetSizeInfo (
   CabDesignID          int                  not null,
   IsDel                bit                  not null default 0,
   CabinetSizeID        int                  not null,
   PhotoID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   IsStandard           bit                  not null,
   MinXLen              float                not null,
   MaxXLen              float                not null,
   XLenStep             float                not null default 0,
   MinYLen              float                not null,
   MaxYLen              float                not null,
   YLenStep             float                not null default 0,
   MinZLen              float                not null,
   MaxZLen              float                not null,
   ZLenStep             float                not null default 0,
   ShapeXLen            float                not null,
   ShapeZLen            float                not null,
   GapXLen              float                not null,
   GapYLen              float                not null,
   GapZLen              float                not null,
   ShapeMinXLen         float                not null,
   ShapeMaxXLen         float                not null,
   ShapeXLenStep        float                not null default 0,
   ShapeMinZLen         float                not null,
   ShapeMaxZLen         float                not null,
   ShapeZLenStep        float                not null default 0,
   GapMinXLen           float                not null,
   GapMaxXLen           float                not null,
   GapXLenStep          float                not null default 0,
   GapMinYLen           float                not null,
   GapMaxYLen           float                not null,
   GapYLenStep          float                not null default 0,
   GapMinZLen           float                not null,
   GapMaxZLen           float                not null,
   GapZLenStep          float                not null default 0,
   FootCount            int                  not null,
   IsSysFootRule        bit                  not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   CabinetSizeCode      nvarchar(20)         not null,
   CabinetSizeName      nvarchar(50)         not null,
   CabinetSizeMemo      nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_CABINETSIZEINFO primary key (CabinetSizeID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_CabinetSizeStructBoardInfo                         */
/*==============================================================*/
create table JK_CabinetSizeStructBoardInfo (
   CabStructBoardID     int                  not null,
   CabinetSizeID        int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_CABINETSIZESTRUCTBOARDIN primary key (CabStructBoardID, CabinetSizeID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DecorBoardFrameMapInfo                             */
/*==============================================================*/
create table JK_DecorBoardFrameMapInfo (
   DecorBoardID         int                  not null,
   DecorFrameID         int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DECORBOARDFRAMEMAPINFO primary key (DecorBoardID, DecorFrameID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DecorBoardInfo                                     */
/*==============================================================*/
create table JK_DecorBoardInfo (
   DecorBoardID         int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   SourceType           int                  not null,
   DefaultYPos          float                not null,
   DecorBoardCode       nvarchar(20)         not null,
   DecorBoardName       nvarchar(50)         not null,
   DecorBoardMemo       nvarchar(500)        not null,
   VerCode              bigint               not null,
   GTypeID              int                  not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   ZLen                 float                not null,
   IsCanResize          bit                  not null,
   MinXLen              float                not null,
   MaxXLen              float                not null,
   XLenStep             float                not null,
   MinYLen              float                not null,
   MaxYLen              float                not null,
   YLenStep             float                not null,
   XDock                int                  not null,
   YDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   PhotoID              int                  not null,
   constraint PK_JK_DECORBOARDINFO primary key (DecorBoardID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DecorBoardMatInfo                                  */
/*==============================================================*/
create table JK_DecorBoardMatInfo (
   DecorBoardID         int                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DECORBOARDMATINFO primary key (DecorBoardID, MatID, MatGType, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DecorBoardUnitInfo                                 */
/*==============================================================*/
create table JK_DecorBoardUnitInfo (
   DecorBoardUnitID     int                  not null,
   IsDel                bit                  not null default 0,
   DecorBoardID         int                  not null,
   SplitType            int                  not null,
   SkinDirection        int                  not null,
   ArcX                 float                not null,
   ArcY                 float                not null,
   ArcZ                 float                not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   DecorBoardUnitIndex  int                  not null,
   DecorBoardUnitName   nvarchar(50)         not null,
   DecorBoardUnitMemo   nvarchar(500)        not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   IsUseDefaultMat      bit                  not null,
   constraint PK_JK_DECORBOARDUNITINFO primary key (DecorBoardUnitID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DecorBoardUnitMatInfo                              */
/*==============================================================*/
create table JK_DecorBoardUnitMatInfo (
   DecorBoardUnitID     int                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   IsDefault            bit                  not null,
   DefaultSealRuleID    int                  not null,
   SkinDirection        int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DECORBOARDUNITMATINFO primary key (DecorBoardUnitID, MatID, MatGType, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DecorBoardUnitSealInfo                             */
/*==============================================================*/
create table JK_DecorBoardUnitSealInfo (
   DecorBoardUnitID     int                  not null,
   SealIndex            int                  not null,
   SealType             int                  not null,
   DefaultMaterialID    int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   SealOrder            int                  not null,
   DecorBoardUnitSealID int                  not null,
   constraint PK_JK_DECORBOARDUNITSEALINFO primary key (VerCode, FactoryID, DecorBoardUnitSealID)
)
go

/*==============================================================*/
/* Table: JK_DecorInfo                                          */
/*==============================================================*/
create table JK_DecorInfo (
   DecorID              int                  not null,
   GroupID              int                  not null,
   FactoryID            int                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   IsDel                bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   ShowID               int                  not null,
   SkinID               int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   DecorCode            nvarchar(20)         not null,
   DecorName            nvarchar(50)         not null,
   DecorMemo            nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_DECORINFO primary key (DecorID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DecorLineInfo                                      */
/*==============================================================*/
create table JK_DecorLineInfo (
   DecorLineID          int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   GTypeID              int                  not null,
   ShowID               int                  not null,
   ModelID              int                  not null,
   ZOffset              float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   DecorLineCode        nvarchar(20)         not null,
   DecorLineName        nvarchar(50)         not null,
   DecorLineMemo        nvarchar(500)        not null,
   VerCode              bigint               not null,
   DefaultYLen          float                not null,
   constraint PK_JK_DECORLINEINFO primary key (DecorLineID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DecorLineMatInfo                                   */
/*==============================================================*/
create table JK_DecorLineMatInfo (
   DecorLineID          int                  not null,
   MaterialID           int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DECORLINEMATINFO primary key (DecorLineID, MaterialID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DecorUnitHWFittingMapInfo                          */
/*==============================================================*/
create table JK_DecorUnitHWFittingMapInfo (
   DecorBoardUnitID     int                  not null,
   HWFittingID          int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DECORUNITHWFITTINGMAPINF primary key (DecorBoardUnitID, HWFittingID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorBoardGapInfo                                   */
/*==============================================================*/
create table JK_DoorBoardGapInfo (
   DoorBoardGapID       int                  not null,
   DoorBoardID          int                  not null,
   GapPos               int                  not null,
   GapIndex             int                  not null,
   GapType              int                  not null,
   GapShape             int                  not null,
   XLenFormula          nvarchar(255)        not null,
   YLenFormula          nvarchar(255)        not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   VerCode              bigint               not null,
   constraint PK_JK_DOORBOARDGAPINFO primary key (DoorBoardGapID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DoorBoardInfo                                      */
/*==============================================================*/
create table JK_DoorBoardInfo (
   DoorBoardID          int                  not null,
   DoorID               int                  not null,
   IsDel                bit                  not null default 0,
   IsUseDefaultMat      bit                  not null,
   SplitType            int                  not null,
   SkinDirection        int                  not null,
   ArcX                 float                not null,
   ArcY                 float                not null,
   ArcZ                 float                not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   DoorBoardIndex       int                  not null,
   DoorBoardName        nvarchar(50)         not null,
   DoorBoardMemo        nvarchar(500)        not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_DOORBOARDINFO primary key (DoorBoardID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorBoardMatMapInfo                                */
/*==============================================================*/
create table JK_DoorBoardMatMapInfo (
   DoorBoardID          int                  not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORBOARDMATMAPINFO primary key (DoorBoardID, MatID, MatGType, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorBoardSealInfo                                  */
/*==============================================================*/
create table JK_DoorBoardSealInfo (
   DoorBoardID          int                  not null,
   SealOrder            int                  not null,
   SealType             int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   SealIndex            int                  not null,
   constraint PK_JK_DOORBOARDSEALINFO primary key (DoorBoardID, SealOrder, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorInfo                                           */
/*==============================================================*/
create table JK_DoorInfo (
   DoorID               int                  not null,
   GroupID              int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsDel                bit                  not null default 0,
   IsActive             bit                  not null,
   GTypeID              int                  not null,
   CombineType          int                  not null,
   PhotoID              int                  not null,
   VirtualContainerXLen float                not null default 0,
   VirtualContainerYLen float                not null default 0,
   VirtualContainerZLen float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   DoorCode             nvarchar(20)         not null,
   DoorName             nvarchar(50)         not null,
   DoorMemo             nvarchar(500)        not null,
   constraint PK_JK_DOORINFO primary key (DoorID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DoorMatMapInfo                                     */
/*==============================================================*/
create table JK_DoorMatMapInfo (
   DoorID               int                  not null,
   DoorMatPlanID        int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORMATMAPINFO primary key (DoorID, DoorMatPlanID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorMatPlanHandleMapInfo                           */
/*==============================================================*/
create table JK_DoorMatPlanHandleMapInfo (
   DoorMatPlanID        int                  not null,
   HandleID             int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORMATPLANHANDLEMAPINFO primary key (DoorMatPlanID, HandleID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorMatPlanInfo                                    */
/*==============================================================*/
create table JK_DoorMatPlanInfo (
   DoorMatPlanID        int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null default 0,
   IsActive             bit                  not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   MatID                int                  not null,
   MatGType             int                  not null,
   DoorMatPlanCode      nvarchar(20)         not null,
   DoorMatPlanName      nvarchar(50)         not null,
   DoorMatPlanMemo      nvarchar(500)        not null,
   VerCode              bigint               not null,
   ModelID              int                  not null,
   IsCanSeal            bit                  not null default 1,
   constraint PK_JK_DOORMATPLANINFO primary key (DoorMatPlanID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DoorRegionHWFittingMapInfo                         */
/*==============================================================*/
create table JK_DoorRegionHWFittingMapInfo (
   DoorSystemRegionID   int                  not null,
   HWFittingID          int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORREGIONHWFITTINGMAPIN primary key (DoorSystemRegionID, HWFittingID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorSystemInfo                                     */
/*==============================================================*/
create table JK_DoorSystemInfo (
   DoorSystemID         int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   GroupID              int                  not null,
   IsDel                bit                  not null default 0,
   IsActive             bit                  not null,
   SupplyType           int                  not null,
   MatchCabShape        int                  not null,
   InstallType          int                  not null,
   VirtualXLen          float                not null default 0,
   VirtualYLen          float                not null default 0,
   VirtualShapeXLen     float                not null default 0,
   VirtualShapeZLen     float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   DoorSystemCode       nvarchar(20)         not null,
   DoorSystemName       nvarchar(50)         not null,
   DoorSystemMemo       nvarchar(500)        not null,
   constraint PK_JK_DOORSYSTEMINFO primary key (DoorSystemID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_DoorSystemMatMapInfo                               */
/*==============================================================*/
create table JK_DoorSystemMatMapInfo (
   DoorSystemID         int                  not null,
   DoorMatPlanID        int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORSYSTEMMATMAPINFO primary key (DoorSystemID, DoorMatPlanID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorSystemRegionDoorMapInfo                        */
/*==============================================================*/
create table JK_DoorSystemRegionDoorMapInfo (
   DoorSystemRegionID   int                  not null,
   DoorID               int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORSYSTEMREGIONDOORMAPI primary key (DoorSystemRegionID, DoorID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorSystemRegionInfo                               */
/*==============================================================*/
create table JK_DoorSystemRegionInfo (
   DoorSystemRegionID   int                  not null,
   DoorSystemID         int                  not null,
   ParentID             int                  not null,
   IsDel                bit                  not null default 0,
   RegionIndex          int                  not null,
   CutDirection         int                  not null,
   CutFormula           nvarchar(255)        not null,
   IsSlide              bit                  not null,
   IsRound              bit                  not null,
   LenPrecision         int                  not null,
   OpenDoorType         int                  not null,
   XAdjustLen           float                not null,
   YAdjustLen           float                not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   IsCanResize          bit                  not null,
   DoorFunction         int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   HandleXDock          int                  not null,
   HandleYDock          int                  not null,
   HandleZDock          int                  not null,
   HandleXOffsetFormula nvarchar(255)        not null,
   HandleYOffsetFormula nvarchar(255)        not null,
   HandleZOffsetFormula nvarchar(255)        not null,
   ZLen                 float                not null,
   DoorBoardMatType     int                  not null,
   DoorBoardMatID       int                  not null,
   IsUseCustomThick     bit                  not null,
   constraint PK_JK_DOORSYSTEMREGIONINFO primary key (DoorSystemRegionID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorSystemRegionSlideMapInfo                       */
/*==============================================================*/
create table JK_DoorSystemRegionSlideMapInfo (
   DoorSystemRegionID   int                  not null,
   SlideID              int                  not null,
   SlidePosition        int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_DOORSYSTEMREGIONSLIDEMAP primary key (DoorSystemRegionID, SlideID, SlidePosition, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_DoorSystemRegionSlidePositionSizeInfo              */
/*==============================================================*/
create table JK_DoorSystemRegionSlidePositionSizeInfo (
   DoorSystemRegionID   int                  not null,
   SlidePosition        int                  not null,
   XAdjustLen           float                not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_DOORSYSTEMREGIONSLIDEPOS primary key (DoorSystemRegionID, SlidePosition, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_FNFittingInfo                                      */
/*==============================================================*/
create table JK_FNFittingInfo (
   FNFittingID          int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   IsEntire             bit                  not null,
   ShowID               int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   MinInstallX          float                not null,
   MinInstallY          float                not null,
   MinInstallZ          float                not null,
   MinXLen              float                not null,
   MaxXLen              float                not null,
   MinYLen              float                not null,
   MaxYLen              float                not null,
   MinZLen              float                not null,
   MaxZLen              float                not null,
   IsMatchXLen          bit                  not null default 0,
   IsMatchYLen          bit                  not null default 0,
   IsMatchZLen          bit                  not null default 0,
   DefaultYPos          float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   FNFittingCode        nvarchar(20)         not null,
   FNFittingName        nvarchar(50)         not null,
   FNFittingMemo        nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_FNFITTINGINFO primary key (FNFittingID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_FNFittingMatInfo                                   */
/*==============================================================*/
create table JK_FNFittingMatInfo (
   FNFittingID          int                  not null,
   MaterialID           int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_FNFITTINGMATINFO primary key (FNFittingID, MaterialID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_FNFittingPartInfo                                  */
/*==============================================================*/
create table JK_FNFittingPartInfo (
   FNFittingPartID      int                  not null,
   PartType             int                  not null,
   IsDel                bit                  not null default 0,
   FNFittingID          int                  not null,
   IsUseMain            bit                  not null,
   SkinDirection        int                  not null,
   SplitType            int                  not null,
   ArcX                 float                not null,
   ArcY                 float                not null,
   ArcZ                 float                not null,
   XFormula             nvarchar(255)        not null,
   YFormula             nvarchar(255)        not null,
   XDock                int                  not null,
   YDock                int                  not null,
   ZDock                int                  not null,
   XOffsetFormula       nvarchar(255)        not null,
   YOffsetFormula       nvarchar(255)        not null,
   ZOffsetFormula       nvarchar(255)        not null,
   FNFittingPartCode    nvarchar(20)         not null,
   FNFittingPartName    nvarchar(50)         not null,
   FNFittingPartMemo    nvarchar(500)        not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_FNFITTINGPARTINFO primary key (FNFittingPartID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_FNFittingPartMatInfo                               */
/*==============================================================*/
create table JK_FNFittingPartMatInfo (
   FNFittingPartID      int                  not null,
   MaterialID           int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   MatGType             int                  not null,
   constraint PK_JK_FNFITTINGPARTMATINFO primary key (FNFittingPartID, MaterialID, VerCode, FactoryID, MatGType)
)
go

/*==============================================================*/
/* Table: JK_FNFittingPartSealInfo                              */
/*==============================================================*/
create table JK_FNFittingPartSealInfo (
   FNFittingPartID      int                  not null,
   SealOrder            int                  not null,
   SealIndex            int                  not null,
   SealType             int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_FNFITTINGPARTSEALINFO primary key (FNFittingPartID, SealOrder, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_FittingInfo                                        */
/*==============================================================*/
create table JK_FittingInfo (
   FittingID            int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   GTypeID              int                  not null,
   SupplyType           int                  not null,
   ShowID               int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   FittingCode          nvarchar(20)         not null,
   FittingName          nvarchar(50)         not null,
   FittingMemo          nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_FITTINGINFO primary key (FittingID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_FittingRuleInfo                                    */
/*==============================================================*/
create table JK_FittingRuleInfo (
   FittingRuleID        int                  not null,
   OwnerID              int                  not null,
   OwnerGTypeID         int                  not null,
   IsDefault            bit                  not null,
   IsCanDel             bit                  not null default 0,
   MinLen               float                not null,
   MaxLen               float                not null,
   FittingID            int                  not null,
   FittingType          int                  not null default 1,
   UseCount             int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_FITTINGRULEINFO primary key (VerCode, FactoryID, FittingRuleID)
)
go

/*==============================================================*/
/* Table: JK_FormulaConstInfo                                   */
/*==============================================================*/
create table JK_FormulaConstInfo (
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   ConstCode            nvarchar(20)         not null,
   ConstText            nvarchar(20)         not null,
   ConstValue           float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_FORMULACONSTINFO primary key (FactoryID, VerCode, ConstCode)
)
go

/*==============================================================*/
/* Table: JK_GroupInfo                                          */
/*==============================================================*/
create table JK_GroupInfo (
   GroupID              int                  not null,
   ParentID             int                  not null default 0,
   FactoryID            int                  not null,
   IsDel                bit                  not null,
   GTypeID              int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   GroupCode            nvarchar(20)         not null,
   GroupName            nvarchar(50)         not null,
   GroupMemo            nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_GROUPINFO primary key (GroupID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_HWFittingInfo                                      */
/*==============================================================*/
create table JK_HWFittingInfo (
   HWFittingID          int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   ShowID               int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   SettingCountRuleID   int                  not null,
   IsMatchXLen          bit                  not null,
   IsMatchYLen          bit                  not null,
   IsMatchZLen          bit                  not null default 0,
   EffectLen            float                not null,
   XAdjustLen           float                not null,
   IsEmbed              bit                  not null,
   InstallDirection     int                  not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   HWFittingCode        nvarchar(20)         not null,
   HWFittingName        nvarchar(50)         not null,
   HWFittingMemo        nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_HWFITTINGINFO primary key (HWFittingID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_HoleRuleInfo                                       */
/*==============================================================*/
create table JK_HoleRuleInfo (
   HoleID               int                  not null,
   FNFittingID          int                  not null,
   HoleTypeID           int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   OverHeight           float                not null,
   HolePicID            int                  not null,
   MinXDistance         float                not null,
   MinZDistance         float                not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_HOLERULEINFO primary key (FNFittingID, HoleID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_MaterialInfo                                       */
/*==============================================================*/
create table JK_MaterialInfo (
   MaterialID           int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   ShowID               int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   IsMatchXLen          bit                  not null default 1,
   IsMatchYLen          bit                  not null default 1,
   IsMatchZLen          bit                  not null default 1,
   SkinID               int                  not null,
   SkinDirection        int                  not null,
   TransCode            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   MaterialCode         nvarchar(20)         not null,
   MaterialName         nvarchar(50)         not null,
   MaterialMemo         nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_MATERIALINFO primary key (MaterialID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_MaterialSealRuleMapInfo                            */
/*==============================================================*/
create table JK_MaterialSealRuleMapInfo (
   MaterialID           int                  not null,
   SealRuleID           int                  not null,
   IsCabDef             bit                  not null,
   IsDoorDef            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_MATERIALSEALRULEMAPINFO primary key nonclustered (MaterialID, SealRuleID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_ModelInfo                                          */
/*==============================================================*/
create table JK_ModelInfo (
   ModelID              int                  not null,
   GroupID              int                  not null default 0,
   FactoryID            int                  not null,
   GTypeID              int                  not null,
   ArcX                 float                not null,
   ArcY                 float                not null,
   ArcZ                 float                not null,
   IsDel                bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   ModelCode            nvarchar(20)         not null,
   ModelName            nvarchar(50)         not null,
   RelativePath         nvarchar(255)        not null,
   ModelMemo            nvarchar(500)        not null,
   HASHCode             nvarchar(32)         not null,
   VerCode              bigint               not null,
   FrontViewID          int                  not null,
   RightViewID          int                  not null,
   TopViewID            int                  not null,
   PhotoID              int                  not null,
   constraint PK_JK_MODELINFO primary key (ModelID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_NumberRuleInfo                                     */
/*==============================================================*/
create table JK_NumberRuleInfo (
   NumberRuleID         int                  not null,
   FittingID            int                  not null,
   MinLen               float                not null,
   MaxLen               float                not null,
   UseCount             int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_NUMBERRULEINFO primary key (NumberRuleID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_PackageInfo                                        */
/*==============================================================*/
create table JK_PackageInfo (
   FittingPackID        int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   IsSeparate           bit                  not null,
   GTypeID              int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   FittingPackCode      nvarchar(20)         not null,
   FittingPackName      nvarchar(50)         not null,
   FittingPackMemo      nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_PACKAGEINFO primary key (FittingPackID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_PackageMapInfo                                     */
/*==============================================================*/
create table JK_PackageMapInfo (
   PackageID            int                  not null,
   FittingID            int                  not null,
   FittingCount         int                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   constraint PK_JK_PACKAGEMAPINFO primary key (PackageID, FittingID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_ProductInfo                                        */
/*==============================================================*/
create table JK_ProductInfo (
   ProductID            int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   IsSplit              bit                  not null,
   SupplyType           int                  not null,
   GTypeID              int                  not null,
   ShowID               int                  not null,
   ModelID              int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   ZLen                 float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   ProductCode          nvarchar(20)         not null,
   ProductName          nvarchar(50)         not null,
   ProductMemo          nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_PRODUCTINFO primary key (ProductID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_ProductSeriesInfo                                  */
/*==============================================================*/
create table JK_ProductSeriesInfo (
   ProductSeriesID      int                  not null,
   FactoryID            int                  not null,
   GroupID              int                  not null,
   IsDel                bit                  not null,
   IsActive             bit                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   ProductSeriesCode    nvarchar(20)         not null,
   ProductSeriesName    nvarchar(50)         not null,
   ProductSeriesMemo    nvarchar(500)        not null,
   VerCode              bigint               not null,
   constraint PK_JK_PRODUCTSERIESINFO primary key (ProductSeriesID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_ProductSeriesValidInfo                             */
/*==============================================================*/
create table JK_ProductSeriesValidInfo (
   ProductSeriesID      int                  not null,
   ProductSeriesItemID  int                  not null,
   PSType               int                  not null,
   ParentID             int                  not null,
   IsDefault            bit                  not null,
   IsGroup              bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   DefaultItemID        int                  not null,
   constraint PK_JK_PRODUCTSERIESVALIDINFO primary key (ProductSeriesID, ProductSeriesItemID, PSType, IsGroup, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_ResourceInfo                                       */
/*==============================================================*/
create table JK_ResourceInfo (
   ResourceID           int                  not null,
   GroupID              int                  not null default 0,
   FactoryID            int                  not null,
   GTypeID              int                  not null,
   IsDel                bit                  not null,
   XLen                 float                not null default 0,
   YLen                 float                not null default 0,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   ResourceCode         nvarchar(20)         not null,
   ResourceName         nvarchar(50)         not null,
   RelativePath         nvarchar(255)        not null,
   ResourceMemo         nvarchar(500)        not null,
   HASHCode             nvarchar(32)         not null,
   VerCode              bigint               not null,
   constraint PK_JK_RESOURCEINFO primary key (ResourceID, FactoryID, VerCode)
)
go

/*==============================================================*/
/* Table: JK_SealRuleInfo                                       */
/*==============================================================*/
create table JK_SealRuleInfo (
   SealRuleID           int                  not null,
   IsDel                bit                  not null default 0,
   VisibleSealID        int                  not null,
   InvisibleSealID      int                  not null,
   VisPreMill           float                not null,
   InvisPreMill         float                not null,
   STypeID              int                  not null,
   SealRuleName         nvarchar(50)         not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_SEALRULEINFO primary key nonclustered (SealRuleID, VerCode, FactoryID)
)
go

/*==============================================================*/
/* Table: JK_SysConfigInfo                                      */
/*==============================================================*/
create table JK_SysConfigInfo (
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   ConfigID             int                  not null,
   TableFrontLen        float                not null,
   TableSideLen         float                not null,
   BaseCabDefaultYPos   float                not null,
   BaseCabSideLen       float                not null,
   WallCabDefaultYPos   float                not null,
   WallCabSideLen       float                not null,
   ToekickFrontLen      float                not null,
   DefaultBarHeight     float                not null,
   DefaultSealExtraLen  float                not null,
   DefaultSealPreMillLen float                not null,
   ShelfDefaultYPos     float                not null,
   BGPanelDefaultYPos   float                not null,
   TableToCabDefaultYLen float                not null,
   DefaultBaseCabinetXLen float                not null,
   DefaultBaseCabinetYLen float                not null,
   DefaultBaseCabinetZLen float                not null,
   DefaultWallCabinetXLen float                not null,
   DefaultWallCabinetYLen float                not null,
   DefaultWallCabinetZLen float                not null,
   DefaultLCabinetXLen  float                not null,
   DefaultLCabinetZLen  float                not null,
   DefaultCabinetBoardThick float                not null,
   DefaultDoorBoardThick float                not null,
   DefaultThinBoardThick float                not null,
   DefaultDecorLineHeight float                not null,
   DefaultDrawerXLen    float                not null,
   DefaultDrawerYLen    float                not null,
   DefaultDrawerZLen    float                not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_SYSCONFIGINFO primary key (FactoryID, VerCode, ConfigID)
)
go

/*==============================================================*/
/* Table: JK_SysRuleConfigInfo                                  */
/*==============================================================*/
create table JK_SysRuleConfigInfo (
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   IsDel                bit                  not null default 0,
   RuleConfigID         int                  not null,
   RuleTypeID           int                  not null,
   CabType              int                  not null,
   MinXLen              float                not null,
   MinYLen              float                not null,
   MaxXLen              float                not null,
   MaxYLen              float                not null,
   UseCount             int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_SYSRULECONFIGINFO primary key (FactoryID, VerCode, RuleConfigID)
)
go

/*==============================================================*/
/* Table: JK_SysRuleTypeInfo                                    */
/*==============================================================*/
create table JK_SysRuleTypeInfo (
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   RuleTypeID           int                  not null,
   IsDel                bit                  not null default 0,
   RuleTypeName         nvarchar(20)         not null,
   IsDefault            bit                  not null,
   RType                int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_SYSRULETYPEINFO primary key (FactoryID, VerCode, RuleTypeID)
)
go

/*==============================================================*/
/* Table: JK_TableTopSideInfo                                   */
/*==============================================================*/
create table JK_TableTopSideInfo (
   TableTopSideID       int                  not null,
   TableTopID           int                  not null,
   IsDel                bit                  not null default 0,
   ModelID              int                  not null,
   ShowID               int                  not null,
   SideWidth            float                not null,
   MaterialID           int                  not null,
   IsDefault            bit                  not null,
   VerCode              bigint               not null,
   FactoryID            int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_JK_TABLETOPSIDEINFO primary key (TableTopSideID, VerCode, FactoryID)
)
go

