#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORBARDUINT_BOARD_TYPE>::Imp
{
public:

	int32_t		DesignDecorBoardUnitID_;
	int32_t		DesignDecorBoardID_;
	int32_t		GTypeID_;
	int32_t		MaterialID_;
	int32_t		SkinDirection_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DecorBoardUnitName_;
	AStringType	MaterialName_;

	static	const int32_t GType = 2508;
};

template<>
void	DecomposeTable<DCP_DECORBARDUINT_BOARD_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_DecorBoardUnitInfo.DesignDecorBoardUnitID.Into(imp_.DesignDecorBoardUnitID_)|
		GC_DecorBoardUnitInfo.DesignDecorBoardID.Into(imp_.DesignDecorBoardID_)|
			JK_DecorBoardUnitInfo.DecorBoardUnitName.Into(imp_.DecorBoardUnitName_)|
			JK_DecorBoardUnitInfo.SkinDirection.Into(imp_.SkinDirection_)|
			JK_DecorBoardInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_DecorBoardUnitInfo.MatID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
		GC_DecorBoardUnitInfo.XLen.Into(imp_.XLen_)|
		GC_DecorBoardUnitInfo.YLen.Into(imp_.YLen_)|
		GC_DecorBoardUnitInfo.ZLen.Into(imp_.ZLen_)
		)
		.From(GC_DecorBoardUnitInfo)
		.InnerJoin(JK_DecorBoardUnitInfo).On(GC_DecorBoardUnitInfo.DecorBoardUnitID == JK_DecorBoardUnitInfo.DecorBoardUnitID &&
		GC_DecorBoardUnitInfo.VerCode == JK_DecorBoardUnitInfo.VerCode &&
		GC_DecorBoardUnitInfo.FactoryID == JK_DecorBoardUnitInfo.FactoryID)
		.InnerJoin(JK_DecorBoardInfo).On(JK_DecorBoardInfo.DecorBoardID==GC_DecorBoardUnitInfo.DecorBoardID &&
		GC_DecorBoardUnitInfo.VerCode == JK_DecorBoardInfo.VerCode &&
		GC_DecorBoardUnitInfo.FactoryID == JK_DecorBoardInfo.FactoryID)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_DecorBoardUnitInfo.MatID == JK_MaterialInfo.MaterialID &&
		GC_DecorBoardUnitInfo.VerCode == JK_MaterialInfo.VerCode &&
		GC_DecorBoardUnitInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_DecorBoardUnitInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_DecorBoardUnitInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_DecorBoardUnitInfo.VerCode == VerCode_ &&
				GC_DecorBoardUnitInfo.IsUseDoor == false);
}


template<>
void	DecomposeTable<DCP_DECORBARDUINT_BOARD_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	if ( imp_.GTypeID_ == Imp::GType )
	{
		ToInsert_.BoardType_ = DBValue::BoardType::DecorShelf;
	}
	else
	{
		ToInsert_.BoardType_ = DBValue::BoardType::DecorBoard;
	}

	ToInsert_.OldID_ = imp_.DesignDecorBoardID_;
	ToInsert_.OldTableName_ = GC_DecorBoardUnitInfo.GetTableName();
	ToInsert_.Name_ = imp_.DecorBoardUnitName_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.Grain_ = imp_.SkinDirection_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
	ToInsert_.Square_ =  imp_.XLen_ * imp_.YLen_;
	InfoSPtr_->Square_ += *ToInsert_.Square_;
	
	auto& pntCnt = InfoSPtr_->DecorBoard_;
	auto pntItor = pntCnt.find(imp_.DesignDecorBoardID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"DecorBoard_ are supposed to have ID:" << imp_.DesignDecorBoardID_;
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
void	DecomposeTable<DCP_DECORBARDUINT_BOARD_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->DecorBoardUnitBoard_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.DesignDecorBoardUnitID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DecorBoardUnitName_));
}



template<>
void	DecomposeTable<DCP_DECORBARDUINT_BOARD_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_DECORBARDUNIT_BOARD_SEAL_TYPE> seal(StatusInfo_, InfoSPtr_, JD_BoardSealInfo, VerCode_);
	seal.Decompose(sql,sqlInsert);
}