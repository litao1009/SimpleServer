#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_WALLDECOR_TYPE>::Imp
{
public:

	int32_t		DesignWallDecorID_;
	int32_t		GTypeID_;
	int64_t		VerCode_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DecorName_;
	AStringType	DecorCode_;

	static const int32_t GType = 1202;
};

template<>
void	DecomposeTable<DCP_WALLDECOR_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_WallDecorInfo.DesignWallDecorID.Into(imp_.DesignWallDecorID_)|
			JK_DecorInfo.DecorName.Into(imp_.DecorName_)|
			JK_DecorInfo.DecorCode.Into(imp_.DecorCode_)|
		GC_WallDecorInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_WallDecorInfo.XLen.Into(imp_.XLen_)|
		GC_WallDecorInfo.YLen.Into(imp_.YLen_)|
		GC_WallDecorInfo.ZLen.Into(imp_.ZLen_)|
		GC_WallDecorInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_WallDecorInfo)
		.InnerJoin(JK_DecorInfo).On(GC_WallDecorInfo.DecorID == JK_DecorInfo.DecorID &&
									GC_WallDecorInfo.VerCode == JK_DecorInfo.VerCode &&
									GC_WallDecorInfo.FactoryID == JK_DecorInfo.FactoryID)
		.Where(GC_WallDecorInfo.OrderID == *StatusInfo_.OrderID_ && 
				GC_WallDecorInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_DecorInfo.IsSplit == true);
}



template<>
void	DecomposeTable<DCP_WALLDECOR_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DesignWallDecorID_;
	ToInsert_.OldTableName_ = GC_WallDecorInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::WallDecor;
	ToInsert_.Name_ = imp_.DecorName_;
	ToInsert_.Code_ = imp_.DecorCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.Amount_ = 1;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
}


template<>
void	DecomposeTable<DCP_WALLDECOR_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_,imp_.DesignWallDecorID_,imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_WALLDECOR_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}