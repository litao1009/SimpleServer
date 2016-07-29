#include "COrderState.h"
#include "DataBase/msg-SJ.h"
#include "ChargingSystem/ChargingSystem.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_SHOP_EXAMINE_WAIT);

COrderState<order::EOS_SHOP_EXAMINE_WAIT>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.FactoryGraphAuditorID_ = 0;
	};

	PreOnChangeFtr_ = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, soci::session& sql)
	{
		int activeCount = 0;
		{
			SociAdaptor(Statement().Select(count(SJ_DesignPlanInfo.IsActive).Into(activeCount)).From(SJ_DesignPlanInfo).Where(SJ_DesignPlanInfo.OrderID==*statusInfo.OrderID_), sql).Excute();
		}
		if ( 0 == activeCount )
		{
			return transMsg::ERS_ORDER_NONACTIVE;
		}
		else
		{
			return transMsg::ERS_SUCCESS;
		}
	};

	ChargeFtr_ = [](const GL_OrderInfo_Data& orderInfo, const SUserInfo& userInfo)
	{
		return ChargingSysMgr::VerifyShopCommit(*orderInfo.FactoryID_,
											*orderInfo.ShopID_,
											*userInfo.UserInfo_.UserID_,
											*orderInfo.OrderID_);
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_SHOP_EXAMINE_WAIT>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Design) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			return true;
		};
		_GetNextStateList().emplace(order::EOS_SAVE, ftr);
	}

	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Examine) )
			{
				return false;
			}

			return true;
		};
		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_DURING,ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_SHOP_EXAMINE_WAIT>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::Desgin::Examine) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_SHOP_EXAMINE_WAIT>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.DesignerID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_SHOP_EXAMINE_WAIT>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	auto saveState = IOrderState::Factory(order::EOS_SAVE);
	return saveState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
}


transMsg::EReturnStatus	COrderState<order::EOS_SHOP_EXAMINE_WAIT>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_SHOP_EXAMINE_WAIT>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	
}