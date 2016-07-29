#ifndef SJTool_h__
#define SJTool_h__

#pragma once
#include "Processor/DBValue.h"
#include "DataBase/DataBase.h"
#include "DataBase/msg-SJUtils.h"
#include "DataBase/msg-GL.h"
#include "transMsg/EReturnStatus.pb.h"
#include "Utils/StrDef.h"
#include "Utils/Type/PathType.h"

namespace orderTool
{
	using namespace autoDB;

	class	SJTool
	{
	public:

		SJTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::SJ_Table& sjTable);

		void	GetTable();

		void	InsertTable();

		void	DeleteTable();

		transMsg::EReturnStatus	Download(AStringType& buffer, PathType& filePath);

		transMsg::EReturnStatus	Upload(const AStringType& buffer, const PathType& filePath);

	private:

		template<typename T>
		void	InsertRecord(T& tableObj)
		{
			typedef typename T::SData DataType;

			auto curTbs = ExtractFromPack(TheTable_, tableObj);

			SociAdaptor(Statement().Delete(tableObj).Where(tableObj.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();

			DataType toInsert;
			toInsert.SetAll(true);

			SociAdaptor ada(Statement().Insert(tableObj.Use(toInsert)), ServerSql_);

			for ( auto& curRecord : curTbs )
			{
				toInsert = ToData(curRecord);
				toInsert.OrderID_ = StatusInfo_.OrderID_;
				ToASCII(toInsert);

				ada.Excute();
			}
		}

		template<>
		void	InsertRecord(SJ_OrderDataInfoImp& tableObj)
		{
			typedef SJ_OrderDataInfoImp::SData DataType;

			auto curTbs = ExtractFromPack(TheTable_, tableObj);
			if ( 1 != curTbs.size() )
			{
				throw soci::soci_error("SJ_Order's Size isn't equal to 1");
			}

			SociAdaptor(Statement().Delete(tableObj).Where(tableObj.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();

			DataType toInsert = ToData(*curTbs.begin());
			toInsert.OrderID_ = StatusInfo_.OrderID_;
			ToASCII(toInsert);
			SociAdaptor ada(Statement().Insert(tableObj.Use(toInsert)), ServerSql_);
			ada.Excute();
		}

		template<typename T>
		void	GetRecord(T& tableObj)
		{
			typedef typename T::SData DataType;

			DataType info;
			info.SetAll(true);

			SociAdaptor ada(Statement().Select(tableObj.Into(info)).From(tableObj).Where(tableObj.OrderID==*StatusInfo_.OrderID_), ServerSql_);
			ada.Excute(false);

			while ( ada.Fetch() )
			{
				ToUTF8(info);
				AddToPack(TheTable_, ToMessage(info));
			}
		}

		template<typename T>
		void	DeleteRecord(T& tableObj)
		{
			SociAdaptor(Statement().Delete(tableObj).Where(tableObj.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
		}

	private:

		const GL_OrderInfo_Data&	StatusInfo_;
		soci::session&				ServerSql_;
		transMsg::SJ_Table&			TheTable_;
	};
}
#endif // SJTool_h__
