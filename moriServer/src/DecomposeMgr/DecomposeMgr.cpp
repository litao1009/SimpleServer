#include "DecomposeMgr.h"

#include "DataBase/DataBase.h"
#include "DataBase/msg-GL.h"
#include "DataBase/msg-GC.h"
#include "DataBase/msg-JD.h"

#include "DecomposeTable.h"
#include "DecomposeUtil.h"
#include "DecomposeFitting.h"
#include "TinyLog.h"

#include "Utils/SmartPtr.h"
#include "mori/concurrency/AsynConcurrentPool.h"

#include "Data/BlockQueue.h"
#include "transMsg/EOrderState.pb.h"

using namespace autoDB;


class	DecomposeMgr::Imp
{
public:

	typedef	BlockQueue<int64_t>	OrderBlockQueue;

	Imp()
	{

	}

	~Imp()
	{
		Stop();
	}

	void	Stop()
	{
		if ( !AsynPoolPtr_->IsStop() )
		{
			Queue_.Stop();
			AsynPoolPtr_->Stop();
			AsynPoolPtr_->Join();
		}
	}

	static	void	DecomposeImp(GL_OrderInfo_Data& statusInfo, soci::session& sql, soci::session& sqlInsert)
	{
		SociAdaptor(Statement().Update(GL_OrderInfo.OrderStatus.Use(order::EOS_FACTORY_DECOMPOSE_DURING)).Where(GL_OrderInfo.OrderID==*statusInfo.OrderID_), sql).Excute();

		//PrePare
		//***********************************************************************************************************************************************************
		{
			SociAdaptor(Statement().Delete(JD_Objects).Where(JD_Objects.OrderID==*statusInfo.OrderID_ && JD_Objects.FactoryID==*statusInfo.FactoryID_), sql).Excute();

			SociAdaptor(Statement().Delete(JD_BoardInfo).Where(JD_BoardInfo.OrderID==*statusInfo.OrderID_ && JD_BoardInfo.FactoryID==*statusInfo.FactoryID_), sql).Excute();

			SociAdaptor(Statement().Delete(JD_BoardSealInfo).Where(JD_BoardSealInfo.OrderID==*statusInfo.OrderID_ && JD_BoardSealInfo.FactoryID==*statusInfo.FactoryID_), sql).Excute();

			SociAdaptor(Statement().Delete(JD_BoardGapInfo).Where(JD_BoardGapInfo.OrderID==*statusInfo.OrderID_ && JD_BoardGapInfo.FactoryID==*statusInfo.FactoryID_), sql).Excute();

			SociAdaptor(Statement().Delete(JD_OrderInfo).Where(JD_OrderInfo.OrderID==*statusInfo.OrderID_ && JD_OrderInfo.FactoryID==*statusInfo.FactoryID_), sql).Excute();
		}
		//***********************************************************************************************************************************************************

		SDecomposeInfoSPtr infoPtr = smartPtr::make_shared<SDecomposeInfo>();

		//Step.1
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step1:" << statusInfo.OrderID_;

			DecomposeTable<DCP_ORDERINFO_TYPE> order(statusInfo, infoPtr, JD_OrderInfo);
			order.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.2
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step2:" << statusInfo.OrderID_;

			DecomposeTable<DCP_CABINET_TYPE> cab(statusInfo, infoPtr, JD_Objects);
			cab.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.3
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step3:" << statusInfo.OrderID_;

			DecomposeTable<DCP_DECOR_BOARD_TYPE> decorBoard(statusInfo, infoPtr, JD_Objects);
			decorBoard.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.4
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step4:" << statusInfo.OrderID_;

			DecomposeTable<DCP_DECOR_LINE_TYPE> decorLine(statusInfo, infoPtr, JD_Objects);
			decorLine.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.5
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step5:" << statusInfo.OrderID_;

			DecomposeTable<DCP_HWFINFO_TYPE> hwf(statusInfo, infoPtr, JD_Objects);
			hwf.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.6
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step6:" << statusInfo.OrderID_;

			DecomposeTable<DCP_CABFNF_INFO_TYPE> cabFNF(statusInfo, infoPtr, JD_Objects);
			cabFNF.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.7
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step7:" << statusInfo.OrderID_;

			DecomposeTable<DCP_PRODUCT_TYPE> product(statusInfo, infoPtr, JD_Objects);
			product.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.8
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step8:" << statusInfo.OrderID_;

			DecomposeTable<DCP_DECORROOM_TYPE> room(statusInfo, infoPtr, JD_Objects);
			room.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.9
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step9:" << statusInfo.OrderID_;

			DecomposeTable<DCP_TABLE_TYPE> table(statusInfo, infoPtr, JD_Objects);
			table.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.10
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step10:" << statusInfo.OrderID_;

			DecomposeTable<DCP_WALLDECOR_TYPE> wall(statusInfo, infoPtr, JD_Objects);
			wall.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.11
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step11:" << statusInfo.OrderID_;

			DecomposeTable<DCP_ORDER_FITTINGINFO_TYPE> fitting(statusInfo, infoPtr, JD_Objects);
			fitting.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.12
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step12:" << statusInfo.OrderID_;

			DecomposeTable<DCP_ORDER_PACKINFO_TYPE> pack(statusInfo, infoPtr, JD_Objects);
			pack.Decompose(sql, sqlInsert);
		}
		//***********************************************************************************************************************************************************

		//Step.13
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step13:" << statusInfo.OrderID_;

			DecomposeFitting::Decompose(sql, sqlInsert, infoPtr, statusInfo);
		}
		//***********************************************************************************************************************************************************

		//Step.14
		//***********************************************************************************************************************************************************
		{
			LOG_INFO << L"Decompose Step14:" << statusInfo.OrderID_;

			SociAdaptor(Statement().Update(JD_OrderInfo.Square.Use(infoPtr->Square_)).Where(JD_OrderInfo.OrderID==*statusInfo.OrderID_), sql).Excute();
		}
		//***********************************************************************************************************************************************************

		SociAdaptor(Statement().Update(GL_OrderInfo.OrderStatus.Use(order::EOS_FACTORY_LIST_EXAMINE_WAIT)).Where(GL_OrderInfo.OrderID==*statusInfo.OrderID_), sql).Excute();
	}

	static	void	Decompose( int64_t orderID )
	{
		auto& sql		= DataBase::GetInstance().GetNameSession("Decompose::Normal");
		auto& sqlInsert	= DataBase::GetInstance().GetNameSession("Decompose::Insert");

		GL_OrderInfo_Data statusInfo;
		statusInfo.SetAll(true);

		try
		{
			if ( !SociAdaptor(Statement().Select(GL_OrderInfo.Into(statusInfo)).From(GL_OrderInfo).Where(GL_OrderInfo.OrderID==orderID), sql).Excute() )
			{
				LOG_ERROR << L" Can not find order:" << orderID;
				return;
			}

			Imp::DecomposeImp(statusInfo, sql, sqlInsert);
		}
		catch(soci::soci_error& err)
		{
			LOG_ERROR << DataBase::GetSociErrorString(err) << " on " << orderID;

			SociAdaptor(Statement().Update(GL_OrderInfo.OrderStatus.Use(order::EOS_FACTORY_DECOMPOSE_FAIL)).Where(GL_OrderInfo.OrderID==orderID), sql).Excute();
		}		
	}

public:

	mori::AsynConcurrentPoolPtr	AsynPoolPtr_;
	OrderBlockQueue				Queue_;
};


DecomposeMgr& DecomposeMgr::GetInstance()
{
	static	DecomposeMgr instance;

	return instance;
}

void DecomposeMgr::Push( int64_t orderID )
{
	ImpUPtr_->Queue_.Push(orderID);
}

void DecomposeMgr::Start()
{
	ImpUPtr_->AsynPoolPtr_ = smartPtr::make_unique<mori::AsynConcurrentPool>(1,
		[]()
	{
		LOG_INFO << L" Start Thread for DecomposeMgr" ;
	},
		[]()
	{
		LOG_INFO << L" Join All Threads for DecomposeMgr";
	});
	ImpUPtr_->AsynPoolPtr_->Start();
	ImpUPtr_->AsynPoolPtr_->Post([this]()
	{
		auto& theQueue = ImpUPtr_->Queue_;
		while ( !theQueue.IsStop() )
		{
			auto orderID = theQueue.Pop();
			if ( theQueue.IsStop() )
			{
				return;
			}

			LOG_INFO << L"解单开始：" << orderID;

			try
			{
				Imp::Decompose(orderID);
			}
			catch(soci::soci_error& err)
			{
				LOG_ERROR << DataBase::GetSociErrorString(err) << L", " << orderID;
			}

			LOG_INFO << L"解单完成：" << orderID;
		}
	});
}

void DecomposeMgr::Stop()
{
	ImpUPtr_->Stop();
}

DecomposeMgr::DecomposeMgr():ImpUPtr_(smartPtr::make_unique<Imp>())
{

}

DecomposeMgr::~DecomposeMgr()
{

}
