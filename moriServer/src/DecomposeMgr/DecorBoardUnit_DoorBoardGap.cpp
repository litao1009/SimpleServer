#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE>::Imp
{
public:

	Imp() {}

	int32_t		CabDoorBoardGapID_;
	int32_t		CabDoorBoardID_;
	int32_t		GapIndex_;
	int32_t		GapShape_;
	double		XLen_;
	double		YLen_;
	double		XOffsetLen_;
	double		YOffsetLen_;
	double		ZOffsetLen_;
};

template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorBoardGapInfo.CabDoorBoardGapID.Into(imp_.CabDoorBoardGapID_)|
		GC_CabDoorBoardGapInfo.CabDoorBoardID.Into(imp_.CabDoorBoardID_)|
		GC_CabDoorBoardGapInfo.GapIndex.Into(imp_.GapIndex_)|
		GC_CabDoorBoardGapInfo.GapShape.Into(imp_.GapShape_)|
		GC_CabDoorBoardGapInfo.XLen.Into(imp_.XLen_)|
		GC_CabDoorBoardGapInfo.YLen.Into(imp_.YLen_)|
		GC_CabDoorBoardGapInfo.XOffsetLen.Into(imp_.XOffsetLen_)|
		GC_CabDoorBoardGapInfo.YOffsetLen.Into(imp_.YOffsetLen_)|
		GC_CabDoorBoardGapInfo.ZOffsetLen.Into(imp_.ZOffsetLen_)
		)
		.From(GC_CabDoorBoardGapInfo)
		.InnerJoin(GC_CabDoorBoardInfo).On(GC_CabDoorBoardGapInfo.CabDoorBoardID==GC_CabDoorBoardInfo.CabDoorBoardID &&
		GC_CabDoorBoardGapInfo.VerCode == GC_CabDoorBoardInfo.VerCode &&
		GC_CabDoorBoardGapInfo.FactoryID == GC_CabDoorBoardInfo.FactoryID &&
		GC_CabDoorBoardGapInfo.OrderID == GC_CabDoorBoardInfo.OrderID)
		.InnerJoin(GC_CabDoorInfo).On(GC_CabDoorInfo.CabDoorID==GC_CabDoorBoardInfo.CabDoorID &&
		GC_CabDoorInfo.VerCode == GC_CabDoorBoardInfo.VerCode &&
		GC_CabDoorInfo.FactoryID == GC_CabDoorBoardInfo.FactoryID &&
		GC_CabDoorInfo.OrderID == GC_CabDoorBoardInfo.OrderID &&
		GC_CabDoorInfo.ParentType==2)
		.Where(GC_CabDoorBoardGapInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorBoardGapInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorBoardGapInfo.VerCode == VerCode_);
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabDoorBoardGapID_;
	ToInsert_.OldTableName_ = GC_CabDoorBoardGapInfo.GetTableName();
	ToInsert_.GapIndex_ = imp_.GapIndex_;
	ToInsert_.GapShape_ = imp_.GapShape_;
	ToInsert_.XLen_ = imp_.XLen_;
	ToInsert_.YLen_ = imp_.YLen_;
	ToInsert_.XOffset_ = imp_.XOffsetLen_;
	ToInsert_.YOffset_ = imp_.YOffsetLen_;
	ToInsert_.ZOffset_ = imp_.ZOffsetLen_;
	ToInsert_.Square_ = imp_.XLen_ * imp_.YLen_;
	InfoSPtr_->Square_ -= *ToInsert_.Square_;

	auto& pntCnt = InfoSPtr_->DecorBoardUnitDoorBoard_;
	auto pntItor = pntCnt.find(imp_.CabDoorBoardID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"DecorBoardUnitDoorBoard_ are supposed to have ID:" << imp_.CabDoorBoardID_;
		ToInsert_.BoardID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.BoardID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE>::PostProcess()
{

}

template<>
void	DecomposeTable<DCP_DECORBARDUNIT_DOORBOARD_GAP_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}