#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_ORDER_FITTINGINFO_TYPE>::Imp
{
public:

	int32_t		FittingCount_;
	int32_t		FittingID_;
	int32_t		GTypeID_;
	AStringType	FittingName_;
	AStringType	FittingCode_;
};

template<>
void	DecomposeTable<DCP_ORDER_FITTINGINFO_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_FittingInfo.FittingID.Into(imp_.FittingID_)|
		GC_FittingInfo.FittingCount.Into(imp_.FittingCount_)|
		JK_FittingInfo.GTypeID.Into(imp_.GTypeID_)|
		JK_FittingInfo.FittingName.Into(imp_.FittingName_)|
		JK_FittingInfo.FittingCode.Into(imp_.FittingCode_)
		)
		.From(GC_FittingInfo)
		.InnerJoin(JK_FittingInfo).On(GC_FittingInfo.FittingID == JK_FittingInfo.FittingID &&
		GC_FittingInfo.VerCode == JK_FittingInfo.VerCode &&
		GC_FittingInfo.FactoryID == JK_FittingInfo.FactoryID)
		.Where(GC_FittingInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_FittingInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_FittingInfo.IsSplit == true);
}

template<>
void	DecomposeTable<DCP_ORDER_FITTINGINFO_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	Skip_ = imp_.FittingCount_ == 0;

	ToInsert_.OldID_ = imp_.FittingID_;
	ToInsert_.OldTableName_ = GC_FittingInfo.GetTableName();
	ToInsert_.ParentID_ = 0;
	ToInsert_.Amount_ = imp_.FittingCount_;
	ToInsert_.Name_ = imp_.FittingName_;
	ToInsert_.Code_ = imp_.FittingCode_;
	ToInsert_.ObjectType_ = DBValue::ObjectType::Fitting;
}


template<>
void	DecomposeTable<DCP_ORDER_FITTINGINFO_TYPE>::PostProcess()
{

}

template<>
void	DecomposeTable<DCP_ORDER_FITTINGINFO_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}