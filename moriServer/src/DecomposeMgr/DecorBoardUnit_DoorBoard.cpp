#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_TYPE>::Imp
{
public:

	int32_t		CabDoorBoardID_;
	int32_t		CabDoorID_;
	int32_t		SplitType_;
	int32_t		MatID_;
	int32_t		SkinDirection_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	MaterialName_;
	AStringType	DoorBoardName_;
};

template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorBoardInfo.CabDoorBoardID.Into(imp_.CabDoorBoardID_)|
		GC_CabDoorBoardInfo.CabDoorID.Into(imp_.CabDoorID_)|
			JK_DoorBoardInfo.SplitType.Into(imp_.SplitType_)|
			JK_DoorBoardInfo.DoorBoardName.Into(imp_.DoorBoardName_)|
		GC_CabDoorBoardInfo.MatID.Into(imp_.MatID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
		GC_CabDoorBoardInfo.SkinDirection.Into(imp_.SkinDirection_)|
		GC_CabDoorBoardInfo.XLen.Into(imp_.XLen_)|
		GC_CabDoorBoardInfo.YLen.Into(imp_.YLen_)|
		GC_CabDoorBoardInfo.ZLen.Into(imp_.ZLen_)
		)
		.From(GC_CabDoorBoardInfo)
		.InnerJoin(JK_DoorBoardInfo).On(GC_CabDoorBoardInfo.DoorBoardID == JK_DoorBoardInfo.DoorBoardID &&
										GC_CabDoorBoardInfo.VerCode == JK_DoorBoardInfo.VerCode &&
										GC_CabDoorBoardInfo.FactoryID == JK_DoorBoardInfo.FactoryID)
		.InnerJoin(GC_CabDoorInfo).On(GC_CabDoorInfo.CabDoorID==GC_CabDoorBoardInfo.CabDoorID &&
										GC_CabDoorInfo.VerCode == GC_CabDoorBoardInfo.VerCode &&
										GC_CabDoorInfo.FactoryID == GC_CabDoorBoardInfo.FactoryID &&
										GC_CabDoorInfo.OrderID == GC_CabDoorBoardInfo.OrderID &&
										GC_CabDoorInfo.ParentType==2)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_CabDoorBoardInfo.MatID == JK_MaterialInfo.MaterialID &&
												GC_CabDoorBoardInfo.VerCode == JK_MaterialInfo.VerCode &&
												GC_CabDoorBoardInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_CabDoorBoardInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorBoardInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorBoardInfo.VerCode == VerCode_);
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabDoorBoardID_;
	ToInsert_.OldTableName_ = GC_CabDoorBoardInfo.GetTableName();
	ToInsert_.BoardType_ = imp_.SplitType_;
	ToInsert_.Name_ = imp_.DoorBoardName_;
	ToInsert_.MaterialID_ = imp_.MatID_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.Grain_ = imp_.SkinDirection_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
#pragma message("TODO")
	ToInsert_.CutXLength_;
	ToInsert_.CutYLength_;
	ToInsert_.Square_ = imp_.XLen_ * imp_.YLen_;
	InfoSPtr_->Square_ += *ToInsert_.Square_;

	auto& pntCnt = InfoSPtr_->DecorBoardUnitDoorUnit_;
	auto pntItor = pntCnt.find(imp_.CabDoorID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"DecorBoardUnitDoorUnit_ are supposed to have ID:" << imp_.CabDoorID_;
		ToInsert_.ObjectID_ = -1;
		ToInsert_.ObjectName_ = "";
		ToInsert_.ObjectCode_ = "";
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ObjectID_ = pntInfo.NewID_;
		ToInsert_.ObjectName_ = pntInfo.Name_;
		ToInsert_.ObjectCode_ = pntInfo.Code_;
	}
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->DecorBoardUnitDoorBoard_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabDoorBoardID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DoorBoardName_));
}



template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_SEAL_TYPE> seal(StatusInfo_, InfoSPtr_, JD_BoardSealInfo, VerCode_);
	seal.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE> gap(StatusInfo_, InfoSPtr_, JD_BoardGapInfo, VerCode_);
	gap.Decompose(sql,sqlInsert);
}