#include "ChargingSystem.h"
#include "DataBase/msg-SV.h"
#include "DataBase/DataBase.h"
#include "Processor/DBValue.h"

using namespace autoDB;

bool ChargingSysMgr::VerifyShopCommit( int32_t factoryID, int32_t shopID, int32_t userID, int64_t orderID )
{
	return true;

	auto& sql = DataBase::GetInstance().GetNameSession("ChargingSysMgr::VerifyShopCommit");
 
	int32_t catID = 0, enable = 0;
	SociAdaptor(Statement()
		.Select(SV_BOMChargeInfo.CategoryID.Into(catID)|SV_BOMChargeInfo.Enable.Into(enable))
		.From(SV_BOMChargeInfo)
		.Where(SV_BOMChargeInfo.FactoryID==factoryID), sql).Excute();
 	
	if ( !sql.got_data() )
	{
		return false;
	}

	if ( 1 == catID )//工厂计费
	{
		return 0 != enable;
	}

	auto curTime = boost::posix_time::second_clock::local_time();

	SociAdaptor(Statement()
		.Select(SV_ChargeShopInfo.RecordID)
		.From(SV_ChargeShopInfo)
		.Where(SV_ChargeShopInfo.StartTime>=curTime && SV_ChargeShopInfo.StopTime<=curTime), sql).Excute();

	return sql.got_data();
}

bool ChargingSysMgr::VerifyFactoryDecompose( int32_t factoryID, int64_t orderID )
{
	return true;

	auto& sql = DataBase::GetInstance().GetNameSession("ChargingSysMgr::VerifyFactoryDecompose");

	int32_t catID = 0, enable = 0;
	SociAdaptor(Statement()
		.Select(SV_BOMChargeInfo.CategoryID.Into(catID)|SV_BOMChargeInfo.Enable.Into(enable))
		.From(SV_BOMChargeInfo)
		.Where(SV_BOMChargeInfo.FactoryID==factoryID), sql).Excute();

	if ( !sql.got_data() )
	{
		return false;
	}

	if ( 1 == catID )//工厂计费
	{
		return 0 != enable;
	}

	return true;
}
