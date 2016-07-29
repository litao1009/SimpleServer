#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_DECOR_LINE_SPECIAL_TYPE>::Imp
{
public:

	int32_t		DesignDecorLineID_;
	int32_t		MaterialID_;
	int64_t		VerCode_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	DecorLineName_;
	AStringType	MaterialName_;

	static	const int32_t	GTypeID = 1202;
};



template<>
void	DecomposeTable<DCP_DECOR_LINE_SPECIAL_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_DecorLineInfo.DecorLineID.Into(imp_.DesignDecorLineID_)|
			JK_DecorLineInfo.DecorLineName.Into(imp_.DecorLineName_)|
		GC_DecorLineInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
		GC_DecorLineInfo.XLen.Into(imp_.XLen_)|
		GC_DecorLineInfo.YLen.Into(imp_.YLen_)|
		GC_DecorLineInfo.ZLen.Into(imp_.ZLen_)|
		GC_DecorLineInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_DecorLineInfo)
		.InnerJoin(JK_DecorLineInfo).On(GC_DecorLineInfo.DecorLineID == JK_DecorLineInfo.DecorLineID &&
		GC_DecorLineInfo.VerCode == JK_DecorLineInfo.VerCode &&
		GC_DecorLineInfo.FactoryID == JK_DecorLineInfo.FactoryID)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_DecorLineInfo.MaterialID == JK_MaterialInfo.MaterialID &&
		GC_DecorLineInfo.VerCode == JK_MaterialInfo.VerCode &&
		GC_DecorLineInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_DecorLineInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_DecorLineInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_MaterialInfo.GTypeID == Imp::GTypeID);
}



template<>
void	DecomposeTable<DCP_DECOR_LINE_SPECIAL_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DesignDecorLineID_;
	ToInsert_.OldTableName_ = GC_DecorLineInfo.GetTableName();
	ToInsert_.BoardType_ = DBValue::BoardType::Other;
	ToInsert_.Name_ = imp_.DecorLineName_;
	ToInsert_.MaterialID_ = imp_.MaterialID_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
	ToInsert_.Square_ = imp_.XLen_ * imp_.YLen_;
	InfoSPtr_->Square_ += *ToInsert_.Square_;
}


template<>
void	DecomposeTable<DCP_DECOR_LINE_SPECIAL_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, Imp::GTypeID, imp_.DesignDecorLineID_, imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_DECOR_LINE_SPECIAL_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}