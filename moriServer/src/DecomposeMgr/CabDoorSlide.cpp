#include "DecomposeTable.h"
#include "DecomposeUtil.h"


template<>
class	DecomposeTable<DCP_CABDOOR_SLIDE_TYPE>::Imp
{
public:

	int32_t		CabDoorSystemID_;
	int32_t		SlideID_;
	double		RealXLen_;
	double		RealYLen_;
	double		RealZLen_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;

	static	const int32_t	GType = 1305;
};


template<>
void	DecomposeTable<DCP_CABDOOR_SLIDE_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorRegionInfo.CabDesignDoorSystemID.Into(imp_.CabDoorSystemID_)|
		GC_CabDoorSlideInfo.SlideID.Into(imp_.SlideID_)|
			JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
			JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
		GC_CabDoorSlideInfo.RealXLen.Into(imp_.RealXLen_)|
		GC_CabDoorSlideInfo.RealYLen.Into(imp_.RealYLen_)|
		GC_CabDoorSlideInfo.RealZLen.Into(imp_.RealZLen_)
		)
		.From(GC_CabDoorSlideInfo)
		.InnerJoin(JK_HWFittingInfo).On(GC_CabDoorSlideInfo.SlideID == JK_HWFittingInfo.HWFittingID &&
										GC_CabDoorSlideInfo.VerCode == JK_HWFittingInfo.VerCode &&
										GC_CabDoorSlideInfo.FactoryID == JK_HWFittingInfo.FactoryID)
		.InnerJoin(GC_CabDoorRegionInfo).On(GC_CabDoorSlideInfo.CabDoorRegionID == GC_CabDoorRegionInfo.CabDoorRegionID &&
											GC_CabDoorSlideInfo.VerCode == GC_CabDoorRegionInfo.VerCode &&
											GC_CabDoorSlideInfo.FactoryID == GC_CabDoorRegionInfo.FactoryID &&
											GC_CabDoorSlideInfo.OrderID == GC_CabDoorRegionInfo.OrderID)
		.Where(GC_CabDoorSlideInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorSlideInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorSlideInfo.VerCode == VerCode_ &&
				JK_HWFittingInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_CABDOOR_SLIDE_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.ObjectType_ = DBValue::ObjectType::HWFitting;
	ToInsert_.GType_ = Imp::GType;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.XLength_ = imp_.RealXLen_;
	ToInsert_.YLength_ = imp_.RealYLen_;
	ToInsert_.ZLength_ = imp_.RealZLen_;
	ToInsert_.OldID_ = imp_.SlideID_;
	ToInsert_.OldTableName_ = GC_CabDoorSlideInfo.GetTableName();

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
void	DecomposeTable<DCP_CABDOOR_SLIDE_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, Imp::GType, imp_.SlideID_, VerCode_);
}

template<>
void	DecomposeTable<DCP_CABDOOR_SLIDE_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}