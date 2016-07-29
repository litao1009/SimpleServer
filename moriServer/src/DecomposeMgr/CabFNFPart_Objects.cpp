#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABFNFPART_INFO_TOOBJECT_TYPE>::Imp
{
public:

	int32_t		CabFNFID_;
	int32_t		CabFNFPartID_;
	int32_t		HWFittingID_;
	int32_t		GTypeID_;
	double		RealXLen_;
	double		RealYLen_;
	double		RealZLen_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;

	static	const int32_t	MaterialID = 0;
};


template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOOBJECT_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabFNFPartInfo.CabFNFID.Into(imp_.CabFNFID_)|
		GC_CabFNFPartInfo.CabFNFPartID.Into(imp_.CabFNFPartID_)|
		GC_CabFNFPartInfo.HWFittingID.Into(imp_.HWFittingID_)|
			JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
			JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
		GC_CabFNFPartInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_CabFNFPartInfo.RealXLen.Into(imp_.RealXLen_)|
		GC_CabFNFPartInfo.RealYLen.Into(imp_.RealYLen_)|
		GC_CabFNFPartInfo.RealZLen.Into(imp_.RealZLen_)
		)
		.From(GC_CabFNFPartInfo)
		.InnerJoin(JK_HWFittingInfo).On( GC_CabFNFPartInfo.HWFittingID == JK_HWFittingInfo.HWFittingID &&
										GC_CabFNFPartInfo.VerCode == JK_HWFittingInfo.VerCode &&
										GC_CabFNFPartInfo.FactoryID == JK_HWFittingInfo.FactoryID)
		.Where( GC_CabFNFPartInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabFNFPartInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabFNFPartInfo.VerCode == VerCode_ &&
				GC_CabFNFPartInfo.MaterialID == Imp::MaterialID &&
				JK_HWFittingInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOOBJECT_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabFNFPartID_;
	ToInsert_.OldTableName_ = GC_CabFNFPartInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::FNFittingPart;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.RealXLen_;
	ToInsert_.YLength_ = imp_.RealYLen_;
	ToInsert_.ZLength_ = imp_.RealZLen_;

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
void	DecomposeTable<DCP_CABFNFPART_INFO_TOOBJECT_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.HWFittingID_, VerCode_);
}

template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOOBJECT_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}