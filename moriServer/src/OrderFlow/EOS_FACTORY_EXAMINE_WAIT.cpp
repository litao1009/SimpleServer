#include "COrderState.h"
#include "Tool/DSTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_FACTORY_EXAMINE_WAIT);

COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.ShopCommitorID_ = userInfo.UserInfo_.UserID_;
		statusInfo.FactoryGraphAuditorID_ = 0;
		statusInfo.ShopCommitTime_ = boost::posix_time::second_clock::local_time();
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::GraphExamine) )
			{
				return false;
			}

			return true;
		};
		_GetNextStateList().emplace(order::EOS_FACTORY_GRAPH_EXAMINE_DURING, ftr);
	}

	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool allowEmpty)
		{
			if ( 0 == userInfo.Rights_.count(RValue::Desgin::Commit) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			return true;
		};
		_GetNextStateList().emplace(order::EOS_SHOP_EXAMINE_DONE, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::GraphExamine) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	return *userInfo.UserInfo_.UserID_ == *statusInfo.ShopCommitorID_;
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_DS_TABLE == tableType )
	{
		if ( _OrderVerify(userInfo, statusInfo) ||
			*statusInfo.DesignerID_ == *userInfo.UserInfo_.UserID_ )
		{
			transMsg::DS_Table dsTb;
			orderTool::DSTool tool(statusInfo, sql, dsTb);

			return tool.Download(buffer, orderFile);
		}
	}

	auto st = IOrderState::Factory(order::EOS_SHOP_EXAMINE_DURING);
	return st->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_FACTORY_EXAMINE_WAIT>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{

}