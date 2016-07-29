#include "COrderState.h"
#include "Tool/LSTool.h"

IMPLEMENT_ORDERSTATE_MEMBER(order::EOS_FACTORY_FINANCE_EXAMINE_WAIT);

COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::COrderState()
{ 
	
}

template<>
IOrderState::NextStateList&			COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::_Init()
{
	{
		auto ftr = [](const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
		{
			if ( 0 == userInfo.Rights_.count(RValue::FactoryExamine::FinanceExamine) )
			{
				return false;
			}

			if ( !_OrderVerify(userInfo, statusInfo, isPeek) )
			{
				return false;
			}


			return true;
		};
		_GetNextStateList().emplace(order::EOS_FACTORY_FINANCE_EXAMINE_DONE, ftr);
	}

	return _GetNextStateList();
}

template<>
bool					COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::_PeekStateCondition(const SUserInfo& userInfo)
{
	if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::FinanceExamine) )
	{
		return true;
	}

	return false;
}

template<>
bool					COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::_OrderVerify(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, bool isPeek)
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


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::_DownloadOrder(const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, transMsg::ETableType tableType, AStringType& buffer, PathType& orderFile, soci::session& sql)
{
	if ( transMsg::ETT_ZB_TABLE == tableType )
	{
		auto dsState = IOrderState::Factory(order::EOS_ZB_SAVE);
		return dsState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
	else if ( transMsg::ETT_LS_TABLE == tableType )
	{
		if ( userInfo.UserInfo_.UserID_ == statusInfo.FactoryListAuditorID_ || 0 != userInfo.Rights_.count(RValue::FactoryExamine::FinanceExamine) )
		{
			transMsg::LS_Table lsTb;
			orderTool::LSTool tool(statusInfo, sql, lsTb);

			return tool.Download(buffer, orderFile);
		}
	}
	else
	{
		auto dsState = IOrderState::Factory(order::EOS_FACTORY_GRAPH_EXAMINE_DONE);
		return dsState->Download(userInfo, statusInfo, tableType, buffer, orderFile, sql);
	}
	
	return transMsg::ERS_ORDER_DENY;
}


transMsg::EReturnStatus	COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::_UploadOrder( const SUserInfo& userInfo, const GL_OrderInfo_Data& statusInfo, AStringType& buffer, const PathType& orderFile, soci::session& sql )
{
	return transMsg::ERS_ORDER_DENY;
}


void	COrderState<order::EOS_FACTORY_FINANCE_EXAMINE_WAIT>::_PostOnChange( const SUserInfo& userInfo, GL_OrderInfo_Data& statusInfo, soci::session& sql )
{
	double wholeSquare;

	SociAdaptor(Statement()
		.Select(sum(LS_BoardInfo.Square).Into(wholeSquare)).From(LS_BoardInfo).Where(LS_BoardInfo.OrderID==*statusInfo.OrderID_), sql).Excute();
	SociAdaptor(Statement().Update(LS_OrderInfo.Square.Use(wholeSquare)).Where(LS_OrderInfo.OrderID==*statusInfo.OrderID_), sql).Excute();
}