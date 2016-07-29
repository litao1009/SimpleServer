#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABFOOT_TYPE>::Imp
{
public:

	int32_t		HWFittingID_;
	int32_t		GTypeID_;
	int32_t		CabID_;
	int32_t		FootCount_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;
};

template<>
void	DecomposeTable<DCP_CABFOOT_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		JK_HWFittingInfo.HWFittingID.Into(imp_.HWFittingID_)|
		JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
		JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
		JK_HWFittingInfo.XLen.Into(imp_.XLen_)|
		JK_HWFittingInfo.YLen.Into(imp_.YLen_)|
		JK_HWFittingInfo.ZLen.Into(imp_.ZLen_)|
		JK_HWFittingInfo.GTypeID.Into(imp_.GTypeID_)|
			GC_CabInfo.CabID.Into(imp_.CabID_)|
			sum(GC_CabInfo.FootCount).Into(imp_.FootCount_)
		)
		.From(JK_HWFittingInfo)
		.InnerJoin(GC_CabInfo).On( JK_HWFittingInfo.HWFittingID == GC_CabInfo.FootID &&
									JK_HWFittingInfo.VerCode == GC_CabInfo.VerCode &&
									JK_HWFittingInfo.FactoryID == GC_CabInfo.FactoryID)
		.Where(GC_CabInfo.OrderID == *StatusInfo_.OrderID_)
		.GroupBy(JK_HWFittingInfo.HWFittingID|
				JK_HWFittingInfo.HWFittingName|
				JK_HWFittingInfo.HWFittingCode|
				JK_HWFittingInfo.XLen|
				JK_HWFittingInfo.YLen|
				JK_HWFittingInfo.ZLen|
				JK_HWFittingInfo.GTypeID|
				GC_CabInfo.CabID);
}


template<>
void	DecomposeTable<DCP_CABFOOT_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	Skip_ = imp_.FootCount_ == 0;

	ToInsert_.OldID_ = imp_.HWFittingID_;
	ToInsert_.OldTableName_ = JK_HWFittingInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::HWFitting;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.Amount_ = imp_.FootCount_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;

	typedef	decltype(*InfoSPtr_->Cabinet_.begin())	CabinetType;
	auto pntItor = std::find_if(InfoSPtr_->Cabinet_.begin(), InfoSPtr_->Cabinet_.end(), [&imp_](CabinetType& curCab)
	{
		if ( curCab.first == imp_.CabID_ && curCab.second.FootID_ == imp_.HWFittingID_ )
		{
			return true;
		}

		return false;
	});

	if ( pntItor != InfoSPtr_->Cabinet_.end() )
	{
		const auto& pntInfo = pntItor->second;

		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
	else
	{
		ToInsert_.ParentID_ = -1;
	}
}


template<>
void	DecomposeTable<DCP_CABFOOT_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.FootCount_, VerCode_);
}

template<>
void	DecomposeTable<DCP_CABFOOT_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}