#include "COrderState.h"
#include "Tool/LSTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_ZB_LIST_EXAMINE_DURING);

COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::COrderState()
{ 
	ResetFtr_ = [](const GL_OrderInfo_Data& statusInfo, soci::session& sql)
	{
		orderTool::LSTool tool(statusInfo,sql);
		tool.CopyFromLS();
	};

	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.FactoryListAuditorID_ = userInfo.UserInfo_.UserID_;
		statusInfo.ListAuditTime_ = boost::posix_time::second_clock::local_time();
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo) )
			{
				return false;
			}

			return true;
		};

		_GetNextStateList().emplace(order::EOS_ZB_LIST_EXAMINE_FAIL, ftr);
	}

	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo, isPeek) )
			{
				return false;
			}

			return true;
		};

		_GetNextStateList().emplace(order::EOS_FACTORY_FINANCE_EXAMINE_WAIT, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	if ( isPeek )
	{
		return 0 == *statusInfo.FactoryListAuditorID_ || *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryListAuditorID_;
	}
	else
	{
		return *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryListAuditorID_;
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_LS_TABLE == tableType )
	{
		if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}

		if ( !_OrderVerify(userInfo, statusInfo) )
		{
			return transMsg::ERS_WRONG_ACCESS;
		}

		transMsg::LS_Table lsTb;
		orderTool::LSTool tool(statusInfo, sql, lsTb);

		return tool.Download(buffer, orderFile);
	}
	else
	{
		auto state = IOrderState::Factory(order::EOS_ZB_LIST_EXAMINE_WAIT);
		return state->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	transMsg::LS_Table lsTb; 
	orderTool::LSTool tool(statusInfo, sql, lsTb);

	return tool.Upload(buffer, orderFile);
}

void	COrderState<order::EOS_ZB_LIST_EXAMINE_DURING>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	ResetFtr_(statusInfo, sql);
}