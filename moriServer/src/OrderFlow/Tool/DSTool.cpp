#include "DSTool.h"
#include "TinyLog.h"
#include "DataBase/DataBase.h"
#include "Database/msg-SV.h"
#include "transMsg/ETableType.pb.h"
#include "Processor/ProcessorCommon.h"

#define SJ_AND_DS_NAME(x)	SJ_##x,DS_##x

namespace orderTool
{
	DSTool::DSTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::DS_Table& dsTable):
		StatusInfo_(statusInfo),ServerSql_(sql),TheTable_(dsTable)
	{
		
	}

	void DSTool::GetTable()
	{
		GetRecord(DS_CabBoardGapInfo);
		GetRecord(DS_CabBoardInfo);
		GetRecord(DS_CabBoardSealInfo);
		GetRecord(DS_CabDoorBoardGapInfo);
		GetRecord(DS_CabDoorBoardInfo);
		GetRecord(DS_CabDoorBoardSealInfo);
		GetRecord(DS_CabDoorHWFInfo);
		GetRecord(DS_CabDoorHandleInfo);
		GetRecord(DS_CabDoorInfo);
		GetRecord(DS_CabDoorRegionInfo);
		GetRecord(DS_CabDoorSlideInfo);
		GetRecord(DS_CabDoorSystemInfo);
		GetRecord(DS_CabFNFHoleInfo);
		GetRecord(DS_CabFNFInfo);
		GetRecord(DS_CabFNFPartInfo);
		GetRecord(DS_CabFNFPartSealInfo);
		GetRecord(DS_CabInfo);
		GetRecord(DS_DecorBoardInfo);
		GetRecord(DS_DecorBoardUnitInfo);
		GetRecord(DS_DecorBoardUnitSealInfo);
		GetRecord(DS_DecorInfo);
		GetRecord(DS_DecorLineInfo);
		GetRecord(DS_MarkInfo);
		GetRecord(DS_DesignPlanInfo);
		GetRecord(DS_RemarkInfo);
		GetRecord(DS_ShapeInfo);
		GetRecord(DS_FittingInfo);
		GetRecord(DS_HWFInfo);
		GetRecord(DS_MatrixInfo);
		GetRecord(DS_OrderAddedInfo);
		GetRecord(DS_OrderDataInfo);
		GetRecord(DS_PackInfo);
		GetRecord(DS_PointInfo);
		GetRecord(DS_PrintElementInfo);
		GetRecord(DS_PrintGroupInfo);
		GetRecord(DS_PrintInfo);
		GetRecord(DS_PrintTableInfo);
		GetRecord(DS_PrintTableRowColInfo);
		GetRecord(DS_PrintTableRowInfo);
		GetRecord(DS_ProductInfo);
		GetRecord(DS_SkinInfo);
		GetRecord(DS_TableInfo);
		GetRecord(DS_TablePartInfo);
		GetRecord(DS_TableSideInfo);
		GetRecord(DS_WallDecorInfo);
		GetRecord(DS_WallInfo);
	}

	void DSTool::InsertTable()
	{
		InsertRecord(DS_CabBoardGapInfo);
		InsertRecord(DS_CabBoardInfo);
		InsertRecord(DS_CabBoardSealInfo);
		InsertRecord(DS_CabDoorBoardGapInfo);
		InsertRecord(DS_CabDoorBoardInfo);
		InsertRecord(DS_CabDoorBoardSealInfo);
		InsertRecord(DS_CabDoorHWFInfo);
		InsertRecord(DS_CabDoorHandleInfo);
		InsertRecord(DS_CabDoorInfo);
		InsertRecord(DS_CabDoorRegionInfo);
		InsertRecord(DS_CabDoorSlideInfo);
		InsertRecord(DS_CabDoorSystemInfo);
		InsertRecord(DS_CabFNFHoleInfo);
		InsertRecord(DS_CabFNFInfo);
		InsertRecord(DS_CabFNFPartInfo);
		InsertRecord(DS_CabFNFPartSealInfo);
		InsertRecord(DS_CabInfo);
		InsertRecord(DS_DecorBoardInfo);
		InsertRecord(DS_DecorBoardUnitInfo);
		InsertRecord(DS_DecorBoardUnitSealInfo);
		InsertRecord(DS_DecorInfo);
		InsertRecord(DS_DecorLineInfo);
		InsertRecord(DS_MarkInfo);
		InsertRecord(DS_DesignPlanInfo);
		InsertRecord(DS_RemarkInfo);
		InsertRecord(DS_ShapeInfo);
		InsertRecord(DS_FittingInfo);
		InsertRecord(DS_HWFInfo);
		InsertRecord(DS_MatrixInfo);
		InsertRecord(DS_OrderAddedInfo);
		InsertRecord(DS_OrderDataInfo);
		InsertRecord(DS_PackInfo);
		InsertRecord(DS_PointInfo);
		InsertRecord(DS_PrintElementInfo);
		InsertRecord(DS_PrintGroupInfo);
		InsertRecord(DS_PrintInfo);
		InsertRecord(DS_PrintTableInfo);
		InsertRecord(DS_PrintTableRowColInfo);
		InsertRecord(DS_PrintTableRowInfo);
		InsertRecord(DS_ProductInfo);
		InsertRecord(DS_SkinInfo);
		InsertRecord(DS_TableInfo);
		InsertRecord(DS_TablePartInfo);
		InsertRecord(DS_TableSideInfo);
		InsertRecord(DS_WallDecorInfo);
		InsertRecord(DS_WallInfo);
	}


	void	DSTool::Copy()
	{
		_Copy(SJ_AND_DS_NAME(CabBoardGapInfo));
		_Copy(SJ_AND_DS_NAME(CabBoardInfo));
		_Copy(SJ_AND_DS_NAME(CabBoardSealInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorBoardGapInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorBoardInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorBoardSealInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorHWFInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorHandleInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorRegionInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorSlideInfo));
		_Copy(SJ_AND_DS_NAME(CabDoorSystemInfo));
		_Copy(SJ_AND_DS_NAME(CabFNFHoleInfo));
		_Copy(SJ_AND_DS_NAME(CabFNFInfo));
		_Copy(SJ_AND_DS_NAME(CabFNFPartInfo));
		_Copy(SJ_AND_DS_NAME(CabFNFPartSealInfo));
		_Copy(SJ_AND_DS_NAME(CabInfo));
		_Copy(SJ_AND_DS_NAME(DecorBoardInfo));
		_Copy(SJ_AND_DS_NAME(DecorBoardUnitInfo));
		_Copy(SJ_AND_DS_NAME(DecorBoardUnitSealInfo));
		_Copy(SJ_AND_DS_NAME(DecorInfo));
		_Copy(SJ_AND_DS_NAME(DecorLineInfo));
		_Copy(SJ_AND_DS_NAME(MarkInfo));
		_Copy(SJ_AND_DS_NAME(DesignPlanInfo));
		_Copy(SJ_AND_DS_NAME(RemarkInfo));
		_Copy(SJ_AND_DS_NAME(ShapeInfo));
		_Copy(SJ_AND_DS_NAME(FittingInfo));
		_Copy(SJ_AND_DS_NAME(HWFInfo));
		_Copy(SJ_AND_DS_NAME(MatrixInfo));
		_Copy(SJ_AND_DS_NAME(OrderAddedInfo));
		_Copy(SJ_AND_DS_NAME(OrderDataInfo));
		_Copy(SJ_AND_DS_NAME(PackInfo));
		_Copy(SJ_AND_DS_NAME(PointInfo));
		_Copy(SJ_AND_DS_NAME(PrintElementInfo));
		_Copy(SJ_AND_DS_NAME(PrintGroupInfo));
		_Copy(SJ_AND_DS_NAME(PrintInfo));
		_Copy(SJ_AND_DS_NAME(PrintTableInfo));
		_Copy(SJ_AND_DS_NAME(PrintTableRowColInfo));
		_Copy(SJ_AND_DS_NAME(PrintTableRowInfo));
		_Copy(SJ_AND_DS_NAME(ProductInfo));
		_Copy(SJ_AND_DS_NAME(SkinInfo));
		_Copy(SJ_AND_DS_NAME(TableInfo));
		_Copy(SJ_AND_DS_NAME(TablePartInfo));
		_Copy(SJ_AND_DS_NAME(TableSideInfo));
		_Copy(SJ_AND_DS_NAME(WallDecorInfo));
		_Copy(SJ_AND_DS_NAME(WallInfo));

		bool needDelete = false;
		AStringType filePath;
		{
			SociAdaptor ada(Statement()
				.Select(SV_OrderFileInfo.FilePath.Into(filePath))
				.From(SV_OrderFileInfo)
				.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_DS_TABLE), ServerSql_);

			needDelete = ada.Excute();
		}

		if ( needDelete )
		{
			ProcessorCommon::RemoveFile(filePath);
			SociAdaptor(Statement().Delete(SV_OrderFileInfo).Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_DS_TABLE), ServerSql_).Excute();
		}

		SV_OrderFileInfo_Data orderFile;
		bool needInsert = false;
		{
			orderFile.SetAll(true);
			SociAdaptor adpt(Statement().Select(SV_OrderFileInfo.Into(orderFile))
										.From(SV_OrderFileInfo)
										.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_SJ_TABLE), ServerSql_);
			needInsert = adpt.Excute();
		}
		
		orderFile.TableType_ = transMsg::ETT_DS_TABLE;

		if ( needInsert )
		{
			SociAdaptor(Statement().Insert(SV_OrderFileInfo.Use(orderFile)), ServerSql_).Excute();
		}
	}

	transMsg::EReturnStatus DSTool::Download(AStringType& buffer, PathType& filePath)
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
			.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_DS_TABLE), ServerSql_).Excute() )
		{
			filePath = orderFile;
		}

		return transMsg::ERS_SUCCESS;
	}

	transMsg::EReturnStatus DSTool::Upload(const AStringType& buffer, const PathType& filePath)
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
			sd.SetAll(true);

			SociAdaptor ada(Statement()
				.Select(SV_OrderFileInfo.Into(sd))
				.From(SV_OrderFileInfo)
				.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_DS_TABLE), ServerSql_);

			auto needUpdate = ada.Excute();

			if ( needUpdate )
			{
				ProcessorCommon::RemoveFile(*sd.FilePath_);
				sd.SetAll(false);
				sd.FilePath_ = filePath.string();
				SociAdaptor(Statement().Update(SV_OrderFileInfo.Use(sd)).Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_DS_TABLE), ServerSql_).Excute();
			}
			else
			{
				sd.OrderID_ = StatusInfo_.OrderID_;
				sd.TableType_ = transMsg::ETT_DS_TABLE;
				sd.FilePath_ = filePath.string();

				SociAdaptor(Statement().Insert(SV_OrderFileInfo.Use(sd)), ServerSql_).Excute();
			}
		}

		ServerSql_.commit();

		return transMsg::ERS_SUCCESS;
	}
}