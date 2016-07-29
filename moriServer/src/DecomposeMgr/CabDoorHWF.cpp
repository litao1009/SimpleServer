#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABDOOR_HWF_TYPE>::Imp
{
public:

	int32_t		CabDoorSystemID_;
	int32_t		HWFittingID_;
	int32_t		GTypeID_;
	int32_t		UseCount_;
	double		RealZLen_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;
};

template<>
void	DecomposeTable<DCP_CABDOOR_HWF_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorRegionInfo.CabDoorSystemID.Into(imp_.CabDoorSystemID_)|
		GC_CabDoorHWFInfo.HWFittingID.Into(imp_.HWFittingID_)|
		JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
		JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
		GC_CabDoorHWFInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_CabDoorHWFInfo.UseCount.Into(imp_.UseCount_)
		)
		.From(GC_CabDoorHWFInfo)
		.InnerJoin(JK_HWFittingInfo).On(GC_CabDoorHWFInfo.HWFittingID == JK_HWFittingInfo.HWFittingID &&
		GC_CabDoorHWFInfo.VerCode == JK_HWFittingInfo.VerCode &&
		GC_CabDoorHWFInfo.FactoryID == JK_HWFittingInfo.FactoryID)
		.InnerJoin(GC_CabDoorRegionInfo).On(GC_CabDoorHWFInfo.CabDoorRegionID == GC_CabDoorRegionInfo.CabDoorRegionID &&
											GC_CabDoorHWFInfo.VerCode == GC_CabDoorRegionInfo.VerCode &&
											GC_CabDoorHWFInfo.FactoryID == GC_CabDoorRegionInfo.FactoryID &&
											GC_CabDoorHWFInfo.OrderID == GC_CabDoorRegionInfo.OrderID)
		.Where( GC_CabDoorHWFInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorHWFInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorHWFInfo.VerCode == VerCode_ &&
				JK_HWFittingInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_CABDOOR_HWF_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	Skip_ = imp_.UseCount_ == 0;

	ToInsert_.ObjectType_ = DBValue::ObjectType::HWFitting;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.Amount_ = imp_.UseCount_;
	ToInsert_.OldID_ = imp_.HWFittingID_;
	ToInsert_.OldTableName_ = GC_CabDoorHWFInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->CabDoorSys_;
	auto pntItor = pntCnt.find(imp_.CabDoorSystemID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"CabDoorSys_ are supposed to have ID:" << imp_.CabDoorSystemID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABDOOR_HWF_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.HWFittingID_, VerCode_);
}

template<>
void	DecomposeTable<DCP_CABDOOR_HWF_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}