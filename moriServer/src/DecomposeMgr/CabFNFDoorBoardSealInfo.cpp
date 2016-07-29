#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABDOORBOARDSEAL_TYPE>::Imp
{
public:

	int32_t		CabFNFPartSealID_;
	int32_t		CabFNFPartID_;
	int32_t		SealIndex_;
	int32_t		MaterialID_;
	double		PreMill_;
	AStringType	MaterialName_;
	AStringType	MaterialCode_;
};

template<>
void	DecomposeTable<DCP_CABDOORBOARDSEAL_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabFNFPartSealInfo.CabFNFPartSealID.Into(imp_.CabFNFPartSealID_)|
		GC_CabFNFPartSealInfo.CabFNFPartID.Into(imp_.CabFNFPartID_)|
		GC_CabFNFPartSealInfo.SealIndex.Into(imp_.SealIndex_)|
		GC_CabFNFPartSealInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
			JK_MaterialInfo.MaterialCode.Into(imp_.MaterialCode_)|
		GC_CabFNFPartSealInfo.PreMill.Into(imp_.PreMill_)
		)
		.From(GC_CabFNFPartSealInfo)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_CabFNFPartSealInfo.MaterialID==JK_MaterialInfo.MaterialID &&
											GC_CabFNFPartSealInfo.VerCode==JK_MaterialInfo.VerCode &&
											GC_CabFNFPartSealInfo.FactoryID==JK_MaterialInfo.FactoryID)
		.Where(GC_CabFNFPartSealInfo.OrderID==*StatusInfo_.OrderID_ &&
				GC_CabFNFPartSealInfo.FactoryID==*StatusInfo_.FactoryID_ &&
				GC_CabFNFPartSealInfo.VerCode==VerCode_);
}


template<>
void	DecomposeTable<DCP_CABDOORBOARDSEAL_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabFNFPartSealID_;
	ToInsert_.OldTableName_ = GC_CabFNFPartSealInfo.GetTableName();
	ToInsert_.SealIndex_ = imp_.SealIndex_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialCode_ = imp_.MaterialCode_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.PreMill_ = imp_.PreMill_;

	auto& pntCnt = InfoSPtr_->CabFNFPart_;
	auto pntItor = pntCnt.find(imp_.CabFNFPartID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"CabFNFPart are supposed to have ID:" << imp_.CabFNFPartID_;
		ToInsert_.BoardID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.BoardID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABDOORBOARDSEAL_TYPE>::PostProcess()
{

}

template<>
void	DecomposeTable<DCP_CABDOORBOARDSEAL_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}