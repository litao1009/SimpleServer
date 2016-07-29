#include "SJTool.h"
#include "TinyLog.h"
#include "DataBase/DataBase.h"
#include "Database/msg-SV.h"
#include "transMsg/ETableType.pb.h"
#include "Processor/ProcessorCommon.h"

namespace orderTool
{
	SJTool::SJTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::SJ_Table& sjTable):
		StatusInfo_(statusInfo),ServerSql_(sql),TheTable_(sjTable)
	{
		
	}

	void SJTool::GetTable()
	{
		GetRecord(SJ_CabBoardGapInfo);
		GetRecord(SJ_CabBoardInfo);
		GetRecord(SJ_CabBoardSealInfo);
		GetRecord(SJ_CabDoorBoardGapInfo);
		GetRecord(SJ_CabDoorBoardInfo);
		GetRecord(SJ_CabDoorBoardSealInfo);
		GetRecord(SJ_CabDoorHWFInfo);
		GetRecord(SJ_CabDoorHandleInfo);
		GetRecord(SJ_CabDoorInfo);
		GetRecord(SJ_CabDoorRegionInfo);
		GetRecord(SJ_CabDoorSlideInfo);
		GetRecord(SJ_CabDoorSystemInfo);
		GetRecord(SJ_CabFNFHoleInfo);
		GetRecord(SJ_CabFNFInfo);
		GetRecord(SJ_CabFNFPartInfo);
		GetRecord(SJ_CabFNFPartSealInfo);
		GetRecord(SJ_CabInfo);
		GetRecord(SJ_DecorBoardInfo);
		GetRecord(SJ_DecorBoardUnitInfo);
		GetRecord(SJ_DecorBoardUnitSealInfo);
		GetRecord(SJ_DecorInfo);
		GetRecord(SJ_DecorLineInfo);
		GetRecord(SJ_MarkInfo);
		GetRecord(SJ_DesignPlanInfo);
		GetRecord(SJ_RemarkInfo);
		GetRecord(SJ_ShapeInfo);
		GetRecord(SJ_FittingInfo);
		GetRecord(SJ_HWFInfo);
		GetRecord(SJ_MatrixInfo);
		GetRecord(SJ_OrderAddedInfo);
		GetRecord(SJ_OrderDataInfo);
		GetRecord(SJ_PackInfo);
		GetRecord(SJ_PointInfo);
		GetRecord(SJ_PrintElementInfo);
		GetRecord(SJ_PrintGroupInfo);
		GetRecord(SJ_PrintInfo);
		GetRecord(SJ_PrintTableInfo);
		GetRecord(SJ_PrintTableRowColInfo);
		GetRecord(SJ_PrintTableRowInfo);
		GetRecord(SJ_ProductInfo);
		GetRecord(SJ_SkinInfo);
		GetRecord(SJ_TableInfo);
		GetRecord(SJ_TablePartInfo);
		GetRecord(SJ_TableSideInfo);
		GetRecord(SJ_WallDecorInfo);
		GetRecord(SJ_WallInfo);
	}

	void SJTool::InsertTable()
	{
		InsertRecord(SJ_CabBoardGapInfo);
		InsertRecord(SJ_CabBoardInfo);
		InsertRecord(SJ_CabBoardSealInfo);
		InsertRecord(SJ_CabDoorBoardGapInfo);
		InsertRecord(SJ_CabDoorBoardInfo);
		InsertRecord(SJ_CabDoorBoardSealInfo);
		InsertRecord(SJ_CabDoorHWFInfo);
		InsertRecord(SJ_CabDoorHandleInfo);
		InsertRecord(SJ_CabDoorInfo);
		InsertRecord(SJ_CabDoorRegionInfo);
		InsertRecord(SJ_CabDoorSlideInfo);
		InsertRecord(SJ_CabDoorSystemInfo);
		InsertRecord(SJ_CabFNFHoleInfo);
		InsertRecord(SJ_CabFNFInfo);
		InsertRecord(SJ_CabFNFPartInfo);
		InsertRecord(SJ_CabFNFPartSealInfo);
		InsertRecord(SJ_CabInfo);
		InsertRecord(SJ_DecorBoardInfo);
		InsertRecord(SJ_DecorBoardUnitInfo);
		InsertRecord(SJ_DecorBoardUnitSealInfo);
		InsertRecord(SJ_DecorInfo);
		InsertRecord(SJ_DecorLineInfo);
		InsertRecord(SJ_MarkInfo);
		InsertRecord(SJ_DesignPlanInfo);
		InsertRecord(SJ_RemarkInfo);
		InsertRecord(SJ_ShapeInfo);
		InsertRecord(SJ_FittingInfo);
		InsertRecord(SJ_HWFInfo);
		InsertRecord(SJ_MatrixInfo);
		InsertRecord(SJ_OrderAddedInfo);
		InsertRecord(SJ_OrderDataInfo);
		InsertRecord(SJ_PackInfo);
		InsertRecord(SJ_PointInfo);
		InsertRecord(SJ_PrintElementInfo);
		InsertRecord(SJ_PrintGroupInfo);
		InsertRecord(SJ_PrintInfo);
		InsertRecord(SJ_PrintTableInfo);
		InsertRecord(SJ_PrintTableRowColInfo);
		InsertRecord(SJ_PrintTableRowInfo);
		InsertRecord(SJ_ProductInfo);
		InsertRecord(SJ_SkinInfo);
		InsertRecord(SJ_TableInfo);
		InsertRecord(SJ_TablePartInfo);
		InsertRecord(SJ_TableSideInfo);
		InsertRecord(SJ_WallDecorInfo);
		InsertRecord(SJ_WallInfo);
	}

	transMsg::EReturnStatus SJTool::Download(AStringType& buffer, PathType& filePath)
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
			.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_SJ_TABLE), ServerSql_).Excute() )
		{
			filePath = orderFile;
		}

		return transMsg::ERS_SUCCESS;
	}

	transMsg::EReturnStatus SJTool::Upload(const AStringType& buffer, const PathType& filePath)
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
				.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_SJ_TABLE), ServerSql_);
			
			auto needUpdate = ada.Excute();

			if ( needUpdate )
			{
				ProcessorCommon::RemoveFile(*sd.FilePath_);
				sd.SetAll(false);
				sd.FilePath_ = filePath.string();
				SociAdaptor(Statement().Update(SV_OrderFileInfo.Use(sd)).Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_SJ_TABLE), ServerSql_).Excute();
			}
			else
			{
				sd.OrderID_ = StatusInfo_.OrderID_;
				sd.TableType_ = transMsg::ETT_SJ_TABLE;
				sd.FilePath_ = filePath.string();

				SociAdaptor(Statement().Insert(SV_OrderFileInfo.Use(sd)), ServerSql_).Excute();
			}
		}

		ServerSql_.commit();

		return transMsg::ERS_SUCCESS;
	}

	void SJTool::DeleteTable()
	{
		DeleteRecord(SJ_CabBoardGapInfo);
		DeleteRecord(SJ_CabBoardInfo);
		DeleteRecord(SJ_CabBoardSealInfo);
		DeleteRecord(SJ_CabDoorBoardGapInfo);
		DeleteRecord(SJ_CabDoorBoardInfo);
		DeleteRecord(SJ_CabDoorBoardSealInfo);
		DeleteRecord(SJ_CabDoorHWFInfo);
		DeleteRecord(SJ_CabDoorHandleInfo);
		DeleteRecord(SJ_CabDoorInfo);
		DeleteRecord(SJ_CabDoorRegionInfo);
		DeleteRecord(SJ_CabDoorSlideInfo);
		DeleteRecord(SJ_CabDoorSystemInfo);
		DeleteRecord(SJ_CabFNFHoleInfo);
		DeleteRecord(SJ_CabFNFInfo);
		DeleteRecord(SJ_CabFNFPartInfo);
		DeleteRecord(SJ_CabFNFPartSealInfo);
		DeleteRecord(SJ_CabInfo);
		DeleteRecord(SJ_DecorBoardInfo);
		DeleteRecord(SJ_DecorBoardUnitInfo);
		DeleteRecord(SJ_DecorBoardUnitSealInfo);
		DeleteRecord(SJ_DecorInfo);
		DeleteRecord(SJ_DecorLineInfo);
		DeleteRecord(SJ_MarkInfo);
		DeleteRecord(SJ_DesignPlanInfo);
		DeleteRecord(SJ_RemarkInfo);
		DeleteRecord(SJ_ShapeInfo);
		DeleteRecord(SJ_FittingInfo);
		DeleteRecord(SJ_HWFInfo);
		DeleteRecord(SJ_MatrixInfo);
		DeleteRecord(SJ_OrderAddedInfo);
		DeleteRecord(SJ_OrderDataInfo);
		DeleteRecord(SJ_PackInfo);
		DeleteRecord(SJ_PointInfo);
		DeleteRecord(SJ_PrintElementInfo);
		DeleteRecord(SJ_PrintGroupInfo);
		DeleteRecord(SJ_PrintInfo);
		DeleteRecord(SJ_PrintTableInfo);
		DeleteRecord(SJ_PrintTableRowColInfo);
		DeleteRecord(SJ_PrintTableRowInfo);
		DeleteRecord(SJ_ProductInfo);
		DeleteRecord(SJ_SkinInfo);
		DeleteRecord(SJ_TableInfo);
		DeleteRecord(SJ_TablePartInfo);
		DeleteRecord(SJ_TableSideInfo);
		DeleteRecord(SJ_WallDecorInfo);
		DeleteRecord(SJ_WallInfo);

		AStringType filePath;
		SociAdaptor ada(Statement()
			.Select(SV_OrderFileInfo.FilePath.Into(filePath))
			.From(SV_OrderFileInfo)
			.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_SJ_TABLE), ServerSql_);

		if ( ada.Excute() )
		{
			ProcessorCommon::RemoveFile(filePath);
		}
	}

}