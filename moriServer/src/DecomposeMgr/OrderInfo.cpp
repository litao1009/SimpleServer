#include "DecomposeTable.h"
#include "DecomposeUtil.h"

template<>
class	DecomposeTable<DCP_ORDERINFO_TYPE>::Imp
{
public:

	int32_t		OrderCate_;
	int32_t		SellerID_;
	int32_t		UseCount_;
	int64_t		VerCode_;
	AStringType	DeptName_;
	AStringType	DeptCode_;
	AStringType	DesignerName_;
	AStringType	DesignerCode_;
	AStringType	SellerName_;
	AStringType	SellerCode_;
	AStringType	AuditorName_;
	AStringType	AuditorCode_;
	AStringType	GeoCode_;
	AStringType	GeoName1_;
	AStringType	GeoName2_;
	AStringType	GeoName3_;
	AStringType	OrderTitle_;
	AStringType	CustomerName_;
	AStringType	CustomerTel_;
	AStringType	CustomerPostcode_;
	AStringType	CustomerQQ_;
	AStringType	CustomerEmail_;
	AStringType	InstallAddress_;
	AStringType	OrderMemo_;
	AStringType	DesignPlanName_;
	AStringType	DesignPlanMemo_;
	boost::posix_time::ptime	OrderTime_;
	boost::posix_time::ptime	DeliveryTime_;
};

template<>
void	DecomposeTable<DCP_ORDERINFO_TYPE>::Init(Statement& ss)
{
	ImpSPtr_ = std::make_shared<Imp>();
	auto& imp_ = *ImpSPtr_;

	ss.Select(
		GC_OrderDataInfo.OrderCate.Into(imp_.OrderCate_)|
			GL_DeptInfo.DeptName.Into(imp_.DeptName_)|
			GL_DeptInfo.DeptCode.Into(imp_.DeptCode_)|
			GL_UserInfo("A").TrueName.Into(imp_.DesignerName_)|
			GL_UserInfo("A").UserCode.Into(imp_.DesignerCode_)|
		GC_OrderDataInfo.SellerID.Into(imp_.SellerID_)|
			GL_UserInfo("B").TrueName.Into(imp_.SellerName_)|
			GL_UserInfo("B").UserCode.Into(imp_.SellerCode_)|
			GL_UserInfo("C").TrueName.Into(imp_.AuditorName_)|
			GL_UserInfo("C").UserCode.Into(imp_.AuditorCode_)|
		GC_OrderDataInfo.GeoCode.Into(imp_.GeoCode_)|
			GL_GeoCodeInfo("GEO1").GeoName.Into(imp_.GeoName1_)|
			GL_GeoCodeInfo("GEO2").GeoName.Into(imp_.GeoName2_)|
			GL_GeoCodeInfo("GEO3").GeoName.Into(imp_.GeoName3_)|
		GC_OrderDataInfo.OrderTime.Into(imp_.OrderTime_)|
		GC_OrderDataInfo.DeliveryTime.Into(imp_.DeliveryTime_)|
		GC_OrderDataInfo.OrderTitle.Into(imp_.OrderTitle_)|
		GC_OrderDataInfo.CustomerName.Into(imp_.CustomerName_)|
		GC_OrderDataInfo.CustomerTel.Into(imp_.CustomerTel_)|
		GC_OrderDataInfo.CustomerPostcode.Into(imp_.CustomerPostcode_)|
		GC_OrderDataInfo.CustomerQQ.Into(imp_.CustomerQQ_)|
		GC_OrderDataInfo.CustomerEmail.Into(imp_.CustomerEmail_)|
		GC_OrderDataInfo.InstallAddress.Into(imp_.InstallAddress_)|
		GC_OrderDataInfo.OrderMemo.Into(imp_.OrderMemo_)|
			GC_DesignPlanInfo.DesignPlanName.Into(imp_.DesignPlanName_)|
			GC_DesignPlanInfo.DesignPlanMemo.Into(imp_.DesignPlanMemo_)|
			GC_DesignPlanInfo.VerCode.Into(imp_.VerCode_)
		)
		.From(GC_OrderDataInfo)
		.InnerJoin(GL_DeptInfo).On(GL_DeptInfo.DeptID == *StatusInfo_.ShopID_)
		.LeftOuterJoin(GL_GeoCodeInfo("GEO1")).On(CONCAT(SubStr(GC_OrderDataInfo.GeoCode, 1, 2), StringColumn("0000"))==GL_GeoCodeInfo("GEO1").GeoCode)
		.LeftOuterJoin(GL_GeoCodeInfo("GEO2")).On(CONCAT(SubStr(GC_OrderDataInfo.GeoCode, 1, 4), StringColumn("00"))==GL_GeoCodeInfo("GEO2").GeoCode)
		.LeftOuterJoin(GL_GeoCodeInfo("GEO3")).On(GC_OrderDataInfo.GeoCode==GL_GeoCodeInfo("GEO3").GeoCode)
		.LeftOuterJoin(GL_UserInfo("A")).On(GL_UserInfo("A").UserID == *StatusInfo_.DesignerID_ && GL_UserInfo("A").FactoryID == *StatusInfo_.FactoryID_)
		.LeftOuterJoin(GL_UserInfo("B")).On(GL_UserInfo("B").UserID == GC_OrderDataInfo.SellerID && GL_UserInfo("B").FactoryID == *StatusInfo_.FactoryID_)
		.LeftOuterJoin(GL_UserInfo("C")).On(GL_UserInfo("C").UserID == *StatusInfo_.ShopAuditorID_ && GL_UserInfo("C").FactoryID == *StatusInfo_.FactoryID_)
		.InnerJoin(GC_DesignPlanInfo).On(GC_DesignPlanInfo.OrderID == *StatusInfo_.OrderID_ &&
					GC_DesignPlanInfo.FactoryID == *StatusInfo_.FactoryID_ &&
					GC_DesignPlanInfo.IsActive == true &&
					GC_DesignPlanInfo.OrderID == GC_OrderDataInfo.OrderID)
		.Where(GC_OrderDataInfo.OrderID == *StatusInfo_.OrderID_ && GC_OrderDataInfo.FactoryID == *StatusInfo_.FactoryID_);
}



template<>
void	DecomposeTable<DCP_ORDERINFO_TYPE>::PreProcess()
{
	auto& imp_ = *ImpSPtr_;

	ToInsert_.OrderID_ = StatusInfo_.OrderID_;
	ToInsert_.OrderType_ = StatusInfo_.OrderType_;
	ToInsert_.OrderIndex_ = StatusInfo_.OrderIndex_;
	ToInsert_.ShopID_ = StatusInfo_.ShopID_;
	ToInsert_.FactoryID_ = StatusInfo_.FactoryID_;
	ToInsert_.ShopName_ = imp_.DeptName_;
	ToInsert_.ShopCode_ = imp_.DeptCode_;
	ToInsert_.OrderCode_ = StatusInfo_.OrderCode_;
	ToInsert_.DesignerID_ = StatusInfo_.DesignerID_;
	ToInsert_.DesignerName_ = imp_.DesignerName_;
	ToInsert_.DesignerUserCode_ = imp_.DesignerCode_;
	ToInsert_.SellerID_ = imp_.SellerID_;
	ToInsert_.SellerName_ = imp_.SellerName_;
	ToInsert_.SellerUserCode_ = imp_.SellerCode_;
	ToInsert_.AuditorID_ = StatusInfo_.ShopAuditorID_;
	ToInsert_.AuditorName_ = imp_.AuditorName_;
	ToInsert_.AuditorUserCode_ = imp_.AuditorCode_;
	ToInsert_.OrderTime_ = imp_.OrderTime_;
	ToInsert_.DeliveryTime_ = imp_.DeliveryTime_;
	ToInsert_.GeoCode_ = imp_.GeoCode_;
	ToInsert_.GeoName_ = imp_.GeoName1_+imp_.GeoName2_+imp_.GeoName3_;
	ToInsert_.OrderTitle_ = imp_.OrderTitle_;
	ToInsert_.CustomerName_ = imp_.CustomerName_;
	ToInsert_.CustomerTel_ = imp_.CustomerTel_;
	ToInsert_.CustomerPostCode_ = imp_.CustomerPostcode_;
	ToInsert_.CustomerQQ_ = imp_.CustomerQQ_;
	ToInsert_.CustomerEmail_ = imp_.CustomerEmail_;
	ToInsert_.InstallAddress_ = imp_.InstallAddress_;
	ToInsert_.OrderRemarks_ = imp_.OrderMemo_;
	ToInsert_.VerCode_ = imp_.VerCode_;
	ToInsert_.PlanName_ = imp_.DesignPlanName_;
	ToInsert_.PlanRemarks_ = imp_.DesignPlanMemo_;
	ToInsert_.Square_ = 0;
}


template<>
void	DecomposeTable<DCP_ORDERINFO_TYPE>::PostProcess()
{

}

template<>
void	DecomposeTable<DCP_ORDERINFO_TYPE>::PostDecompose(soci::session& sql, soci::session& sqlInsert)
{

}