#include "DecomposeFitting.h"
#include "DecomposeInfo.h"
#include "DataBase/DataBase.h"
#include "DataBase/msg-JK.h"
#include "DataBase/msg-JD.h"
#include "DataBase/msg-GC.h"
#include "Processor/DBValue.h"

#include <boost/format.hpp>

using namespace autoDB;

void DecomposeFitting::Decompose( soci::session& sql, soci::session& sqlInsert, SDecomposeInfoSPtr infoPtr, const GL_OrderInfo_Data& statusInfo )
{
	JD_Objects_Data toInsert;
	toInsert.SetAll(true);
	toInsert.ItemID_ = boost::none;
	toInsert.OrderID_ = statusInfo.OrderID_;
	toInsert.OrderCode_ = statusInfo.OrderCode_;
	toInsert.FactoryID_ = statusInfo.FactoryID_;

	int64_t newID;
	SociAdaptor insertAda(Statement().Insert(JD_Objects.Use(toInsert)), sqlInsert);
	SociAdaptor getSt(Statement().Select(identity().Into(newID)), sqlInsert);

	//Fitting & Package
	{
		JK_FittingRuleInfo_Data ruleInfo;
		JK_FittingInfo_Data fittingInfo;
		JK_PackageInfo_Data packInfo;

		for ( auto& perRule : infoPtr->FittingRuleInfo_ )
		{
			ruleInfo.SetAll(false);
			ruleInfo.UseCount_.reset(boost::initialized_value);
			ruleInfo.FittingID_.reset(boost::initialized_value);
			ruleInfo.FittingType_.reset(boost::initialized_value);

			fittingInfo.SetAll(false);
			fittingInfo.FittingName_.reset(boost::initialized_value);
			fittingInfo.FittingCode_.reset(boost::initialized_value);

			packInfo.SetAll(false);
			packInfo.IsSeparate_.reset(boost::initialized_value);
			packInfo.FittingPackName_.reset(boost::initialized_value);
			packInfo.FittingPackCode_.reset(boost::initialized_value);

			SociAdaptor ada(Statement()
				.Select(JK_FittingRuleInfo.Into(ruleInfo)|JK_FittingInfo.Into(fittingInfo)|JK_PackageInfo.Into(packInfo))
				.From(JK_FittingRuleInfo)
				.LeftOuterJoin(JK_FittingInfo).On(JK_FittingInfo.FittingID==JK_FittingRuleInfo.FittingID &&
													JK_FittingInfo.VerCode==JK_FittingRuleInfo.VerCode &&
													JK_FittingInfo.FactoryID==JK_FittingRuleInfo.FactoryID &&
													JK_FittingRuleInfo.FittingType==1)
				.LeftOuterJoin(JK_PackageInfo).On(JK_PackageInfo.FittingPackID==JK_FittingRuleInfo.FittingID &&
													JK_PackageInfo.VerCode==JK_FittingRuleInfo.VerCode &&
													JK_PackageInfo.FactoryID==JK_FittingRuleInfo.FactoryID &&
													JK_FittingRuleInfo.FittingType==2)
				.Where(JK_FittingRuleInfo.OwnerGTypeID==perRule.RTypeID_ &&
						JK_FittingRuleInfo.OwnerID==perRule.OwnID_ &&
						JK_FittingRuleInfo.VerCode==perRule.VerCode_ &&
						JK_FittingRuleInfo.FactoryID == *statusInfo.FactoryID_ &&
						JK_FittingRuleInfo.FittingType!=3), sql);

			ada.Excute(false);

			while ( ada.Fetch() )
			{
				if (  1 == *ruleInfo.FittingType_ )
				{
					toInsert.ObjectType_ = DBValue::ObjectType::Fitting;
					toInsert.Name_ = fittingInfo.FittingName_;
					toInsert.Code_ = fittingInfo.FittingCode_;
				}
				else if (  2 == *ruleInfo.FittingType_ )
				{
					toInsert.ObjectType_ = DBValue::ObjectType::FittingPackage;
					toInsert.Name_ = packInfo.FittingPackName_;
					toInsert.Code_ = packInfo.FittingPackCode_;
				}

				toInsert.OldID_ = ruleInfo.FittingID_;
				toInsert.OldTableName_ = JK_FittingRuleInfo.GetTableName();
				toInsert.ParentID_ = perRule.ParentID_;
				toInsert.GType_ = perRule.RTypeID_;
				toInsert.Amount_ = ruleInfo.UseCount_;

				insertAda.Excute();
				getSt.Excute();

				if ( 2 == *ruleInfo.FittingType_ && *packInfo.IsSeparate_ )
				{
					infoPtr->PackageInfo_.emplace_back(newID, *ruleInfo.FittingID_);
				}
			}
		}
	}

	//Fitting in Package
	{
		JK_FittingInfo_Data fittingInfo;
		fittingInfo.SetAll(false);
		fittingInfo.FittingName_.reset(boost::initialized_value);
		fittingInfo.FittingCode_.reset(boost::initialized_value);
		fittingInfo.GTypeID_.reset(boost::initialized_value);
		fittingInfo.FittingID_.reset(boost::initialized_value);

		JK_PackageMapInfo_Data mapInfo;
		mapInfo.FittingCount_.reset(boost::initialized_value);

		toInsert.ObjectType_ = DBValue::ObjectType::Fitting;

		for ( auto& curPackage : infoPtr->PackageInfo_ )
		{
			SociAdaptor adaGet(Statement()
				.Select(JK_FittingInfo.Into(fittingInfo)|JK_PackageMapInfo.Into(mapInfo))
				.From(JK_FittingInfo)
				.InnerJoin(JK_PackageMapInfo).On(JK_FittingInfo.FittingID==JK_PackageMapInfo.FittingID &&
													JK_FittingInfo.VerCode==JK_PackageMapInfo.VerCode &&
													JK_FittingInfo.FactoryID==JK_PackageMapInfo.FactoryID)
				.InnerJoin(JK_PackageInfo).On(JK_PackageInfo.FittingPackID==JK_PackageMapInfo.PackageID &&
												JK_PackageInfo.VerCode==JK_PackageMapInfo.VerCode &&
												JK_PackageInfo.FactoryID==JK_PackageMapInfo.FactoryID)
				.InnerJoin(GC_DesignPlanInfo).On(GC_DesignPlanInfo.VerCode==JK_FittingInfo.VerCode &&
												GC_DesignPlanInfo.FactoryID==JK_FittingInfo.FactoryID)
				.Where(JK_PackageInfo.FittingPackID==curPackage.FittingPackID_ && GC_DesignPlanInfo.OrderID==*statusInfo.OrderID_), sql);

			adaGet.Excute(false);

			while ( adaGet.Fetch() )
			{
				toInsert.OldID_ = fittingInfo.FittingID_;
				toInsert.OldTableName_ = JK_FittingRuleInfo.GetTableName();
				toInsert.ParentID_ = curPackage.NewID_;
				toInsert.GType_ = fittingInfo.GTypeID_;
				toInsert.Amount_ = mapInfo.FittingCount_;
				toInsert.Name_ = fittingInfo.FittingName_;
				toInsert.Code_ = fittingInfo.FittingCode_;

				insertAda.Excute();
			}
		}
	}
}
