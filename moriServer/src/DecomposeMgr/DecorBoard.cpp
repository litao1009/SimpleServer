#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECOR_BOARD_TYPE>::Imp
{
public:

	int32_t		DesignDecorBoardID_;
	int32_t		DesignParentID_;
	int32_t		DecorBoardID_;
	int32_t		GTypeID_;
	int64_t		VerCode_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DecorBoardName_;
	AStringType	DecorBoardCode_;

	static	const int32_t GType = 2508;
};



template<>
void	DecomposeTable<DCP_DECOR_BOARD_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_DecorBoardInfo.DesignDecorBoardID.Into(imp_.DesignDecorBoardID_)|
		GC_DecorBoardInfo.DesignParentID.Into(imp_.DesignParentID_)|
		GC_DecorBoardInfo.DecorBoardID.Into(imp_.DecorBoardID_)|
			JK_DecorBoardInfo.DecorBoardName.Into(imp_.DecorBoardName_)|
			JK_DecorBoardInfo.DecorBoardCode.Into(imp_.DecorBoardCode_)|
			JK_DecorBoardInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_DecorBoardInfo.XLen.Into(imp_.XLen_)|
		GC_DecorBoardInfo.YLen.Into(imp_.YLen_)|
		GC_DecorBoardInfo.ZLen.Into(imp_.ZLen_)|
		GC_DecorBoardInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_DecorBoardInfo)
		.InnerJoin(JK_DecorBoardInfo).On(GC_DecorBoardInfo.DecorBoardID == JK_DecorBoardInfo.DecorBoardID &&
										GC_DecorBoardInfo.VerCode == JK_DecorBoardInfo.VerCode &&
										GC_DecorBoardInfo.FactoryID == JK_DecorBoardInfo.FactoryID)
		.Where(GC_DecorBoardInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_DecorBoardInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_DECOR_BOARD_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DesignDecorBoardID_;
	ToInsert_.OldTableName_ = GC_DecorBoardInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::DecorBoard;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.DecorBoardName_;
	ToInsert_.Code_ = imp_.DecorBoardCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;

	if ( Imp::GType == imp_.GTypeID_ )
	{
		auto& pntCnt = InfoSPtr_->DecorBoard_;
		auto pntItor = pntCnt.find(imp_.DesignParentID_);
		if ( pntItor == pntCnt.end() )
		{
			LOG_ERROR << L"DecorBoard_ are supposed to have ID:" << imp_.DesignParentID_;
			ToInsert_.ParentID_ = -1;
		}
		else
		{
			const auto& pntInfo = pntItor->second;
			ToInsert_.ParentID_ = pntInfo.NewID_;
		}
	}
}


template<>
void	DecomposeTable<DCP_DECOR_BOARD_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->DecorBoard_.emplace(	std::piecewise_construct,
		std::make_tuple(imp_.DesignDecorBoardID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DecorBoardName_, imp_.DecorBoardCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.DecorBoardID_, VerCode_);
}


template<>
void	DecomposeTable<DCP_DECOR_BOARD_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	auto& imp_ = *ImpSPtr_;

	DecomposeTable<DCP_DECORBARDUINT_BOARD_TYPE> board(StatusInfo_, InfoSPtr_, JD_BoardInfo, imp_.VerCode_);
	board.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_DECORBARDUNIT_DOOR_TYPE> unit(StatusInfo_, InfoSPtr_, JD_Objects, imp_.VerCode_);
	unit.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_DECORBARD_DOOR_HANDLE_TYPE> handle(StatusInfo_, InfoSPtr_,  JD_Objects, imp_.VerCode_);
	handle.Decompose(sql,sqlInsert);
}