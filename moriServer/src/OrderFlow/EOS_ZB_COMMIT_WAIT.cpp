#include "COrderState.h"


IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_ZB_COMMIT_WAIT);

COrderState<order::EOS_ZB_COMMIT_WAIT>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.ShopCommitorID_ = userInfo.UserInfo_.UserID_;
		statusInfo.ShopCommitTime_ = boost::posix_time::second_clock::local_time();
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_ZB_COMMIT_WAIT>::_Init()
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
		_GetNextStateList().emplace(order::EOS_ZB_LIST_EXAMINE_WAIT, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_ZB_COMMIT_WAIT>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::Desgin::Commit) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_ZB_COMMIT_WAIT>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.ShopAuditorID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_COMMIT_WAIT>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_ZB_TABLE == tableType )
	{
		auto saveState = IOrderState::Factory(order::EOS_ZB_SAVE);
		return saveState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}

	return transMsg::ERS_ORDER_DENY;
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_COMMIT_WAIT>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}

void	COrderState<order::EOS_ZB_COMMIT_WAIT>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}