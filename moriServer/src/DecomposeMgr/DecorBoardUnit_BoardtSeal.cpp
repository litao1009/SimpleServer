#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORBARDUNIT_BOARD_SEAL_TYPE>::Imp
{
public:

	int32_t		DesignDecorBoardUnitSealID_;
	int32_t		DesignDecorBoardUnitID_;
	int32_t		SealIndex_;
	int32_t		MaterialID_;
	double		PreMill_;
	AStringType	MaterialName_;
	AStringType	MaterialCode_;
};

template<>
void	DecomposeTable<DCP_DECORBARDUNIT_BOARD_SEAL_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_DecorBoardUnitSealInfo.DesignDecorBoardUnitSealID.Into(imp_.DesignDecorBoardUnitSealID_)|
		GC_DecorBoardUnitSealInfo.DesignDecorBoardUnitID.Into(imp_.DesignDecorBoardUnitID_)|
		GC_DecorBoardUnitSealInfo.SealIndex.Into(imp_.SealIndex_)|
		GC_DecorBoardUnitSealInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
			JK_MaterialInfo.MaterialCode.Into(imp_.MaterialCode_)|
		GC_DecorBoardUnitSealInfo.PreMill.Into(imp_.PreMill_)
		)
		.From(GC_DecorBoardUnitSealInfo)
		.InnerJoin(GC_DecorBoardUnitInfo).On(GC_DecorBoardUnitInfo.DesignDecorBoardUnitID==GC_DecorBoardUnitSealInfo.DesignDecorBoardUnitID &&
		GC_DecorBoardUnitInfo.OrderID==GC_DecorBoardUnitSealInfo.OrderID &&
		GC_DecorBoardUnitInfo.FactoryID==GC_DecorBoardUnitSealInfo.FactoryID &&
		GC_DecorBoardUnitInfo.VerCode==GC_DecorBoardUnitSealInfo.VerCode &&
		GC_DecorBoardUnitInfo.IsUseDoor==false)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_DecorBoardUnitSealInfo.MaterialID == JK_MaterialInfo.MaterialID &&
		GC_DecorBoardUnitSealInfo.VerCode == JK_MaterialInfo.VerCode &&
		GC_DecorBoardUnitSealInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_DecorBoardUnitSealInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_DecorBoardUnitSealInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_DecorBoardUnitSealInfo.VerCode == VerCode_);
}



template<>
void	DecomposeTable<DCP_DECORBARDUNIT_BOARD_SEAL_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.SealIndex_ = imp_.SealIndex_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialCode_ = imp_.MaterialCode_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.PreMill_ = imp_.PreMill_;
	ToInsert_.OldID_ = imp_.DesignDecorBoardUnitSealID_;
	ToInsert_.OldTableName_ = GC_DecorBoardUnitSealInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->DecorBoardUnitBoard_;
	auto pntItor = pntCnt.find(imp_.DesignDecorBoardUnitID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"DecorBoardUnitBoard_ are supposed to have ID:" << imp_.DesignDecorBoardUnitID_;
		ToInsert_.BoardID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.BoardID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_BOARD_SEAL_TYPE>::PostProcess()
{

}


template<>
void	DecomposeTable<DCP_DECORBARDUNIT_BOARD_SEAL_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}