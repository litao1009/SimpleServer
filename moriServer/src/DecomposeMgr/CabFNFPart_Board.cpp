#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABFNFPART_INFO_TOBOARD_TYPE>::Imp
{
public:

	int32_t		CabFNFID_;
	int32_t		CabFNFPartID_;
	int32_t		SkinDirection_;
	int32_t		MaterialID_;
	double		RealXLen_;
	double		RealYLen_;
	double		RealZLen_;
	AStringType	FNFittingPartName_;
	AStringType	MaterialName_;

	static	const int32_t	HWFittingID = 0;
};


template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOBOARD_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabFNFPartInfo.CabFNFID.Into(imp_.CabFNFID_)|
		GC_CabFNFPartInfo.CabFNFPartID.Into(imp_.CabFNFPartID_)|
			JK_FNFittingPartInfo.FNFittingPartName.Into(imp_.FNFittingPartName_)|
			JK_FNFittingPartInfo.SkinDirection.Into(imp_.SkinDirection_)|
		GC_CabFNFPartInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
		GC_CabFNFPartInfo.RealXLen.Into(imp_.RealXLen_)|
		GC_CabFNFPartInfo.RealYLen.Into(imp_.RealYLen_)|
		GC_CabFNFPartInfo.RealZLen.Into(imp_.RealZLen_)
		)
		.From(GC_CabFNFPartInfo)
		.InnerJoin(JK_FNFittingPartInfo).On(GC_CabFNFPartInfo.FNFittingPartID==JK_FNFittingPartInfo.FNFittingPartID &&
											GC_CabFNFPartInfo.VerCode==JK_FNFittingPartInfo.VerCode &&
											GC_CabFNFPartInfo.FactoryID==JK_FNFittingPartInfo.FactoryID)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_CabFNFPartInfo.MaterialID==JK_MaterialInfo.MaterialID &&
											GC_CabFNFPartInfo.VerCode==JK_MaterialInfo.VerCode &&
											GC_CabFNFPartInfo.FactoryID==JK_MaterialInfo.FactoryID)
		.Where(GC_CabFNFPartInfo.OrderID==*StatusInfo_.OrderID_ &&
				GC_CabFNFPartInfo.FactoryID==*StatusInfo_.FactoryID_ &&
				GC_CabFNFPartInfo.VerCode==VerCode_ &&
				GC_CabFNFPartInfo.HWFittingID==Imp::HWFittingID);
}


template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOBOARD_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabFNFPartID_;
	ToInsert_.OldTableName_ = GC_CabFNFPartInfo.GetTableName();
	ToInsert_.BoardType_ = DBValue::BoardType::InnerComponent;
	ToInsert_.Name_ = imp_.FNFittingPartName_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.XLength_ = imp_.RealXLen_;
	ToInsert_.YLength_ = imp_.RealYLen_;
	ToInsert_.ZLength_ = imp_.RealZLen_;
#pragma message("TODO")
	ToInsert_.CutXLength_;
	ToInsert_.CutYLength_;
	ToInsert_.Square_ = imp_.RealXLen_ * imp_.RealYLen_;
	InfoSPtr_->Square_ += *ToInsert_.Square_;

	auto& pntCnt = InfoSPtr_->FNF_;
	auto pntItor = pntCnt.find(imp_.CabFNFID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"FNF_ are supposed to have ID:" << imp_.CabFNFID_;
		ToInsert_.ObjectID_ = -1;
		ToInsert_.ObjectName_ = "";
		ToInsert_.ObjectCode_ = "";
	}
	else
	{
		const auto& pntInfo = pntItor->second;

		ToInsert_.ObjectID_ = pntInfo.NewID_;
		ToInsert_.ObjectName_ = pntInfo.Name_;
		ToInsert_.ObjectCode_ = pntInfo.Code_;
	}
}


template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOBOARD_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->CabFNFPart_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabFNFPartID_),
		std::make_tuple(OwnNewVerifyID_, imp_.FNFittingPartName_));
}

template<>
void	DecomposeTable<DCP_CABFNFPART_INFO_TOBOARD_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_CABDOORBOARDSEAL_TYPE> seal(StatusInfo_, InfoSPtr_, JD_BoardSealInfo, VerCode_);
	seal.Decompose(sql, sqlInsert);
}