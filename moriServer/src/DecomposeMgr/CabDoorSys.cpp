#include "DecomposeTable.h"
#include "DecomposeUtil.h"


template<>
class	DecomposeTable<DCP_CABDOOR_TYPE>::Imp
{
public:

	int32_t		CabID_;
	int32_t		CabDoorSystemID_;
	int32_t		DoorMatPlanID_;
	int32_t		MatID_;
	double		RealXLen_;
	double		RealYLen_;
	double		RealZLen_;
	AStringType	DoorSystemName_;
	AStringType	DoorSystemCode_;
	AStringType	DoorMatPlanName_;
	AStringType	MaterialName_;

	static	const int32_t	GType = 2206;
};


template<>
void	DecomposeTable<DCP_CABDOOR_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabDoorSystemInfo.CabID.Into(imp_.CabID_)|
		GC_CabDoorSystemInfo.CabDoorSystemID.Into(imp_.CabDoorSystemID_)|
			JK_DoorSystemInfo.DoorSystemName.Into(imp_.DoorSystemName_)|
			JK_DoorSystemInfo.DoorSystemCode.Into(imp_.DoorSystemCode_)|
		GC_CabDoorSystemInfo.RealXLen.Into(imp_.RealXLen_)|
		GC_CabDoorSystemInfo.RealYLen.Into(imp_.RealYLen_)|
		GC_CabDoorSystemInfo.RealZLen.Into(imp_.RealZLen_)|
		GC_CabDoorSystemInfo.DoorMatPlanID.Into(imp_.DoorMatPlanID_)|
			JK_DoorMatPlanInfo.DoorMatPlanName.Into(imp_.DoorMatPlanName_)|
			JK_DoorMatPlanInfo.MatID.Into(imp_.MatID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)
		)
		.From(GC_CabDoorSystemInfo)
		.InnerJoin(JK_DoorSystemInfo).On(GC_CabDoorSystemInfo.DoorSystemID == JK_DoorSystemInfo.DoorSystemID &&
		GC_CabDoorSystemInfo.VerCode == JK_DoorSystemInfo.VerCode &&
		GC_CabDoorSystemInfo.FactoryID == JK_DoorSystemInfo.FactoryID)
		.LeftOuterJoin(JK_DoorMatPlanInfo).On(GC_CabDoorSystemInfo.DoorMatPlanID == JK_DoorMatPlanInfo.DoorMatPlanID &&
		GC_CabDoorSystemInfo.VerCode == JK_DoorMatPlanInfo.VerCode &&
		GC_CabDoorSystemInfo.FactoryID == JK_DoorMatPlanInfo.FactoryID)
		.LeftOuterJoin(JK_MaterialInfo).On(JK_DoorMatPlanInfo.MatID == JK_MaterialInfo.MaterialID &&
											JK_DoorMatPlanInfo.VerCode == JK_MaterialInfo.VerCode &&
											JK_DoorMatPlanInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where( GC_CabDoorSystemInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabDoorSystemInfo.VerCode == VerCode_ &&
				GC_CabDoorSystemInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_CABDOOR_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.ObjectType_ = DBValue::ObjectType::Door;
	ToInsert_.GType_ = Imp::GType;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.DoorSystemName_;
	ToInsert_.Code_ = imp_.DoorSystemCode_;	
	ToInsert_.XLength_ = imp_.RealXLen_;
	ToInsert_.YLength_ = imp_.RealYLen_;
	ToInsert_.ZLength_ = imp_.RealZLen_;
	ToInsert_.MaterialPlanID_ = imp_.DoorMatPlanID_;
	ToInsert_.MaterialPlanName_ = imp_.DoorMatPlanName_;
	ToInsert_.OldID_ = imp_.CabDoorSystemID_;
	ToInsert_.OldTableName_ = GC_CabDoorSystemInfo.GetTableName();

	auto& pntCnt = InfoSPtr_->Cabinet_;
	auto pntItor = pntCnt.find(imp_.CabID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"Cabinet_ are supposed to have ID:" << imp_.CabID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_CABDOOR_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->CabDoorSys_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabDoorSystemID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DoorSystemName_, imp_.DoorSystemCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, Imp::GType, imp_.CabDoorSystemID_, VerCode_);
}


template<>
void	DecomposeTable<DCP_CABDOOR_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	DecomposeTable<DCP_CABDOOR_SLIDE_TYPE> slide(StatusInfo_, InfoSPtr_, JD_Objects, VerCode_);
	slide.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_CABDOOR_UNIT_TYPE> unit(StatusInfo_, InfoSPtr_, JD_Objects, VerCode_);
	unit.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_CABDOOR_HANDLE_TYPE> handle(StatusInfo_, InfoSPtr_, JD_Objects, VerCode_);
	handle.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_CABDOOR_HWF_TYPE> hwf(StatusInfo_, InfoSPtr_, JD_Objects, VerCode_);
	hwf.Decompose(sql,sqlInsert);
}