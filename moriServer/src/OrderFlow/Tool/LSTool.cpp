#include "LSTool.h"
#include "DataBase/msg-JD.h"
#include "DataBase/msg-ZB.h"
#include "TinyLog.h"
#include "DataBase/DataBase.h"
#include "Database/msg-SV.h"
#include "transMsg/ETableType.pb.h"

#define JD_AND_LS_NAME(x)	JD_##x,LS_##x
#define ZB_AND_LS_NAME(x)	ZB_##x,LS_##x

namespace orderTool
{
	LSTool::LSTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::LS_Table& lsTable):
		StatusInfo_(statusInfo),ServerSql_(sql),TheTable_(lsTable)
	{
		
	}

	void LSTool::GetTable()
	{
		GetRecord(LS_BoardGapInfo);
		GetRecord(LS_BoardInfo);
		GetRecord(LS_Objects);
		GetRecord(LS_OrderInfo);
		GetRecord(LS_BoardSealInfo);
	}

	void LSTool::InsertTable()
	{
		InsertRecord(LS_BoardGapInfo);
		InsertRecord(LS_BoardInfo);
		InsertRecord(LS_Objects);
		InsertRecord(LS_OrderInfo);
		InsertRecord(LS_BoardSealInfo);
	}


	void	LSTool::CopyFromJD()
	{
		_Copy(JD_AND_LS_NAME(BoardGapInfo));
		_Copy(JD_AND_LS_NAME(BoardSealInfo));
		_Copy(JD_AND_LS_NAME(BoardInfo));
		_Copy(JD_AND_LS_NAME(Objects));
		_Copy(JD_AND_LS_NAME(OrderInfo));
	}

	transMsg::EReturnStatus LSTool::Download(AStringType& buffer, PathType& filePath)
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
			.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_LS_TABLE), ServerSql_).Excute() )
		{
			filePath = orderFile;
		}

		return transMsg::ERS_SUCCESS;
	}

	transMsg::EReturnStatus LSTool::Upload(const AStringType& buffer, const PathType& filePath)
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

			sd.TableType_ = transMsg::ETT_LS_TABLE;
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

	void LSTool::CopyFromLS()
	{
		_Copy(ZB_AND_LS_NAME(BoardGapInfo));
		_Copy(ZB_AND_LS_NAME(BoardSealInfo));
		_Copy(ZB_AND_LS_NAME(BoardInfo));
		_Copy(ZB_AND_LS_NAME(Objects));
		_Copy(ZB_AND_LS_NAME(OrderInfo));
	}

}