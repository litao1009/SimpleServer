drop table if exists	GL_AppVerInfo;
create table GL_AppVerInfo
(
	AppVerID	int not null,
	ClientType	int not null,
	IsActive	bool not null,
	FileSize	bigint not null,
	AppVerCode	national varchar(50) not null,
	HashCode	national varchar(50) not null,
	FilePath	national varchar(255) not null,
	primary key (AppVerID)
);

drop table if exists	GL_AppleseedInfo;
create table GL_AppleseedInfo
(
	ItemID	int not null,
	ItemName	national varchar(50) not null,
	ItemData	national varchar(1000) not null,
	primary key (ItemID)
);

drop table if exists	GL_AreaGeoMapInfo;
create table GL_AreaGeoMapInfo
(
	AreaID	int not null,
	GeoCode	national varchar(6) not null,
	primary key (AreaID,GeoCode)
);

drop table if exists	GL_AreaInfo;
create table GL_AreaInfo
(
	AreaID	int not null,
	DeptID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	AreaName	national varchar(20) not null,
	primary key (AreaID)
);

drop table if exists	GL_BaseBoardInfo;
create table GL_BaseBoardInfo
(
	CabShape	int not null,
	CabGapType	int not null,
	BoardType	int not null,
	BoardPosition	int not null,
	FactoryID	int not null,
	XFormula	national varchar(255) not null,
	YFormula	national varchar(255) not null,
	XDock	int not null,
	YDock	int not null,
	ZDock	int not null,
	XOffset	national varchar(255) not null,
	YOffset	national varchar(255) not null,
	ZOffset	national varchar(255) not null,
	ArcX	float not null,
	ArcY	float not null,
	ArcZ	float not null,
	Name	national varchar(50) not null,
	primary key (CabShape,CabGapType,BoardType,BoardPosition,FactoryID)
);

drop table if exists	GL_ChargeLogInfo;
create table GL_ChargeLogInfo
(
	LogID	int not null,
	CardNo	national varchar(25) not null,
	FactoryID	int not null,
	ShopID	int not null,
	UserID	int not null,
	primary key (LogID)
);

drop table if exists	GL_DeptInfo;
create table GL_DeptInfo
(
	DeptID	int not null,
	ParentID	int not null,
	IsDel	bool not null,
	DTypeID	int not null,
	IncOrder	int not null,
	ShowOrder	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	GeoCode	national varchar(6) not null,
	DeptCode	national varchar(20) not null,
	DeptName	national varchar(50) not null,
	Postcode	national varchar(10) not null,
	Tel	national varchar(32) not null,
	Contacter	national varchar(20) not null,
	ContactAddress	national varchar(200) not null,
	DeptMemo	national varchar(500) not null,
	primary key (DeptID)
);

drop table if exists	GL_DesignerConfigInfo;
create table GL_DesignerConfigInfo
(
	EnableSnap	bool not null,
	AllPole	bool not null,
	CrossPole	bool not null,
	WallPole	bool not null,
	HotspotCapture	bool not null,
	GridShow	bool not null,
	AngleStep	int not null,
	TargetRange	int not null,
	DesignBGID	int not null,
	PrintBGID	int not null,
	GridBigID	int not null,
	GridSmallID	int not null,
	HotspotRotateID	int not null,
	HotspotNormalID	int not null,
	HotspotSelectID	int not null,
	CreatePointID	int not null,
	DesignBGColor	bigint not null,
	PrintBGColor	bigint not null,
	GridBigColor	bigint not null,
	GridSmallColor	bigint not null,
	HotspotRotateColor	bigint not null,
	HotspotNormalColor	bigint not null,
	HotspotSelectColor	bigint not null,
	CreatePointColor	bigint not null,
	UserID	int not null,
	WallThickness	float not null,
	WallHeight	float not null,
	BaseLineLen	float not null,
	GridWidth	float not null,
	SnapRange	float not null,
	SkirtLineOffsetLen	float not null,
	BottomLineOffsetLen	float not null,
	TopLineOffsetLen	float not null,
	primary key (UserID)
);

drop table if exists	GL_GTypeInfo;
create table GL_GTypeInfo
(
	GTypeID	int not null,
	GTypeName	national varchar(20) not null,
	primary key (GTypeID)
);

drop table if exists	GL_GeoCodeInfo;
create table GL_GeoCodeInfo
(
	GeoCode	national varchar(6) not null,
	GeoName	national varchar(20) not null,
	primary key (GeoCode)
);

drop table if exists	GL_MajorCateInfo;
create table GL_MajorCateInfo
(
	MajorCateID	int not null,
	MajorCateName	national varchar(20) not null,
	primary key (MajorCateID)
);

drop table if exists	GL_MinorCateInfo;
create table GL_MinorCateInfo
(
	MajorCateID	int not null,
	MinorCateID	int not null,
	MinorCateName	national varchar(20) not null,
	primary key (MajorCateID,MinorCateID)
);

drop table if exists	GL_MinorGTypeMapInfo;
create table GL_MinorGTypeMapInfo
(
	MajorCateID	int not null,
	MinorCateID	int not null,
	CreateType	int not null,
	GTypeID	int not null,
	primary key (MajorCateID,MinorCateID,GTypeID)
);

drop table if exists	GL_OrderInfo;
create table GL_OrderInfo
(
	OrderID	bigint not null,
	ClientOrderID	bigint not null,
	OrderIndex	int not null,
	OrderType	int not null,
	FactoryID	int not null,
	ShopID	int not null,
	OrderStatus	int not null,
	IsDel	bool not null,
	DesignerID	int not null,
	ShopAuditorID	int not null,
	ShopCommitorID	int not null,
	FactoryGraphAuditorID	int not null,
	FactoryListAuditorID	int not null,
	FactoryFinanceAuditorID	int not null,
	ShopAuditTime	datetime not null,
	ShopCommitTime	datetime not null,
	GraphAuditTime	datetime not null,
	ListAuditTime	datetime not null,
	FinanceAuditTime	datetime not null,
	OrderCode	national varchar(50) not null,
	ShopAuditContent	national varchar(100) not null,
	ShopCommitContent	national varchar(100) not null,
	GraphAuditContent	national varchar(100) not null,
	ListAuditContent	national varchar(100) not null,
	FinanceAuditContent	national varchar(100) not null,
	primary key (OrderID)
);

drop table if exists	GL_PinYin;
create table GL_PinYin
(
	PYCode	national varchar(12) not null,
	PYName	national varchar(4) not null,
	primary key (PYCode,PYName)
);

drop table if exists	GL_PrepaidCardInfo;
create table GL_PrepaidCardInfo
(
	CardID	int not null,
	CardCategory	int not null,
	CardType	int not null,
	Period	int not null,
	SecureCode	national varchar(1000) not null,
	CardPwd	national varchar(1000) not null,
	SerialNo	national varchar(20) not null,
	CardNo	national varchar(20) not null,
	primary key (CardID)
);

drop table if exists	GL_PrintTemplateInfo;
create table GL_PrintTemplateInfo
(
	TemplateID	int not null,
	FactoryID	int not null,
	IsActive	bool not null,
	RelativePath	national varchar(255) not null,
	TemplateName	national varchar(255) not null,
	TemplateMemo	national varchar(500) not null,
	HashCode	national varchar(50) not null,
	primary key (TemplateID,FactoryID)
);

drop table if exists	GL_RoleInfo;
create table GL_RoleInfo
(
	RoleID	int not null,
	DeptID	int not null,
	DTypeID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	RoleName	national varchar(20) not null,
	primary key (RoleID)
);

drop table if exists	GL_RoleRightInfo;
create table GL_RoleRightInfo
(
	RightID	int not null,
	RightType	int not null,
	RoleID	int not null,
	primary key (RightID,RightType,RoleID)
);

drop table if exists	GL_SugarVerInfo;
create table GL_SugarVerInfo
(
	VerCode	bigint not null,
	DeptID	int not null,
	VerType	int not null,
	VerIndex	int not null,
	UploadStatus	int not null,
	FileCount	int not null,
	VerDBState	int not null,
	CreatorID	int not null,
	StartTime	datetime not null,
	StopTime	datetime not null,
	CreateTime	datetime not null,
	VerMemo	national varchar(500) not null,
	primary key (VerCode)
);

drop table if exists	GL_TransferOrderInfo;
create table GL_TransferOrderInfo
(
	RecordID	bigint not null,
	TransferByUserID	int not null,
	TransferToUserID	int not null,
	primary key (RecordID)
);

drop table if exists	GL_UnitInfo;
create table GL_UnitInfo
(
	UnitID	int not null,
	GTypeID	int not null,
	UnitName	national varchar(10) not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	primary key (UnitID)
);

drop table if exists	GL_UserActivationInfo;
create table GL_UserActivationInfo
(
	UserID	int not null,
	ActivationCode	national varchar(50) not null,
	TryCount	int not null,
	LastTryTime	datetime not null,
	primary key (UserID)
);

drop table if exists	GL_UserInfo;
create table GL_UserInfo
(
	UserID	int not null,
	FactoryID	int not null,
	ShopID	int not null,
	DeptID	int not null,
	IsDel	bool not null,
	RoleID	int not null,
	CreatorID	int not null,
	UpdaterID	int not null,
	CreateTime	datetime not null,
	UpdateTime	datetime not null,
	UserPwd	national varchar(64) not null,
	UserCode	national varchar(32) not null,
	EncodeStr	national varchar(64) not null,
	TrueName	national varchar(20) not null,
	IDCode	national varchar(20) not null,
	QQNum	national varchar(20) not null,
	Email	national varchar(50) not null,
	Tel	national varchar(20) not null,
	CellPhone	national varchar(20) not null,
	PostCode	national varchar(10) not null,
	ContactAddress	national varchar(200) not null,
	IsActived	bool not null,
	IsLocked	bool not null,
	primary key (UserCode)
);

