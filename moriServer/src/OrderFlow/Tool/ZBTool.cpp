#include "ZBTool.h"
#include "TinyLog.h"
#include "DataBase/DataBase.h"
#include "Database/msg-SV.h"
#include "transMsg/ETableType.pb.h"

namespace orderTool
{
	ZBTool::ZBTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::ZB_Table& zbTable):
		StatusInfo_(statusInfo),ServerSql_(sql),TheTable_(zbTable)
	{
		
	}

	void ZBTool::GetTable()
	{
		GetRecord(ZB_BoardGapInfo);
		GetRecord(ZB_BoardInfo);
		GetRecord(ZB_Objects);
		GetRecord(ZB_OrderInfo);
		GetRecord(ZB_BoardSealInfo);
	}

	void ZBTool::InsertTable()
	{
		InsertRecord(ZB_BoardGapInfo);
		InsertRecord(ZB_BoardInfo);
		InsertRecord(ZB_Objects);
		InsertRecord(ZB_OrderInfo);
		InsertRecord(ZB_BoardSealInfo);
	}

	transMsg::EReturnStatus ZBTool::Download(AStringType& buffer, PathType& filePath)
	{
		try
		{
			GetTable();
		}
		catch(soci::soci_error& err)
		{
			LOG_ERROR << DataBase::GetSociErrorString(err);
			return transMsg::ERS_SERVER_ERROR;
		}

		TheTable_.SerializeToString(&buffer);

		AStringType orderFile;

		if ( !SociAdaptor(Statement().Select(SV_OrderFileInfo.FilePath.Into(orderFile))
			.From(SV_OrderFileInfo)
			.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_ZB_TABLE), ServerSql_).Excute() )
		{
			filePath = orderFile;
		}

		return transMsg::ERS_SUCCESS;
	}

	transMsg::EReturnStatus ZBTool::Upload(const AStringType& buffer, const PathType& filePath)
	{
		if ( !TheTable_.ParseFromString(buffer) )
		{
			return transMsg::ERS_WRONG_MESSAGE;
		}

		soci::transaction trans(ServerSql_);
		try
		{
			InsertTable();
		}
		catch(soci::soci_error& err)
		{
			LOG_ERROR << DataBase::GetSociErrorString(err);
			return transMsg::ERS_SERVER_ERROR;
		}

		if ( !filePath.empty() )
		{
			SV_OrderFileInfo_Data sd;

			sd.TableType_ = transMsg::ETT_ZB_TABLE;
			sd.FilePath_ = filePath.string();

			int64_t ars;
			{
				SociAdaptor ada(Statement()
					.Update(SV_OrderFileInfo.Use(sd))
					.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_), ServerSql_);
				ada.Excute();

				ars = ada.GetAffectedRows();
			}

			if ( 0 == ars )
			{
				sd.OrderID_ = StatusInfo_.OrderID_;

				SociAdaptor(Statement().Insert(SV_OrderFileInfo.Use(sd)), ServerSql_).Excute();
			}
		}

		ServerSql_.commit();

		return transMsg::ERS_SUCCESS;
	}
}