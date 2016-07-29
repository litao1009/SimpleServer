#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABFNFHWF_INFO_TYPE>::Imp
{
public:

	int32_t		CabFNFID_;
	int32_t		CabFNFHWFID_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;
	int32_t		GTypeID_;
	int32_t		UseCount_;
};


template<>
void	DecomposeTable<DCP_CABFNFHWF_INFO_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabFNFHWFInfo.CabFNFID.Into(imp_.CabFNFID_)|
		GC_CabFNFHWFInfo.CabFNFHWFID.Into(imp_.CabFNFHWFID_)|
			JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
			JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
			JK_HWFittingInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_CabFNFHWFInfo.UseCount.Into(imp_.UseCount_)
		)
		.From(GC_CabFNFHWFInfo)
		.InnerJoin(JK_HWFittingInfo).On( GC_CabFNFHWFInfo.HWFittingID == JK_HWFittingInfo.HWFittingID &&
		GC_CabFNFHWFInfo.VerCode == JK_HWFittingInfo.VerCode &&
		GC_CabFNFHWFInfo.FactoryID == JK_HWFittingInfo.FactoryID)
		.InnerJoin(JK_FittingRuleInfo).On(GC_CabFNFHWFInfo.FittingType==JK_FittingRuleInfo.FittingType &&
		GC_CabFNFHWFInfo.FNFittingID==JK_FittingRuleInfo.OwnerID &&
		GC_CabFNFHWFInfo.HWFittingID==JK_FittingRuleInfo.FittingID &&
		GC_CabFNFHWFInfo.VerCode==JK_FittingRuleInfo.VerCode &&
		GC_CabFNFHWFInfo.FactoryID==JK_FittingRuleInfo.FactoryID)
		.Where( GC_CabFNFHWFInfo.OrderID == *StatusInfo_.OrderID_ &&
		GC_CabFNFHWFInfo.FactoryID == *StatusInfo_.FactoryID_ &&
		GC_CabFNFHWFInfo.VerCode == VerCode_ &&
		JK_HWFittingInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_CABFNFHWF_INFO_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	Skip_ = imp_.UseCount_ == 0;

	ToInsert_.OldID_ = imp_.CabFNFHWFID_;
	ToInsert_.OldTableName_ = GC_CabFNFHWFInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::CabFNFHWF;
	ToInsert_.Amount_ = imp_.UseCount_;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	

	auto& pntCnt = InfoSPtr_->FNF_;
	auto pntItor = pntCnt.find(imp_.CabFNFID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"FNF_ are supposed to have ID:" << imp_.CabFNFID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABFNFHWF_INFO_TYPE>::PostProcess()
{
	
}

template<>
void	DecomposeTable<DCP_CABFNFHWF_INFO_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}