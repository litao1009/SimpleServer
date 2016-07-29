#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_TABLEPART_TYPE>::Imp
{
public:

	int32_t		DesignTableID_;
	int32_t		DesignTablePartID_;
	int32_t		DecorLineID_;
	int32_t		GTypeID_;
	int32_t		MaterialID_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	int64_t		VerCode_;
	AStringType	DecorLineName_;
	AStringType	DecorLineCode_;
	AStringType	MaterialName_;

	static const int32_t GType = 1202;
};

template<>
void	DecomposeTable<DCP_TABLEPART_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_TablePartInfo.DesignTableID.Into(imp_.DesignTableID_)|
		GC_TablePartInfo.DesignTablePartID.Into(imp_.DesignTablePartID_)|
		GC_TablePartInfo.DecorLineID.Into(imp_.DecorLineID_)|
			JK_DecorLineInfo.DecorLineName.Into(imp_.DecorLineName_)|
			JK_DecorLineInfo.DecorLineCode.Into(imp_.DecorLineCode_)|
		GC_TablePartInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_TablePartInfo.XLen.Into(imp_.XLen_)|
		GC_TablePartInfo.YLen.Into(imp_.YLen_)|
		GC_TablePartInfo.ZLen.Into(imp_.ZLen_)|
		GC_TablePartInfo.MaterialID.Into(imp_.MaterialID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
		GC_TablePartInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_TablePartInfo)
		.LeftOuterJoin(JK_DecorLineInfo).On(GC_TablePartInfo.DecorLineID == JK_DecorLineInfo.DecorLineID &&
											GC_TablePartInfo.VerCode == JK_DecorLineInfo.VerCode &&
											GC_TablePartInfo.FactoryID == JK_DecorLineInfo.FactoryID)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_TablePartInfo.MaterialID == JK_MaterialInfo.MaterialID &&
											GC_TablePartInfo.VerCode == JK_MaterialInfo.VerCode &&
											GC_TablePartInfo.FactoryID == JK_MaterialInfo.FactoryID &&
											JK_MaterialInfo.IsSplit == true)
		.Where(GC_TablePartInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_TablePartInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_TABLEPART_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DesignTablePartID_;
	ToInsert_.OldTableName_ = GC_TablePartInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::TablePart;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.DecorLineName_;
	ToInsert_.Code_ = imp_.DecorLineCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
	ToInsert_.MaterialPlanID_ = imp_.MaterialID_;
	ToInsert_.MaterialPlanName_ = imp_.MaterialName_;

	auto& pntCnt = InfoSPtr_->Table_;
	auto pntItor = pntCnt.find(imp_.DesignTableID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"Table_ are supposed to have ID:" << imp_.DesignTableID_;
		ToInsert_.ParentID_ = -1;
	}
	else
	{
		const auto& pntInfo = pntItor->second;
		ToInsert_.ParentID_ = pntInfo.NewID_;
	}
}


template<>
void	DecomposeTable<DCP_TABLEPART_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->TablePart_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.DesignTablePartID_),
		std::make_tuple(OwnNewVerifyID_, imp_.DecorLineName_,imp_.DecorLineCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.DecorLineID_, imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_TABLEPART_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}