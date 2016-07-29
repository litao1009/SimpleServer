#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECORBARD_DOOR_HANDLE_TYPE>::Imp
{
public:

	int32_t		CabDoorSystemID_;
	int32_t		HandleID_;
	int32_t		GTypeID_;
	double		RealXLen_;
	double		RealYLen_;
	double		RealZLen_;
	AStringType	HWFittingName_;
	AStringType	HWFittingCode_;
};

template<>
void	DecomposeTable<DCP_DECORBARD_DOOR_HANDLE_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorHandleInfo.CabParentID.Into(imp_.CabDoorSystemID_)|
		GC_CabDoorHandleInfo.HandleID.Into(imp_.HandleID_)|
			JK_HWFittingInfo.HWFittingName.Into(imp_.HWFittingName_)|
			JK_HWFittingInfo.HWFittingCode.Into(imp_.HWFittingCode_)|
		GC_CabDoorHandleInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_CabDoorHandleInfo.RealXLen.Into(imp_.RealXLen_)|
		GC_CabDoorHandleInfo.RealYLen.Into(imp_.RealYLen_)|
		GC_CabDoorHandleInfo.RealZLen.Into(imp_.RealZLen_)
		)
		.From(GC_CabDoorHandleInfo)
		.InnerJoin(JK_HWFittingInfo).On(GC_CabDoorHandleInfo.HandleID == JK_HWFittingInfo.HWFittingID &&
		GC_CabDoorHandleInfo.VerCode == JK_HWFittingInfo.VerCode &&
		GC_CabDoorHandleInfo.FactoryID == JK_HWFittingInfo.FactoryID)
		.InnerJoin(GC_DecorBoardUnitInfo).On(GC_CabDoorHandleInfo.CabParentID == GC_DecorBoardUnitInfo.DesignDecorBoardUnitID &&
											GC_CabDoorHandleInfo.VerCode == GC_DecorBoardUnitInfo.VerCode &&
											GC_CabDoorHandleInfo.FactoryID == GC_DecorBoardUnitInfo.FactoryID &&
											GC_CabDoorHandleInfo.OrderID == GC_DecorBoardUnitInfo.OrderID &&
											GC_CabDoorHandleInfo.ParentType==2)
		.Where( GC_CabDoorHandleInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorHandleInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				GC_CabDoorHandleInfo.VerCode == VerCode_ &&
				JK_HWFittingInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_DECORBARD_DOOR_HANDLE_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.HandleID_;
	ToInsert_.OldTableName_ = GC_CabDoorHandleInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::HWFitting;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.HWFittingName_;
	ToInsert_.Code_ = imp_.HWFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.RealXLen_;
	ToInsert_.YLength_ = imp_.RealYLen_;
	ToInsert_.ZLength_ = imp_.RealZLen_;

	auto& pntCnt = InfoSPtr_->DecorBoard_;
	auto pntItor = pntCnt.find(imp_.CabDoorSystemID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"DecorBoard_ are supposed to have ID:" << imp_.CabDoorSystemID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_DECORBARD_DOOR_HANDLE_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.HandleID_, VerCode_);
}

template<>
void	DecomposeTable<DCP_DECORBARD_DOOR_HANDLE_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}