/*==============================================================*/
/* DBMS name:      Microsoft SQL Server 2008                    */
/* Created on:     2014/7/4 14:03:56                            */
/*==============================================================*/


if exists (select 1
            from  sysobjects
           where  id = object_id('GL_AppVerInfo')
            and   type = 'U')
   drop table GL_AppVerInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_AppleseedInfo')
            and   type = 'U')
   drop table GL_AppleseedInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_AreaGeoMapInfo')
            and   type = 'U')
   drop table GL_AreaGeoMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_AreaInfo')
            and   type = 'U')
   drop table GL_AreaInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_ChargeLogInfo')
            and   type = 'U')
   drop table GL_ChargeLogInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_DeptInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index GL_DeptInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_DeptInfo')
            and   type = 'U')
   drop table GL_DeptInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_DesignerConfigInfo')
            and   type = 'U')
   drop table GL_DesignerConfigInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_GTypeInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index GL_GTypeInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_GTypeInfo')
            and   type = 'U')
   drop table GL_GTypeInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_GeoCodeInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index GL_GeoCodeInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_GeoCodeInfo')
            and   type = 'U')
   drop table GL_GeoCodeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_MajorCateInfo')
            and   type = 'U')
   drop table GL_MajorCateInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_MinorCateInfo')
            and   type = 'U')
   drop table GL_MinorCateInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_MinorGTypeMapInfo')
            and   type = 'U')
   drop table GL_MinorGTypeMapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_OrderInfo')
            and   type = 'U')
   drop table GL_OrderInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_PinYin')
            and   type = 'U')
   drop table GL_PinYin
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_PrepaidCardInfo')
            and   name  = 'Index_CardNo'
            and   indid > 0
            and   indid < 255)
   drop index GL_PrepaidCardInfo.Index_CardNo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_PrepaidCardInfo')
            and   type = 'U')
   drop table GL_PrepaidCardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_PrintTemplateInfo')
            and   type = 'U')
   drop table GL_PrintTemplateInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_RoleInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index GL_RoleInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_RoleInfo')
            and   type = 'U')
   drop table GL_RoleInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_RoleRightInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index GL_RoleRightInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_RoleRightInfo')
            and   type = 'U')
   drop table GL_RoleRightInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_SugarVerInfo')
            and   type = 'U')
   drop table GL_SugarVerInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_TransferOrderInfo')
            and   type = 'U')
   drop table GL_TransferOrderInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_UnitInfo')
            and   type = 'U')
   drop table GL_UnitInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_UserActivationInfo')
            and   name  = 'Index_ActivationCode'
            and   indid > 0
            and   indid < 255)
   drop index GL_UserActivationInfo.Index_ActivationCode
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_UserActivationInfo')
            and   type = 'U')
   drop table GL_UserActivationInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_UserInfo')
            and   name  = 'Index_IsLocked'
            and   indid > 0
            and   indid < 255)
   drop index GL_UserInfo.Index_IsLocked
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_UserInfo')
            and   name  = 'Index_IsActived'
            and   indid > 0
            and   indid < 255)
   drop index GL_UserInfo.Index_IsActived
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('GL_UserInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index GL_UserInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('GL_UserInfo')
            and   type = 'U')
   drop table GL_UserInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JD_BoardGapInfo')
            and   type = 'U')
   drop table JD_BoardGapInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JD_BoardInfo')
            and   type = 'U')
   drop table JD_BoardInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JD_BoardSealInfo')
            and   type = 'U')
   drop table JD_BoardSealInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JD_Objects')
            and   type = 'U')
   drop table JD_Objects
go

if exists (select 1
            from  sysobjects
           where  id = object_id('JD_OrderInfo')
            and   type = 'U')
   drop table JD_OrderInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_BOMChargeInfo')
            and   type = 'U')
   drop table SV_BOMChargeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_ChargeShopInfo')
            and   type = 'U')
   drop table SV_ChargeShopInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_LibFileInfo')
            and   type = 'U')
   drop table SV_LibFileInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_ModuleChargeInfo')
            and   type = 'U')
   drop table SV_ModuleChargeInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_OrderActionRecordInfo')
            and   type = 'U')
   drop table SV_OrderActionRecordInfo
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_OrderFileInfo')
            and   type = 'U')
   drop table SV_OrderFileInfo
go

if exists (select 1
            from  sysindexes
           where  id    = object_id('SV_UserLoginStatusInfo')
            and   name  = 'Index_1'
            and   indid > 0
            and   indid < 255)
   drop index SV_UserLoginStatusInfo.Index_1
go

if exists (select 1
            from  sysobjects
           where  id = object_id('SV_UserLoginStatusInfo')
            and   type = 'U')
   drop table SV_UserLoginStatusInfo
go

/*==============================================================*/
/* Table: GL_AppVerInfo                                         */
/*==============================================================*/
create table GL_AppVerInfo (
   AppVerID             int                  identity(1,1),
   ClientType           int                  not null default 0,
   IsActive             bit                  not null default 1,
   FileSize             bigint               not null default 0,
   AppVerCode           nvarchar(50)         not null default '',
   HashCode             nvarchar(50)         not null,
   FilePath             nvarchar(255)        not null,
   constraint PK_GL_APPVERINFO primary key (AppVerID)
)
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
/* Table: GL_AreaGeoMapInfo                                     */
/*==============================================================*/
create table GL_AreaGeoMapInfo (
   AreaID               int                  not null,
   GeoCode              nchar(6)             not null,
   constraint PK_GL_AREAGEOMAPINFO primary key (AreaID, GeoCode)
)
go

/*==============================================================*/
/* Table: GL_AreaInfo                                           */
/*==============================================================*/
create table GL_AreaInfo (
   AreaID               int                  identity(1,1),
   DeptID               int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null default 0,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   AreaName             nvarchar(20)         not null,
   constraint PK_GL_AREAINFO primary key (AreaID)
)
go

/*==============================================================*/
/* Table: GL_ChargeLogInfo                                      */
/*==============================================================*/
create table GL_ChargeLogInfo (
   LogID                int                  identity(1,1),
   CardNo               nvarchar(25)         not null,
   FactoryID            int                  not null default 0,
   ShopID               int                  null default 0,
   UserID               int                  not null default 0,
   ChargeTime           timestamp            not null,
   constraint PK_GL_CHARGELOGINFO primary key (LogID)
)
go

/*==============================================================*/
/* Table: GL_DeptInfo                                           */
/*==============================================================*/
create table GL_DeptInfo (
   DeptID               int                  identity(1,1),
   ParentID             int                  not null default 0,
   IsDel                bit                  not null default 0,
   DTypeID              int                  not null,
   IncOrder             int                  not null default 1,
   ShowOrder            int                  not null default 1,
   CreatorID            int                  not null default 0,
   UpdaterID            int                  not null default 0,
   CreateTime           datetime             not null default getdate(),
   UpdateTime           datetime             not null default getdate(),
   GeoCode              nchar(6)             not null default '',
   DeptCode             nvarchar(20)         not null default '',
   DeptName             nvarchar(50)         not null,
   Postcode             nvarchar(10)         not null default '',
   Tel                  nvarchar(32)         not null default '',
   Contacter            nvarchar(20)         not null default '',
   ContactAddress       nvarchar(200)        not null default '',
   DeptMemo             nvarchar(500)        not null default '',
   constraint PK_GL_DEPTINFO primary key (DeptID)
)
go

SET IDENTITY_INSERT [dbo].[GL_DeptInfo] ON
INSERT INTO [dbo].[GL_DeptInfo]([DeptID],[ParentID],[IsDel],[DTypeID],[DeptName]) VALUES(1,0,0,1,'��Ϊ')
SET IDENTITY_INSERT [dbo].[GL_DeptInfo] OFF
GO

SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

IF EXISTS (
    SELECT * FROM sysobjects WHERE id = object_id(N'DepartmentTree') 
    AND xtype IN (N'FN', N'IF', N'TF')
)
    DROP FUNCTION DepartmentTree
GO

CREATE   FUNCTION   [dbo].[DepartmentTree](@DeptID int)
	RETURNS	@table TABLE(
	DeptID int,
	Level int
)AS   
BEGIN
  DECLARE @Level int
  SET @Level=1
  INSERT @table SELECT @DeptID,@Level
  WHILE @@ROWCOUNT>0
  BEGIN
	  SET @Level=@Level+1
	  INSERT @table SELECT a.DeptID,@Level
	  FROM GL_DeptInfo a,@table b
	  WHERE a.ParentID=b.DeptID AND b.Level=@Level-1
  END
  RETURN
END

GO

/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on GL_DeptInfo (
ParentID ASC,
IsDel ASC,
DTypeID ASC,
IncOrder ASC,
ShowOrder ASC,
CreateTime ASC,
UpdateTime ASC
)
go

/*==============================================================*/
/* Table: GL_DesignerConfigInfo                                 */
/*==============================================================*/
create table GL_DesignerConfigInfo (
   EnableSnap           bit                  not null,
   AllPole              bit                  not null,
   CrossPole            bit                  not null,
   WallPole             bit                  not null,
   HotspotCapture       bit                  not null,
   GridShow             bit                  not null,
   AngleStep            int                  not null,
   TargetRange          int                  not null,
   DesignBGID           int                  not null,
   PrintBGID            int                  not null,
   GridBigID            int                  not null,
   GridSmallID          int                  not null,
   HotspotRotateID      int                  not null,
   HotspotNormalID      int                  not null,
   HotspotSelectID      int                  not null,
   CreatePointID        int                  not null,
   DesignBGColor        bigint               not null,
   PrintBGColor         bigint               not null,
   GridBigColor         bigint               not null,
   GridSmallColor       bigint               not null,
   HotspotRotateColor   bigint               not null,
   HotspotNormalColor   bigint               not null,
   HotspotSelectColor   bigint               not null,
   CreatePointColor     bigint               not null,
   UserID               int                  not null,
   WallThickness        float                not null,
   WallHeight           float                not null,
   BaseLineLen          float                not null,
   GridWidth            float                not null,
   SnapRange            float                not null,
   SkirtLineOffsetLen   float                not null,
   BottomLineOffsetLen  float                not null,
   TopLineOffsetLen     float                not null,
   constraint PK_GL_DESIGNERCONFIGINFO primary key (UserID)
)
go

/*==============================================================*/
/* Table: GL_GTypeInfo                                          */
/*==============================================================*/
create table GL_GTypeInfo (
   GTypeID              int                  not null,
   GTypeName            nvarchar(20)         not null,
   constraint PK_GL_GTYPEINFO primary key (GTypeID)
)
go

/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on GL_GTypeInfo (
GTypeID ASC
)
go

/*==============================================================*/
/* Table: GL_GeoCodeInfo                                        */
/*==============================================================*/
create table GL_GeoCodeInfo (
   GeoCode              nchar(6)             not null,
   GeoName              nvarchar(20)         not null,
   constraint PK_GL_GEOCODEINFO primary key (GeoCode)
)
go

INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110100', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110101', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110106', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110107', N'ʯ��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110108', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110109', N'��ͷ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110111', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110112', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110113', N'˳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110114', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110115', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110116', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110117', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110200', N'��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110228', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110229', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120000', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120100', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120101', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120102', N'�Ӷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120104', N'�Ͽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120105', N'�ӱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120106', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120110', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120114', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120115', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120116', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120200', N'��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120225', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130000', N'�ӱ�ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130100', N'ʯ��ׯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130103', N'�Ŷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130105', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130107', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130108', N'ԣ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130124', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130127', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130128', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130129', N'�޻���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130130', N'�޼���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130131', N'ƽɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130132', N'Ԫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130133', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130182', N'޻����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130183', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130184', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130185', N'¹Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130200', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130202', N'·����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130203', N'·����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130204', N'��ұ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130205', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130207', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130208', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130209', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130223', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130225', N'��ͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130227', N'Ǩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130229', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130281', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130283', N'Ǩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130300', N'�ػʵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130303', N'ɽ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130304', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130321', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130324', N'¬����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130402', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130403', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130404', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130406', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130424', N'�ɰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130426', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130427', N'����')
GO
print 'Processed 100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130428', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130429', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130430', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130431', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130432', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130433', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130434', N'κ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130435', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130481', N'�䰲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130500', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130502', N'�Ŷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130503', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130521', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130522', N'�ٳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130525', N'¡Ң��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130526', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130527', N'�Ϻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130528', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130529', N'��¹��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130530', N'�º���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130531', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130532', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130533', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130534', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130535', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130581', N'�Ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130582', N'ɳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130602', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130603', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130604', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130622', N'��Է��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130623', N'�ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130624', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130625', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130626', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130627', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130628', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130629', N'�ݳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130630', N'�Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130631', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130632', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130633', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130634', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130635', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130636', N'˳ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130637', N'��Ұ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130638', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130682', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130683', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130684', N'�߱�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130700', N'�żҿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130702', N'�Ŷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130703', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130705', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130706', N'�»�԰��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130722', N'�ű���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130724', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130725', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130726', N'ε��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130727', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130728', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130729', N'��ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130730', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130731', N'��¹��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130732', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130733', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130800', N'�е���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130802', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130803', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130804', N'ӥ��Ӫ�ӿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130821', N'�е���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130822', N'��¡��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130823', N'ƽȪ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130824', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130825', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130826', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130827', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130828', N'Χ�������ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130902', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130903', N'�˺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130921', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130922', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130924', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130925', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130926', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130927', N'��Ƥ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130928', N'������')
GO
print 'Processed 200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130929', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130930', N'�ϴ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130981', N'��ͷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130982', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130983', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130984', N'�Ӽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131000', N'�ȷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131022', N'�̰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131024', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131025', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131026', N'�İ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131028', N'�󳧻���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131082', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131100', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131102', N'�ҳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131121', N'��ǿ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131123', N'��ǿ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131125', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131126', N'�ʳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131127', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131128', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140000', N'ɽ��ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140100', N'̫ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140105', N'С����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140106', N'ӭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140107', N'�ӻ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140108', N'���ƺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140109', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140110', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140123', N'¦����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140181', N'�Ž���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140200', N'��ͬ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140202', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140203', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140211', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140212', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140225', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140226', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140227', N'��ͬ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140300', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140302', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140303', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140311', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140321', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140322', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140402', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140411', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140423', N'��ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140425', N'ƽ˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140426', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140427', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140428', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140429', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140430', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140431', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140481', N'º����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140501', N'��������Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140502', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140521', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140524', N'�괨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140525', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140581', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140600', N'˷����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140602', N'˷����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140603', N'ƽ³��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140621', N'ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140622', N'Ӧ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140623', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140702', N'�ܴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140722', N'��Ȩ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140723', N'��˳��')
GO
print 'Processed 300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140725', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140726', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140727', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140728', N'ƽң��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140729', N'��ʯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140800', N'�˳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140802', N'�κ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140821', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140823', N'��ϲ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140824', N'�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140825', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140826', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140827', N'ԫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140828', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140829', N'ƽ½��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140830', N'�ǳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140881', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140882', N'�ӽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140902', N'�ø���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140922', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140923', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140924', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140925', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140926', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140927', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140928', N'��կ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140929', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140930', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140931', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140932', N'ƫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140981', N'ԭƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141000', N'�ٷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141002', N'Ң����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141022', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141023', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141024', N'�鶴��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141025', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141026', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141027', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141028', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141029', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141030', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141031', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141032', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141033', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141034', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141082', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141102', N'��ʯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141121', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141123', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141124', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141126', N'ʯ¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141127', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141128', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141129', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141130', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141181', N'Т����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150000', N'���ɹ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150100', N'���ͺ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150102', N'�³���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150104', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150121', N'��Ĭ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150122', N'�п�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150123', N'���ָ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150124', N'��ˮ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150125', N'�䴨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150200', N'��ͷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150203', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150204', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150205', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150206', N'���ƶ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150207', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150221', N'��Ĭ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150223', N'�����ï����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150300', N'�ں���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150302', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150304', N'�ڴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150400', N'�����')
GO
print 'Processed 400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150402', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150403', N'Ԫ��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150404', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150421', N'��³�ƶ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150422', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150423', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150425', N'��ʲ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150426', N'��ţ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150428', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150429', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150430', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150500', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150502', N'�ƶ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150521', N'�ƶ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150522', N'�ƶ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150523', N'��³��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150525', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150526', N'��³����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150581', N'���ֹ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150600', N'������˹��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150602', N'��ʤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150621', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150622', N'׼�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150623', N'���п�ǰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150624', N'���п���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150625', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150626', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150627', N'���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150700', N'���ױ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150702', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150722', N'Ī�����ߴ��Ӷ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150723', N'���״�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150724', N'���¿���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150725', N'�°Ͷ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150726', N'�°Ͷ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150727', N'�°Ͷ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150781', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150782', N'����ʯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150783', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150784', N'���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150785', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150800', N'�����׶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150802', N'�ٺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150821', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150822', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150823', N'������ǰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150824', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150825', N'�����غ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150826', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150900', N'�����첼��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150921', N'׿����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150923', N'�̶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150924', N'�˺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150925', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150926', N'���������ǰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150927', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150928', N'������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150929', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150981', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152200', N'�˰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152201', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152202', N'����ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152221', N'�ƶ�������ǰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152222', N'�ƶ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152223', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152224', N'ͻȪ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152500', N'���ֹ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152501', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152502', N'���ֺ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152522', N'���͸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152523', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152524', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152525', N'������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152526', N'������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152527', N'̫������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152528', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152529', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152530', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152531', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152900', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152921', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152922', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152923', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210102', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210103', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210104', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210105', N'�ʹ���')
GO
print 'Processed 500 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210106', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210111', N'�ռ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210114', N'�ں���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210123', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210202', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210203', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210204', N'ɳ�ӿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210211', N'�ʾ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210212', N'��˳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210213', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210281', N'�߷�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210282', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210283', N'ׯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210300', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210304', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210311', N'ǧɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210321', N'̨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210323', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210400', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210402', N'�¸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210404', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210411', N'˳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210421', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210422', N'�±�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210423', N'��ԭ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210500', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210502', N'ƽɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210503', N'Ϫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210504', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210505', N'�Ϸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210521', N'��Ϫ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210522', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210602', N'Ԫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210603', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210604', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210624', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210682', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210703', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210711', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210726', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210727', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210781', N'�躣��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210782', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210800', N'Ӫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210802', N'վǰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210803', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210804', N'����Ȧ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210811', N'�ϱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210881', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210882', N'��ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210903', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210904', N'̫ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210905', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210911', N'ϸ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210921', N'�����ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211003', N'��ʥ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211004', N'��ΰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211005', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211011', N'̫�Ӻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211100', N'�̽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211102', N'˫̨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211103', N'��¡̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211122', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211204', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211221', N'������')
GO
print 'Processed 600 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211224', N'��ͼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211281', N'����ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211282', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211302', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211322', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211324', N'�����������ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211381', N'��Ʊ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211382', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211400', N'��«����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211402', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211404', N'��Ʊ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211481', N'�˳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220102', N'�Ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220103', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220106', N'��԰��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220112', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220122', N'ũ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220181', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220183', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220203', N'��̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220204', N'��Ӫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220211', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220281', N'�Ժ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220282', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220283', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220284', N'��ʯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220300', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220323', N'��ͨ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220381', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220382', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220400', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220402', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220500', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220503', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220521', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220581', N'÷�ӿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220582', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220600', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220602', N'�뽭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220605', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220623', N'���׳�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220681', N'�ٽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220700', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220721', N'ǰ������˹�ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220723', N'Ǭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220800', N'�׳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220802', N'䬱���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220822', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220881', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220882', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222400', N'�ӱ߳�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222401', N'�Ӽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222402', N'ͼ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222403', N'�ػ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222404', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222405', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222406', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222426', N'��ͼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230000', N'������ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230100', N'��������')
GO
print 'Processed 700 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230103', N'�ϸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230108', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230109', N'�ɱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230110', N'�㷻��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230125', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230127', N'ľ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230128', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230129', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230182', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230183', N'��־��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230184', N'�峣��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230200', N'���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230202', N'��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230203', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230204', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230205', N'����Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230206', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230207', N'����ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230208', N'÷��˹���Ӷ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230224', N'̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230225', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230227', N'��ԣ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230229', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230230', N'�˶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230231', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230281', N'ګ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230303', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230304', N'�ε���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230305', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230306', N'���Ӻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230307', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230382', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230400', N'�׸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230403', N'��ũ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230404', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230405', N'�˰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230406', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230407', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230421', N'�ܱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230422', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230500', N'˫Ѽɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230502', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230503', N'�붫��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230505', N'�ķ�̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230506', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230524', N'�ĺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230602', N'����ͼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230603', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230604', N'�ú�·��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230605', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230606', N'��ͬ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230622', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230623', N'�ֵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230624', N'�Ŷ������ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230703', N'�ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230704', N'�Ѻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230705', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230706', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230707', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230708', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230709', N'��ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230710', N'��Ӫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230711', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230712', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230713', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230714', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230715', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230716', N'�ϸ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230800', N'��ľ˹��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230803', N'������')
GO
print 'Processed 800 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230804', N'ǰ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230805', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230811', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230826', N'�봨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230828', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230833', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230881', N'ͬ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230882', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230900', N'��̨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230903', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230904', N'���Ӻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231000', N'ĵ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231004', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231005', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231024', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231025', N'�ֿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231081', N'��Һ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231083', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231084', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231085', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231100', N'�ں���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231121', N'�۽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231123', N'ѷ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231182', N'���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231200', N'�绯��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231223', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231224', N'�찲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231225', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231226', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231282', N'�ض���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231283', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232700', N'���˰������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232723', N'Į����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310000', N'�Ϻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310100', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310101', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310104', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310106', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310107', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310108', N'բ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310109', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310110', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310113', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310114', N'�ζ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310115', N'�ֶ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310116', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310117', N'�ɽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310118', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310120', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310200', N'��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310230', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320100', N'�Ͼ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320104', N'�ػ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320106', N'��¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320107', N'�¹���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320111', N'�ֿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320113', N'��ϼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320114', N'�껨̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320115', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320116', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320124', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320125', N'�ߴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320202', N'�簲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320203', N'�ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320204', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320205', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320206', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320211', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320282', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320302', N'��¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320303', N'������')
GO
print 'Processed 900 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320305', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320311', N'Ȫɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320312', N'ͭɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320321', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320322', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320324', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320382', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320404', N'��¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320405', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320411', N'�±���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320412', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320482', N'��̳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320505', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320506', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320507', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320508', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320509', N'�⽭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320581', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320582', N'�żҸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320583', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320585', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320600', N'��ͨ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320602', N'�紨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320611', N'��բ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320612', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320623', N'�綫��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320682', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320684', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320700', N'���Ƹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320703', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320705', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320706', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320802', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320803', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320804', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320811', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320826', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320829', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320830', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320831', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320900', N'�γ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320902', N'ͤ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320903', N'�ζ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320921', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320924', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320925', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320981', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320982', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321012', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321023', N'��Ӧ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321084', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321100', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321112', N'��ͽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321183', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321200', N'̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321203', N'�߸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321281', N'�˻���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321282', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321283', N'̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321284', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321300', N'��Ǩ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321302', N'�޳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321311', N'��ԥ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330000', N'�㽭ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330100', N'������')
GO
print 'Processed 1000 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330102', N'�ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330103', N'�³���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330106', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330108', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330109', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330110', N'�ຼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330122', N'ͩ®��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330127', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330183', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330185', N'�ٰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330203', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330204', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330205', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330206', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330211', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330212', N'۴����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330225', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330226', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330281', N'��Ҧ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330282', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330283', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330302', N'¹����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330304', N'걺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330322', N'��ͷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330326', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330327', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330328', N'�ĳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330329', N'̩˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330381', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330382', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330402', N'�Ϻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330411', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330482', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330483', N'ͩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330503', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330602', N'Խ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330624', N'�²���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330682', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330683', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330700', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330702', N'�ĳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330703', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330726', N'�ֽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330727', N'�Ͱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330781', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330782', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330783', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330784', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330802', N'�³���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330803', N'�齭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330822', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330824', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330825', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330881', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330900', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330903', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330921', N'�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331000', N'̨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331004', N'·����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331021', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331022', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331023', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331024', N'�ɾ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331082', N'�ٺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331100', N'��ˮ��')
GO
print 'Processed 1100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331123', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331125', N'�ƺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331126', N'��Ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331127', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331181', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340100', N'�Ϸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340103', N'®����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340104', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340122', N'�ʶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340124', N'®����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340200', N'�ߺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340203', N'߮����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340207', N'𯽭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340208', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340221', N'�ߺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340225', N'��Ϊ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340302', N'���Ӻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340303', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340304', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340311', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340321', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340322', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340402', N'��ͨ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340403', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340404', N'л�Ҽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340405', N'�˹�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340406', N'�˼���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340421', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340500', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340503', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340504', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340506', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340521', N'��Ϳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340522', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340523', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340602', N'�ż���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340603', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340604', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340621', N'�Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340700', N'ͭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340702', N'ͭ��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340703', N'ʨ��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340711', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340721', N'ͭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340802', N'ӭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340803', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340811', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340823', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340824', N'Ǳɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340825', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340826', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340827', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340828', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340881', N'ͩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341000', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341002', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341003', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341004', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341021', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341022', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341023', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341024', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341124', N'ȫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341125', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341181', N'�쳤��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341182', N'������')
GO
print 'Processed 1200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341202', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341203', N'򣶫��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341204', N'�Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341221', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341222', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341225', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341226', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341282', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341321', N'�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341322', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341323', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341324', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341502', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341503', N'ԣ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341521', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341523', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341524', N'��կ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341525', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341602', N'�۳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341622', N'�ɳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341623', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341702', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341722', N'ʯ̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341821', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341822', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341823', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341824', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341825', N'캵���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341881', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350102', N'��¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350103', N'̨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350104', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350105', N'��β��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350123', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350125', N'��̩��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350128', N'ƽ̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350203', N'˼����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350205', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350206', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350211', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350212', N'ͬ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350213', N'�谲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350304', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350305', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350402', N'÷����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350403', N'��Ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350421', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350426', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350427', N'ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350428', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350429', N'̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350430', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350500', N'Ȫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350502', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350503', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350504', N'�彭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350505', N'Ȫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350521', N'�ݰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350524', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350525', N'������')
GO
print 'Processed 1300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350526', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350581', N'ʯʨ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350582', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350583', N'�ϰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350602', N'ܼ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350603', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350623', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350624', N'گ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350625', N'��̩��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350626', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350627', N'�Ͼ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350628', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350629', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350700', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350702', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350721', N'˳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350722', N'�ֳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350724', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350725', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350782', N'����ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350783', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350784', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350821', N'��͡��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350823', N'�Ϻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350824', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350825', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350881', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350921', N'ϼ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350924', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350925', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350926', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350981', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350982', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360100', N'�ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360104', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360111', N'��ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360121', N'�ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360122', N'�½���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360200', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360203', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360281', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360300', N'Ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360302', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360313', N'�涫��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360323', N'«Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360400', N'�Ž���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360402', N'®ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360403', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360421', N'�Ž���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360424', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360426', N'�°���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360427', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360428', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360429', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360430', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360481', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360482', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360502', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360600', N'ӥ̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360602', N'�º���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360622', N'�཭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360681', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360701', N'��Ͻ��')
GO
print 'Processed 1400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360702', N'�¹���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360721', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360722', N'�ŷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360725', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360726', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360727', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360728', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360729', N'ȫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360730', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360731', N'�ڶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360732', N'�˹���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360733', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360734', N'Ѱ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360735', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360781', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360782', N'�Ͽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360803', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360822', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360823', N'Ͽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360824', N'�¸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360825', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360826', N'̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360827', N'�촨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360828', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360829', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360830', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360881', N'����ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360900', N'�˴���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360902', N'Ԭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360923', N'�ϸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360924', N'�˷���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360925', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360926', N'ͭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360981', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360982', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360983', N'�߰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361002', N'�ٴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361021', N'�ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361022', N'�质��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361023', N'�Ϸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361024', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361025', N'�ְ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361026', N'�˻���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361027', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361028', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361029', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361030', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361122', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361123', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361124', N'Ǧɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361125', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361126', N'߮����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361127', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361128', N'۶����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361129', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361130', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370000', N'ɽ��ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370124', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370126', N'�̺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370200', N'�ൺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370203', N'�б���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370205', N'�ķ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370211', N'�Ƶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370212', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370213', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370214', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370282', N'��ī��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370283', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370284', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370285', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370300', N'�Ͳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370301', N'��Ͻ��')
GO
print 'Processed 1500 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370302', N'�ʹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370303', N'�ŵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370304', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370305', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370306', N'�ܴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370321', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370323', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370400', N'��ׯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370403', N'Ѧ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370404', N'ỳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370405', N'̨��ׯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370406', N'ɽͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370500', N'��Ӫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370502', N'��Ӫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370503', N'�ӿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370600', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370602', N'֥���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370611', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370612', N'Ĳƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370613', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370634', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370682', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370683', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370684', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370685', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370686', N'��ϼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370687', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370700', N'Ϋ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370702', N'Ϋ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370703', N'��ͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370704', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370705', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370725', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370782', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370783', N'�ٹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370784', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370785', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370786', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370811', N'�γ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370826', N'΢ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370827', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370828', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370829', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370830', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370831', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370832', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370881', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370882', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370883', N'�޳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370900', N'̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370902', N'̩ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370911', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370923', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370982', N'��̩��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370983', N'�ʳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371081', N'�ĵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371082', N'�ٳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371083', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371103', N'�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371122', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371203', N'�ֳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371302', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371311', N'��ׯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371312', N'�Ӷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371322', N'۰����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371323', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371324', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371325', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371326', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371327', N'������')
GO
print 'Processed 1600 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371328', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371329', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371402', N'�³���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371421', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371425', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371426', N'ƽԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371427', N'�Ľ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371428', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371482', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371500', N'�ĳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371502', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371522', N'ݷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371523', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371525', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371526', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371581', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371602', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371623', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371624', N'մ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371625', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371626', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371702', N'ĵ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371721', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371722', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371724', N'��Ұ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371725', N'۩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371726', N'۲����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371727', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371728', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410100', N'֣����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410102', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410104', N'�ܳǻ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410105', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410106', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410108', N'�ݼ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410122', N'��Ĳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410183', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410184', N'��֣��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410185', N'�Ƿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410202', N'��ͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410203', N'˳�ӻ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410204', N'��¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410205', N'����̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410211', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410221', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410222', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410223', N'ξ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410225', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410302', N'�ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410304', N'�e�ӻ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410305', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410306', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410311', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410322', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410323', N'�°���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410324', N'�ﴨ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410325', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410327', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410328', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410329', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410381', N'��ʦ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410400', N'ƽ��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410402', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410404', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410411', N'տ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410422', N'Ҷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410423', N'³ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410425', N'ۣ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410481', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410482', N'������')
GO
print 'Processed 1700 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410502', N'�ķ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410503', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410505', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410506', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410526', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410527', N'�ڻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410581', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410600', N'�ױ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410602', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410603', N'ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410611', N'俱���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410621', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410622', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410703', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410704', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410711', N'��Ұ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410724', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410725', N'ԭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410726', N'�ӽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410727', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410728', N'��ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410782', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410802', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410803', N'��վ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410804', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410811', N'ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410823', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410825', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410882', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410883', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410900', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410922', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410926', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410927', N'̨ǰ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410928', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411000', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411002', N'κ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411023', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411024', N'۳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411025', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411082', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411100', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411102', N'Դ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411103', N'۱����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411122', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411200', N'����Ͽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411221', N'�ų���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411222', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411224', N'¬����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411282', N'�鱦��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411302', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411323', N'��Ͽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411324', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411325', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411327', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411328', N'�ƺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411329', N'��Ұ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411330', N'ͩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411402', N'��԰��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411403', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411421', N'��Ȩ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411422', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411424', N'�ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411425', N'�ݳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411426', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411481', N'������')
GO
print 'Processed 1800 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411503', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411521', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411522', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411523', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411524', N'�̳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411525', N'��ʼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411526', N'�괨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411528', N'Ϣ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411600', N'�ܿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411602', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411623', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411625', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411626', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411627', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411628', N'¹����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411681', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411700', N'פ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411702', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411721', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411722', N'�ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411723', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411725', N'ȷɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411726', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411727', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411728', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411729', N'�²���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'419000', N'ʡֱϽ�ؼ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'419001', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420100', N'�人��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420104', N'�~����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420106', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420107', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420111', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420112', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420114', N'�̵���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420115', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420116', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420117', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420200', N'��ʯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420202', N'��ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420203', N'����ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420204', N'��½��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420205', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420281', N'��ұ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420300', N'ʮ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420302', N'é����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420321', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420323', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420324', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420325', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420381', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420500', N'�˲���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420503', N'��Ҹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420504', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420505', N'�Vͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420506', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420525', N'Զ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420526', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420528', N'����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420529', N'���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420581', N'�˶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420582', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420583', N'֦����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420602', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420606', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420607', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420625', N'�ȳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420626', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420682', N'�Ϻӿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420683', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420684', N'�˳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420702', N'���Ӻ���')
GO
print 'Processed 1900 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420703', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420704', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420804', N'�޵���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420821', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420822', N'ɳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420881', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420900', N'Т����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420902', N'Т����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420921', N'Т����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420981', N'Ӧ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420982', N'��½��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420984', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421002', N'ɳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421022', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421024', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421081', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421083', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421087', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421100', N'�Ƹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421121', N'�ŷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421122', N'�찲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421124', N'Ӣɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421125', N'�ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421126', N'ޭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421127', N'��÷��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421181', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421182', N'��Ѩ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421202', N'�̰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421222', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421224', N'ͨɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421281', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421321', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421381', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422800', N'��ʩ����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422801', N'��ʩ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422822', N'��ʼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422823', N'�Ͷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422825', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422826', N'�̷���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422827', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422828', N'�׷���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429000', N'ʡֱϽ�ؼ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429004', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429005', N'Ǳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429006', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429021', N'��ũ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430100', N'��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430102', N'ܽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430104', N'��´��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430111', N'�껨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430121', N'��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430181', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430203', N'«����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430204', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430211', N'��Ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430223', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430225', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430300', N'��̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430302', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430304', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430321', N'��̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430382', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430405', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430406', N'�����')
GO
print 'Processed 2000 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430407', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430408', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430412', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430423', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430424', N'�ⶫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430426', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430482', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430502', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430503', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430511', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430521', N'�۶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430524', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430525', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430528', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430529', N'�ǲ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430581', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430602', N'����¥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430603', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430611', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430623', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430626', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430682', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430703', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430723', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430724', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430725', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430726', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430800', N'�żҽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430811', N'����Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430822', N'ɣֲ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430903', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430921', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430922', N'�ҽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430981', N'�佭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431022', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431024', N'�κ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431025', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431026', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431027', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431028', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431103', N'��ˮ̲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431123', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431124', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431126', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431127', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431128', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431129', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431202', N'�׳���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431221', N'�з���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431223', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431225', N'��ͬ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431226', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431227', N'�»ζ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431228', N'�ƽ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431229', N'�������嶱��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431230', N'ͨ������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431281', N'�齭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431300', N'¦����')
GO
print 'Processed 2100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431302', N'¦����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431321', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431322', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431381', N'��ˮ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431382', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433100', N'��������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433101', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433122', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433123', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433124', N'��ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433127', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433130', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440000', N'�㶫ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440104', N'Խ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440106', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440112', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440113', N'��خ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440114', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440115', N'��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440116', N'�ܸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440183', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440184', N'�ӻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440200', N'�ع���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440203', N'�佭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440204', N'䥽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440205', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440222', N'ʼ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440224', N'�ʻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440229', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440232', N'��Դ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440233', N'�·���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440281', N'�ֲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440282', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440303', N'�޺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440304', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440305', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440306', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440307', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440308', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440400', N'�麣��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440404', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440500', N'��ͷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440507', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440511', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440512', N'婽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440513', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440514', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440515', N'�κ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440523', N'�ϰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440600', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440604', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440605', N'�Ϻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440606', N'˳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440607', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440608', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440703', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440704', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440705', N'�»���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440781', N'̨ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440783', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440784', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440785', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440800', N'տ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440802', N'�࿲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440803', N'ϼɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440804', N'��ͷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440811', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440823', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440825', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440881', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440882', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440883', N'�⴨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440900', N'ï����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440902', N'ï����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440903', N'ï����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440923', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440981', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440982', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440983', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441201', N'��Ͻ��')
GO
print 'Processed 2200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441203', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441225', N'�⿪��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441226', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441283', N'��Ҫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441284', N'�Ļ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441302', N'�ݳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441323', N'�ݶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441400', N'÷����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441402', N'÷����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441421', N'÷��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441423', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441424', N'�廪��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441426', N'ƽԶ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441427', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441481', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441500', N'��β��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441502', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441523', N'½����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441581', N'½����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441600', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441602', N'Դ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441621', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441623', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441624', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441625', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441800', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441802', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441821', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441823', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441825', N'��ɽ׳������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441826', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441827', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441881', N'Ӣ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441882', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441900', N'��ݸ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'442000', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445122', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445202', N'�ų���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445221', N'�Ҷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445300', N'�Ƹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445302', N'�Ƴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445323', N'�ư���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445381', N'�޶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450000', N'����׳��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450107', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450108', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450109', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450123', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450124', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450127', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450203', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450204', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450205', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450223', N'¹կ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450224', N'�ڰ���')
GO
print 'Processed 2300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450225', N'��ˮ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450226', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450302', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450304', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450305', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450311', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450321', N'��˷��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450322', N'�ٹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450323', N'�鴨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450324', N'ȫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450325', N'�˰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450327', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450328', N'��ʤ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450329', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450330', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450331', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450332', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450404', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450405', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450422', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450423', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450481', N'�Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450503', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450512', N'��ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450600', N'���Ǹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450602', N'�ۿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450603', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450621', N'��˼��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450703', N'�ձ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450721', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450722', N'�ֱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450800', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450802', N'�۱���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450803', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450804', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450821', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450881', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450921', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450922', N'½����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450924', N'��ҵ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450981', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451000', N'��ɫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451002', N'�ҽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451022', N'�ﶫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451023', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451024', N'�±���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451025', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451026', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451027', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451028', N'��ҵ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451029', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451030', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451031', N'¡�ָ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451102', N'�˲���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451121', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451122', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451123', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451200', N'�ӳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451202', N'��ǽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451221', N'�ϵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451222', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451223', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451225', N'�޳�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451226', N'����ë����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451227', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451228', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451229', N'������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451281', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451302', N'�˱���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451321', N'�ó���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451322', N'������')
GO
print 'Processed 2400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451324', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451381', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451425', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451481', N'ƾ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460105', N'��Ӣ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460106', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460107', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460108', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460200', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460300', N'��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460321', N'��ɳȺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460322', N'��ɳȺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460323', N'��ɳȺ���ĵ������亣��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469000', N'ʡֱϽ�ؼ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469001', N'��ָɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469002', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469005', N'�Ĳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469006', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469007', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469022', N'�Ͳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469024', N'�ٸ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469025', N'��ɳ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469026', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469027', N'�ֶ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469028', N'��ˮ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469029', N'��ͤ��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469030', N'������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500100', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500101', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500104', N'��ɿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500106', N'ɳƺ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500107', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500108', N'�ϰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500109', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500110', N'�뽭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500111', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500112', N'�山��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500114', N'ǭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500115', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500116', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500117', N'�ϴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500118', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500119', N'�ϴ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500200', N'��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500224', N'ͭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500226', N'�ٲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500227', N'�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500228', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500229', N'�ǿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500230', N'�ᶼ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500231', N'�潭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500232', N'��¡��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500233', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500234', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500235', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500236', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500237', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500238', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500240', N'ʯ��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500241', N'��ɽ����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500242', N'��������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500243', N'��ˮ����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510000', N'�Ĵ�ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510100', N'�ɶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510106', N'��ţ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510107', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510108', N'�ɻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510112', N'��Ȫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510113', N'��׽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510114', N'�¶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510115', N'�½���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510122', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510124', N'ۯ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510129', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510131', N'�ѽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510132', N'�½���')
GO
print 'Processed 2500 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510181', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510182', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510183', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510184', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510300', N'�Թ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510302', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510303', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510304', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510311', N'��̲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510321', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510322', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510400', N'��֦����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510402', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510403', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510411', N'�ʺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510422', N'�α���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510503', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510504', N'����̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510521', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510522', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510525', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510603', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510623', N'�н���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510626', N'�޽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510681', N'�㺺��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510682', N'ʲ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510683', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510703', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510704', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510722', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510723', N'��ͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510724', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510725', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510726', N'����Ǽ��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510727', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510781', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510800', N'��Ԫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510811', N'Ԫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510812', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510822', N'�ന��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510823', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510824', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510903', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510904', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510921', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510922', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510923', N'��Ӣ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511000', N'�ڽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511011', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511024', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511025', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511028', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511100', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511111', N'ɳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511112', N'��ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511113', N'��ں���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511123', N'��Ϊ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511126', N'�н���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511129', N'�崨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511132', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511133', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511181', N'��üɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511300', N'�ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511302', N'˳����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511303', N'��ƺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511304', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511321', N'�ϲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511322', N'Ӫɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511323', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511324', N'��¤��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511325', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511400', N'üɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511422', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511424', N'������')
GO
print 'Processed 2600 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511500', N'�˱���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511503', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511521', N'�˱���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511525', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511526', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511528', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511529', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511600', N'�㰲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511602', N'�㰲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511622', N'��ʤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511623', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511681', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511702', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511721', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511725', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511781', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511800', N'�Ű���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511802', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511803', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511823', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511824', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511825', N'��ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511826', N'«ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511827', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511921', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511922', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511923', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512002', N'�㽭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512022', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512081', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513200', N'���Ӳ���Ǽ��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513221', N'�봨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513222', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513223', N'ï��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513225', N'��կ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513226', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513227', N'С����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513228', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513229', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513230', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513231', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513232', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513233', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513300', N'���β���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513322', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513325', N'�Ž���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513327', N'¯����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513328', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513329', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513330', N'�¸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513331', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513332', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513333', N'ɫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513334', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513335', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513336', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513337', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513338', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513400', N'��ɽ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513401', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513422', N'ľ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513423', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513424', N'�²���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513426', N'�ᶫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513427', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513428', N'�ո���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513429', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513430', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513431', N'�Ѿ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513432', N'ϲ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513433', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513434', N'Խ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513435', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513436', N'������')
GO
print 'Processed 2700 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513437', N'�ײ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520111', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520112', N'�ڵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520114', N'С����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520122', N'Ϣ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520200', N'����ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520201', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520203', N'��֦����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520221', N'ˮ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520222', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520302', N'�컨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520303', N'�㴨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520322', N'ͩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520325', N'��������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520326', N'������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520327', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520328', N'��̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520329', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520330', N'ϰˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520381', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520382', N'�ʻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520400', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520421', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520422', N'�ն���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520423', N'��������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520424', N'���벼��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520425', N'�������岼����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520500', N'�Ͻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520502', N'���ǹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520521', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520522', N'ǭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520523', N'��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520524', N'֯����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520525', N'��Ӻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520526', N'���������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520600', N'ͭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520602', N'�̽���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520603', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520622', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520623', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520624', N'˼����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520625', N'ӡ������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520626', N'�½���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520627', N'�غ�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520628', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522300', N'ǭ���ϲ���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522301', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522323', N'�հ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522324', N'��¡��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522325', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522327', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522328', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522600', N'ǭ�������嶱��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522601', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522622', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522623', N'ʩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522625', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522626', N'᯹���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522627', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522628', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522629', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522630', N'̨����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522631', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522632', N'�Ž���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522633', N'�ӽ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522634', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522635', N'�齭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522636', N'��կ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522700', N'ǭ�ϲ���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522701', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522702', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522722', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522723', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522725', N'�Ͱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522726', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522727', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522728', N'�޵���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522729', N'��˳��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522730', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522731', N'��ˮ��')
GO
print 'Processed 2800 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522732', N'����ˮ��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530102', N'�廪��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530111', N'�ٶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530112', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530114', N'�ʹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530126', N'ʯ������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530127', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530128', N'»Ȱ��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530129', N'Ѱ���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530322', N'½����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530323', N'ʦ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530324', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530325', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530328', N'մ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530381', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530400', N'��Ϫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530422', N'�ν���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530423', N'ͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530426', N'��ɽ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530427', N'��ƽ�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530428', N'Ԫ���������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530500', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530502', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530521', N'ʩ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530522', N'�ڳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530600', N'��ͨ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530602', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530621', N'³����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530622', N'�ɼ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530623', N'�ν���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530624', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530625', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530626', N'�罭��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530627', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530628', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530629', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530630', N'ˮ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530702', N'�ų���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530721', N'����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530722', N'��ʤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530723', N'��ƺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530724', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530800', N'�ն���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530802', N'˼é��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530821', N'��������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530822', N'ī��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530823', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530824', N'���ȴ�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530825', N'�������������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530826', N'���ǹ���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530827', N'������������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530828', N'����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530829', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530900', N'�ٲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530922', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530924', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530925', N'˫�����������岼�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530926', N'�����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530927', N'��Դ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532300', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532301', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532322', N'˫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532323', N'Ĳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532324', N'�ϻ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532325', N'Ҧ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532326', N'��Ҧ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532327', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532328', N'Ԫı��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532329', N'�䶨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532331', N'»����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532500', N'��ӹ���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532501', N'������')
GO
print 'Processed 2900 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532502', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532503', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532523', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532524', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532525', N'ʯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532526', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532528', N'Ԫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532529', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532530', N'��ƽ�����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532531', N'�̴���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532532', N'�ӿ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532600', N'��ɽ׳������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532601', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532622', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532623', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532624', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532625', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532626', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532627', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532628', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532800', N'��˫���ɴ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532801', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532822', N'�º���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532823', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532900', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532901', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532922', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532924', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532925', N'�ֶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532926', N'�Ͻ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532927', N'Ρɽ�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532928', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532929', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532930', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532931', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532932', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533100', N'�º���徰����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533103', N'â��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533123', N'ӯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533124', N'¤����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533300', N'ŭ��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533321', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533324', N'��ɽ������ŭ��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533325', N'��ƺ����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533400', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533421', N'���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533423', N'ά��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540000', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540102', N'�ǹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540123', N'��ľ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540124', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540125', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540127', N'ī�񹤿���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542100', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542124', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542125', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542127', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542128', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542129', N'â����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542132', N'��¡��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542133', N'�߰���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542200', N'ɽ�ϵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542221', N'�˶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542224', N'ɣ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542225', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542226', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542227', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542228', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542229', N'�Ӳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542231', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542232', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542233', N'�˿�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542300', N'�տ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542301', N'�տ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542322', N'��ľ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542325', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542326', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542327', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542328', N'лͨ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542329', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542330', N'�ʲ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542331', N'������')
GO
print 'Processed 3000 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542332', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542333', N'�ٰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542334', N'�Ƕ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542335', N'��¡��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542336', N'����ľ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542337', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542338', N'�ڰ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542400', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542421', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542424', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542426', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542427', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542428', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542429', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542430', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542500', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542525', N'�Ｊ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542526', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542527', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542600', N'��֥����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542621', N'��֥��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542622', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542623', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542624', N'ī����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542625', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542626', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542627', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610102', N'�³���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610111', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610112', N'δ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610113', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610114', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610115', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610116', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610125', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610126', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610200', N'ͭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610203', N'ӡ̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610204', N'ҫ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610222', N'�˾���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610302', N'μ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610303', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610304', N'�²���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610323', N'�ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610324', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610326', N'ü��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610327', N'¤��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610328', N'ǧ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610329', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610330', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610331', N'̫����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610402', N'�ض���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610403', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610404', N'μ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610422', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610423', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610424', N'Ǭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610425', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610426', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610427', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610428', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610429', N'Ѯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610430', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610431', N'�书��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610481', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610500', N'μ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610502', N'��μ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610521', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610522', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610523', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610524', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610525', N'�γ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610526', N'�ѳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610527', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610528', N'��ƽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610581', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610582', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610600', N'�Ӱ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610601', N'��Ͻ��')
GO
print 'Processed 3100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610602', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610621', N'�ӳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610622', N'�Ӵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610623', N'�ӳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610625', N'־����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610626', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610627', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610628', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610629', N'�崨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610630', N'�˴���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610631', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610632', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610700', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610702', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610721', N'��֣��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610722', N'�ǹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610723', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610724', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610725', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610726', N'��ǿ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610727', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610728', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610729', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610730', N'��ƺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610800', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610802', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610821', N'��ľ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610823', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610824', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610825', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610826', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610827', N'��֬��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610828', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610829', N'�Ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610830', N'�彧��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610831', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610900', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610922', N'ʯȪ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610924', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610925', N'᰸���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610926', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610927', N'��ƺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610928', N'Ѯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610929', N'�׺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611022', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611024', N'ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611025', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611026', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620000', N'����ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620102', N'�ǹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620103', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620111', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620123', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620200', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620300', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620302', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620321', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620400', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620402', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620403', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620421', N'��Զ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620423', N'��̩��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620500', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620502', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620503', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620521', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620522', N'�ذ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620523', N'�ʹ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620524', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620525', N'�żҴ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620600', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620601', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620602', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620623', N'��ף����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620700', N'��Ҵ��')
GO
print 'Processed 3200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620701', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620702', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620721', N'����ԣ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620723', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620724', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620725', N'ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620800', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620801', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620802', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620822', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620823', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620824', N'��ͤ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620825', N'ׯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620826', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620900', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620901', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620902', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620923', N'�౱�ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620924', N'��������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620981', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620982', N'�ػ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621000', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621001', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621021', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621022', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621024', N'��ˮ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621025', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621026', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621027', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621102', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621121', N'ͨμ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621122', N'¤����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621123', N'μԴ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621124', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621125', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621126', N'���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621200', N'¤����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621202', N'�䶼��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621221', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621222', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621223', N'崲���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621224', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621225', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621226', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621227', N'����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621228', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622900', N'���Ļ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622901', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622921', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622923', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622924', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622925', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622926', N'������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622927', N'��ʯɽ�����嶫����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623000', N'���ϲ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623001', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623021', N'��̶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623022', N'׿����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623024', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623025', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623026', N'µ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623027', N'�ĺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630000', N'�ຣʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630102', N'�Ƕ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630103', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630105', N'�Ǳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630121', N'��ͨ��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630123', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632100', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632121', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632122', N'��ͻ�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632123', N'�ֶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632126', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632127', N'��¡����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632128', N'ѭ��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632200', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632221', N'��Դ����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632222', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632224', N'�ղ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632300', N'���ϲ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632321', N'ͬ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632323', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632324', N'�����ɹ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632500', N'���ϲ���������')
GO
print 'Processed 3300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632522', N'ͬ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632523', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632524', N'�˺���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632525', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632600', N'�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632621', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632622', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632623', N'�ʵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632624', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632625', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632626', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632700', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632721', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632722', N'�Ӷ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632723', N'�ƶ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632724', N'�ζ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632725', N'��ǫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632726', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632800', N'�����ɹ������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632801', N'���ľ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632802', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632821', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632822', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632823', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640000', N'���Ļ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640100', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640105', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640106', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640121', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640181', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640200', N'ʯ��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640202', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640205', N'��ũ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640221', N'ƽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640300', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640301', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640302', N'��ͨ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640303', N'���±���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640323', N'�γ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640324', N'ͬ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640381', N'��ͭϿ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640400', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640401', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640402', N'ԭ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640422', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640423', N'¡����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640424', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640425', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640500', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640501', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640502', N'ɳ��ͷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640521', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640522', N'��ԭ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650000', N'�½�ά���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650100', N'��³ľ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650101', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650102', N'��ɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650103', N'ɳ���Ϳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650104', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650105', N'ˮĥ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650106', N'ͷ�ͺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650107', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650109', N'�׶���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650121', N'��³ľ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650200', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650201', N'��Ͻ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650202', N'��ɽ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650203', N'����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650204', N'�׼�̲��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650205', N'�ڶ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652100', N'��³������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652101', N'��³����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652122', N'۷����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652123', N'�п�ѷ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652200', N'���ܵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652201', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652222', N'������������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652223', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652300', N'��������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652301', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652302', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652323', N'��ͼ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652324', N'����˹��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652325', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652327', N'��ľ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652328', N'ľ�ݹ�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652700', N'���������ɹ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652701', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652722', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652723', N'��Ȫ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652800', N'���������ɹ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652801', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652822', N'��̨��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652823', N'ξ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652824', N'��Ǽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652825', N'��ĩ��')
GO
print 'Processed 3400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652826', N'���Ȼ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652827', N'�;���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652828', N'��˶��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652829', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652900', N'�����յ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652901', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652922', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652923', N'�⳵��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652924', N'ɳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652925', N'�º���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652926', N'�ݳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652927', N'��ʲ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652928', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652929', N'��ƺ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653000', N'�������տ¶�����������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653001', N'��ͼʲ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653022', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653023', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653024', N'��ǡ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653100', N'��ʲ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653101', N'��ʲ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653121', N'�踽��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653122', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653123', N'Ӣ��ɳ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653124', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653125', N'ɯ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653126', N'Ҷ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653127', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653128', N'���պ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653129', N'٤ʦ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653130', N'�ͳ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653131', N'��ʲ�����������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653200', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653201', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653222', N'ī����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653223', N'Ƥɽ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653225', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653226', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653227', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654000', N'���������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654002', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654003', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654021', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654022', N'�첼�������������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654023', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654024', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654025', N'��Դ��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654026', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654027', N'�ؿ�˹��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654028', N'���տ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654200', N'���ǵ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654201', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654202', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654221', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654223', N'ɳ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654224', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654225', N'ԣ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654226', N'�Ͳ��������ɹ�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654300', N'����̩����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654301', N'����̩��')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654321', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654322', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654323', N'������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654324', N'���ͺ���')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654325', N'�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654326', N'��ľ����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659000', N'������ֱϽ�ؼ���������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659001', N'ʯ������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659002', N'��������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659003', N'ͼľ�����')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659004', N'�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'710000', N'̨��ʡ')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'810000', N'����ر�������')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'820000', N'�����ر�������')

/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on GL_GeoCodeInfo (
GeoCode ASC
)
go

/*==============================================================*/
/* Table: GL_MajorCateInfo                                      */
/*==============================================================*/
create table GL_MajorCateInfo (
   MajorCateID          int                  not null,
   MajorCateName        nvarchar(20)         not null,
   constraint PK_GL_MAJORCATEINFO primary key (MajorCateID)
)
go

/*==============================================================*/
/* Table: GL_MinorCateInfo                                      */
/*==============================================================*/
create table GL_MinorCateInfo (
   MajorCateID          int                  not null,
   MinorCateID          int                  not null,
   MinorCateName        nvarchar(20)         not null,
   constraint PK_GL_MINORCATEINFO primary key (MajorCateID, MinorCateID)
)
go

/*==============================================================*/
/* Table: GL_MinorGTypeMapInfo                                  */
/*==============================================================*/
create table GL_MinorGTypeMapInfo (
   MajorCateID          int                  not null,
   MinorCateID          int                  not null,
   CreateType           int                  not null default 1,
   GTypeID              int                  not null,
   constraint PK_GL_MINORGTYPEMAPINFO primary key (MajorCateID, GTypeID, MinorCateID)
)
go

/*==============================================================*/
/* Table: GL_OrderInfo                                          */
/*==============================================================*/
create table GL_OrderInfo (
   OrderID              bigint               identity(1,1) not for replication,
   ClientOrderID        bigint               not null default 0,
   OrderIndex           int                  not null default 0,
   OrderType            int                  not null default 1,
   FactoryID            int                  not null,
   ShopID               int                  not null,
   OrderStatus          int                  not null default 0,
   IsDel                bit                  not null default 0,
   DesignerID           int                  not null default 0,
   ShopAuditorID        int                  not null default 0,
   ShopCommitorID       int                  not null default 0,
   FactoryGraphAuditorID int                  not null default 0,
   FactoryListAuditorID int                  not null default 0,
   FactoryFinanceAuditorID int                  not null default 0,
   ShopAuditTime        datetime             not null default '1970-01-01 00:00:00',
   ShopCommitTime       datetime             not null default '1970-01-01 00:00:00',
   GraphAuditTime       datetime             not null default '1970-01-01 00:00:00',
   ListAuditTime        datetime             not null default '1970-01-01 00:00:00',
   FinanceAuditTime     datetime             not null default '1970-01-01 00:00:00',
   OrderCode            nvarchar(50)         not null default '',
   ShopAuditContent     nvarchar(100)        not null default '',
   ShopCommitContent    nvarchar(100)        not null default '',
   GraphAuditContent    nvarchar(100)        not null default '',
   ListAuditContent     nvarchar(100)        not null default '',
   FinanceAuditContent  nvarchar(100)        not null default '',
   constraint PK_GL_ORDERINFO primary key (OrderID)
)
go

/*==============================================================*/
/* Table: GL_PinYin                                             */
/*==============================================================*/
create table GL_PinYin (
   PYCode               nvarchar(12)         not null,
   PYName               nvarchar(4)          not null,
   constraint PK_GL_PINYIN primary key (PYCode, PYName)
)
go

/*==============================================================*/
/* Table: GL_PrepaidCardInfo                                    */
/*==============================================================*/
create table GL_PrepaidCardInfo (
   CardID               int                  not null,
   CardCategory         int                  not null,
   CardType             int                  not null,
   Period               int                  not null,
   SecureCode           nvarchar(1000)       not null,
   CardPwd              nvarchar(1000)       not null,
   SerialNo             nvarchar(20)         not null,
   CardNo               nvarchar(20)         null,
   constraint PK_GL_PREPAIDCARDINFO primary key (CardID)
)
go

/*==============================================================*/
/* Index: Index_CardNo                                          */
/*==============================================================*/
create index Index_CardNo on GL_PrepaidCardInfo (
CardNo ASC
)
go

/*==============================================================*/
/* Table: GL_PrintTemplateInfo                                  */
/*==============================================================*/
create table GL_PrintTemplateInfo (
   TemplateID           int                  not null,
   FactoryID            int                  not null,
   IsActive             bit                  not null,
   RelativePath         nvarchar(255)        not null default '',
   TemplateName         nvarchar(255)        not null default '',
   TemplateMemo         nvarchar(500)        not null default '',
   HashCode             nvarchar(50)         not null,
   constraint PK_GL_PRINTTEMPLATEINFO primary key (TemplateID, FactoryID)
)
go

/*==============================================================*/
/* Table: GL_RoleInfo                                           */
/*==============================================================*/
create table GL_RoleInfo (
   RoleID               int                  identity(1,1),
   DeptID               int                  not null default 0,
   DTypeID              int                  not null default 0,
   CreatorID            int                  not null default 0,
   UpdaterID            int                  not null default 0,
   CreateTime           datetime             not null default getdate(),
   UpdateTime           datetime             not null default getdate(),
   RoleName             nvarchar(20)         not null,
   constraint PK_GL_ROLEINFO primary key (RoleID)
)
go

SET IDENTITY_INSERT [dbo].[GL_RoleInfo] ON
INSERT [dbo].[GL_RoleInfo] ([RoleID], [DeptID], [DTypeID], [RoleName]) VALUES (1, 0, 1, N'ϵͳ����Ա')
INSERT [dbo].[GL_RoleInfo] ([RoleID], [DeptID], [DTypeID], [RoleName]) VALUES (2, 0, 2, N'����ϵͳ����Ա')
INSERT [dbo].[GL_RoleInfo] ([RoleID], [DeptID], [DTypeID], [RoleName]) VALUES (3, 0, 3, N'����ϵͳ����Ա')
SET IDENTITY_INSERT [dbo].[GL_RoleInfo] OFF

/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on GL_RoleInfo (
DeptID ASC,
DTypeID ASC,
RoleName ASC
)
go

/*==============================================================*/
/* Table: GL_RoleRightInfo                                      */
/*==============================================================*/
create table GL_RoleRightInfo (
   RightID              int                  not null,
   RightType            int                  not null,
   RoleID               int                  not null,
   constraint PK_GL_ROLERIGHTINFO primary key (RightID, RightType, RoleID)
)
go

/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on GL_RoleRightInfo (
RightType ASC,
RoleID ASC
)
go

/*==============================================================*/
/* Table: GL_SugarVerInfo                                       */
/*==============================================================*/
create table GL_SugarVerInfo (
   VerCode              bigint               identity(1,1),
   DeptID               int                  not null default 0,
   VerType              int                  not null default 1,
   VerIndex             int                  not null default 0,
   UploadStatus         int                  not null default 0,
   FileCount            int                  not null default 0,
   VerDBState           int                  not null default 0,
   CreatorID            int                  not null default 0,
   StartTime            datetime             not null default getdate(),
   StopTime             datetime             not null default getdate(),
   CreateTime           datetime             not null default getdate(),
   VerMemo              nvarchar(500)        not null default '',
   constraint PK_GL_SUGARVERINFO primary key (VerCode)
)
go

/*==============================================================*/
/* Table: GL_TransferOrderInfo                                  */
/*==============================================================*/
create table GL_TransferOrderInfo (
   RecordID             bigint               not null,
   TransferByUserID     int                  not null,
   TransferToUserID     int                  not null,
   constraint PK_GL_TRANSFERORDERINFO primary key (RecordID)
)
go

/*==============================================================*/
/* Table: GL_UnitInfo                                           */
/*==============================================================*/
create table GL_UnitInfo (
   UnitID               int                  not null,
   GTypeID              int                  not null,
   UnitName             nvarchar(10)         not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null default 0,
   CreateTime           datetime             not null,
   UpdateTime           datetime             not null,
   constraint PK_GL_UNITINFO primary key (UnitID)
)
go

INSERT INTO "GL_UnitInfo" VALUES(1,1201,'��',1,10013,'2013-05-17 15:26:23','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(2,1202,'ƽ��',1,10013,'2013-05-17 15:26:34','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(3,1202,'��',1,10013,'2013-05-17 15:26:38','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(4,1301,'��',1,10013,'2013-05-17 15:26:45','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(5,1302,'��',1,10013,'2013-05-17 15:26:54','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(6,1304,'��',1,10013,'2013-05-17 15:27:00','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(7,1303,'��',1,10013,'2013-05-17 15:27:07','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(8,1306,'��',1,10013,'2013-05-17 15:27:15','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(9,1402,'��',1,10013,'2013-05-17 15:27:21','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(10,1401,'��',1,10013,'2013-05-17 15:27:28','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(11,1201,'��',1,10013,'2013-05-17 15:28:44','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(12,1308,'��',1,10013,'2013-05-17 15:30:20','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(13,1305,'��',1,10013,'2013-05-27 15:18:07','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(14,1405,'��',1,10013,'2013-06-04 16:27:49','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(15,1406,'��',1,10013,'2013-06-04 16:31:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(16,2302,'��',1,10013,'2013-06-04 17:01:03','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(17,2302,'��',1,10013,'2013-06-04 17:01:10','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(18,2302,'��',1,10013,'2013-06-04 17:01:13','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(19,1101,'��',1,10013,'2013-06-04 17:39:26','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(20,1102,'��',1,10013,'2013-06-04 17:39:36','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(21,1102,'��',1,10013,'2013-06-04 17:39:40','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(22,1103,'ƽ����',1,10013,'2013-06-04 17:39:58','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(23,1103,'��',1,10013,'2013-06-04 17:40:02','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(24,1103,'��',1,10013,'2013-06-04 17:40:08','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(25,1104,'��',1,10013,'2013-06-04 17:40:13','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(27,1106,'��',1,10013,'2013-06-04 17:40:32','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(28,1107,'��',1,10013,'2013-06-04 17:40:36','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(29,1108,'��',1,10013,'2013-06-04 17:40:40','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(30,1403,'��',1,10013,'2013-06-18 11:03:30','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(31,1203,'ƽ��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(32,1203,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(33,1204,'ƽ��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(34,1204,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(35,1205,'ƽ��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(36,1205,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(37,1206,'ƽ��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(38,1206,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(39,1207,'ƽ��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(40,1207,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(41,1208,'ƽ��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(42,1208,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(43,1307,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(44,1307,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(45,1404,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(46,1407,'��',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(47,1501,'��',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(48,1501,'��',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(49,1501,'��',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(50,1502,'��',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(51,1502,'��',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(52,1502,'��',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(53,1101,'��',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(54,1104,'ƽ����',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(55,1104,'��',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(56,1105,'ƽ����',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(57,1105,'��',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(58,1105,'��',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(59,1107,'��',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(60,1107,'��',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(61,1108,'��',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(62,1108,'��',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(63,1301,'��',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(64,1301,'��',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(65,1106,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(66,1107,'յ',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(67,1201,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(68,1203,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(69,1205,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(70,1208,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(71,1302,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(72,1303,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(73,1303,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(74,1304,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(75,1304,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(76,1305,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(77,1305,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(78,1305,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(79,1306,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(80,1306,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(81,1307,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(82,1307,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(83,1308,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(84,1401,'��',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(85,1401,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(86,1401,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(87,1402,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(88,1402,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(89,1402,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(90,1403,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(91,1403,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(92,1403,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(93,1404,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(94,1404,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(95,1404,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(96,1405,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(97,1405,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(98,1405,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(99,1405,'̨',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(100,1406,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(101,1406,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(102,1406,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(103,1406,'̨',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(104,1407,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(105,1407,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(106,1407,'��',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(107,1407,'̨',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(108,2302,'��',10013,10013,'2013-09-11 15:25:42','2013-09-11 15:25:42');

/*==============================================================*/
/* Table: GL_UserActivationInfo                                 */
/*==============================================================*/
create table GL_UserActivationInfo (
   UserID               int                  not null,
   ActivationCode       nvarchar(50)         null,
   Status               tinyint              null,
   TryCount             int                  null,
   LastTryTime          datetime             null,
   constraint PK_GL_USERACTIVATIONINFO primary key (UserID)
)
go

/*==============================================================*/
/* Index: Index_ActivationCode                                  */
/*==============================================================*/
create index Index_ActivationCode on GL_UserActivationInfo (
ActivationCode ASC
)
go

/*==============================================================*/
/* Table: GL_UserInfo                                           */
/*==============================================================*/
create table GL_UserInfo (
   UserID               int                  identity(10000,1),
   FactoryID            int                  not null default 0,
   ShopID               int                  not null default 0,
   DeptID               int                  not null,
   IsDel                bit                  not null default 0,
   RoleID               int                  not null,
   CreatorID            int                  not null,
   UpdaterID            int                  not null default 0,
   CreateTime           datetime             not null default getdate(),
   UpdateTime           datetime             not null default getdate(),
   UserPwd              nvarchar(64)         not null default '',
   UserCode             nvarchar(32)         not null default '',
   EncodeStr            nvarchar(64)         not null default '',
   TrueName             nvarchar(20)         not null default '',
   IDCode               nvarchar(20)         not null default '',
   QQNum                nvarchar(20)         not null default '',
   Email                nvarchar(50)         not null default '',
   Tel                  nvarchar(20)         not null default '',
   CellPhone            nvarchar(20)         not null default '',
   PostCode             nvarchar(10)         not null default '',
   ContactAddress       nvarchar(200)        not null default '',
   IsActived            bit                  null default 0,
   IsLocked             bit                  null default 0,
   constraint PK_GL_USERINFO primary key (UserID),
   constraint AK_KEY_2_GL_USERI unique (UserCode)
)
go

SET IDENTITY_INSERT [dbo].[GL_UserInfo] ON
INSERT [dbo].[GL_UserInfo] ([UserID], [DeptID], [IsDel], [RoleID], [CreatorID], [UpdaterID], [CreateTime], [UpdateTime], [UserPwd], [UserCode], [EncodeStr], [TrueName], [IDCode], [QQNum], [Email], [Tel], [CellPhone], [PostCode], [ContactAddress]) VALUES (10000, 0, 0, 1, 0, 0, GETDATE(), GETDATE(), N'42b1a2bf36dd05ad240b57620cb10fc6', N'admin', N'eway!2012', N'ϵͳ����Ա', N'', N'', N'', N'', N'', N'', N'�Ĵ��ɶ��⻪��')
SET IDENTITY_INSERT [dbo].[GL_UserInfo] OFF

IF  EXISTS (SELECT * FROM sys.objects WHERE object_id = OBJECT_ID(N'[dbo].[sp_IsUserInUse]') AND type in (N'P', N'PC'))
DROP PROCEDURE [dbo].[sp_IsUserInUse]
GO

SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

-- =============================================
-- Author:		yesoce
-- Description:	����û���Ϣ�Ƿ�����������
-- =============================================
CREATE PROCEDURE [dbo].[sp_IsUserInUse]
	@UserId int
AS
BEGIN
	DECLARE @RefCount int = 0
	
	SET @RefCount = (SELECT COUNT(UserID) FROM [dbo].[GL_UserInfo] WHERE UserID=@UserID)
	SET @RefCount = @RefCount + (SELECT COUNT(UserID) FROM [dbo].[GL_UserInfo] WHERE UserID=@UserID)
	
	RETURN @RefCount
END

GO


/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on GL_UserInfo (
UserCode ASC,
CellPhone ASC
)
go

/*==============================================================*/
/* Index: Index_IsActived                                       */
/*==============================================================*/
create index Index_IsActived on GL_UserInfo (
IsActived ASC
)
go

/*==============================================================*/
/* Index: Index_IsLocked                                        */
/*==============================================================*/
create index Index_IsLocked on GL_UserInfo (
IsLocked ASC
)
go

/*==============================================================*/
/* Table: JD_BoardGapInfo                                       */
/*==============================================================*/
create table JD_BoardGapInfo (
   ItemID               bigint               identity(1,1),
   OrderCate            int                  not null default 0,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   BoardID              bigint               not null,
   GapIndex             int                  not null,
   GapShape             int                  not null,
   XLen                 float                not null,
   YLen                 float                not null,
   Square               float                null,
   XOffset              float                not null,
   YOffset              float                not null,
   ZOffset              float                not null,
   OrderCode            nvarchar(50)         not null,
   OldTableName         nvarchar(50)         not null,
   OldID                int                  not null,
   constraint PK_JD_BOARDGAPINFO primary key (ItemID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: JD_BoardInfo                                          */
/*==============================================================*/
create table JD_BoardInfo (
   ItemID               bigint               identity(1,1),
   OrderCate            int                  not null default 0,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   BoardType            int                  not null,
   ObjectID             bigint               not null,
   MaterialID           int                  not null,
   CabinetID            bigint               not null,
   Grain                int                  not null,
   IsUserAdd            bit                  not null default 0,
   XLength              float                not null,
   YLength              float                not null,
   ZLength              float                not null,
   Square               float                null,
   CutXLength           float                not null,
   CutYLength           float                not null,
   OrderCode            nvarchar(50)         not null,
   Name                 nvarchar(50)         not null,
   ObjectName           nvarchar(50)         not null,
   ObjectCode           nvarchar(50)         not null,
   MaterialName         nvarchar(50)         not null,
   CabinetName          nvarchar(50)         not null,
   CabinetCode          nvarchar(50)         not null,
   OldTableName         nvarchar(50)         not null,
   OldID                int                  not null,
   constraint PK_JD_BOARDINFO primary key (ItemID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: JD_BoardSealInfo                                      */
/*==============================================================*/
create table JD_BoardSealInfo (
   ItemID               bigint               identity(1,1),
   OrderCate            int                  not null default 0,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   BoardID              bigint               not null,
   SealIndex            int                  not null,
   MaterialID           int                  not null,
   PreMill              float                not null,
   OrderCode            nvarchar(50)         not null,
   MaterialCode         nvarchar(20)         not null,
   MaterialName         nvarchar(50)         not null,
   OldTableName         nvarchar(50)         not null,
   OldID                int                  not null,
   constraint PK_JD_BOARDSEALINFO primary key (ItemID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: JD_Objects                                            */
/*==============================================================*/
create table JD_Objects (
   ItemID               bigint               identity(1,1),
   OrderCate            int                  not null default 0,
   OrderID              bigint               not null,
   FactoryID            int                  not null,
   ObjectType           int                  not null,
   ParentID             bigint               not null,
   GType                int                  not null,
   XLength              float                not null,
   YLength              float                not null,
   ZLength              float                not null,
   ShapeXLength         float                not null,
   ShapeZLength         float                not null,
   GapXLength           float                not null,
   GapYLength           float                not null,
   GapZLength           float                not null,
   Amount               float                not null,
   IsStandard           bit                  not null,
   IsUserAdd            bit                  not null default 0,
   MaterialPlanID       int                  not null,
   CabGapType           int                  not null,
   CabShape             int                  not null,
   OrderCode            nvarchar(50)         not null,
   Name                 nvarchar(50)         not null,
   Code                 nvarchar(20)         not null,
   MaterialPlanName     nvarchar(50)         not null,
   BarCode              nvarchar(50)         not null,
   Remarks              nvarchar(500)        not null,
   OldTableName         nvarchar(50)         not null,
   OldID                int                  not null,
   constraint PK_JD_OBJECTS primary key (ItemID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: JD_OrderInfo                                          */
/*==============================================================*/
create table JD_OrderInfo (
   ItemID               bigint               identity(1,1),
   OrderCate            int                  not null,
   OrderID              bigint               not null,
   ParentID             bigint               not null,
   OrderType            int                  not null,
   OrderIndex           int                  not null,
   FactoryID            int                  not null,
   VerCode              bigint               not null,
   ShopID               int                  not null,
   PreSurveyorID        int                  not null default 0,
   ReSurveyorID         int                  not null default 0,
   DesignerID           int                  not null,
   SellerID             int                  not null,
   AuditorID            int                  not null,
   Square               float                null,
   CreateTime           datetime             not null default getdate(),
   PreSurveyTime        datetime             not null default getdate(),
   ReSurveyTime         datetime             not null default getdate(),
   OrderTime            datetime             not null,
   DeliveryTime         datetime             not null,
   InstallTime          datetime             not null default getdate(),
   ShopName             nvarchar(50)         not null,
   ShopCode             nvarchar(20)         not null,
   OrderCode            nvarchar(50)         not null,
   DesignerName         nvarchar(20)         not null,
   DesignerUserCode     nvarchar(32)         not null,
   PreSurveyorName      nvarchar(20)         not null default '',
   PreSurveyorCode      nvarchar(32)         not null default '',
   ReSurveyorName       nvarchar(20)         not null default '',
   ReSurveyorCode       nvarchar(32)         not null default '',
   SellerName           nvarchar(20)         not null,
   SellerUserCode       nvarchar(32)         not null,
   AuditorName          nvarchar(20)         not null,
   AuditorUserCode      nvarchar(32)         not null,
   GeoCode              nvarchar(6)          not null,
   GeoName              nvarchar(50)         null,
   OrderTitle           nvarchar(100)        not null,
   CustomerName         nvarchar(50)         not null,
   CustomerTel          nvarchar(50)         not null,
   CustomerPostCode     nvarchar(10)         not null,
   CustomerQQ           nvarchar(50)         not null,
   CustomerEmail        nvarchar(50)         not null,
   InstallAddress       nvarchar(200)        not null,
   OrderRemarks         nvarchar(500)        not null,
   PlanName             nvarchar(50)         not null,
   PlanRemarks          nvarchar(500)        not null,
   AttachFilePath       nvarchar(255)        not null default '',
   constraint PK_JD_ORDERINFO primary key (ItemID, OrderCate, OrderID)
)
go

/*==============================================================*/
/* Table: SV_BOMChargeInfo                                      */
/*==============================================================*/
create table SV_BOMChargeInfo (
   BOMChargeID          bigint               null,
   FactoryID            int                  not null,
   CategoryID           int                  not null,
   Enable               int                  not null,
   constraint PK_SV_BOMCHARGEINFO primary key (FactoryID)
)
go

/*==============================================================*/
/* Table: SV_ChargeShopInfo                                     */
/*==============================================================*/
create table SV_ChargeShopInfo (
   RecordID             int                  identity(1,1),
   FactoryID            int                  not null,
   ShopID               int                  not null,
   UserID               int                  not null,
   StartTime            datetime             not null,
   StopTime             datetime             not null,
   constraint PK_SV_CHARGESHOPINFO primary key (FactoryID, ShopID, UserID, RecordID)
)
go

/*==============================================================*/
/* Table: SV_LibFileInfo                                        */
/*==============================================================*/
create table SV_LibFileInfo (
   DeptID               int                  not null,
   HashCode             nvarchar(32)         not null,
   DestPath             nvarchar(255)        not null default '',
   constraint PK_SV_LIBFILEINFO primary key (DeptID, HashCode)
)
go

/*==============================================================*/
/* Table: SV_ModuleChargeInfo                                   */
/*==============================================================*/
create table SV_ModuleChargeInfo (
   ModuleChargeID       bigint               null,
   ModuleID             int                  null,
   FactoryID            int                  null,
   ShopID               int                  null,
   UserID               int                  null,
   StartTime            datetime             null,
   StopTime             datetime             null
)
go

/*==============================================================*/
/* Table: SV_OrderActionRecordInfo                              */
/*==============================================================*/
create table SV_OrderActionRecordInfo (
   RecordID             bigint               identity(1,1),
   OrderID              bigint               not null,
   UserID               int                  not null,
   ActionID             int                  not null,
   RecordTime           datetime             not null default getdate(),
   AuditComment         nvarchar(500)        not null default '',
   constraint PK_SV_ORDERACTIONRECORDINFO primary key (RecordID)
)
go

/*==============================================================*/
/* Table: SV_OrderFileInfo                                      */
/*==============================================================*/
create table SV_OrderFileInfo (
   OrderID              bigint               not null,
   TableType            int                  not null,
   FilePath             nvarchar(255)        not null,
   constraint PK_SV_ORDERFILEINFO primary key (OrderID, TableType)
)
go

/*==============================================================*/
/* Table: SV_UserLoginStatusInfo                                */
/*==============================================================*/
create table SV_UserLoginStatusInfo (
   LoginType            int                  not null,
   UserID               int                  not null,
   LoginStatus          int                  not null default 0,
   LoginTime            datetime             not null default getdate(),
   LastVisitTime        datetime             not null default getdate(),
   LoginIP              nvarchar(32)         not null default '',
   constraint PK_SV_USERLOGINSTATUSINFO primary key (LoginType, UserID)
)
go

/*==============================================================*/
/* Index: Index_1                                               */
/*==============================================================*/
create index Index_1 on SV_UserLoginStatusInfo (
LoginType ASC,
UserID ASC,
LoginStatus ASC,
LastVisitTime ASC
)
go

