#include "COrderState.h"


IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_ZB_LIST_EXAMINE_WAIT);

COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::COrderState()
{ 
	
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
			{
				return false;
			}

			if ( allowEmpty )
			{
				if ( 0 != statusInfo.FactoryListAuditorID_ && !_OrderVerify(userInfo, statusInfo) )
				{
					return false;
				}
			}
			else
			{
				if ( !_OrderVerify(userInfo, statusInfo) )
				{
					return false;
				}
			}


			return true;
		};
		_GetNextStateList().emplace(order::EOS_ZB_LIST_EXAMINE_DURING, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.DesignerID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	auto state = IOrderState::Factory(order::EOS_ZB_COMMIT_WAIT);
	return state->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}

void	COrderState<order::EOS_ZB_LIST_EXAMINE_WAIT>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}