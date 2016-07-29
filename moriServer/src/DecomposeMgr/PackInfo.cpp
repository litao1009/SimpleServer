#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_ORDER_PACKINFO_TYPE>::Imp
{
public:

	Imp() {}

	bool		IsSeparate_;
	int32_t		FittingPackID_;
	int32_t		UseCount_;
	int32_t		GTypeID_;
	AStringType	FittingPackName_;
	AStringType	FittingPackCode_;
};


template<>
void	DecomposeTable<DCP_ORDER_PACKINFO_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_PackInfo.FittingPackID.Into(imp_.FittingPackID_)|
		GC_PackInfo.UseCount.Into(imp_.UseCount_)|
		JK_PackageInfo.GTypeID.Into(imp_.GTypeID_)|
		JK_PackageInfo.IsSeparate.Into(imp_.IsSeparate_)|
		JK_PackageInfo.FittingPackName.Into(imp_.FittingPackName_)|
		JK_PackageInfo.FittingPackCode.Into(imp_.FittingPackCode_)
		)
		.From(GC_PackInfo)
		.InnerJoin(JK_PackageInfo).On(GC_PackInfo.FittingPackID == JK_PackageInfo.FittingPackID &&
		GC_PackInfo.VerCode == JK_PackageInfo.VerCode &&
		GC_PackInfo.FactoryID == JK_PackageInfo.FactoryID)
		.Where(GC_PackInfo.OrderID == *StatusInfo_.OrderID_ &&
				GC_PackInfo.FactoryID == *StatusInfo_.FactoryID_ &&
				JK_PackageInfo.IsSplit == true);
}


template<>
void	DecomposeTable<DCP_ORDER_PACKINFO_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	Skip_ = imp_.UseCount_ == 0;

	ToInsert_.OldID_ = imp_.FittingPackID_;
	ToInsert_.OldTableName_ = GC_PackInfo.GetTableName();
	ToInsert_.ParentID_ = 0;
	ToInsert_.Amount_ = imp_.UseCount_;
	ToInsert_.Name_ = imp_.FittingPackName_;
	ToInsert_.Code_ = imp_.FittingPackCode_;
	ToInsert_.ObjectType_ = DBValue::ObjectType::FittingPackage;
}


template<>
void	DecomposeTable<DCP_ORDER_PACKINFO_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;
	
	if ( !imp_.IsSeparate_ )
	{
		return;
	}

	InfoSPtr_->PackageInfo_.emplace_back(OwnNewVerifyID_, imp_.FittingPackID_);
}

template<>
void	DecomposeTable<DCP_ORDER_PACKINFO_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
}