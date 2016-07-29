#include "COrderState.h"
#include "Tool/LSTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_FACTORY_FINANCE_EXAMINE_DONE);

COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::COrderState()
{ 
	UpdateStatusFtr_ = [](GL_OrderInfo_Data& statusInfo,const SUserInfo& userInfo, const AStringType& comment)
	{
		statusInfo.FactoryFinanceAuditorID_ = userInfo.UserInfo_.UserID_;
		statusInfo.FinanceAuditTime_ = boost::posix_time::second_clock::local_time();
	};
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::_Init()
{
	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::PrintReport::Download) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
{
	if ( isPeek )
	{
		return 0 == *statusInfo.FactoryFinanceAuditorID_ || *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryFinanceAuditorID_;
	}
	else
	{
		return *userInfo.UserInfo_.UserID_ == *statusInfo.FactoryFinanceAuditorID_;
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_LS_TABLE == tableType )
	{
		bool isDownload = false;
		if ( 0 != userInfo.UserInfo_.ShopID_ && 0 != userInfo.Rights_.count(RValue::Desgin::ZBDesign) )
		{
			isDownload = true;
		}
		else
		{
			if ( statusInfo.FactoryListAuditorID_ == userInfo.UserInfo_.UserID_ ||
				0 != userInfo.Rights_.count(RValue::PrintReport::Download) )
			{
				isDownload = true;
			}
		}
		
		if ( isDownload )
		{
			transMsg::LS_Table lsTb;
			orderTool::LSTool tool(statusInfo, sql, lsTb);

			return tool.Download(buffer, orderFile);
		}
		else
		{
			return transMsg::ERS_ORDER_DENY;
		}
	}
	else
	{
		auto state = IOrderState::Factory(order::EOS_FACTORY_GRAPH_EXAMINE_DONE);
		return state->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_DONE>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	
}