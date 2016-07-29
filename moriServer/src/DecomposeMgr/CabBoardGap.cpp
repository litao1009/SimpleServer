#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABBOARD_GAP_TYPE>::Imp
{
public:

	Imp() {}
	
	int32_t		CabBoardGapID_;
	int32_t		CabBoardID_;
	int32_t		GapIndex_;
	int32_t		GapShape_;
	double		XLen_;
	double		YLen_;
	double		XOffsetLen_;
	double		YOffsetLen_;
	double		ZOffsetLen_;
};

template<>
void	DecomposeTable<DCP_CABBOARD_GAP_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabBoardGapInfo.CabBoardGapID.Into(imp_.CabBoardGapID_)|
		GC_CabBoardGapInfo.CabBoardID.Into(imp_.CabBoardID_)|
		GC_CabBoardGapInfo.GapIndex.Into(imp_.GapIndex_)|
		GC_CabBoardGapInfo.GapShape.Into(imp_.GapShape_)|
		GC_CabBoardGapInfo.XLen.Into(imp_.XLen_)|
		GC_CabBoardGapInfo.YLen.Into(imp_.YLen_)|
		GC_CabBoardGapInfo.XOffsetLen.Into(imp_.XOffsetLen_)|
		GC_CabBoardGapInfo.YOffsetLen.Into(imp_.YOffsetLen_)|
		GC_CabBoardGapInfo.ZOffsetLen.Into(imp_.ZOffsetLen_)
		)
		.From(GC_CabBoardGapInfo)
		.Where(GC_CabBoardGapInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabBoardGapInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_CABBOARD_GAP_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.GapIndex_ = imp_.GapIndex_;
	ToInsert_.GapShape_ = imp_.GapShape_;
	ToInsert_.XLen_ = imp_.XLen_;
	ToInsert_.YLen_ = imp_.YLen_;
	ToInsert_.Square_ = imp_.XLen_ * imp_.YLen_;
	ToInsert_.XOffset_ = imp_.XOffsetLen_;
	ToInsert_.YOffset_ = imp_.YOffsetLen_;
	ToInsert_.ZOffset_ = imp_.ZOffsetLen_;
	InfoSPtr_->Square_ -= *ToInsert_.Square_;
	ToInsert_.OldID_ = imp_.CabBoardGapID_;
	ToInsert_.OldTableName_ = GC_CabBoardGapInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->CabBoard_;
	auto pntItor = pntCnt.find(imp_.CabBoardID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"CabBoard_ are supposed to have ID:" << imp_.CabBoardID_;
		ToInsert_.BoardID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.BoardID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABBOARD_GAP_TYPE>::PostProcess()
{

}


template<>
void	DecomposeTable<DCP_CABBOARD_GAP_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}