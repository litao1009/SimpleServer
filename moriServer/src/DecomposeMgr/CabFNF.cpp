#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_CABFNF_INFO_TYPE>::Imp
{
public:

	int32_t		CabFNFID_;
	int32_t		DesignOwnerID_;
	int32_t		DesignOwnerGTypeID_;
	int32_t		FNFittingID_;
	int32_t		DoorSysID_;
	int32_t		GTypeID_;
	double		RealXLen_;
	double		RealYLen_;
	double		RealZLen_;
	int64_t		VerCode_;
	AStringType	FNFittingName_;
	AStringType	FNFittingCode_;
};


template<>
void	DecomposeTable<DCP_CABFNF_INFO_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_CabFNFInfo.CabFNFID.Into(imp_.CabFNFID_)|
		GC_CabFNFInfo.DesignOwnerID.Into(imp_.DesignOwnerID_)|
		GC_CabFNFInfo.DesignOwnerGTypeID.Into(imp_.DesignOwnerGTypeID_)|
		GC_CabFNFInfo.FNFittingID.Into(imp_.FNFittingID_)|
			JK_FNFittingInfo.FNFittingName.Into(imp_.FNFittingName_)|
			JK_FNFittingInfo.FNFittingCode.Into(imp_.FNFittingCode_)|
		GC_CabFNFInfo.GTypeID.Into(imp_.GTypeID_)|
		GC_CabFNFInfo.RealXLen.Into(imp_.RealXLen_)|
		GC_CabFNFInfo.RealYLen.Into(imp_.RealYLen_)|
		GC_CabFNFInfo.RealZLen.Into(imp_.RealZLen_)|
		GC_CabFNFInfo.VerCode.Into(imp_.VerCode_)|
		GC_CabDoorRegionInfo.CabDoorSystemID.Into(imp_.DoorSysID_)
		)
		.From(GC_CabFNFInfo)
		.InnerJoin(JK_FNFittingInfo).On(GC_CabFNFInfo.FNFittingID==JK_FNFittingInfo.FNFittingID &&
										GC_CabFNFInfo.VerCode==JK_FNFittingInfo.VerCode &&
										GC_CabFNFInfo.FactoryID==JK_FNFittingInfo.FactoryID)
		.LeftOuterJoin(GC_CabDoorRegionInfo).On(GC_CabFNFInfo.DesignOwnerID==GC_CabDoorRegionInfo.CabDoorRegionID &&
												GC_CabFNFInfo.VerCode==GC_CabDoorRegionInfo.VerCode &&
												GC_CabFNFInfo.FactoryID==GC_CabDoorRegionInfo.FactoryID &&
												GC_CabFNFInfo.OrderID==GC_CabDoorRegionInfo.OrderID)
		.Where(GC_CabFNFInfo.OrderID==*StatusInfo_.OrderID_ &&
				GC_CabFNFInfo.FactoryID==*StatusInfo_.FactoryID_ &&
				//GC_CabFNFInfo.DesignOwnerID==Imp::DesignOwnerID &&
				//GC_CabFNFInfo.DesignOwnerGTypeID==Imp::DesignOwnerGTypeID &&
				JK_FNFittingInfo.IsSplit==true);
}


template<>
void	DecomposeTable<DCP_CABFNF_INFO_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OldID_ = imp_.CabFNFID_;
	ToInsert_.OldTableName_ = GC_CabFNFInfo.GetTableName();
	ToInsert_.ObjectType_ = DBValue::ObjectType::FNFitting;
	ToInsert_.Amount_ = 1;
	ToInsert_.Name_ = imp_.FNFittingName_;
	ToInsert_.Code_ = imp_.FNFittingCode_;
	ToInsert_.GType_ = imp_.GTypeID_;
	ToInsert_.XLength_ = imp_.RealXLen_;
	ToInsert_.YLength_ = imp_.RealYLen_;
	ToInsert_.ZLength_ = imp_.RealZLen_;
	

	if ( 0 == imp_.DesignOwnerID_ && 0 == imp_.DesignOwnerGTypeID_ )
	{
		//³¡¾°
		ToInsert_.ParentID_ = 0;
	}
	else if ( 2301 == imp_.DesignOwnerGTypeID_ )
	{
		//¹ñ×Ó
		auto& pntCnt = InfoSPtr_->Cabinet_;
		auto pntItor = pntCnt.find(imp_.DesignOwnerID_);
		if ( pntItor == pntCnt.end() )
		{
			LOG_ERROR << L"Cabinets are supposed to have ID:" << imp_.DesignOwnerID_;
			ToInsert_.ParentID_ = -1;
		}
		else
		{
			const auto& pntInfo = pntItor->second;
			ToInsert_.ParentID_ = pntInfo.NewID_;
		}
	}
	else if ( 2207 == imp_.DesignOwnerGTypeID_ )
	{
		//ÃÅ
		auto& pntCnt = InfoSPtr_->CabDoorSys_;
		auto pntItor = pntCnt.find(imp_.DoorSysID_);
		if ( pntItor == pntCnt.end() )
		{
			LOG_ERROR << L"DoorSystems are supposed to have ID:" << imp_.DesignOwnerID_;
			ToInsert_.ParentID_ = -1;
		}
		else
		{
			const auto& pntInfo = pntItor->second;
			ToInsert_.ParentID_ = pntInfo.NewID_;
		}
	}
}


template<>
void	DecomposeTable<DCP_CABFNF_INFO_TYPE>::PostProcess()
{
	auto& imp_ = *ImpSPtr_;

	InfoSPtr_->FNF_.emplace(std::piecewise_construct,
		std::make_tuple(imp_.CabFNFID_),
		std::make_tuple(OwnNewVerifyID_, imp_.FNFittingName_, imp_.FNFittingCode_));

	InfoSPtr_->FittingRuleInfo_.emplace_back(OwnNewVerifyID_, imp_.GTypeID_, imp_.DesignOwnerID_, imp_.VerCode_);
}

template<>
void	DecomposeTable<DCP_CABFNF_INFO_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{
	auto& imp_ = *ImpSPtr_;

	DecomposeTable<DCP_CABFNFPART_INFO_TOOBJECT_TYPE> toObj(StatusInfo_, InfoSPtr_, JD_Objects, imp_.VerCode_);
	toObj.Decompose(sql, sqlInsert);

	DecomposeTable<DCP_CABFNFPART_INFO_TOBOARD_TYPE> toBoard(StatusInfo_, InfoSPtr_, JD_BoardInfo, imp_.VerCode_);
	toBoard.Decompose(sql, sqlInsert);

	DecomposeTable<DCP_CABFNFHWF_INFO_TYPE> fnfHwf(StatusInfo_, InfoSPtr_, JD_Objects, imp_.VerCode_);
	fnfHwf.Decompose(sql, sqlInsert);
}