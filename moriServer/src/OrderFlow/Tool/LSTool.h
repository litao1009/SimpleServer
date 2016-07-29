#ifndef LSTool_h__
#define LSTool_h__

#pragma once
#include "Processor/DBValue.h"
#include "DataBase/DataBase.h"
#include "DataBase/msg-LSUtils.h"
#include "DataBase/msg-GL.h"
#include "transMsg/EReturnStatus.pb.h"
#include "Utils/StrDef.h"
#include "Utils/Type/PathType.h"

namespace orderTool
{
	using namespace autoDB;

	class	LSTool
	{
	public:

		LSTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::LS_Table& lsTable=transMsg::LS_Table());

		void	GetTable();

		void	InsertTable();

		void	CopyFromJD();

		void	CopyFromLS();

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

	private:

		template<typename JDTable,typename LSTable>
		void	_Copy(JDTable& src, LSTable& dest)
		{
			SociAdaptor(Statement().Delete(dest).Where(dest.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
			SociAdaptor(Statement().InsertInto(dest)
				.Select(Column(src.GetTableName() + ".*"))
				.From(src)
				.Where(src.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
		}

		const GL_OrderInfo_Data&	StatusInfo_;
		soci::session&				ServerSql_;
		transMsg::LS_Table&			TheTable_;
	};
}
#endif // LSTool_h__
