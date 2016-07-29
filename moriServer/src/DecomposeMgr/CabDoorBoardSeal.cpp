#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABDOOR_BOARD_SEAL_TYPE>::Imp
{
public:

	int32_t		CabDoorBoardSealID_;
	int32_t		CabDoorBoardID_;
	int32_t		SealIndex_;
	int32_t		MaterialID_;
	double		PreMill_;
	AStringType	MaterialName_;
	AStringType	MaterialCode_;
};

template<>
void	DecomposeTable<DCP_CABDOOR_BOARD_SEAL_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorBoardSealInfo.CabDoorBoardSealID.Into(imp_.CabDoorBoardSealID_)|
		GC_CabDoorBoardSealInfo.CabDoorBoardID.Into(imp_.CabDoorBoardID_)|
		GC_CabDoorBoardSealInfo.SealIndex.Into(imp_.SealIndex_)|
		GC_CabDoorBoardSealInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
			JK_MaterialInfo.MaterialCode.Into(imp_.MaterialCode_)|
		GC_CabDoorBoardSealInfo.PreMill.Into(imp_.PreMill_)
		)
		.From(GC_CabDoorBoardSealInfo)
		.InnerJoin(GC_CabDoorBoardInfo).On(GC_CabDoorBoardSealInfo.CabDoorBoardID==GC_CabDoorBoardInfo.CabDoorBoardID &&
		GC_CabDoorBoardSealInfo.VerCode == GC_CabDoorBoardInfo.VerCode &&
		GC_CabDoorBoardSealInfo.FactoryID == GC_CabDoorBoardInfo.FactoryID &&
		GC_CabDoorBoardSealInfo.OrderID == GC_CabDoorBoardInfo.OrderID)
		.InnerJoin(GC_CabDoorInfo).On(GC_CabDoorInfo.CabDoorID==GC_CabDoorBoardInfo.CabDoorID &&
		GC_CabDoorInfo.VerCode == GC_CabDoorBoardInfo.VerCode &&
		GC_CabDoorInfo.FactoryID == GC_CabDoorBoardInfo.FactoryID &&
		GC_CabDoorInfo.OrderID == GC_CabDoorBoardInfo.OrderID &&
		GC_CabDoorInfo.ParentType==1)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_CabDoorBoardSealInfo.MaterialID == JK_MaterialInfo.MaterialID &&
											GC_CabDoorBoardSealInfo.VerCode == JK_MaterialInfo.VerCode &&
											GC_CabDoorBoardSealInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where( GC_CabDoorBoardSealInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorBoardSealInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorBoardSealInfo.VerCode == VerCode_);
}



template<>
void	DecomposeTable<DCP_CABDOOR_BOARD_SEAL_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.SealIndex_ = imp_.SealIndex_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialCode_ = imp_.MaterialCode_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.PreMill_ = imp_.PreMill_;
	ToInsert_.OldID_ = imp_.CabDoorBoardSealID_;
	ToInsert_.OldTableName_ = GC_CabDoorBoardSealInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->CabDoorBoard_;
	auto pntItor = pntCnt.find(imp_.CabDoorBoardID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"CabDoorBoard_ are supposed to have ID:" << imp_.CabDoorBoardID_;
		ToInsert_.BoardID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;	
		ToInsert_.BoardID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABDOOR_BOARD_SEAL_TYPE>::PostProcess()
{

}


template<>
void	DecomposeTable<DCP_CABDOOR_BOARD_SEAL_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}