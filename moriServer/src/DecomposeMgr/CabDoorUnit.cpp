#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABDOOR_UNIT_TYPE>::Imp
{
public:

	int32_t		CabDoorSystemID_;
	int32_t		CabDoorID_;
	int32_t		DoorID_;
	int32_t		CombineType_;
	int32_t		DoorMatPlanID_;
	int32_t		MatGTypeID_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DoorMatPlanName_;
	AStringType	DoorName_;
	AStringType	DoorCode_;
};

template<>
void	DecomposeTable<DCP_CABDOOR_UNIT_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorRegionInfo.CabDoorSystemID.Into(imp_.CabDoorSystemID_)|
		GC_CabDoorInfo.CabDoorID.Into(imp_.CabDoorID_)|
		GC_CabDoorInfo.DoorID.Into(imp_.DoorID_)|
			JK_DoorInfo.DoorName.Into(imp_.DoorName_)|
			JK_DoorInfo.DoorCode.Into(imp_.DoorCode_)|
			JK_DoorInfo.CombineType.Into(imp_.CombineType_)|
		GC_CabDoorInfo.XLen.Into(imp_.XLen_)|
		GC_CabDoorInfo.YLen.Into(imp_.YLen_)|
		GC_CabDoorInfo.ZLen.Into(imp_.ZLen_)|
		GC_CabDoorInfo.DoorMatPlanID.Into(imp_.DoorMatPlanID_)|
			JK_DoorMatPlanInfo.DoorMatPlanName.Into(imp_.DoorMatPlanName_)|
			JK_DoorMatPlanInfo.MatGType.Into(imp_.MatGTypeID_)
		)
		.From(GC_CabDoorInfo)
		.InnerJoin(JK_DoorInfo).On(GC_CabDoorInfo.DoorID == JK_DoorInfo.DoorID &&
		GC_CabDoorInfo.VerCode == JK_DoorInfo.VerCode &&
		GC_CabDoorInfo.FactoryID == JK_DoorInfo.FactoryID)
		.InnerJoin(GC_CabDoorRegionInfo).On(GC_CabDoorInfo.CabParentID == GC_CabDoorRegionInfo.CabDoorRegionID &&
		GC_CabDoorInfo.VerCode == GC_CabDoorRegionInfo.VerCode &&
		GC_CabDoorInfo.FactoryID == GC_CabDoorRegionInfo.FactoryID &&
		GC_CabDoorInfo.OrderID == GC_CabDoorRegionInfo.OrderID &&
		GC_CabDoorInfo.ParentType==1)
		.LeftOuterJoin(JK_DoorMatPlanInfo).On(GC_CabDoorInfo.DoorMatPlanID == JK_DoorMatPlanInfo.DoorMatPlanID &&
											GC_CabDoorInfo.VerCode == JK_DoorMatPlanInfo.VerCode &&
											GC_CabDoorInfo.FactoryID == JK_DoorMatPlanInfo.FactoryID)
		.Where(GC_CabDoorInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorInfo.VerCode == VerCode_);
}


template<>
void	DecomposeTable<DCP_CABDOOR_UNIT_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.ObjectType_ = DBValue::ObjectType::DoorUnit;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.DoorName_;
	ToInsert_.Code_ = imp_.DoorCode_;
	ToInsert_.GType_ = imp_.CombineType_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
	ToInsert_.MaterialPlanID_ = imp_.DoorMatPlanID_;
	ToInsert_.MaterialPlanName_ = imp_.DoorMatPlanName_;
	ToInsert_.OldID_ = imp_.CabDoorID_;
	ToInsert_.OldTableName_ = GC_CabDoorInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->CabDoorSys_;
	auto pntItor = pntCnt.find(imp_.CabDoorSystemID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"CabDoorSys_ are supposed to have ID:" << imp_.CabDoorSystemID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABDOOR_UNIT_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->CabDoor_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabDoorID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DoorName_, imp_.DoorCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.MatGTypeID_, imp_.DoorID_, VerCode_);
}



template<>
void	DecomposeTable<DCP_CABDOOR_UNIT_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_CABDOOR_BOARD_TYPE> doorBoard(StatusInfo_, InfoSPtr_, JD_BoardInfo, VerCode_);
	doorBoard.Decompose(sql,sqlInsert);
}