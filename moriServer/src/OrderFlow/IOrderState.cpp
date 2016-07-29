#include "IOrderState.h"
#include "Processor/DBValue.h"
#include "DataBase/msg-GL.h"

#include <algorithm>
#include <unordered_map>
#include <vector>
#include <sstream>

class	IOrderState::Imp
{
public:

	typedef	std::unordered_map<order::EOrderState,IOrderState::FactoryFtr>	CreatorMap;
	typedef	std::vector<PeekStateCondFtr>										PeekStateCondFtrList;
	typedef	std::unordered_map<order::EOrderState,NextStateList>				NextStateListMap;

	static	CreatorMap&	GetCreatorMap()
	{
		static CreatorMap screatorMap;
		return screatorMap;
	}

	static	PeekStateCondFtrList&	GetPeekStateCondFtrList()
	{
		static	PeekStateCondFtrList speekStateCondFtrList;
		return speekStateCondFtrList;
	}

	static	NextStateListMap&			GetStateTagMap()
	{
		static	NextStateListMap sstateTagMap;
		return sstateTagMap;
	}

	static	bool	FindStatePath(order::EOrderState toState, order::EOrderState fromState, const GL_OrderInfo_Data& statusInfo, const SUserInfo& userInfo, OrderPathList& pathList)
	{
		auto itor = Imp::GetStateTagMap().find(fromState);
		if ( itor == Imp::GetStateTagMap().end() )
		{
			return false;
		}

		for ( auto& nextState : itor->second )
		{
			const order::EOrderState& NextState = nextState.first;
			const ChangeStateCondFtr& theCondFtr = nextState.second;

			if ( std::find_if(pathList.begin(), pathList.end(), [&NextState,&theCondFtr](order::EOrderState eos)
			{
				if ( NextState == eos )
				{
					return true;
				}
				return false;
			}) != pathList.end() )
			{
				continue;
			}

			if ( !theCondFtr(userInfo, statusInfo, true) )
			{
				continue;
			}

			pathList.push_back(NextState);

			if ( NextState == toState )
			{
				return true;
			}

			if ( FindStatePath(toState,NextState,statusInfo,userInfo,pathList) )
			{
				return true;
			}

			pathList.pop_back();
		}

		return false;
	}
};

IOrderStatePtr		IOrderState::Factory( order::EOrderState orderState )
{
	auto itor = Imp::GetCreatorMap().find(orderState);
	if ( itor == Imp::GetCreatorMap().end() )
	{
		return IOrderStatePtr();
	}

	return (itor->second)();
}

void IOrderState::RegistCreator( order::EOrderState eos, const FactoryFtr& ftr )
{
	Imp::GetCreatorMap().emplace(eos,ftr);
}

void IOrderState::RegistPeekState( const PeekStateCondFtr& ftr )
{
	Imp::GetPeekStateCondFtrList().push_back(ftr);
}

void IOrderState::RegistStateTagList( order::EOrderState eos, NextStateList& tagList )
{
	Imp::GetStateTagMap().emplace(eos,tagList);
}


Condition IOrderState::GetPeekRightCondString( const SUserInfo& userInfo )
{
	Condition ret("1=0");

	if ( CodecProtocol::ECT_DESIGN == userInfo.DC_.ClientType_ )
	{
		if ( 0 != userInfo.Rights_.count(RValue::Desgin::Design) )
		{
			ret || GL_OrderInfo.DesignerID==*userInfo.UserInfo_.UserID_;
		}

		if ( 0 != userInfo.Rights_.count(RValue::Desgin::Examine) )
		{
			ret || GL_OrderInfo.ShopAuditorID==*userInfo.UserInfo_.UserID_;
		}

		if ( 0 != userInfo.Rights_.count(RValue::Desgin::Commit) )
		{
			ret || GL_OrderInfo.ShopCommitorID==*userInfo.UserInfo_.UserID_;
		}
	}
	else if ( CodecProtocol::ECT_REVIEW == userInfo.DC_.ClientType_ )
	{
		if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::GraphExamine) )
		{
			ret || GL_OrderInfo.FactoryGraphAuditorID==*userInfo.UserInfo_.UserID_;
		}

		if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::ListExamine) )
		{
			ret || GL_OrderInfo.FactoryListAuditorID==*userInfo.UserInfo_.UserID_;
		}

		if ( 0 != userInfo.Rights_.count(RValue::FactoryExamine::FinanceExamine) )
		{
			ret || GL_OrderInfo.FactoryFinanceAuditorID==*userInfo.UserInfo_.UserID_;
		}
	}

	return std::move(ret);
}

Condition IOrderState::GetPeekStateCondString( const SUserInfo& userInfo )
{
	Condition ret("1=1");

	std::vector<int32_t> statusVec;

	for ( auto& ftr : Imp::GetPeekStateCondFtrList() )
	{
		auto state = ftr(userInfo);
		if ( state )
		{
			statusVec.push_back(*state);
		}
	}

	if ( !statusVec.empty() )
	{
		ret || GL_OrderInfo.OrderStatus.In(statusVec.begin(), statusVec.end());
	}

	return std::move(ret);
}

OrderPathList IOrderState::CalcuOrderPathList( order::EOrderState fromState, order::EOrderState toSate, const GL_OrderInfo_Data& statusInfo, const SUserInfo& userInfo )
{
	OrderPathList pathList;
	pathList.push_back(fromState);
	Imp::FindStatePath(toSate, fromState, statusInfo, userInfo, pathList);
	pathList.erase(pathList.begin());

	return std::move(pathList);
}

IOrderState::Constext::Constext( order::EOrderState eos, FactoryFtr ftr, PeekStateCondFtr pscf, NextStateListGetFtr tagListFtr )
{
	IOrderState::RegistCreator(eos, ftr);
	IOrderState::RegistPeekState(pscf);
	IOrderState::RegistStateTagList(eos, tagListFtr());
}
