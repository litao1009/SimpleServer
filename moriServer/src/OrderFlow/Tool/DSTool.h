#ifndef DSTool_h__
#define DSTool_h__

#pragma once

#include "DataBase/DataBase.h"
#include "DataBase/msg-SJ.h"
#include "DataBase/msg-DSUtils.h"
#include "DataBase/msg-GL.h"
#include "Processor/DBValue.h"
#include "transMsg/EReturnStatus.pb.h"
#include "Utils/StrDef.h"
#include "Utils/Type/PathType.h"

namespace orderTool
{
	using namespace autoDB;

	class	DSTool
	{
	public:

		DSTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::DS_Table& dsTable=transMsg::DS_Table());

		void	GetTable();

		void	InsertTable();

		void	Copy();

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
		void	InsertRecord(DS_OrderDataInfoImp& tableObj)
		{
			auto curTb = ExtractFromPack(TheTable_, tableObj);
			if ( 1 != curTb.size() )
			{
				throw soci::soci_error("DS_Order's Size isn't equal to 1");
			}

			auto& toUpdate = *curTb.begin();
			toUpdate.clear_orderid();
			
			auto sd = ToData(toUpdate);
			ToASCII(sd);

			SociAdaptor(Statement().Update(tableObj.Use(sd)).Where(tableObj.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
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

		template<typename SJTable,typename DSTable>
		void	_Copy(SJTable& src, DSTable& dest)
		{
			SociAdaptor(Statement().Delete(dest).Where(dest.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();

			SociAdaptor(Statement().InsertInto(dest)
										.Select(Column(src.GetTableName() + ".*"))
										.From(src)
										.InnerJoin(SJ_DesignPlanInfo)
											.On(SJ_DesignPlanInfo.OrderID==src.OrderID && SJ_DesignPlanInfo.IsActive==true && SJ_DesignPlanInfo.DesignPlanID==src.DesignPlanID)
										.Where(src.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
		}

		template<>
		void	_Copy(SJ_OrderDataInfoImp& src, DS_OrderDataInfoImp& dest)
		{
			SociAdaptor(Statement().Delete(dest).Where(dest.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();

			SociAdaptor(Statement().InsertInto(dest)
				.Select(Column(src.GetTableName() + ".*"))
				.From(src)
				.Where(src.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
		}

		template<>
		void	_Copy(SJ_OrderAddedInfoImp& src, DS_OrderAddedInfoImp& dest)
		{
			SociAdaptor(Statement().Delete(dest).Where(dest.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();

			SociAdaptor(Statement().InsertInto(dest)
				.Select(Column(src.GetTableName() + ".*"))
				.From(src)
				.Where(src.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();
		}

		template<>
		void	_Copy(SJ_DesignPlanInfoImp& src, DS_DesignPlanInfoImp& dest)
		{
			SociAdaptor(Statement().Delete(dest).Where(dest.OrderID==*StatusInfo_.OrderID_), ServerSql_).Excute();

			SociAdaptor(Statement().InsertInto(dest)
				.Select(Column(src.GetTableName() + ".*"))
				.From(src)
				.Where(src.OrderID==*StatusInfo_.OrderID_ && src.IsActive==true), ServerSql_).Excute();
		}

		const GL_OrderInfo_Data&	StatusInfo_;
		soci::session&				ServerSql_;
		transMsg::DS_Table&			TheTable_;
	};
}
#endif // DSTool_h__
