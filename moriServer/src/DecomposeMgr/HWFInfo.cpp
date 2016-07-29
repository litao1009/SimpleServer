#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_HWFINFO_TYPE>::Imp
{
public:

	int32_t		HWFittingID_;
	int32_t		GTypeID_;
	int32_t		UseCount_;
	int64_t		VerCode_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;
};

template<>
void	DecomposeTable<DCP_HWFINFO_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_HWFInfo.HWFittingID.Into(imp_.HWFittingID_)|
			JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
			JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
		GC_HWFInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_HWFInfo.UseCount.Into(imp_.UseCount_)|
		GC_HWFInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_HWFInfo)
		.InnerJoin(JK_HWFittingInfo).On(GC_HWFInfo.HWFittingID == JK_HWFittingInfo.HWFittingID &&
										GC_HWFInfo.VerCode == JK_HWFittingInfo.VerCode &&
										GC_HWFInfo.FactoryID == JK_HWFittingInfo.FactoryID)
		.Where(GC_HWFInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_HWFInfo.FactoryID == *StatusInfo_.FactoryID_);
}



template<>
void	DecomposeTable<DCP_HWFINFO_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	Skip_ = imp_.UseCount_ == 0;

	ToInsert_.OldID_ = imp_.HWFittingID_;
	ToInsert_.OldTableName_ = GC_HWFInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::HWFitting;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.Amount_ = imp_.UseCount_;
}


template<>
void	DecomposeTable<DCP_HWFINFO_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_,imp_.HWFittingID_,imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_HWFINFO_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}