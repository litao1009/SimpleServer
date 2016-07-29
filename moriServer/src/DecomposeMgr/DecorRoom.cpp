#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORROOM_TYPE>::Imp
{
public:

	int32_t		DecorID_;
	int32_t		GTypeID_;
	int64_t		VerCode_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DecorName_;
	AStringType	DecorCode_;
};

template<>
void	DecomposeTable<DCP_DECORROOM_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_DecorInfo.DecorID.Into(imp_.DecorID_)|
			JK_DecorInfo.DecorName.Into(imp_.DecorName_)|
			JK_DecorInfo.DecorCode.Into(imp_.DecorCode_)|
		GC_DecorInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_DecorInfo.XLen.Into(imp_.XLen_)|
		GC_DecorInfo.YLen.Into(imp_.YLen_)|
		GC_DecorInfo.ZLen.Into(imp_.ZLen_)|
		GC_DecorInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_DecorInfo)
		.InnerJoin(JK_DecorInfo).On(GC_DecorInfo.DecorID == JK_DecorInfo.DecorID &&
									GC_DecorInfo.VerCode == JK_DecorInfo.VerCode &&
									GC_DecorInfo.FactoryID == JK_DecorInfo.FactoryID)
		.Where(GC_DecorInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_DecorInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_DecorInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_DECORROOM_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DecorID_;
	ToInsert_.OldTableName_ = GC_DecorInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::Decor;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.DecorName_;
	ToInsert_.Code_ = imp_.DecorCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
}


template<>
void	DecomposeTable<DCP_DECORROOM_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.DecorID_, imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_DECORROOM_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}