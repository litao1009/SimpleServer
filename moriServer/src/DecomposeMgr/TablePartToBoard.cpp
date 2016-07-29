#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_TABLEPART_TOBOARD_TYPE>::Imp
{
public:

	int32_t		DesignTablePartID_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	int64_t		VerCode_;
	AStringType	MaterialName_;
	AStringType	DecorLineCode_;

	static const int32_t GType = 1202;
};

template<>
void	DecomposeTable<DCP_TABLEPART_TOBOARD_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_TablePartInfo.DesignTablePartID.Into(imp_.DesignTablePartID_)|
			JK_MaterialInfo.MaterialName.Into(imp_.MaterialName_)|
			JK_MaterialInfo.MaterialCode.Into(imp_.DecorLineCode_)|
		GC_TablePartInfo.XLen.Into(imp_.XLen_)|
		GC_TablePartInfo.YLen.Into(imp_.YLen_)|
		GC_TablePartInfo.ZLen.Into(imp_.ZLen_)|
		GC_TablePartInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_TablePartInfo)
		.LeftOuterJoin(JK_MaterialInfo).On(GC_TablePartInfo.MaterialID == JK_MaterialInfo.MaterialID &&
											GC_TablePartInfo.VerCode == JK_MaterialInfo.VerCode &&
											GC_TablePartInfo.FactoryID == JK_MaterialInfo.FactoryID &&
											JK_MaterialInfo.MaterialID == Imp::GType &&
											JK_MaterialInfo.IsSplit == true)
		.Where(GC_TablePartInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_TablePartInfo.FactoryID == *StatusInfo_.FactoryID_);
}


template<>
void	DecomposeTable<DCP_TABLEPART_TOBOARD_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.DesignTablePartID_;
	ToInsert_.OldTableName_ = GC_TablePartInfo.GetTableName();
	ToInsert_.BoardType_ = DBValue::BoardType::TablePart;
	ToInsert_.Name_ = imp_.MaterialName_;
	ToInsert_.MaterialID_ = imp_.DesignTablePartID_;
	ToInsert_.MaterialName_ = imp_.MaterialName_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;

	auto& pntCnt = InfoSPtr_->TablePart_;
	auto pntItor = pntCnt.find(imp_.DesignTablePartID_);
	if ( pntItor == pntCnt.end() )
	{
		LOG_ERROR << L"TablePart_ are supposed to have ID:" << imp_.DesignTablePartID_;
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
void	DecomposeTable<DCP_TABLEPART_TOBOARD_TYPE>::PostProcess()
{

}

template<>
void	DecomposeTable<DCP_TABLEPART_TOBOARD_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}