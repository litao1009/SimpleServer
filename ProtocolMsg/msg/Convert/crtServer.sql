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
INSERT INTO [dbo].[GL_DeptInfo]([DeptID],[ParentID],[IsDel],[DTypeID],[DeptName]) VALUES(1,0,0,1,'易为')
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

INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110000', N'北京市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110100', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110101', N'东城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110102', N'西城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110105', N'朝阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110106', N'丰台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110107', N'石景山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110108', N'海淀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110109', N'门头沟区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110111', N'房山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110112', N'通州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110113', N'顺义区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110114', N'昌平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110115', N'大兴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110116', N'怀柔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110117', N'平谷区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110200', N'县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110228', N'密云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'110229', N'延庆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120000', N'天津市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120100', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120101', N'和平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120102', N'河东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120103', N'河西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120104', N'南开区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120105', N'河北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120106', N'红桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120110', N'东丽区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120111', N'西青区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120112', N'津南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120113', N'北辰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120114', N'武清区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120115', N'宝坻区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120116', N'滨海新区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120200', N'县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120221', N'宁河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120223', N'静海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'120225', N'蓟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130000', N'河北省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130100', N'石家庄市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130102', N'长安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130103', N'桥东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130104', N'桥西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130105', N'新华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130107', N'井陉矿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130108', N'裕华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130121', N'井陉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130123', N'正定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130124', N'栾城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130125', N'行唐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130126', N'灵寿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130127', N'高邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130128', N'深泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130129', N'赞皇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130130', N'无极县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130131', N'平山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130132', N'元氏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130133', N'赵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130181', N'辛集市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130182', N'藁城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130183', N'晋州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130184', N'新乐市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130185', N'鹿泉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130200', N'唐山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130202', N'路南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130203', N'路北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130204', N'古冶区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130205', N'开平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130207', N'丰南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130208', N'丰润区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130209', N'曹妃甸区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130223', N'滦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130224', N'滦南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130225', N'乐亭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130227', N'迁西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130229', N'玉田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130281', N'遵化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130283', N'迁安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130300', N'秦皇岛市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130302', N'海港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130303', N'山海关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130304', N'北戴河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130321', N'青龙满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130322', N'昌黎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130323', N'抚宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130324', N'卢龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130400', N'邯郸市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130402', N'邯山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130403', N'丛台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130404', N'复兴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130406', N'峰峰矿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130421', N'邯郸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130423', N'临漳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130424', N'成安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130425', N'大名县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130426', N'涉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130427', N'磁县')
GO
print 'Processed 100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130428', N'肥乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130429', N'永年县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130430', N'邱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130431', N'鸡泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130432', N'广平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130433', N'馆陶县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130434', N'魏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130435', N'曲周县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130481', N'武安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130500', N'邢台市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130502', N'桥东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130503', N'桥西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130521', N'邢台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130522', N'临城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130523', N'内丘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130524', N'柏乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130525', N'隆尧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130526', N'任县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130527', N'南和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130528', N'宁晋县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130529', N'巨鹿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130530', N'新河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130531', N'广宗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130532', N'平乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130533', N'威县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130534', N'清河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130535', N'临西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130581', N'南宫市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130582', N'沙河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130600', N'保定市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130602', N'新市区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130603', N'北市区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130604', N'南市区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130621', N'满城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130622', N'清苑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130623', N'涞水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130624', N'阜平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130625', N'徐水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130626', N'定兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130627', N'唐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130628', N'高阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130629', N'容城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130630', N'涞源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130631', N'望都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130632', N'安新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130633', N'易县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130634', N'曲阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130635', N'蠡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130636', N'顺平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130637', N'博野县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130638', N'雄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130681', N'涿州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130682', N'定州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130683', N'安国市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130684', N'高碑店市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130700', N'张家口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130702', N'桥东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130703', N'桥西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130705', N'宣化区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130706', N'下花园区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130721', N'宣化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130722', N'张北县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130723', N'康保县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130724', N'沽源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130725', N'尚义县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130726', N'蔚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130727', N'阳原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130728', N'怀安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130729', N'万全县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130730', N'怀来县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130731', N'涿鹿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130732', N'赤城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130733', N'崇礼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130800', N'承德市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130802', N'双桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130803', N'双滦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130804', N'鹰手营子矿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130821', N'承德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130822', N'兴隆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130823', N'平泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130824', N'滦平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130825', N'隆化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130826', N'丰宁满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130827', N'宽城满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130828', N'围场满族蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130900', N'沧州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130902', N'新华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130903', N'运河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130921', N'沧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130922', N'青县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130923', N'东光县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130924', N'海兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130925', N'盐山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130926', N'肃宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130927', N'南皮县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130928', N'吴桥县')
GO
print 'Processed 200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130929', N'献县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130930', N'孟村回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130981', N'泊头市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130982', N'任丘市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130983', N'黄骅市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'130984', N'河间市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131000', N'廊坊市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131002', N'安次区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131003', N'广阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131022', N'固安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131023', N'永清县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131024', N'香河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131025', N'大城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131026', N'文安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131028', N'大厂回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131081', N'霸州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131082', N'三河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131100', N'衡水市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131102', N'桃城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131121', N'枣强县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131122', N'武邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131123', N'武强县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131124', N'饶阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131125', N'安平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131126', N'故城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131127', N'景县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131128', N'阜城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131181', N'冀州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'131182', N'深州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140000', N'山西省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140100', N'太原市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140105', N'小店区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140106', N'迎泽区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140107', N'杏花岭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140108', N'尖草坪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140109', N'万柏林区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140110', N'晋源区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140121', N'清徐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140122', N'阳曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140123', N'娄烦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140181', N'古交市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140200', N'大同市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140202', N'城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140203', N'矿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140211', N'南郊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140212', N'新荣区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140221', N'阳高县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140222', N'天镇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140223', N'广灵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140224', N'灵丘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140225', N'浑源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140226', N'左云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140227', N'大同县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140300', N'阳泉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140302', N'城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140303', N'矿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140311', N'郊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140321', N'平定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140322', N'盂县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140400', N'长治市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140402', N'城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140411', N'郊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140421', N'长治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140423', N'襄垣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140424', N'屯留县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140425', N'平顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140426', N'黎城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140427', N'壶关县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140428', N'长子县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140429', N'武乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140430', N'沁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140431', N'沁源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140481', N'潞城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140500', N'晋城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140501', N'晋城市市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140502', N'城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140521', N'沁水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140522', N'阳城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140524', N'陵川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140525', N'泽州县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140581', N'高平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140600', N'朔州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140602', N'朔城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140603', N'平鲁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140621', N'山阴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140622', N'应县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140623', N'右玉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140624', N'怀仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140700', N'晋中市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140702', N'榆次区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140721', N'榆社县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140722', N'左权县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140723', N'和顺县')
GO
print 'Processed 300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140724', N'昔阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140725', N'寿阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140726', N'太谷县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140727', N'祁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140728', N'平遥县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140729', N'灵石县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140781', N'介休市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140800', N'运城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140802', N'盐湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140821', N'临猗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140822', N'万荣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140823', N'闻喜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140824', N'稷山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140825', N'新绛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140826', N'绛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140827', N'垣曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140828', N'夏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140829', N'平陆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140830', N'芮城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140881', N'永济市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140882', N'河津市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140900', N'忻州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140902', N'忻府区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140921', N'定襄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140922', N'五台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140923', N'代县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140924', N'繁峙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140925', N'宁武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140926', N'静乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140927', N'神池县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140928', N'五寨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140929', N'岢岚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140930', N'河曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140931', N'保德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140932', N'偏关县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'140981', N'原平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141000', N'临汾市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141002', N'尧都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141021', N'曲沃县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141022', N'翼城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141023', N'襄汾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141024', N'洪洞县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141025', N'古县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141026', N'安泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141027', N'浮山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141028', N'吉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141029', N'乡宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141030', N'大宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141031', N'隰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141032', N'永和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141033', N'蒲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141034', N'汾西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141081', N'侯马市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141082', N'霍州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141100', N'吕梁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141102', N'离石区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141121', N'文水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141122', N'交城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141123', N'兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141124', N'临县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141125', N'柳林县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141126', N'石楼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141127', N'岚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141128', N'方山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141129', N'中阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141130', N'交口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141181', N'孝义市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'141182', N'汾阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150000', N'内蒙古自治区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150100', N'呼和浩特市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150102', N'新城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150103', N'回民区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150104', N'玉泉区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150105', N'赛罕区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150121', N'土默特左旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150122', N'托克托县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150123', N'和林格尔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150124', N'清水河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150125', N'武川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150200', N'包头市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150202', N'东河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150203', N'昆都仑区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150204', N'青山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150205', N'石拐区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150206', N'白云鄂博矿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150207', N'九原区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150221', N'土默特右旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150222', N'固阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150223', N'达尔罕茂明安联合旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150300', N'乌海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150302', N'海勃湾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150303', N'海南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150304', N'乌达区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150400', N'赤峰市')
GO
print 'Processed 400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150402', N'红山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150403', N'元宝山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150404', N'松山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150421', N'阿鲁科尔沁旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150422', N'巴林左旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150423', N'巴林右旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150424', N'林西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150425', N'克什克腾旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150426', N'翁牛特旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150428', N'喀喇沁旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150429', N'宁城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150430', N'敖汉旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150500', N'通辽市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150502', N'科尔沁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150521', N'科尔沁左翼中旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150522', N'科尔沁左翼后旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150523', N'开鲁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150524', N'库伦旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150525', N'奈曼旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150526', N'扎鲁特旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150581', N'霍林郭勒市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150600', N'鄂尔多斯市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150602', N'东胜区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150621', N'达拉特旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150622', N'准格尔旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150623', N'鄂托克前旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150624', N'鄂托克旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150625', N'杭锦旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150626', N'乌审旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150627', N'伊金霍洛旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150700', N'呼伦贝尔市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150702', N'海拉尔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150721', N'阿荣旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150722', N'莫力达瓦达斡尔族自治旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150723', N'鄂伦春自治旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150724', N'鄂温克族自治旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150725', N'陈巴尔虎旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150726', N'新巴尔虎左旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150727', N'新巴尔虎右旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150781', N'满洲里市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150782', N'牙克石市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150783', N'扎兰屯市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150784', N'额尔古纳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150785', N'根河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150800', N'巴彦淖尔市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150802', N'临河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150821', N'五原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150822', N'磴口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150823', N'乌拉特前旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150824', N'乌拉特中旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150825', N'乌拉特后旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150826', N'杭锦后旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150900', N'乌兰察布市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150902', N'集宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150921', N'卓资县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150922', N'化德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150923', N'商都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150924', N'兴和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150925', N'凉城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150926', N'察哈尔右翼前旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150927', N'察哈尔右翼中旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150928', N'察哈尔右翼后旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150929', N'四子王旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'150981', N'丰镇市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152200', N'兴安盟')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152201', N'乌兰浩特市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152202', N'阿尔山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152221', N'科尔沁右翼前旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152222', N'科尔沁右翼中旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152223', N'扎赉特旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152224', N'突泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152500', N'锡林郭勒盟')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152501', N'二连浩特市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152502', N'锡林浩特市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152522', N'阿巴嘎旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152523', N'苏尼特左旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152524', N'苏尼特右旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152525', N'东乌珠穆沁旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152526', N'西乌珠穆沁旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152527', N'太仆寺旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152528', N'镶黄旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152529', N'正镶白旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152530', N'正蓝旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152531', N'多伦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152900', N'阿拉善盟')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152921', N'阿拉善左旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152922', N'阿拉善右旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'152923', N'额济纳旗')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210000', N'辽宁省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210100', N'沈阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210102', N'和平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210103', N'沈河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210104', N'大东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210105', N'皇姑区')
GO
print 'Processed 500 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210106', N'铁西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210111', N'苏家屯区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210112', N'东陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210113', N'沈北新区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210114', N'于洪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210122', N'辽中县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210123', N'康平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210124', N'法库县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210181', N'新民市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210200', N'大连市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210202', N'中山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210203', N'西岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210204', N'沙河口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210211', N'甘井子区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210212', N'旅顺口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210213', N'金州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210224', N'长海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210281', N'瓦房店市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210282', N'普兰店市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210283', N'庄河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210300', N'鞍山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210302', N'铁东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210303', N'铁西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210304', N'立山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210311', N'千山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210321', N'台安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210323', N'岫岩满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210381', N'海城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210400', N'抚顺市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210402', N'新抚区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210403', N'东洲区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210404', N'望花区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210411', N'顺城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210421', N'抚顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210422', N'新宾满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210423', N'清原满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210500', N'本溪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210502', N'平山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210503', N'溪湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210504', N'明山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210505', N'南芬区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210521', N'本溪满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210522', N'桓仁满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210600', N'丹东市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210602', N'元宝区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210603', N'振兴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210604', N'振安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210624', N'宽甸满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210681', N'东港市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210682', N'凤城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210700', N'锦州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210702', N'古塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210703', N'凌河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210711', N'太和区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210726', N'黑山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210727', N'义县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210781', N'凌海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210782', N'北镇市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210800', N'营口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210802', N'站前区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210803', N'西市区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210804', N'鲅鱼圈区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210811', N'老边区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210881', N'盖州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210882', N'大石桥市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210900', N'阜新市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210902', N'海州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210903', N'新邱区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210904', N'太平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210905', N'清河门区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210911', N'细河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210921', N'阜新蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'210922', N'彰武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211000', N'辽阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211002', N'白塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211003', N'文圣区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211004', N'宏伟区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211005', N'弓长岭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211011', N'太子河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211021', N'辽阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211081', N'灯塔市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211100', N'盘锦市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211102', N'双台子区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211103', N'兴隆台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211121', N'大洼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211122', N'盘山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211200', N'铁岭市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211202', N'银州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211204', N'清河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211221', N'铁岭县')
GO
print 'Processed 600 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211223', N'西丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211224', N'昌图县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211281', N'调兵山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211282', N'开原市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211300', N'朝阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211302', N'双塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211303', N'龙城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211321', N'朝阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211322', N'建平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211324', N'喀喇沁左翼蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211381', N'北票市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211382', N'凌源市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211400', N'葫芦岛市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211402', N'连山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211403', N'龙港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211404', N'南票区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211421', N'绥中县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211422', N'建昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'211481', N'兴城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220000', N'吉林省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220100', N'长春市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220102', N'南关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220103', N'宽城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220104', N'朝阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220105', N'二道区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220106', N'绿园区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220112', N'双阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220122', N'农安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220181', N'九台市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220182', N'榆树市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220183', N'德惠市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220200', N'吉林市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220202', N'昌邑区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220203', N'龙潭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220204', N'船营区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220211', N'丰满区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220221', N'永吉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220281', N'蛟河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220282', N'桦甸市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220283', N'舒兰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220284', N'磐石市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220300', N'四平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220302', N'铁西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220303', N'铁东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220322', N'梨树县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220323', N'伊通满族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220381', N'公主岭市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220382', N'双辽市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220400', N'辽源市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220402', N'龙山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220403', N'西安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220421', N'东丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220422', N'东辽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220500', N'通化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220502', N'东昌区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220503', N'二道江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220521', N'通化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220523', N'辉南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220524', N'柳河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220581', N'梅河口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220582', N'集安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220600', N'白山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220602', N'浑江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220605', N'江源区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220621', N'抚松县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220622', N'靖宇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220623', N'长白朝鲜族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220681', N'临江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220700', N'松原市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220702', N'宁江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220721', N'前郭尔罗斯蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220722', N'长岭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220723', N'乾安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220724', N'扶余县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220800', N'白城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220802', N'洮北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220821', N'镇赉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220822', N'通榆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220881', N'洮南市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'220882', N'大安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222400', N'延边朝鲜族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222401', N'延吉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222402', N'图们市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222403', N'敦化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222404', N'珲春市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222405', N'龙井市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222406', N'和龙市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222424', N'汪清县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'222426', N'安图县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230000', N'黑龙江省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230100', N'哈尔滨市')
GO
print 'Processed 700 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230102', N'道里区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230103', N'南岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230104', N'道外区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230108', N'平房区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230109', N'松北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230110', N'香坊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230111', N'呼兰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230112', N'阿城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230123', N'依兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230124', N'方正县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230125', N'宾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230126', N'巴彦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230127', N'木兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230128', N'通河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230129', N'延寿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230182', N'双城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230183', N'尚志市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230184', N'五常市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230200', N'齐齐哈尔市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230202', N'龙沙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230203', N'建华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230204', N'铁锋区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230205', N'昂昂溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230206', N'富拉尔基区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230207', N'碾子山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230208', N'梅里斯达斡尔族区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230221', N'龙江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230223', N'依安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230224', N'泰来县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230225', N'甘南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230227', N'富裕县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230229', N'克山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230230', N'克东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230231', N'拜泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230281', N'讷河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230300', N'鸡西市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230302', N'鸡冠区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230303', N'恒山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230304', N'滴道区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230305', N'梨树区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230306', N'城子河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230307', N'麻山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230321', N'鸡东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230381', N'虎林市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230382', N'密山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230400', N'鹤岗市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230402', N'向阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230403', N'工农区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230404', N'南山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230405', N'兴安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230406', N'东山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230407', N'兴山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230421', N'萝北县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230422', N'绥滨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230500', N'双鸭山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230502', N'尖山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230503', N'岭东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230505', N'四方台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230506', N'宝山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230521', N'集贤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230522', N'友谊县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230523', N'宝清县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230524', N'饶河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230600', N'大庆市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230602', N'萨尔图区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230603', N'龙凤区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230604', N'让胡路区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230605', N'红岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230606', N'大同区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230621', N'肇州县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230622', N'肇源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230623', N'林甸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230624', N'杜尔伯特蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230700', N'伊春市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230702', N'伊春区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230703', N'南岔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230704', N'友好区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230705', N'西林区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230706', N'翠峦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230707', N'新青区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230708', N'美溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230709', N'金山屯区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230710', N'五营区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230711', N'乌马河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230712', N'汤旺河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230713', N'带岭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230714', N'乌伊岭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230715', N'红星区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230716', N'上甘岭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230722', N'嘉荫县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230781', N'铁力市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230800', N'佳木斯市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230803', N'向阳区')
GO
print 'Processed 800 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230804', N'前进区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230805', N'东风区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230811', N'郊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230822', N'桦南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230826', N'桦川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230828', N'汤原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230833', N'抚远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230881', N'同江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230882', N'富锦市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230900', N'七台河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230902', N'新兴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230903', N'桃山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230904', N'茄子河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'230921', N'勃利县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231000', N'牡丹江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231002', N'东安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231003', N'阳明区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231004', N'爱民区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231005', N'西安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231024', N'东宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231025', N'林口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231081', N'绥芬河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231083', N'海林市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231084', N'宁安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231085', N'穆棱市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231100', N'黑河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231102', N'爱辉区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231121', N'嫩江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231123', N'逊克县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231124', N'孙吴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231181', N'北安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231182', N'五大连池市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231200', N'绥化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231202', N'北林区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231221', N'望奎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231222', N'兰西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231223', N'青冈县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231224', N'庆安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231225', N'明水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231226', N'绥棱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231281', N'安达市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231282', N'肇东市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'231283', N'海伦市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232700', N'大兴安岭地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232721', N'呼玛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232722', N'塔河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'232723', N'漠河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310000', N'上海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310100', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310101', N'黄浦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310104', N'徐汇区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310105', N'长宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310106', N'静安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310107', N'普陀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310108', N'闸北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310109', N'虹口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310110', N'杨浦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310112', N'闵行区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310113', N'宝山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310114', N'嘉定区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310115', N'浦东新区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310116', N'金山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310117', N'松江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310118', N'青浦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310120', N'奉贤区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310200', N'县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'310230', N'崇明县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320000', N'江苏省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320100', N'南京市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320102', N'玄武区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320103', N'白下区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320104', N'秦淮区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320105', N'建邺区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320106', N'鼓楼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320107', N'下关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320111', N'浦口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320113', N'栖霞区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320114', N'雨花台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320115', N'江宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320116', N'六合区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320124', N'溧水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320125', N'高淳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320200', N'无锡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320202', N'崇安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320203', N'南长区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320204', N'北塘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320205', N'锡山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320206', N'惠山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320211', N'滨湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320281', N'江阴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320282', N'宜兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320300', N'徐州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320302', N'鼓楼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320303', N'云龙区')
GO
print 'Processed 900 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320305', N'贾汪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320311', N'泉山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320312', N'铜山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320321', N'丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320322', N'沛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320324', N'睢宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320381', N'新沂市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320382', N'邳州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320400', N'常州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320402', N'天宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320404', N'钟楼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320405', N'戚墅堰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320411', N'新北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320412', N'武进区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320481', N'溧阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320482', N'金坛市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320500', N'苏州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320505', N'虎丘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320506', N'吴中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320507', N'相城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320508', N'姑苏区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320509', N'吴江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320581', N'常熟市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320582', N'张家港市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320583', N'昆山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320585', N'太仓市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320600', N'南通市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320602', N'崇川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320611', N'港闸区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320612', N'通州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320621', N'海安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320623', N'如东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320681', N'启东市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320682', N'如皋市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320684', N'海门市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320700', N'连云港市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320703', N'连云区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320705', N'新浦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320706', N'海州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320721', N'赣榆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320722', N'东海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320723', N'灌云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320724', N'灌南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320800', N'淮安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320802', N'清河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320803', N'淮安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320804', N'淮阴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320811', N'清浦区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320826', N'涟水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320829', N'洪泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320830', N'盱眙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320831', N'金湖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320900', N'盐城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320902', N'亭湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320903', N'盐都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320921', N'响水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320922', N'滨海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320923', N'阜宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320924', N'射阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320925', N'建湖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320981', N'东台市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'320982', N'大丰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321000', N'扬州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321002', N'广陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321003', N'邗江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321012', N'江都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321023', N'宝应县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321081', N'仪征市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321084', N'高邮市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321100', N'镇江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321102', N'京口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321111', N'润州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321112', N'丹徒区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321181', N'丹阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321182', N'扬中市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321183', N'句容市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321200', N'泰州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321202', N'海陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321203', N'高港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321281', N'兴化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321282', N'靖江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321283', N'泰兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321284', N'姜堰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321300', N'宿迁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321302', N'宿城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321311', N'宿豫区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321322', N'沭阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321323', N'泗阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'321324', N'泗洪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330000', N'浙江省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330100', N'杭州市')
GO
print 'Processed 1000 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330102', N'上城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330103', N'下城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330104', N'江干区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330105', N'拱墅区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330106', N'西湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330108', N'滨江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330109', N'萧山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330110', N'余杭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330122', N'桐庐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330127', N'淳安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330182', N'建德市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330183', N'富阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330185', N'临安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330200', N'宁波市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330203', N'海曙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330204', N'江东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330205', N'江北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330206', N'北仑区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330211', N'镇海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330212', N'鄞州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330225', N'象山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330226', N'宁海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330281', N'余姚市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330282', N'慈溪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330283', N'奉化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330300', N'温州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330302', N'鹿城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330303', N'龙湾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330304', N'瓯海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330322', N'洞头县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330324', N'永嘉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330326', N'平阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330327', N'苍南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330328', N'文成县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330329', N'泰顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330381', N'瑞安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330382', N'乐清市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330400', N'嘉兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330402', N'南湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330411', N'秀洲区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330421', N'嘉善县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330424', N'海盐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330481', N'海宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330482', N'平湖市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330483', N'桐乡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330500', N'湖州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330502', N'吴兴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330503', N'南浔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330521', N'德清县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330522', N'长兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330523', N'安吉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330600', N'绍兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330602', N'越城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330621', N'绍兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330624', N'新昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330681', N'诸暨市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330682', N'上虞市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330683', N'嵊州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330700', N'金华市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330702', N'婺城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330703', N'金东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330723', N'武义县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330726', N'浦江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330727', N'磐安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330781', N'兰溪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330782', N'义乌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330783', N'东阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330784', N'永康市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330800', N'衢州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330802', N'柯城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330803', N'衢江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330822', N'常山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330824', N'开化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330825', N'龙游县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330881', N'江山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330900', N'舟山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330902', N'定海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330903', N'普陀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330921', N'岱山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'330922', N'嵊泗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331000', N'台州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331002', N'椒江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331003', N'黄岩区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331004', N'路桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331021', N'玉环县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331022', N'三门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331023', N'天台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331024', N'仙居县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331081', N'温岭市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331082', N'临海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331100', N'丽水市')
GO
print 'Processed 1100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331102', N'莲都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331121', N'青田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331122', N'缙云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331123', N'遂昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331124', N'松阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331125', N'云和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331126', N'庆元县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331127', N'景宁畲族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'331181', N'龙泉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340000', N'安徽省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340100', N'合肥市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340102', N'瑶海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340103', N'庐阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340104', N'蜀山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340111', N'包河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340121', N'长丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340122', N'肥东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340123', N'肥西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340124', N'庐江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340181', N'巢湖市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340200', N'芜湖市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340202', N'镜湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340203', N'弋江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340207', N'鸠江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340208', N'三山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340221', N'芜湖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340222', N'繁昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340223', N'南陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340225', N'无为县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340300', N'蚌埠市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340302', N'龙子湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340303', N'蚌山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340304', N'禹会区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340311', N'淮上区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340321', N'怀远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340322', N'五河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340323', N'固镇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340400', N'淮南市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340402', N'大通区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340403', N'田家庵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340404', N'谢家集区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340405', N'八公山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340406', N'潘集区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340421', N'凤台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340500', N'马鞍山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340503', N'花山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340504', N'雨山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340506', N'博望区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340521', N'当涂县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340522', N'含山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340523', N'和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340600', N'淮北市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340602', N'杜集区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340603', N'相山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340604', N'烈山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340621', N'濉溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340700', N'铜陵市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340702', N'铜官山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340703', N'狮子山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340711', N'郊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340721', N'铜陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340800', N'安庆市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340802', N'迎江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340803', N'大观区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340811', N'宜秀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340822', N'怀宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340823', N'枞阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340824', N'潜山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340825', N'太湖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340826', N'宿松县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340827', N'望江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340828', N'岳西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'340881', N'桐城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341000', N'黄山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341002', N'屯溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341003', N'黄山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341004', N'徽州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341021', N'歙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341022', N'休宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341023', N'黟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341024', N'祁门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341100', N'滁州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341102', N'琅琊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341103', N'南谯区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341122', N'来安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341124', N'全椒县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341125', N'定远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341126', N'凤阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341181', N'天长市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341182', N'明光市')
GO
print 'Processed 1200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341200', N'阜阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341202', N'颍州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341203', N'颍东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341204', N'颍泉区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341221', N'临泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341222', N'太和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341225', N'阜南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341226', N'颍上县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341282', N'界首市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341300', N'宿州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341302', N'埇桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341321', N'砀山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341322', N'萧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341323', N'灵璧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341324', N'泗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341500', N'六安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341502', N'金安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341503', N'裕安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341521', N'寿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341522', N'霍邱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341523', N'舒城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341524', N'金寨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341525', N'霍山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341600', N'亳州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341602', N'谯城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341621', N'涡阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341622', N'蒙城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341623', N'利辛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341700', N'池州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341702', N'贵池区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341721', N'东至县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341722', N'石台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341723', N'青阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341800', N'宣城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341802', N'宣州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341821', N'郎溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341822', N'广德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341823', N'泾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341824', N'绩溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341825', N'旌德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'341881', N'宁国市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350000', N'福建省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350100', N'福州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350102', N'鼓楼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350103', N'台江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350104', N'仓山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350105', N'马尾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350111', N'晋安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350121', N'闽侯县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350122', N'连江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350123', N'罗源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350124', N'闽清县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350125', N'永泰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350128', N'平潭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350181', N'福清市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350182', N'长乐市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350200', N'厦门市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350203', N'思明区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350205', N'海沧区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350206', N'湖里区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350211', N'集美区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350212', N'同安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350213', N'翔安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350300', N'莆田市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350302', N'城厢区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350303', N'涵江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350304', N'荔城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350305', N'秀屿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350322', N'仙游县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350400', N'三明市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350402', N'梅列区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350403', N'三元区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350421', N'明溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350423', N'清流县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350424', N'宁化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350425', N'大田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350426', N'尤溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350427', N'沙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350428', N'将乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350429', N'泰宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350430', N'建宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350481', N'永安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350500', N'泉州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350502', N'鲤城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350503', N'丰泽区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350504', N'洛江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350505', N'泉港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350521', N'惠安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350524', N'安溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350525', N'永春县')
GO
print 'Processed 1300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350526', N'德化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350527', N'金门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350581', N'石狮市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350582', N'晋江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350583', N'南安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350600', N'漳州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350602', N'芗城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350603', N'龙文区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350622', N'云霄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350623', N'漳浦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350624', N'诏安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350625', N'长泰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350626', N'东山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350627', N'南靖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350628', N'平和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350629', N'华安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350681', N'龙海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350700', N'南平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350702', N'延平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350721', N'顺昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350722', N'浦城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350723', N'光泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350724', N'松溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350725', N'政和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350781', N'邵武市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350782', N'武夷山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350783', N'建瓯市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350784', N'建阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350800', N'龙岩市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350802', N'新罗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350821', N'长汀县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350822', N'永定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350823', N'上杭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350824', N'武平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350825', N'连城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350881', N'漳平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350900', N'宁德市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350902', N'蕉城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350921', N'霞浦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350922', N'古田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350923', N'屏南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350924', N'寿宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350925', N'周宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350926', N'柘荣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350981', N'福安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'350982', N'福鼎市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360000', N'江西省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360100', N'南昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360102', N'东湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360103', N'西湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360104', N'青云谱区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360105', N'湾里区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360111', N'青山湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360121', N'南昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360122', N'新建县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360123', N'安义县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360124', N'进贤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360200', N'景德镇市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360202', N'昌江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360203', N'珠山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360222', N'浮梁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360281', N'乐平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360300', N'萍乡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360302', N'安源区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360313', N'湘东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360321', N'莲花县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360322', N'上栗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360323', N'芦溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360400', N'九江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360402', N'庐山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360403', N'浔阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360421', N'九江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360423', N'武宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360424', N'修水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360425', N'永修县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360426', N'德安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360427', N'星子县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360428', N'都昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360429', N'湖口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360430', N'彭泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360481', N'瑞昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360482', N'共青城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360500', N'新余市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360502', N'渝水区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360521', N'分宜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360600', N'鹰潭市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360602', N'月湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360622', N'余江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360681', N'贵溪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360700', N'赣州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360701', N'市辖区')
GO
print 'Processed 1400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360702', N'章贡区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360721', N'赣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360722', N'信丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360723', N'大余县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360724', N'上犹县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360725', N'崇义县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360726', N'安远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360727', N'龙南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360728', N'定南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360729', N'全南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360730', N'宁都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360731', N'于都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360732', N'兴国县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360733', N'会昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360734', N'寻乌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360735', N'石城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360781', N'瑞金市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360782', N'南康市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360800', N'吉安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360802', N'吉州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360803', N'青原区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360821', N'吉安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360822', N'吉水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360823', N'峡江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360824', N'新干县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360825', N'永丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360826', N'泰和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360827', N'遂川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360828', N'万安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360829', N'安福县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360830', N'永新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360881', N'井冈山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360900', N'宜春市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360902', N'袁州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360921', N'奉新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360922', N'万载县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360923', N'上高县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360924', N'宜丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360925', N'靖安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360926', N'铜鼓县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360981', N'丰城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360982', N'樟树市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'360983', N'高安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361000', N'抚州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361002', N'临川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361021', N'南城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361022', N'黎川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361023', N'南丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361024', N'崇仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361025', N'乐安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361026', N'宜黄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361027', N'金溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361028', N'资溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361029', N'东乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361030', N'广昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361100', N'上饶市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361102', N'信州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361121', N'上饶县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361122', N'广丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361123', N'玉山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361124', N'铅山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361125', N'横峰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361126', N'弋阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361127', N'余干县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361128', N'鄱阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361129', N'万年县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361130', N'婺源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'361181', N'德兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370000', N'山东省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370100', N'济南市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370102', N'历下区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370103', N'市中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370104', N'槐荫区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370105', N'天桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370112', N'历城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370113', N'长清区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370124', N'平阴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370125', N'济阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370126', N'商河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370181', N'章丘市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370200', N'青岛市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370202', N'市南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370203', N'市北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370205', N'四方区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370211', N'黄岛区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370212', N'崂山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370213', N'李沧区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370214', N'城阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370281', N'胶州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370282', N'即墨市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370283', N'平度市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370284', N'胶南市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370285', N'莱西市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370300', N'淄博市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370301', N'市辖区')
GO
print 'Processed 1500 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370302', N'淄川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370303', N'张店区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370304', N'博山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370305', N'临淄区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370306', N'周村区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370321', N'桓台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370322', N'高青县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370323', N'沂源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370400', N'枣庄市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370402', N'市中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370403', N'薛城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370404', N'峄城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370405', N'台儿庄区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370406', N'山亭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370481', N'滕州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370500', N'东营市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370502', N'东营区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370503', N'河口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370521', N'垦利县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370522', N'利津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370523', N'广饶县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370600', N'烟台市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370602', N'芝罘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370611', N'福山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370612', N'牟平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370613', N'莱山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370634', N'长岛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370681', N'龙口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370682', N'莱阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370683', N'莱州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370684', N'蓬莱市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370685', N'招远市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370686', N'栖霞市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370687', N'海阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370700', N'潍坊市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370702', N'潍城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370703', N'寒亭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370704', N'坊子区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370705', N'奎文区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370724', N'临朐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370725', N'昌乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370781', N'青州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370782', N'诸城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370783', N'寿光市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370784', N'安丘市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370785', N'高密市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370786', N'昌邑市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370800', N'济宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370802', N'市中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370811', N'任城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370826', N'微山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370827', N'鱼台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370828', N'金乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370829', N'嘉祥县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370830', N'汶上县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370831', N'泗水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370832', N'梁山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370881', N'曲阜市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370882', N'兖州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370883', N'邹城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370900', N'泰安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370902', N'泰山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370911', N'岱岳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370921', N'宁阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370923', N'东平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370982', N'新泰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'370983', N'肥城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371000', N'威海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371002', N'环翠区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371081', N'文登市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371082', N'荣成市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371083', N'乳山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371100', N'日照市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371102', N'东港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371103', N'岚山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371121', N'五莲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371122', N'莒县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371200', N'莱芜市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371202', N'莱城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371203', N'钢城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371300', N'临沂市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371302', N'兰山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371311', N'罗庄区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371312', N'河东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371321', N'沂南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371322', N'郯城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371323', N'沂水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371324', N'苍山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371325', N'费县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371326', N'平邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371327', N'莒南县')
GO
print 'Processed 1600 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371328', N'蒙阴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371329', N'临沭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371400', N'德州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371402', N'德城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371421', N'陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371422', N'宁津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371423', N'庆云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371424', N'临邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371425', N'齐河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371426', N'平原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371427', N'夏津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371428', N'武城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371481', N'乐陵市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371482', N'禹城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371500', N'聊城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371502', N'东昌府区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371521', N'阳谷县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371522', N'莘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371523', N'茌平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371524', N'东阿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371525', N'冠县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371526', N'高唐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371581', N'临清市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371600', N'滨州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371602', N'滨城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371621', N'惠民县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371622', N'阳信县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371623', N'无棣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371624', N'沾化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371625', N'博兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371626', N'邹平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371700', N'菏泽市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371702', N'牡丹区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371721', N'曹县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371722', N'单县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371723', N'成武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371724', N'巨野县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371725', N'郓城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371726', N'鄄城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371727', N'定陶县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'371728', N'东明县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410000', N'河南省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410100', N'郑州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410102', N'中原区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410103', N'二七区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410104', N'管城回族区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410105', N'金水区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410106', N'上街区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410108', N'惠济区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410122', N'中牟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410181', N'巩义市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410182', N'荥阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410183', N'新密市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410184', N'新郑市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410185', N'登封市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410200', N'开封市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410202', N'龙亭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410203', N'顺河回族区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410204', N'鼓楼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410205', N'禹王台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410211', N'金明区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410221', N'杞县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410222', N'通许县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410223', N'尉氏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410224', N'开封县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410225', N'兰考县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410300', N'洛阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410302', N'老城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410303', N'西工区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410304', N'瀍河回族区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410305', N'涧西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410306', N'吉利区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410311', N'洛龙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410322', N'孟津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410323', N'新安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410324', N'栾川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410325', N'嵩县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410326', N'汝阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410327', N'宜阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410328', N'洛宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410329', N'伊川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410381', N'偃师市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410400', N'平顶山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410402', N'新华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410403', N'卫东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410404', N'石龙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410411', N'湛河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410421', N'宝丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410422', N'叶县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410423', N'鲁山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410425', N'郏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410481', N'舞钢市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410482', N'汝州市')
GO
print 'Processed 1700 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410500', N'安阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410502', N'文峰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410503', N'北关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410505', N'殷都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410506', N'龙安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410522', N'安阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410523', N'汤阴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410526', N'滑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410527', N'内黄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410581', N'林州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410600', N'鹤壁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410602', N'鹤山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410603', N'山城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410611', N'淇滨区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410621', N'浚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410622', N'淇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410700', N'新乡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410702', N'红旗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410703', N'卫滨区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410704', N'凤泉区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410711', N'牧野区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410721', N'新乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410724', N'获嘉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410725', N'原阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410726', N'延津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410727', N'封丘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410728', N'长垣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410781', N'卫辉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410782', N'辉县市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410800', N'焦作市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410802', N'解放区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410803', N'中站区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410804', N'马村区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410811', N'山阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410821', N'修武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410822', N'博爱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410823', N'武陟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410825', N'温县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410882', N'沁阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410883', N'孟州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410900', N'濮阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410902', N'华龙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410922', N'清丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410923', N'南乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410926', N'范县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410927', N'台前县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'410928', N'濮阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411000', N'许昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411002', N'魏都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411023', N'许昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411024', N'鄢陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411025', N'襄城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411081', N'禹州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411082', N'长葛市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411100', N'漯河市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411102', N'源汇区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411103', N'郾城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411104', N'召陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411121', N'舞阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411122', N'临颍县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411200', N'三门峡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411202', N'湖滨区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411221', N'渑池县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411222', N'陕县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411224', N'卢氏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411281', N'义马市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411282', N'灵宝市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411300', N'南阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411302', N'宛城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411303', N'卧龙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411321', N'南召县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411322', N'方城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411323', N'西峡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411324', N'镇平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411325', N'内乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411326', N'淅川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411327', N'社旗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411328', N'唐河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411329', N'新野县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411330', N'桐柏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411381', N'邓州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411400', N'商丘市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411402', N'梁园区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411403', N'睢阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411421', N'民权县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411422', N'睢县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411423', N'宁陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411424', N'柘城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411425', N'虞城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411426', N'夏邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411481', N'永城市')
GO
print 'Processed 1800 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411500', N'信阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411502', N'浉河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411503', N'平桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411521', N'罗山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411522', N'光山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411523', N'新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411524', N'商城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411525', N'固始县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411526', N'潢川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411527', N'淮滨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411528', N'息县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411600', N'周口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411602', N'川汇区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411621', N'扶沟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411622', N'西华县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411623', N'商水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411624', N'沈丘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411625', N'郸城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411626', N'淮阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411627', N'太康县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411628', N'鹿邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411681', N'项城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411700', N'驻马店市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411702', N'驿城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411721', N'西平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411722', N'上蔡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411723', N'平舆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411724', N'正阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411725', N'确山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411726', N'泌阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411727', N'汝南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411728', N'遂平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'411729', N'新蔡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'419000', N'省直辖县级行政区划')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'419001', N'济源市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420000', N'湖北省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420100', N'武汉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420102', N'江岸区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420103', N'江汉区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420104', N'硚口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420105', N'汉阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420106', N'武昌区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420107', N'青山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420111', N'洪山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420112', N'东西湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420113', N'汉南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420114', N'蔡甸区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420115', N'江夏区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420116', N'黄陂区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420117', N'新洲区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420200', N'黄石市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420202', N'黄石港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420203', N'西塞山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420204', N'下陆区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420205', N'铁山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420222', N'阳新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420281', N'大冶市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420300', N'十堰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420302', N'茅箭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420303', N'张湾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420321', N'郧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420322', N'郧西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420323', N'竹山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420324', N'竹溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420325', N'房县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420381', N'丹江口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420500', N'宜昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420502', N'西陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420503', N'伍家岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420504', N'点军区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420505', N'猇亭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420506', N'夷陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420525', N'远安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420526', N'兴山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420527', N'秭归县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420528', N'长阳土家族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420529', N'五峰土家族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420581', N'宜都市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420582', N'当阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420583', N'枝江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420600', N'襄阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420602', N'襄城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420606', N'樊城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420607', N'襄州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420624', N'南漳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420625', N'谷城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420626', N'保康县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420682', N'老河口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420683', N'枣阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420684', N'宜城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420700', N'鄂州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420702', N'梁子湖区')
GO
print 'Processed 1900 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420703', N'华容区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420704', N'鄂城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420800', N'荆门市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420802', N'东宝区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420804', N'掇刀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420821', N'京山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420822', N'沙洋县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420881', N'钟祥市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420900', N'孝感市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420902', N'孝南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420921', N'孝昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420922', N'大悟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420923', N'云梦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420981', N'应城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420982', N'安陆市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'420984', N'汉川市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421000', N'荆州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421002', N'沙市区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421003', N'荆州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421022', N'公安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421023', N'监利县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421024', N'江陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421081', N'石首市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421083', N'洪湖市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421087', N'松滋市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421100', N'黄冈市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421102', N'黄州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421121', N'团风县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421122', N'红安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421123', N'罗田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421124', N'英山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421125', N'浠水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421126', N'蕲春县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421127', N'黄梅县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421181', N'麻城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421182', N'武穴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421200', N'咸宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421202', N'咸安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421221', N'嘉鱼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421222', N'通城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421223', N'崇阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421224', N'通山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421281', N'赤壁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421300', N'随州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421303', N'曾都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421321', N'随县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'421381', N'广水市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422800', N'恩施土家族苗族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422801', N'恩施市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422802', N'利川市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422822', N'建始县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422823', N'巴东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422825', N'宣恩县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422826', N'咸丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422827', N'来凤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'422828', N'鹤峰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429000', N'省直辖县级行政区划')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429004', N'仙桃市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429005', N'潜江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429006', N'天门市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'429021', N'神农架林区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430000', N'湖南省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430100', N'长沙市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430102', N'芙蓉区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430103', N'天心区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430104', N'岳麓区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430105', N'开福区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430111', N'雨花区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430112', N'望城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430121', N'长沙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430124', N'宁乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430181', N'浏阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430200', N'株洲市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430202', N'荷塘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430203', N'芦淞区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430204', N'石峰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430211', N'天元区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430221', N'株洲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430223', N'攸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430224', N'茶陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430225', N'炎陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430281', N'醴陵市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430300', N'湘潭市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430302', N'雨湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430304', N'岳塘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430321', N'湘潭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430381', N'湘乡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430382', N'韶山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430400', N'衡阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430405', N'珠晖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430406', N'雁峰区')
GO
print 'Processed 2000 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430407', N'石鼓区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430408', N'蒸湘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430412', N'南岳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430421', N'衡阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430422', N'衡南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430423', N'衡山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430424', N'衡东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430426', N'祁东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430481', N'耒阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430482', N'常宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430500', N'邵阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430502', N'双清区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430503', N'大祥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430511', N'北塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430521', N'邵东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430522', N'新邵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430523', N'邵阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430524', N'隆回县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430525', N'洞口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430527', N'绥宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430528', N'新宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430529', N'城步苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430581', N'武冈市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430600', N'岳阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430602', N'岳阳楼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430603', N'云溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430611', N'君山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430621', N'岳阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430623', N'华容县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430624', N'湘阴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430626', N'平江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430681', N'汨罗市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430682', N'临湘市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430700', N'常德市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430702', N'武陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430703', N'鼎城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430721', N'安乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430722', N'汉寿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430723', N'澧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430724', N'临澧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430725', N'桃源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430726', N'石门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430781', N'津市市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430800', N'张家界市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430802', N'永定区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430811', N'武陵源区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430821', N'慈利县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430822', N'桑植县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430900', N'益阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430902', N'资阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430903', N'赫山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430921', N'南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430922', N'桃江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430923', N'安化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'430981', N'沅江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431000', N'郴州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431002', N'北湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431003', N'苏仙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431021', N'桂阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431022', N'宜章县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431023', N'永兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431024', N'嘉禾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431025', N'临武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431026', N'汝城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431027', N'桂东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431028', N'安仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431081', N'资兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431100', N'永州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431102', N'零陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431103', N'冷水滩区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431121', N'祁阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431122', N'东安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431123', N'双牌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431124', N'道县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431125', N'江永县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431126', N'宁远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431127', N'蓝山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431128', N'新田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431129', N'江华瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431200', N'怀化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431202', N'鹤城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431221', N'中方县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431222', N'沅陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431223', N'辰溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431224', N'溆浦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431225', N'会同县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431226', N'麻阳苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431227', N'新晃侗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431228', N'芷江侗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431229', N'靖州苗族侗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431230', N'通道侗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431281', N'洪江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431300', N'娄底市')
GO
print 'Processed 2100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431302', N'娄星区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431321', N'双峰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431322', N'新化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431381', N'冷水江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'431382', N'涟源市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433100', N'湘西土家族苗族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433101', N'吉首市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433122', N'泸溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433123', N'凤凰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433124', N'花垣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433125', N'保靖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433126', N'古丈县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433127', N'永顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'433130', N'龙山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440000', N'广东省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440100', N'广州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440103', N'荔湾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440104', N'越秀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440105', N'海珠区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440106', N'天河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440111', N'白云区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440112', N'黄埔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440113', N'番禺区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440114', N'花都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440115', N'南沙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440116', N'萝岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440183', N'增城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440184', N'从化市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440200', N'韶关市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440203', N'武江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440204', N'浈江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440205', N'曲江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440222', N'始兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440224', N'仁化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440229', N'翁源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440232', N'乳源瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440233', N'新丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440281', N'乐昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440282', N'南雄市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440300', N'深圳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440303', N'罗湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440304', N'福田区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440305', N'南山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440306', N'宝安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440307', N'龙岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440308', N'盐田区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440400', N'珠海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440402', N'香洲区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440403', N'斗门区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440404', N'金湾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440500', N'汕头市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440507', N'龙湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440511', N'金平区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440512', N'濠江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440513', N'潮阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440514', N'潮南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440515', N'澄海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440523', N'南澳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440600', N'佛山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440604', N'禅城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440605', N'南海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440606', N'顺德区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440607', N'三水区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440608', N'高明区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440700', N'江门市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440703', N'蓬江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440704', N'江海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440705', N'新会区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440781', N'台山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440783', N'开平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440784', N'鹤山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440785', N'恩平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440800', N'湛江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440802', N'赤坎区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440803', N'霞山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440804', N'坡头区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440811', N'麻章区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440823', N'遂溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440825', N'徐闻县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440881', N'廉江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440882', N'雷州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440883', N'吴川市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440900', N'茂名市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440902', N'茂南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440903', N'茂港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440923', N'电白县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440981', N'高州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440982', N'化州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'440983', N'信宜市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441200', N'肇庆市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441201', N'市辖区')
GO
print 'Processed 2200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441202', N'端州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441203', N'鼎湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441223', N'广宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441224', N'怀集县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441225', N'封开县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441226', N'德庆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441283', N'高要市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441284', N'四会市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441300', N'惠州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441302', N'惠城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441303', N'惠阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441322', N'博罗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441323', N'惠东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441324', N'龙门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441400', N'梅州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441402', N'梅江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441421', N'梅县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441422', N'大埔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441423', N'丰顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441424', N'五华县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441426', N'平远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441427', N'蕉岭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441481', N'兴宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441500', N'汕尾市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441502', N'城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441521', N'海丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441523', N'陆河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441581', N'陆丰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441600', N'河源市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441602', N'源城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441621', N'紫金县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441622', N'龙川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441623', N'连平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441624', N'和平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441625', N'东源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441700', N'阳江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441702', N'江城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441721', N'阳西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441723', N'阳东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441781', N'阳春市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441800', N'清远市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441802', N'清城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441821', N'佛冈县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441823', N'阳山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441825', N'连山壮族瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441826', N'连南瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441827', N'清新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441881', N'英德市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441882', N'连州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'441900', N'东莞市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'442000', N'中山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445100', N'潮州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445102', N'湘桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445121', N'潮安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445122', N'饶平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445200', N'揭阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445202', N'榕城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445221', N'揭东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445222', N'揭西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445224', N'惠来县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445281', N'普宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445300', N'云浮市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445302', N'云城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445321', N'新兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445322', N'郁南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445323', N'云安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'445381', N'罗定市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450000', N'广西壮族自治区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450100', N'南宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450102', N'兴宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450103', N'青秀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450105', N'江南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450107', N'西乡塘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450108', N'良庆区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450109', N'邕宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450122', N'武鸣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450123', N'隆安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450124', N'马山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450125', N'上林县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450126', N'宾阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450127', N'横县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450200', N'柳州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450202', N'城中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450203', N'鱼峰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450204', N'柳南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450205', N'柳北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450221', N'柳江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450222', N'柳城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450223', N'鹿寨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450224', N'融安县')
GO
print 'Processed 2300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450225', N'融水苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450226', N'三江侗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450300', N'桂林市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450302', N'秀峰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450303', N'叠彩区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450304', N'象山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450305', N'七星区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450311', N'雁山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450321', N'阳朔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450322', N'临桂县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450323', N'灵川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450324', N'全州县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450325', N'兴安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450326', N'永福县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450327', N'灌阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450328', N'龙胜各族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450329', N'资源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450330', N'平乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450331', N'荔浦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450332', N'恭城瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450400', N'梧州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450403', N'万秀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450404', N'蝶山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450405', N'长洲区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450421', N'苍梧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450422', N'藤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450423', N'蒙山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450481', N'岑溪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450500', N'北海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450502', N'海城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450503', N'银海区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450512', N'铁山港区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450521', N'合浦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450600', N'防城港市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450602', N'港口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450603', N'防城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450621', N'上思县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450681', N'东兴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450700', N'钦州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450702', N'钦南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450703', N'钦北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450721', N'灵山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450722', N'浦北县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450800', N'贵港市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450802', N'港北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450803', N'港南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450804', N'覃塘区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450821', N'平南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450881', N'桂平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450900', N'玉林市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450902', N'玉州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450921', N'容县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450922', N'陆川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450923', N'博白县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450924', N'兴业县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'450981', N'北流市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451000', N'百色市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451002', N'右江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451021', N'田阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451022', N'田东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451023', N'平果县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451024', N'德保县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451025', N'靖西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451026', N'那坡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451027', N'凌云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451028', N'乐业县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451029', N'田林县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451030', N'西林县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451031', N'隆林各族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451100', N'贺州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451102', N'八步区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451121', N'昭平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451122', N'钟山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451123', N'富川瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451200', N'河池市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451202', N'金城江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451221', N'南丹县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451222', N'天峨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451223', N'凤山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451224', N'东兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451225', N'罗城仫佬族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451226', N'环江毛南族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451227', N'巴马瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451228', N'都安瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451229', N'大化瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451281', N'宜州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451300', N'来宾市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451302', N'兴宾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451321', N'忻城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451322', N'象州县')
GO
print 'Processed 2400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451323', N'武宣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451324', N'金秀瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451381', N'合山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451400', N'崇左市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451402', N'江洲区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451421', N'扶绥县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451422', N'宁明县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451423', N'龙州县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451424', N'大新县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451425', N'天等县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'451481', N'凭祥市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460000', N'海南省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460100', N'海口市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460105', N'秀英区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460106', N'龙华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460107', N'琼山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460108', N'美兰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460200', N'三亚市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460300', N'三沙市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460321', N'西沙群岛')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460322', N'南沙群岛')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'460323', N'中沙群岛的岛礁及其海域')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469000', N'省直辖县级行政区划')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469001', N'五指山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469002', N'琼海市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469003', N'儋州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469005', N'文昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469006', N'万宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469007', N'东方市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469021', N'定安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469022', N'屯昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469023', N'澄迈县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469024', N'临高县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469025', N'白沙黎族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469026', N'昌江黎族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469027', N'乐东黎族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469028', N'陵水黎族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469029', N'保亭黎族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'469030', N'琼中黎族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500000', N'重庆市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500100', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500101', N'万州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500102', N'涪陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500103', N'渝中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500104', N'大渡口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500105', N'江北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500106', N'沙坪坝区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500107', N'九龙坡区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500108', N'南岸区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500109', N'北碚区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500110', N'綦江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500111', N'大足区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500112', N'渝北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500113', N'巴南区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500114', N'黔江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500115', N'长寿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500116', N'江津区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500117', N'合川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500118', N'永川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500119', N'南川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500200', N'县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500223', N'潼南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500224', N'铜梁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500226', N'荣昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500227', N'璧山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500228', N'梁平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500229', N'城口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500230', N'丰都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500231', N'垫江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500232', N'武隆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500233', N'忠县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500234', N'开县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500235', N'云阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500236', N'奉节县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500237', N'巫山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500238', N'巫溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500240', N'石柱土家族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500241', N'秀山土家族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500242', N'酉阳土家族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'500243', N'彭水苗族土家族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510000', N'四川省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510100', N'成都市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510104', N'锦江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510105', N'青羊区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510106', N'金牛区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510107', N'武侯区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510108', N'成华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510112', N'龙泉驿区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510113', N'青白江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510114', N'新都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510115', N'温江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510121', N'金堂县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510122', N'双流县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510124', N'郫县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510129', N'大邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510131', N'蒲江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510132', N'新津县')
GO
print 'Processed 2500 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510181', N'都江堰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510182', N'彭州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510183', N'邛崃市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510184', N'崇州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510300', N'自贡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510302', N'自流井区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510303', N'贡井区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510304', N'大安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510311', N'沿滩区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510321', N'荣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510322', N'富顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510400', N'攀枝花市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510402', N'东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510403', N'西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510411', N'仁和区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510421', N'米易县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510422', N'盐边县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510500', N'泸州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510502', N'江阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510503', N'纳溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510504', N'龙马潭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510521', N'泸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510522', N'合江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510524', N'叙永县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510525', N'古蔺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510600', N'德阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510603', N'旌阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510623', N'中江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510626', N'罗江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510681', N'广汉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510682', N'什邡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510683', N'绵竹市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510700', N'绵阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510703', N'涪城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510704', N'游仙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510722', N'三台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510723', N'盐亭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510724', N'安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510725', N'梓潼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510726', N'北川羌族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510727', N'平武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510781', N'江油市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510800', N'广元市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510802', N'利州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510811', N'元坝区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510812', N'朝天区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510821', N'旺苍县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510822', N'青川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510823', N'剑阁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510824', N'苍溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510900', N'遂宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510903', N'船山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510904', N'安居区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510921', N'蓬溪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510922', N'射洪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'510923', N'大英县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511000', N'内江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511002', N'市中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511011', N'东兴区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511024', N'威远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511025', N'资中县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511028', N'隆昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511100', N'乐山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511102', N'市中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511111', N'沙湾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511112', N'五通桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511113', N'金口河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511123', N'犍为县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511124', N'井研县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511126', N'夹江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511129', N'沐川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511132', N'峨边彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511133', N'马边彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511181', N'峨眉山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511300', N'南充市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511302', N'顺庆区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511303', N'高坪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511304', N'嘉陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511321', N'南部县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511322', N'营山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511323', N'蓬安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511324', N'仪陇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511325', N'西充县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511381', N'阆中市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511400', N'眉山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511402', N'东坡区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511421', N'仁寿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511422', N'彭山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511423', N'洪雅县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511424', N'丹棱县')
GO
print 'Processed 2600 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511425', N'青神县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511500', N'宜宾市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511502', N'翠屏区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511503', N'南溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511521', N'宜宾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511523', N'江安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511524', N'长宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511525', N'高县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511526', N'珙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511527', N'筠连县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511528', N'兴文县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511529', N'屏山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511600', N'广安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511602', N'广安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511621', N'岳池县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511622', N'武胜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511623', N'邻水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511681', N'华蓥市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511700', N'达州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511702', N'通川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511721', N'达县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511722', N'宣汉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511723', N'开江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511724', N'大竹县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511725', N'渠县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511781', N'万源市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511800', N'雅安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511802', N'雨城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511803', N'名山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511822', N'荥经县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511823', N'汉源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511824', N'石棉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511825', N'天全县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511826', N'芦山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511827', N'宝兴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511900', N'巴中市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511902', N'巴州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511921', N'通江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511922', N'南江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'511923', N'平昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512000', N'资阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512002', N'雁江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512021', N'安岳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512022', N'乐至县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'512081', N'简阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513200', N'阿坝藏族羌族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513221', N'汶川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513222', N'理县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513223', N'茂县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513224', N'松潘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513225', N'九寨沟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513226', N'金川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513227', N'小金县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513228', N'黑水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513229', N'马尔康县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513230', N'壤塘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513231', N'阿坝县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513232', N'若尔盖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513233', N'红原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513300', N'甘孜藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513321', N'康定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513322', N'泸定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513323', N'丹巴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513324', N'九龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513325', N'雅江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513326', N'道孚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513327', N'炉霍县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513328', N'甘孜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513329', N'新龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513330', N'德格县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513331', N'白玉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513332', N'石渠县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513333', N'色达县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513334', N'理塘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513335', N'巴塘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513336', N'乡城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513337', N'稻城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513338', N'得荣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513400', N'凉山彝族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513401', N'西昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513422', N'木里藏族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513423', N'盐源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513424', N'德昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513425', N'会理县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513426', N'会东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513427', N'宁南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513428', N'普格县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513429', N'布拖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513430', N'金阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513431', N'昭觉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513432', N'喜德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513433', N'冕宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513434', N'越西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513435', N'甘洛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513436', N'美姑县')
GO
print 'Processed 2700 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'513437', N'雷波县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520000', N'贵州省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520100', N'贵阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520102', N'南明区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520103', N'云岩区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520111', N'花溪区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520112', N'乌当区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520113', N'白云区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520114', N'小河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520121', N'开阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520122', N'息烽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520123', N'修文县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520181', N'清镇市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520200', N'六盘水市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520201', N'钟山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520203', N'六枝特区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520221', N'水城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520222', N'盘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520300', N'遵义市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520302', N'红花岗区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520303', N'汇川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520321', N'遵义县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520322', N'桐梓县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520323', N'绥阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520324', N'正安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520325', N'道真仡佬族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520326', N'务川仡佬族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520327', N'凤冈县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520328', N'湄潭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520329', N'余庆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520330', N'习水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520381', N'赤水市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520382', N'仁怀市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520400', N'安顺市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520402', N'西秀区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520421', N'平坝县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520422', N'普定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520423', N'镇宁布依族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520424', N'关岭布依族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520425', N'紫云苗族布依族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520500', N'毕节市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520502', N'七星关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520521', N'大方县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520522', N'黔西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520523', N'金沙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520524', N'织金县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520525', N'纳雍县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520526', N'威宁彝族回族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520527', N'赫章县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520600', N'铜仁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520602', N'碧江区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520603', N'万山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520621', N'江口县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520622', N'玉屏侗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520623', N'石阡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520624', N'思南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520625', N'印江土家族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520626', N'德江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520627', N'沿河土家族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'520628', N'松桃苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522300', N'黔西南布依族苗族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522301', N'兴义市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522322', N'兴仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522323', N'普安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522324', N'晴隆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522325', N'贞丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522326', N'望谟县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522327', N'册亨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522328', N'安龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522600', N'黔东南苗族侗族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522601', N'凯里市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522622', N'黄平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522623', N'施秉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522624', N'三穗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522625', N'镇远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522626', N'岑巩县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522627', N'天柱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522628', N'锦屏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522629', N'剑河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522630', N'台江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522631', N'黎平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522632', N'榕江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522633', N'从江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522634', N'雷山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522635', N'麻江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522636', N'丹寨县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522700', N'黔南布依族苗族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522701', N'都匀市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522702', N'福泉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522722', N'荔波县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522723', N'贵定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522725', N'瓮安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522726', N'独山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522727', N'平塘县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522728', N'罗甸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522729', N'长顺县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522730', N'龙里县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522731', N'惠水县')
GO
print 'Processed 2800 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'522732', N'三都水族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530000', N'云南省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530100', N'昆明市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530102', N'五华区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530103', N'盘龙区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530111', N'官渡区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530112', N'西山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530113', N'东川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530114', N'呈贡区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530122', N'晋宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530124', N'富民县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530125', N'宜良县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530126', N'石林彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530127', N'嵩明县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530128', N'禄劝彝族苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530129', N'寻甸回族彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530181', N'安宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530300', N'曲靖市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530302', N'麒麟区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530321', N'马龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530322', N'陆良县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530323', N'师宗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530324', N'罗平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530325', N'富源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530326', N'会泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530328', N'沾益县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530381', N'宣威市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530400', N'玉溪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530402', N'红塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530421', N'江川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530422', N'澄江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530423', N'通海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530424', N'华宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530425', N'易门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530426', N'峨山彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530427', N'新平彝族傣族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530428', N'元江哈尼族彝族傣族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530500', N'保山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530502', N'隆阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530521', N'施甸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530522', N'腾冲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530523', N'龙陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530524', N'昌宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530600', N'昭通市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530602', N'昭阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530621', N'鲁甸县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530622', N'巧家县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530623', N'盐津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530624', N'大关县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530625', N'永善县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530626', N'绥江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530627', N'镇雄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530628', N'彝良县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530629', N'威信县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530630', N'水富县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530700', N'丽江市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530702', N'古城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530721', N'玉龙纳西族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530722', N'永胜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530723', N'华坪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530724', N'宁蒗彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530800', N'普洱市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530802', N'思茅区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530821', N'宁洱哈尼族彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530822', N'墨江哈尼族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530823', N'景东彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530824', N'景谷傣族彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530825', N'镇沅彝族哈尼族拉祜族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530826', N'江城哈尼族彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530827', N'孟连傣族拉祜族佤族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530828', N'澜沧拉祜族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530829', N'西盟佤族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530900', N'临沧市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530902', N'临翔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530921', N'凤庆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530922', N'云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530923', N'永德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530924', N'镇康县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530925', N'双江拉祜族佤族布朗族傣族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530926', N'耿马傣族佤族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'530927', N'沧源佤族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532300', N'楚雄彝族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532301', N'楚雄市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532322', N'双柏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532323', N'牟定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532324', N'南华县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532325', N'姚安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532326', N'大姚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532327', N'永仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532328', N'元谋县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532329', N'武定县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532331', N'禄丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532500', N'红河哈尼族彝族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532501', N'个旧市')
GO
print 'Processed 2900 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532502', N'开远市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532503', N'蒙自市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532523', N'屏边苗族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532524', N'建水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532525', N'石屏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532526', N'弥勒县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532527', N'泸西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532528', N'元阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532529', N'红河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532530', N'金平苗族瑶族傣族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532531', N'绿春县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532532', N'河口瑶族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532600', N'文山壮族苗族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532601', N'文山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532622', N'砚山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532623', N'西畴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532624', N'麻栗坡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532625', N'马关县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532626', N'丘北县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532627', N'广南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532628', N'富宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532800', N'西双版纳傣族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532801', N'景洪市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532822', N'勐海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532823', N'勐腊县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532900', N'大理白族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532901', N'大理市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532922', N'漾濞彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532923', N'祥云县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532924', N'宾川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532925', N'弥渡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532926', N'南涧彝族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532927', N'巍山彝族回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532928', N'永平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532929', N'云龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532930', N'洱源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532931', N'剑川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'532932', N'鹤庆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533100', N'德宏傣族景颇族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533102', N'瑞丽市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533103', N'芒市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533122', N'梁河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533123', N'盈江县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533124', N'陇川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533300', N'怒江傈僳族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533321', N'泸水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533323', N'福贡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533324', N'贡山独龙族怒族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533325', N'兰坪白族普米族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533400', N'迪庆藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533421', N'香格里拉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533422', N'德钦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'533423', N'维西傈僳族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540000', N'西藏自治区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540100', N'拉萨市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540102', N'城关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540121', N'林周县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540122', N'当雄县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540123', N'尼木县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540124', N'曲水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540125', N'堆龙德庆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540126', N'达孜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'540127', N'墨竹工卡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542100', N'昌都地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542121', N'昌都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542122', N'江达县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542123', N'贡觉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542124', N'类乌齐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542125', N'丁青县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542126', N'察雅县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542127', N'八宿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542128', N'左贡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542129', N'芒康县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542132', N'洛隆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542133', N'边坝县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542200', N'山南地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542221', N'乃东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542222', N'扎囊县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542223', N'贡嘎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542224', N'桑日县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542225', N'琼结县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542226', N'曲松县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542227', N'措美县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542228', N'洛扎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542229', N'加查县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542231', N'隆子县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542232', N'错那县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542233', N'浪卡子县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542300', N'日喀则地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542301', N'日喀则市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542322', N'南木林县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542323', N'江孜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542324', N'定日县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542325', N'萨迦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542326', N'拉孜县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542327', N'昂仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542328', N'谢通门县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542329', N'白朗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542330', N'仁布县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542331', N'康马县')
GO
print 'Processed 3000 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542332', N'定结县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542333', N'仲巴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542334', N'亚东县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542335', N'吉隆县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542336', N'聂拉木县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542337', N'萨嘎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542338', N'岗巴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542400', N'那曲地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542421', N'那曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542422', N'嘉黎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542423', N'比如县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542424', N'聂荣县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542425', N'安多县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542426', N'申扎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542427', N'索县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542428', N'班戈县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542429', N'巴青县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542430', N'尼玛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542500', N'阿里地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542521', N'普兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542522', N'札达县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542523', N'噶尔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542524', N'日土县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542525', N'革吉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542526', N'改则县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542527', N'措勤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542600', N'林芝地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542621', N'林芝县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542622', N'工布江达县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542623', N'米林县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542624', N'墨脱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542625', N'波密县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542626', N'察隅县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'542627', N'朗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610000', N'陕西省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610100', N'西安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610102', N'新城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610103', N'碑林区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610104', N'莲湖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610111', N'灞桥区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610112', N'未央区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610113', N'雁塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610114', N'阎良区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610115', N'临潼区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610116', N'长安区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610122', N'蓝田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610124', N'周至县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610125', N'户县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610126', N'高陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610200', N'铜川市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610202', N'王益区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610203', N'印台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610204', N'耀州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610222', N'宜君县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610300', N'宝鸡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610302', N'渭滨区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610303', N'金台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610304', N'陈仓区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610322', N'凤翔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610323', N'岐山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610324', N'扶风县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610326', N'眉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610327', N'陇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610328', N'千阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610329', N'麟游县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610330', N'凤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610331', N'太白县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610400', N'咸阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610402', N'秦都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610403', N'杨陵区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610404', N'渭城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610422', N'三原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610423', N'泾阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610424', N'乾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610425', N'礼泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610426', N'永寿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610427', N'彬县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610428', N'长武县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610429', N'旬邑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610430', N'淳化县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610431', N'武功县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610481', N'兴平市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610500', N'渭南市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610502', N'临渭区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610521', N'华县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610522', N'潼关县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610523', N'大荔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610524', N'合阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610525', N'澄城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610526', N'蒲城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610527', N'白水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610528', N'富平县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610581', N'韩城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610582', N'华阴市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610600', N'延安市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610601', N'市辖区')
GO
print 'Processed 3100 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610602', N'宝塔区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610621', N'延长县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610622', N'延川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610623', N'子长县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610624', N'安塞县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610625', N'志丹县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610626', N'吴起县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610627', N'甘泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610628', N'富县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610629', N'洛川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610630', N'宜川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610631', N'黄龙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610632', N'黄陵县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610700', N'汉中市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610702', N'汉台区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610721', N'南郑县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610722', N'城固县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610723', N'洋县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610724', N'西乡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610725', N'勉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610726', N'宁强县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610727', N'略阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610728', N'镇巴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610729', N'留坝县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610730', N'佛坪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610800', N'榆林市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610802', N'榆阳区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610821', N'神木县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610822', N'府谷县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610823', N'横山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610824', N'靖边县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610825', N'定边县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610826', N'绥德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610827', N'米脂县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610828', N'佳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610829', N'吴堡县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610830', N'清涧县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610831', N'子洲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610900', N'安康市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610902', N'汉滨区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610921', N'汉阴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610922', N'石泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610923', N'宁陕县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610924', N'紫阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610925', N'岚皋县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610926', N'平利县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610927', N'镇坪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610928', N'旬阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'610929', N'白河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611000', N'商洛市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611002', N'商州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611021', N'洛南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611022', N'丹凤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611023', N'商南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611024', N'山阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611025', N'镇安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'611026', N'柞水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620000', N'甘肃省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620100', N'兰州市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620102', N'城关区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620103', N'七里河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620104', N'西固区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620105', N'安宁区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620111', N'红古区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620121', N'永登县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620122', N'皋兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620123', N'榆中县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620200', N'嘉峪关市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620300', N'金昌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620302', N'金川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620321', N'永昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620400', N'白银市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620402', N'白银区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620403', N'平川区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620421', N'靖远县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620422', N'会宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620423', N'景泰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620500', N'天水市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620502', N'秦州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620503', N'麦积区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620521', N'清水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620522', N'秦安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620523', N'甘谷县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620524', N'武山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620525', N'张家川回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620600', N'武威市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620601', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620602', N'凉州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620621', N'民勤县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620622', N'古浪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620623', N'天祝藏族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620700', N'张掖市')
GO
print 'Processed 3200 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620701', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620702', N'甘州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620721', N'肃南裕固族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620722', N'民乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620723', N'临泽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620724', N'高台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620725', N'山丹县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620800', N'平凉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620801', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620802', N'崆峒区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620821', N'泾川县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620822', N'灵台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620823', N'崇信县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620824', N'华亭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620825', N'庄浪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620826', N'静宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620900', N'酒泉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620901', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620902', N'肃州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620921', N'金塔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620922', N'瓜州县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620923', N'肃北蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620924', N'阿克塞哈萨克族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620981', N'玉门市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'620982', N'敦煌市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621000', N'庆阳市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621001', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621002', N'西峰区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621021', N'庆城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621022', N'环县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621023', N'华池县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621024', N'合水县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621025', N'正宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621026', N'宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621027', N'镇原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621100', N'定西市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621102', N'安定区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621121', N'通渭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621122', N'陇西县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621123', N'渭源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621124', N'临洮县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621125', N'漳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621126', N'岷县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621200', N'陇南市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621202', N'武都区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621221', N'成县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621222', N'文县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621223', N'宕昌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621224', N'康县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621225', N'西和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621226', N'礼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621227', N'徽县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'621228', N'两当县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622900', N'临夏回族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622901', N'临夏市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622921', N'临夏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622922', N'康乐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622923', N'永靖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622924', N'广河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622925', N'和政县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622926', N'东乡族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'622927', N'积石山保安族东乡族撒拉族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623000', N'甘南藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623001', N'合作市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623021', N'临潭县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623022', N'卓尼县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623023', N'舟曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623024', N'迭部县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623025', N'玛曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623026', N'碌曲县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'623027', N'夏河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630000', N'青海省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630100', N'西宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630102', N'城东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630103', N'城中区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630104', N'城西区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630105', N'城北区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630121', N'大通回族土族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630122', N'湟中县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'630123', N'湟源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632100', N'海东地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632121', N'平安县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632122', N'民和回族土族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632123', N'乐都县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632126', N'互助土族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632127', N'化隆回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632128', N'循化撒拉族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632200', N'海北藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632221', N'门源回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632222', N'祁连县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632223', N'海晏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632224', N'刚察县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632300', N'黄南藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632321', N'同仁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632322', N'尖扎县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632323', N'泽库县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632324', N'河南蒙古族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632500', N'海南藏族自治州')
GO
print 'Processed 3300 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632521', N'共和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632522', N'同德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632523', N'贵德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632524', N'兴海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632525', N'贵南县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632600', N'果洛藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632621', N'玛沁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632622', N'班玛县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632623', N'甘德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632624', N'达日县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632625', N'久治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632626', N'玛多县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632700', N'玉树藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632721', N'玉树县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632722', N'杂多县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632723', N'称多县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632724', N'治多县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632725', N'囊谦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632726', N'曲麻莱县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632800', N'海西蒙古族藏族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632801', N'格尔木市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632802', N'德令哈市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632821', N'乌兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632822', N'都兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'632823', N'天峻县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640000', N'宁夏回族自治区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640100', N'银川市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640104', N'兴庆区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640105', N'西夏区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640106', N'金凤区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640121', N'永宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640122', N'贺兰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640181', N'灵武市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640200', N'石嘴山市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640202', N'大武口区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640205', N'惠农区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640221', N'平罗县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640300', N'吴忠市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640301', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640302', N'利通区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640303', N'红寺堡区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640323', N'盐池县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640324', N'同心县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640381', N'青铜峡市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640400', N'固原市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640401', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640402', N'原州区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640422', N'西吉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640423', N'隆德县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640424', N'泾源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640425', N'彭阳县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640500', N'中卫市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640501', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640502', N'沙坡头区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640521', N'中宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'640522', N'海原县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650000', N'新疆维吾尔自治区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650100', N'乌鲁木齐市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650101', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650102', N'天山区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650103', N'沙依巴克区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650104', N'新市区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650105', N'水磨沟区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650106', N'头屯河区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650107', N'达坂城区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650109', N'米东区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650121', N'乌鲁木齐县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650200', N'克拉玛依市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650201', N'市辖区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650202', N'独山子区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650203', N'克拉玛依区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650204', N'白碱滩区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'650205', N'乌尔禾区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652100', N'吐鲁番地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652101', N'吐鲁番市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652122', N'鄯善县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652123', N'托克逊县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652200', N'哈密地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652201', N'哈密市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652222', N'巴里坤哈萨克自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652223', N'伊吾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652300', N'昌吉回族自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652301', N'昌吉市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652302', N'阜康市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652323', N'呼图壁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652324', N'玛纳斯县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652325', N'奇台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652327', N'吉木萨尔县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652328', N'木垒哈萨克自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652700', N'博尔塔拉蒙古自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652701', N'博乐市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652722', N'精河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652723', N'温泉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652800', N'巴音郭楞蒙古自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652801', N'库尔勒市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652822', N'轮台县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652823', N'尉犁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652824', N'若羌县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652825', N'且末县')
GO
print 'Processed 3400 total records'
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652826', N'焉耆回族自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652827', N'和静县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652828', N'和硕县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652829', N'博湖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652900', N'阿克苏地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652901', N'阿克苏市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652922', N'温宿县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652923', N'库车县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652924', N'沙雅县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652925', N'新和县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652926', N'拜城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652927', N'乌什县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652928', N'阿瓦提县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'652929', N'柯坪县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653000', N'克孜勒苏柯尔克孜自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653001', N'阿图什市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653022', N'阿克陶县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653023', N'阿合奇县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653024', N'乌恰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653100', N'喀什地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653101', N'喀什市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653121', N'疏附县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653122', N'疏勒县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653123', N'英吉沙县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653124', N'泽普县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653125', N'莎车县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653126', N'叶城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653127', N'麦盖提县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653128', N'岳普湖县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653129', N'伽师县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653130', N'巴楚县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653131', N'塔什库尔干塔吉克自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653200', N'和田地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653201', N'和田市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653221', N'和田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653222', N'墨玉县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653223', N'皮山县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653224', N'洛浦县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653225', N'策勒县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653226', N'于田县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'653227', N'民丰县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654000', N'伊犁哈萨克自治州')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654002', N'伊宁市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654003', N'奎屯市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654021', N'伊宁县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654022', N'察布查尔锡伯自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654023', N'霍城县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654024', N'巩留县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654025', N'新源县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654026', N'昭苏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654027', N'特克斯县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654028', N'尼勒克县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654200', N'塔城地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654201', N'塔城市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654202', N'乌苏市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654221', N'额敏县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654223', N'沙湾县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654224', N'托里县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654225', N'裕民县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654226', N'和布克赛尔蒙古自治县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654300', N'阿勒泰地区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654301', N'阿勒泰市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654321', N'布尔津县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654322', N'富蕴县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654323', N'福海县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654324', N'哈巴河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654325', N'青河县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'654326', N'吉木乃县')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659000', N'自治区直辖县级行政区划')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659001', N'石河子市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659002', N'阿拉尔市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659003', N'图木舒克市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'659004', N'五家渠市')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'710000', N'台湾省')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'810000', N'香港特别行政区')
INSERT [dbo].[GL_GeoCodeInfo] ([GeoCode], [GeoName]) VALUES (N'820000', N'澳门特别行政区')

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
INSERT [dbo].[GL_RoleInfo] ([RoleID], [DeptID], [DTypeID], [RoleName]) VALUES (1, 0, 1, N'系统管理员')
INSERT [dbo].[GL_RoleInfo] ([RoleID], [DeptID], [DTypeID], [RoleName]) VALUES (2, 0, 2, N'工厂系统管理员')
INSERT [dbo].[GL_RoleInfo] ([RoleID], [DeptID], [DTypeID], [RoleName]) VALUES (3, 0, 3, N'店铺系统管理员')
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

INSERT INTO "GL_UnitInfo" VALUES(1,1201,'卷',1,10013,'2013-05-17 15:26:23','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(2,1202,'平方',1,10013,'2013-05-17 15:26:34','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(3,1202,'米',1,10013,'2013-05-17 15:26:38','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(4,1301,'个',1,10013,'2013-05-17 15:26:45','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(5,1302,'包',1,10013,'2013-05-17 15:26:54','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(6,1304,'个',1,10013,'2013-05-17 15:27:00','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(7,1303,'个',1,10013,'2013-05-17 15:27:07','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(8,1306,'个',1,10013,'2013-05-17 15:27:15','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(9,1402,'个',1,10013,'2013-05-17 15:27:21','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(10,1401,'个',1,10013,'2013-05-17 15:27:28','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(11,1201,'米',1,10013,'2013-05-17 15:28:44','2013-09-11 14:57:44');
INSERT INTO "GL_UnitInfo" VALUES(12,1308,'个',1,10013,'2013-05-17 15:30:20','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(13,1305,'个',1,10013,'2013-05-27 15:18:07','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(14,1405,'个',1,10013,'2013-06-04 16:27:49','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(15,1406,'个',1,10013,'2013-06-04 16:31:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(16,2302,'个',1,10013,'2013-06-04 17:01:03','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(17,2302,'件',1,10013,'2013-06-04 17:01:10','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(18,2302,'组',1,10013,'2013-06-04 17:01:13','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(19,1101,'扇',1,10013,'2013-06-04 17:39:26','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(20,1102,'扇',1,10013,'2013-06-04 17:39:36','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(21,1102,'组',1,10013,'2013-06-04 17:39:40','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(22,1103,'平方米',1,10013,'2013-06-04 17:39:58','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(23,1103,'个',1,10013,'2013-06-04 17:40:02','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(24,1103,'张',1,10013,'2013-06-04 17:40:08','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(25,1104,'个',1,10013,'2013-06-04 17:40:13','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(27,1106,'个',1,10013,'2013-06-04 17:40:32','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(28,1107,'个',1,10013,'2013-06-04 17:40:36','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(29,1108,'个',1,10013,'2013-06-04 17:40:40','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(30,1403,'个',1,10013,'2013-06-18 11:03:30','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(31,1203,'平方',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(32,1203,'米',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(33,1204,'平方',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(34,1204,'米',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(35,1205,'平方',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(36,1205,'米',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(37,1206,'平方',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(38,1206,'米',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(39,1207,'平方',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(40,1207,'米',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(41,1208,'平方',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(42,1208,'米',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(43,1307,'个',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(44,1307,'副',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(45,1404,'个',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(46,1407,'个',1,10013,'2013-08-14 10:17:00','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(47,1501,'个',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:45');
INSERT INTO "GL_UnitInfo" VALUES(48,1501,'副',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(49,1501,'套',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(50,1502,'个',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(51,1502,'副',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(52,1502,'套',1,10013,'2013-08-14 10:17:01','2013-09-11 14:57:46');
INSERT INTO "GL_UnitInfo" VALUES(53,1101,'个',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(54,1104,'平方米',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(55,1104,'张',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(56,1105,'平方米',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(57,1105,'个',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(58,1105,'张',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(59,1107,'米',10013,10013,'2013-09-11 14:59:43','2013-09-11 14:59:43');
INSERT INTO "GL_UnitInfo" VALUES(60,1107,'组',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(61,1108,'米',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(62,1108,'组',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(63,1301,'颗',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(64,1301,'副',10013,10013,'2013-09-11 14:59:44','2013-09-11 14:59:44');
INSERT INTO "GL_UnitInfo" VALUES(65,1106,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(66,1107,'盏',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(67,1201,'条',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(68,1203,'条',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(69,1205,'个',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(70,1208,'张',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(71,1302,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(72,1303,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(73,1303,'套',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(74,1304,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(75,1304,'套',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(76,1305,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(77,1305,'套',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(78,1305,'副',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(79,1306,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(80,1306,'套',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(81,1307,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(82,1307,'套',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(83,1308,'件',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(84,1401,'组',10013,10013,'2013-09-11 15:24:39','2013-09-11 15:24:39');
INSERT INTO "GL_UnitInfo" VALUES(85,1401,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(86,1401,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(87,1402,'组',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(88,1402,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(89,1402,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(90,1403,'组',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(91,1403,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(92,1403,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(93,1404,'组',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(94,1404,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(95,1404,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(96,1405,'组',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(97,1405,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(98,1405,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(99,1405,'台',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(100,1406,'组',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(101,1406,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(102,1406,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(103,1406,'台',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(104,1407,'组',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(105,1407,'套',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(106,1407,'件',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(107,1407,'台',10013,10013,'2013-09-11 15:24:40','2013-09-11 15:24:40');
INSERT INTO "GL_UnitInfo" VALUES(108,2302,'套',10013,10013,'2013-09-11 15:25:42','2013-09-11 15:25:42');

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
INSERT [dbo].[GL_UserInfo] ([UserID], [DeptID], [IsDel], [RoleID], [CreatorID], [UpdaterID], [CreateTime], [UpdateTime], [UserPwd], [UserCode], [EncodeStr], [TrueName], [IDCode], [QQNum], [Email], [Tel], [CellPhone], [PostCode], [ContactAddress]) VALUES (10000, 0, 0, 1, 0, 0, GETDATE(), GETDATE(), N'42b1a2bf36dd05ad240b57620cb10fc6', N'admin', N'eway!2012', N'系统管理员', N'', N'', N'', N'', N'', N'', N'四川成都光华村')
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
-- Description:	检查用户信息是否被其他表引用
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

