#ifndef DecomposeTable_h__
#define DecomposeTable_h__

#pragma once

#include "DataBase/DataBase.h"
#include "Processor/DBValue.h"
#include "DataBase/msg-GL.h"
#include "DataBase/msg-GC.h"
#include "DataBase/msg-JD.h"

#include "TinyLog.h"
#include "Utils/StrDef.h"
#include "Utils/IntDef.h"
#include "Utils/Pimp.h"
#include "Utils/SmartPtr.h"

#include "DecomposeInfoFwd.h"

#include <functional>

using namespace autoDB;


template<typename JDTable, typename GCTable, int Level=0>
class	DecomposeTable
{
	DEFINE_SHARE_PIMP

public:

	typedef	typename	JDTable::SData	JDData;
	typedef	typename	GCTable::SData	GCData;

	DecomposeTable(	const autoDB::GL_OrderInfo_Data& statusInfo,
		SDecomposeInfoSPtr	infoSPtr,
		JDTable& tableObj,
		int64_t verCode=0):
	StatusInfo_(statusInfo),InfoSPtr_(infoSPtr),VerCode_(verCode),JDTableObj_(tableObj)
	{
		Skip_ = false;
	}

	~DecomposeTable() {}

	void	Decompose()
	{
		auto sql = DataBase::CreateSession();
		auto sqlInsert = DataBase::CreateSession();

		Decompose(sql, sqlInsert);
	}

	void	Decompose(soci::session& sql, soci::session& sqlInsert)
	{
		ToInsert_.SetAll(true);
		ToInsert_.ItemID_ = boost::none;
		ToInsert_.OrderID_ = StatusInfo_.OrderID_;
		ToInsert_.OrderCode_ = StatusInfo_.OrderCode_;
		ToInsert_.FactoryID_ = StatusInfo_.FactoryID_;

		bool gotData = false;
		{
#ifdef USE_SQLSERVER
			SociAdaptor insertSt(Statement().SetNocountOn().Insert(JDTableObj_.Use(ToInsert_)).Select(identity().Into(OwnNewVerifyID_)), sqlInsert);
#elif defined USE_MYSQL
			SociAdaptor insertSt(Statement().Insert(JDTableObj_.Use(ToInsert_)), sqlInsert);
			SociAdaptor getSt(Statement().Select(identity().Into(OwnNewVerifyID_)), sqlInsert);
#endif


			Statement selectSt;
			Init(selectSt);

			SociAdaptor get(selectSt, sql);
			get.Excute(false);
			while ( get.Fetch() )
			{
				gotData = true;
				Skip_ = false;

				PreProcess();

				if ( Skip_ )
				{
					continue;
				}

				ToInsert_.Check();

				insertSt.Excute();
#ifdef USE_MYSQL
				getSt.Excute();
#endif
				PostProcess();
			}
		}

		if ( gotData )
		{
			PostDecompose(sql, sqlInsert);
		}	
	}

	void	Init(Statement& st);

	void	PreProcess();

	void	PostProcess();

	void	PostDecompose(soci::session& sql, soci::session& sqlInsert);

private:

	int64_t				OwnNewVerifyID_;
	int64_t				VerCode_;
	bool				Skip_;
	SDecomposeInfoSPtr	InfoSPtr_;

	const autoDB::GL_OrderInfo_Data&	StatusInfo_;

	JDTable&			JDTableObj_;
	JDData				ToInsert_;
};
#endif // DecomposeTable_h__