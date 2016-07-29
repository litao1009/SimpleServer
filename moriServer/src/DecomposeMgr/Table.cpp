#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_TABLE_TYPE>::Imp
{
public:

	int32_t		DesignTableID_;
	int32_t		TableID_;
	int32_t		GTypeID_;
	double		ZLen_;
	int64_t		VerCode_;
	AStringType	MaterialName_;
	AStringType	MaterialCode_;

	static const int32_t GType = 1207;
};

template<>
void	DecomposeTable<DCP_TABLE_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_TableInfo.DesignTableID.Into(imp_.DesignTableID_)|
		GC_TableInfo.TableID.Into(imp_.TableID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
			JK_MaterialInfo.MaterialCode.Into(imp_.MaterialCode_)|
		GC_TableInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_TableInfo.ZLen.Into(imp_.ZLen_)|
		GC_TableInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_TableInfo)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_TableInfo.TableID == JK_MaterialInfo.MaterialID &&
											GC_TableInfo.VerCode == JK_MaterialInfo.VerCode &&
											GC_TableInfo.FactoryID == JK_MaterialInfo.FactoryID)
		.Where(GC_TableInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_TableInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_MaterialInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_TABLE_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DesignTableID_;
	ToInsert_.OldTableName_ = GC_TableInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::Table;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.MaterialName_;
	ToInsert_.Code_ = imp_.MaterialCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.ZLength_ = imp_.ZLen_;
}


template<>
void	DecomposeTable<DCP_TABLE_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->Table_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.DesignTableID_),
		std::make_tuple(OwnNewVerifyID_, imp_.MaterialName_,imp_.MaterialCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.TableID_, imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_TABLE_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	auto& imp_ = *ImpSPtr_;

// 	DecomposeTable<DCP_TABLETOBOARD_TYPE> special(StatusInfo_, InfoSPtr_, JD_BoardInfo, imp_.VerCode_);
// 	special.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_TABLEPART_TYPE> part(StatusInfo_, InfoSPtr_, JD_Objects, imp_.VerCode_);
	part.Decompose(sql,sqlInsert);

	DecomposeTable<DCP_TABLEPART_TOBOARD_TYPE> partSpecial(StatusInfo_, InfoSPtr_, JD_BoardInfo, imp_.VerCode_);
	partSpecial.Decompose(sql,sqlInsert);
}