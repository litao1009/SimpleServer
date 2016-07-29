#include "COrderState.h"
#include "Tool/DSTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_SHOP_EXAMINE_DURING);

COrderState<order::EOS_SHOP_EXAMINE_DURING>::COrderState()
{ 
	ResetFtr_ = [](const GL_OrderInfo_Data& statusInfo, soci::session& sql)
	{
	 	orderTool::DSTool tool(statusInfo,sql);
	 	tool.Copy();
	};
	 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
	 	statusInfo.ShopAuditorID_ = userInfo.UserInfo_.UserID_;
		statusInfo.ShopAuditTime_ = boost::posix_time::second_clock::local_time();
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_SHOP_EXAMINE_DURING>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Examine) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo, isPeek) )
			{
				return false;
			}			

			return true;
		};

		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_FAIL, ftr);
		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_DONE, ftr);
	}

	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Examine) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			return true;
		};

		_GetNextStateList().emplace(order::EOS_DROP, ftr);
	}


	_GetUploadRights().insert(RValue::Desgin::Examine);

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_SHOP_EXAMINE_DURING>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_SHOP_EXAMINE_DURING>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	if ( isPeek )
	{
		return 0 == *statusInfo.ShopAuditorID_ || *userInfo.UserInfo_.UserID_ == *statusInfo.ShopAuditorID_;
	}
	else
	{
		return *userInfo.UserInfo_.UserID_ == *statusInfo.ShopAuditorID_;
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_SHOP_EXAMINE_DURING>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_SJ_TABLE == tableType )
	{
		auto saveState = IOrderState::Factory(order::EOS_SAVE);
		return saveState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
	else if ( transMsg::ETT_DS_TABLE == tableType )
	{
		if ( 0 == userInfo.Rights_.count(RValue::Desgin::Examine) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}

		if ( !_OrderVerify(userInfo, statusInfo) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}

		transMsg::DS_Table dsTb;
		orderTool::DSTool tool(statusInfo, sql, dsTb);

		return tool.Download(buffer, orderFile);
	}

	return transMsg::ERS_ORDER_DENY;
}


transMsg::EReturnStatus	COrderState<order::EOS_SHOP_EXAMINE_DURING>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	transMsg::DS_Table dsTb;	 
	orderTool::DSTool tool(statusInfo, sql, dsTb);
	
	return tool.Upload(buffer, orderFile);
}



void	COrderState<order::EOS_SHOP_EXAMINE_DURING>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	ResetFtr_(statusInfo, sql);
}