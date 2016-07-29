#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_PRODUCT_TYPE>::Imp
{
public:

	int32_t		ProductID_;
	int32_t		GTypeID_;
	int64_t		VerCode_;
	double		XLen_;
	double		YLen_;
	double		ZLen_;
	AStringType	ProductName_;
	AStringType	ProductCode_;
};

template<>
void	DecomposeTable<DCP_PRODUCT_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_ProductInfo.ProductID.Into(imp_.ProductID_)|
			JK_ProductInfo.ProductName.Into(imp_.ProductName_)|
			JK_ProductInfo.ProductCode.Into(imp_.ProductCode_)|
		GC_ProductInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_ProductInfo.XLen.Into(imp_.XLen_)|
		GC_ProductInfo.YLen.Into(imp_.YLen_)|
		GC_ProductInfo.ZLen.Into(imp_.ZLen_)|
		GC_ProductInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_ProductInfo)
		.InnerJoin(JK_ProductInfo).On(GC_ProductInfo.ProductID == JK_ProductInfo.ProductID &&
									GC_ProductInfo.VerCode == JK_ProductInfo.VerCode &&
									GC_ProductInfo.FactoryID == JK_ProductInfo.FactoryID)
		.Where(GC_ProductInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_ProductInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_ProductInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_PRODUCT_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.ProductID_;
	ToInsert_.OldTableName_ = GC_ProductInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::Product;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.ProductName_;
	ToInsert_.Code_ = imp_.ProductCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.XLen_;
	ToInsert_.YLength_ = imp_.YLen_;
	ToInsert_.ZLength_ = imp_.ZLen_;
}


template<>
void	DecomposeTable<DCP_PRODUCT_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.ProductID_, imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_PRODUCT_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}