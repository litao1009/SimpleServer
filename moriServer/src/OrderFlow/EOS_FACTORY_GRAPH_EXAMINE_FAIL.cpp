#include "COrderState.h"


IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_FACTORY_GRAPH_EXAMINE_FAIL);

COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.GraphAuditContent_ = comment;
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			return true;
		};
		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_DURING, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::_PeekStateCondition(const SUserInfo& userInfo)
{
	return false;
}

template<>
bool					COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.ShopAuditorID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	auto gcState = IOrderState::Factory(order::EOS_FACTORY_EXAMINE_WAIT);
	return gcState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}



void	COrderState<order::EOS_FACTORY_GRAPH_EXAMINE_FAIL>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	
}