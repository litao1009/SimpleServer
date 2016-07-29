#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABBOARD_TYPE>::Imp
{
public:

	int32_t		CabBoardID_;
	int32_t		CabID_;
	int32_t		MatID_;
	int32_t		SkinDirection_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	CabBoardName_;
	AStringType	MaterialName_;	
};

template<>
void	DecomposeTable<DCP_CABBOARD_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabBoardInfo.CabBoardID.Into(imp_.CabBoardID_)|
		GC_CabBoardInfo.CabID.Into(imp_.CabID_)|
		GC_CabBoardInfo.CabBoardName.Into(imp_.CabBoardName_)|
		GC_CabBoardInfo.MatID.Into(imp_.MatID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
		GC_CabBoardInfo.SkinDirection.Into(imp_.SkinDirection_)|
		GC_CabBoardInfo.XLen.Into(imp_.XLen_)|
		GC_CabBoardInfo.YLen.Into(imp_.YLen_)|
		GC_CabBoardInfo.ZLen.Into(imp_.ZLen_)
		)
		.From(GC_CabBoardInfo)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_CabBoardInfo.MatID == JK_MaterialInfo.MaterialID &&
		GC_CabBoardInfo.VerCode == JK_MaterialInfo.VerCode &&
		GC_CabBoardInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_CabBoardInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabBoardInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_CABBOARD_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.BoardType_ = DBValue::BoardType::CabBoard;
	ToInsert_.Name_ = imp_.CabBoardName_;
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
	ToInsert_.OldID_ = imp_.CabBoardID_;
	ToInsert_.OldTableName_ = GC_CabBoardInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->Cabinet_;
	auto pntItor = pntCnt.find(imp_.CabID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"Cabinet_ are supposed to have ID:" << imp_.CabID_;
		ToInsert_.ObjectID_ = -1;
		ToInsert_.ObjectName_ = "";
		ToInsert_.ObjectCode_ = "";
		ToInsert_.CabinetID_ = -1;
		ToInsert_.CabinetName_ = "";
		ToInsert_.CabinetCode_ = "";
	}
	else
	{
		const auto& pntInfo = pntItor->second;

		ToInsert_.ObjectID_ = pntInfo.NewID_;
		ToInsert_.ObjectName_ = pntInfo.Name_;
		ToInsert_.ObjectCode_ = pntInfo.Code_;
		ToInsert_.CabinetID_ = pntInfo.NewID_;
		ToInsert_.CabinetName_ = pntInfo.Name_;
		ToInsert_.CabinetCode_ = pntInfo.Code_;
	}
}


template<>
void	DecomposeTable<DCP_CABBOARD_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->CabBoard_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabBoardID_),
		std::make_tuple(OwnNewVerifyID_, imp_.CabBoardName_));
}


template<>
void	DecomposeTable<DCP_CABBOARD_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_CABBOARD_SEAL_TYPE> seal(StatusInfo_, InfoSPtr_, JD_BoardSealInfo, VerCode_);
	seal.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_CABBOARD_GAP_TYPE> gap(StatusInfo_, InfoSPtr_, JD_BoardGapInfo, VerCode_);
	gap.Decompose(sql,sqlInsert);
}