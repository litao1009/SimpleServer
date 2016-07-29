#include "COrderState.h"
#include "Tool/DSTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_SHOP_EXAMINE_DONE);

COrderState<order::EOS_SHOP_EXAMINE_DONE>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.ShopCommitorID_ = 0;
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_SHOP_EXAMINE_DONE>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Commit) )
			{
				return false;
			}

			return true;
		};

		_GetNextStateList().emplace(order::EOS_FACTORY_EXAMINE_WAIT, ftr);
	}

	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Commit) )
			{
				return false;
			}

			return true;
		};

		_GetNextStateList().emplace(order::EOS_DROP, ftr);
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

		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_DURING, ftr);
		_GetNextStateList().emplace(order::EOS_DROP, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_SHOP_EXAMINE_DONE>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::Desgin::Commit) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_SHOP_EXAMINE_DONE>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.ShopAuditorID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_SHOP_EXAMINE_DONE>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_SJ_TABLE == tableType )
	{
		auto saveState = IOrderState::Factory(order::EOS_SAVE);
		return saveState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
	else if ( transMsg::ETT_DS_TABLE == tableType )
	{
		if ( *statusInfo.DesignerID_ == *userInfo.UserInfo_.UserID_ ||
			 *statusInfo.ShopAuditorID_ == *userInfo.UserInfo_.UserID_ )
		{
			transMsg::DS_Table dsTb;
			orderTool::DSTool tool(statusInfo, sql, dsTb);

			return tool.Download(buffer, orderFile);
		}
	}

	return transMsg::ERS_ORDER_DENY;
}


transMsg::EReturnStatus	COrderState<order::EOS_SHOP_EXAMINE_DONE>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}

void	COrderState<order::EOS_SHOP_EXAMINE_DONE>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}