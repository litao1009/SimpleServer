#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABBOARD_SEAL_TYPE>::Imp
{
public:

	int32_t		CabBoardSealID_;
	int32_t		CabBoardID_;
	int32_t		SealIndex_;
	int32_t		MaterialID_;
	double		PreMill_;
	AStringType	MaterialName_;
	AStringType	MaterialCode_;
};


template<>
void	DecomposeTable<DCP_CABBOARD_SEAL_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabBoardSealInfo.CabBoardSealID.Into(imp_.CabBoardSealID_)|
		GC_CabBoardSealInfo.CabBoardID.Into(imp_.CabBoardID_)|
		GC_CabBoardSealInfo.SealIndex.Into(imp_.SealIndex_)|
		GC_CabBoardSealInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
			JK_MaterialInfo.MaterialCode.Into(imp_.MaterialCode_)|
		GC_CabBoardSealInfo.PreMill.Into(imp_.PreMill_)
		)
		.From(GC_CabBoardSealInfo)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_CabBoardSealInfo.MaterialID == JK_MaterialInfo.MaterialID &&
		GC_CabBoardSealInfo.VerCode == JK_MaterialInfo.VerCode &&
		GC_CabBoardSealInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_CabBoardSealInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabBoardSealInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_CABBOARD_SEAL_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.SealIndex_ = imp_.SealIndex_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialCode_ = imp_.MaterialCode_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.PreMill_ = imp_.PreMill_;
	ToInsert_.OldID_ = imp_.CabBoardSealID_;
	ToInsert_.OldTableName_ = GC_CabBoardSealInfo.GetTableName();

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
void	DecomposeTable<DCP_CABBOARD_SEAL_TYPE>::PostProcess()
{

}


template<>
void	DecomposeTable<DCP_CABBOARD_SEAL_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}