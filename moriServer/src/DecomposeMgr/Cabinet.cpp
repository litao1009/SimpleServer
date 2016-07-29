#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABINET_TYPE>::Imp
{
public:

	bool		IsStandard_;
	int32_t		CabID_;
	int32_t		CabGapType_;
	int32_t		CabShapeID_;
	int32_t		CabMatPlanID_;
	int32_t		FootID_;
	int32_t		FootCount_;
	int64_t		VerCode_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	double		ShapeXLen_;
	double		ShapeZLen_;
	double		GapXLen_;
	double		GapYLen_;
	double		GapZLen_;
	AStringType	CabDesignName_;
	AStringType	CabDesignCode_;
	AStringType	CabMatPlanName_;
};

template<>
void	DecomposeTable<DCP_CABINET_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabInfo.CabID.Into(imp_.CabID_)|
			JK_CabDesignInfo.CabDesignName.Into(imp_.CabDesignName_)|
			JK_CabDesignInfo.CabDesignCode.Into(imp_.CabDesignCode_)|
			JK_CabStructInfo.CabGapType.Into(imp_.CabGapType_)|
			JK_CabStructInfo.CabShapeID.Into(imp_.CabShapeID_)|
		GC_CabInfo.CabMatPlanID.Into(imp_.CabMatPlanID_)|
			JK_CabMatPlanInfo.CabMatPlanName.Into(imp_.CabMatPlanName_)|
		GC_CabInfo.XLen.Into(imp_.XLen_)|
		GC_CabInfo.YLen.Into(imp_.YLen_)|
		GC_CabInfo.ZLen.Into(imp_.ZLen_)|
		GC_CabInfo.ShapeXLen.Into(imp_.ShapeXLen_)|
		GC_CabInfo.ShapeZLen.Into(imp_.ShapeZLen_)|
		GC_CabInfo.GapXLen.Into(imp_.GapXLen_)|
		GC_CabInfo.GapYLen.Into(imp_.GapYLen_)|
		GC_CabInfo.GapZLen.Into(imp_.GapZLen_)|
		GC_CabInfo.IsStandard.Into(imp_.IsStandard_)|
		GC_CabInfo.FootID.Into(imp_.FootID_)|
		GC_CabInfo.FootCount.Into(imp_.FootCount_)|
		GC_CabInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_CabInfo)
		.InnerJoin(JK_CabDesignInfo).On(GC_CabInfo.CabDesignID == JK_CabDesignInfo.CabDesignID &&
		GC_CabInfo.VerCode == JK_CabDesignInfo.VerCode &&
		GC_CabInfo.FactoryID == JK_CabDesignInfo.FactoryID)
		.InnerJoin(JK_CabStructInfo).On(GC_CabInfo.CabStructID == JK_CabStructInfo.CabStructID &&
		GC_CabInfo.VerCode == JK_CabStructInfo.VerCode &&
		GC_CabInfo.FactoryID == JK_CabStructInfo.FactoryID)
		.LeftOuterJoin(JK_CabMatPlanInfo).On(GC_CabInfo.CabMatPlanID == JK_CabMatPlanInfo.CabMatPlanID &&
											GC_CabInfo.VerCode == JK_CabMatPlanInfo.VerCode &&
											GC_CabInfo.FactoryID == JK_CabMatPlanInfo.FactoryID)
		.Where(GC_CabInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_CabInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_CABINET_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabID_;
	ToInsert_.OldTableName_ = GC_CabInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::Cabinet;
	ToInsert_.Amount_ = 1;
	ToInsert_.CabGapType_ = imp_.CabGapType_;
	ToInsert_.CabShape_ = imp_.CabShapeID_;
	ToInsert_.MaterialPlanID_ = imp_.CabMatPlanID_;
	ToInsert_.MaterialPlanName_ = imp_.CabMatPlanName_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
	ToInsert_.ShapeXLength_ = imp_.ShapeXLen_;
	ToInsert_.ShapeZLength_ = imp_.ShapeZLen_;
	ToInsert_.GapXLength_ = imp_.GapXLen_;
	ToInsert_.GapYLength_ = imp_.GapYLen_;
	ToInsert_.GapZLength_ = imp_.GapZLen_;
	ToInsert_.IsStandard_ = imp_.IsStandard_;
	ToInsert_.Name_ = imp_.CabDesignName_;
	ToInsert_.Code_ = imp_.CabDesignCode_;
}


template<>
void	DecomposeTable<DCP_CABINET_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->Cabinet_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabID_),
		std::make_tuple(OwnNewVerifyID_,
		imp_.FootID_,
		imp_.FootCount_,
		imp_.CabDesignName_,
		imp_.CabDesignCode_)
		);
}

template<>
void	DecomposeTable<DCP_CABINET_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	auto& imp_ = *ImpSPtr_;

	DecomposeTable<DCP_CABBOARD_TYPE> board(StatusInfo_, InfoSPtr_, JD_BoardInfo, imp_.VerCode_);
	board.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_CABFOOT_TYPE> foot(StatusInfo_, InfoSPtr_, JD_Objects, imp_.VerCode_);
	foot.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_CABDOOR_TYPE> door(StatusInfo_, InfoSPtr_, JD_Objects, imp_.VerCode_);
	door.Decompose(sql,sqlInsert);
}