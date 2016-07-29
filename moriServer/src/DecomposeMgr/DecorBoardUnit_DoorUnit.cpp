#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORBARDUNIT_DOOR_TYPE>::Imp
{
public:

	int32_t		DesignDecorBoardID_;
	int32_t		CabDoorID_;
	int32_t		DoorID_;
	int32_t		CombineType_;
	int32_t		MatGTypeID_;
	int32_t		DoorMatPlanID_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DoorName_;
	AStringType	DoorCode_;
	AStringType	DoorMatPlanName_;
};

template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOOR_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_DecorBoardUnitInfo.DesignDecorBoardID.Into(imp_.DesignDecorBoardID_)|
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
		.InnerJoin(GC_DecorBoardUnitInfo).On(GC_CabDoorInfo.CabParentID == GC_DecorBoardUnitInfo.DesignDecorBoardUnitID &&
		GC_CabDoorInfo.VerCode == GC_DecorBoardUnitInfo.VerCode &&
		GC_CabDoorInfo.FactoryID == GC_DecorBoardUnitInfo.FactoryID &&
		GC_CabDoorInfo.OrderID == GC_DecorBoardUnitInfo.OrderID &&
		GC_CabDoorInfo.ParentType==2)
		.InnerJoin(JK_DoorMatPlanInfo).On(GC_CabDoorInfo.DoorMatPlanID == JK_DoorMatPlanInfo.DoorMatPlanID &&
											GC_CabDoorInfo.VerCode == JK_DoorMatPlanInfo.VerCode &&
											GC_CabDoorInfo.FactoryID == JK_DoorMatPlanInfo.FactoryID)
		.Where(GC_CabDoorInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorInfo.VerCode == VerCode_ &&
				GC_DecorBoardUnitInfo.IsUseDoor == true);
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOOR_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabDoorID_;
	ToInsert_.OldTableName_ = GC_DecorBoardUnitInfo.GetTableName();
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

	auto& pntCnt = InfoSPtr_->DecorBoard_;
	auto pntItor = pntCnt.find(imp_.DesignDecorBoardID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"DecorBoard_ are supposed to have ID:" << imp_.DesignDecorBoardID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOOR_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->DecorBoardUnitDoorUnit_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabDoorID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DoorName_, imp_.DoorCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.MatGTypeID_, imp_.DoorID_, VerCode_);
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOOR_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_TYPE> doorBoard(StatusInfo_, InfoSPtr_, JD_BoardInfo, VerCode_);
	doorBoard.Decompose(sql,sqlInsert);
}