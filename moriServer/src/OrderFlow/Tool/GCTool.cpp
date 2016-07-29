#include "GCTool.h"
#include "DataBase/msg-DS.h"
#include "DataBase/msg-GC.h"
#include "Database/msg-SV.h"
#include "TinyLog.h"
#include "transMsg/ETableType.pb.h"
#include "Processor/ProcessorCommon.h"

#define DS_AND_GC_NAME(x)	DS_##x,GC_##x

namespace orderTool
{
	GCTool::GCTool(const GL_OrderInfo_Data& statusInfo, soci::session& sql, transMsg::GC_Table& gcTable):
		StatusInfo_(statusInfo),ServerSql_(sql),TheTable_(gcTable)
	{
		
	}

	void	GCTool::CopyFromDS()
	{
		_Copy(DS_AND_GC_NAME(CabBoardGapInfo));
		_Copy(DS_AND_GC_NAME(CabBoardInfo));
		_Copy(DS_AND_GC_NAME(CabBoardSealInfo));
		_Copy(DS_AND_GC_NAME(CabDoorBoardGapInfo));
		_Copy(DS_AND_GC_NAME(CabDoorBoardInfo));
		_Copy(DS_AND_GC_NAME(CabDoorBoardSealInfo));
		_Copy(DS_AND_GC_NAME(CabDoorHWFInfo));
		_Copy(DS_AND_GC_NAME(CabDoorHandleInfo));
		_Copy(DS_AND_GC_NAME(CabDoorInfo));
		_Copy(DS_AND_GC_NAME(CabDoorRegionInfo));
		_Copy(DS_AND_GC_NAME(CabDoorSlideInfo));
		_Copy(DS_AND_GC_NAME(CabDoorSystemInfo));
		_Copy(DS_AND_GC_NAME(CabFNFHoleInfo));
		_Copy(DS_AND_GC_NAME(CabFNFInfo));
		_Copy(DS_AND_GC_NAME(CabFNFPartInfo));
		_Copy(DS_AND_GC_NAME(CabFNFPartSealInfo));
		_Copy(DS_AND_GC_NAME(CabInfo));
		_Copy(DS_AND_GC_NAME(DecorBoardInfo));
		_Copy(DS_AND_GC_NAME(DecorBoardUnitInfo));
		_Copy(DS_AND_GC_NAME(DecorBoardUnitSealInfo));
		_Copy(DS_AND_GC_NAME(DecorInfo));
		_Copy(DS_AND_GC_NAME(DecorLineInfo));
		_Copy(DS_AND_GC_NAME(MarkInfo));
		_Copy(DS_AND_GC_NAME(DesignPlanInfo));
		_Copy(DS_AND_GC_NAME(RemarkInfo));
		_Copy(DS_AND_GC_NAME(ShapeInfo));
		_Copy(DS_AND_GC_NAME(FittingInfo));
		_Copy(DS_AND_GC_NAME(HWFInfo));
		_Copy(DS_AND_GC_NAME(MatrixInfo));
		_Copy(DS_AND_GC_NAME(OrderAddedInfo));
		_Copy(DS_AND_GC_NAME(OrderDataInfo));
		_Copy(DS_AND_GC_NAME(PackInfo));
		_Copy(DS_AND_GC_NAME(PointInfo));
		_Copy(DS_AND_GC_NAME(PrintElementInfo));
		_Copy(DS_AND_GC_NAME(PrintGroupInfo));
		_Copy(DS_AND_GC_NAME(PrintInfo));
		_Copy(DS_AND_GC_NAME(PrintTableInfo));
		_Copy(DS_AND_GC_NAME(PrintTableRowColInfo));
		_Copy(DS_AND_GC_NAME(PrintTableRowInfo));
		_Copy(DS_AND_GC_NAME(ProductInfo));
		_Copy(DS_AND_GC_NAME(SkinInfo));
		_Copy(DS_AND_GC_NAME(TableInfo));
		_Copy(DS_AND_GC_NAME(TablePartInfo));
		_Copy(DS_AND_GC_NAME(TableSideInfo));
		_Copy(DS_AND_GC_NAME(WallDecorInfo));
		_Copy(DS_AND_GC_NAME(WallInfo));

		bool needDelete = false;
		AStringType filePath;
		{
			SociAdaptor ada(Statement()
				.Select(SV_OrderFileInfo.FilePath.Into(filePath))
				.From(SV_OrderFileInfo)
				.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_GC_TABLE), ServerSql_);

			needDelete = ada.Excute();
		}

		if ( needDelete )
		{
			ProcessorCommon::RemoveFile(filePath);
			SociAdaptor(Statement().Delete(SV_OrderFileInfo).Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_GC_TABLE), ServerSql_).Excute();
		}

		SV_OrderFileInfo_Data orderFile;
		bool needInsert = false;
		{
			orderFile.SetAll(true);
			SociAdaptor adpt(Statement().Select(SV_OrderFileInfo.Into(orderFile))
				.From(SV_OrderFileInfo)
				.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_DS_TABLE), ServerSql_);
			needInsert = adpt.Excute();
		}

		orderFile.TableType_ = transMsg::ETT_GC_TABLE;

		if ( needInsert )
		{
			SociAdaptor(Statement().Insert(SV_OrderFileInfo.Use(orderFile)), ServerSql_).Excute();
		}
	}

	void GCTool::GetTable()
	{
		GetRecord(GC_CabBoardGapInfo);
		GetRecord(GC_CabBoardInfo);
		GetRecord(GC_CabBoardSealInfo);
		GetRecord(GC_CabDoorBoardGapInfo);
		GetRecord(GC_CabDoorBoardInfo);
		GetRecord(GC_CabDoorBoardSealInfo);
		GetRecord(GC_CabDoorHWFInfo);
		GetRecord(GC_CabDoorHandleInfo);
		GetRecord(GC_CabDoorInfo);
		GetRecord(GC_CabDoorRegionInfo);
		GetRecord(GC_CabDoorSlideInfo);
		GetRecord(GC_CabDoorSystemInfo);
		GetRecord(GC_CabFNFHoleInfo);
		GetRecord(GC_CabFNFInfo);
		GetRecord(GC_CabFNFPartInfo);
		GetRecord(GC_CabFNFPartSealInfo);
		GetRecord(GC_CabInfo);
		GetRecord(GC_DecorBoardInfo);
		GetRecord(GC_DecorBoardUnitInfo);
		GetRecord(GC_DecorBoardUnitSealInfo);
		GetRecord(GC_DecorInfo);
		GetRecord(GC_DecorLineInfo);
		GetRecord(GC_MarkInfo);
		GetRecord(GC_DesignPlanInfo);
		GetRecord(GC_RemarkInfo);
		GetRecord(GC_ShapeInfo);
		GetRecord(GC_FittingInfo);
		GetRecord(GC_HWFInfo);
		GetRecord(GC_MatrixInfo);
		GetRecord(GC_OrderAddedInfo);
		GetRecord(GC_OrderDataInfo);
		GetRecord(GC_PackInfo);
		GetRecord(GC_PointInfo);
		GetRecord(GC_PrintElementInfo);
		GetRecord(GC_PrintGroupInfo);
		GetRecord(GC_PrintInfo);
		GetRecord(GC_PrintTableInfo);
		GetRecord(GC_PrintTableRowColInfo);
		GetRecord(GC_PrintTableRowInfo);
		GetRecord(GC_ProductInfo);
		GetRecord(GC_SkinInfo);
		GetRecord(GC_TableInfo);
		GetRecord(GC_TablePartInfo);
		GetRecord(GC_TableSideInfo);
		GetRecord(GC_WallDecorInfo);
		GetRecord(GC_WallInfo);

	}

	void GCTool::InsertTable()
	{
		InsertRecord(GC_CabBoardGapInfo);
		InsertRecord(GC_CabBoardInfo);
		InsertRecord(GC_CabBoardSealInfo);
		InsertRecord(GC_CabDoorBoardGapInfo);
		InsertRecord(GC_CabDoorBoardInfo);
		InsertRecord(GC_CabDoorBoardSealInfo);
		InsertRecord(GC_CabDoorHWFInfo);
		InsertRecord(GC_CabDoorHandleInfo);
		InsertRecord(GC_CabDoorInfo);
		InsertRecord(GC_CabDoorRegionInfo);
		InsertRecord(GC_CabDoorSlideInfo);
		InsertRecord(GC_CabDoorSystemInfo);
		InsertRecord(GC_CabFNFHoleInfo);
		InsertRecord(GC_CabFNFInfo);
		InsertRecord(GC_CabFNFPartInfo);
		InsertRecord(GC_CabFNFPartSealInfo);
		InsertRecord(GC_CabInfo);
		InsertRecord(GC_DecorBoardInfo);
		InsertRecord(GC_DecorBoardUnitInfo);
		InsertRecord(GC_DecorBoardUnitSealInfo);
		InsertRecord(GC_DecorInfo);
		InsertRecord(GC_DecorLineInfo);
		InsertRecord(GC_MarkInfo);
		InsertRecord(GC_DesignPlanInfo);
		InsertRecord(GC_RemarkInfo);
		InsertRecord(GC_ShapeInfo);
		InsertRecord(GC_FittingInfo);
		InsertRecord(GC_HWFInfo);
		InsertRecord(GC_MatrixInfo);
		InsertRecord(GC_OrderAddedInfo);
		InsertRecord(GC_OrderDataInfo);
		InsertRecord(GC_PackInfo);
		InsertRecord(GC_PointInfo);
		InsertRecord(GC_PrintElementInfo);
		InsertRecord(GC_PrintGroupInfo);
		InsertRecord(GC_PrintInfo);
		InsertRecord(GC_PrintTableInfo);
		InsertRecord(GC_PrintTableRowColInfo);
		InsertRecord(GC_PrintTableRowInfo);
		InsertRecord(GC_ProductInfo);
		InsertRecord(GC_SkinInfo);
		InsertRecord(GC_TableInfo);
		InsertRecord(GC_TablePartInfo);
		InsertRecord(GC_TableSideInfo);
		InsertRecord(GC_WallDecorInfo);
		InsertRecord(GC_WallInfo);
	}

	transMsg::EReturnStatus GCTool::Download(AStringType& buffer, PathType& filePath)
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
			.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_GC_TABLE), ServerSql_).Excute() )
		{
			filePath = orderFile;
		}

		return transMsg::ERS_SUCCESS;
	}

	transMsg::EReturnStatus GCTool::Upload(const AStringType& buffer, const PathType& filePath)
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
				.Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_GC_TABLE), ServerSql_);

			auto needUpdate = ada.Excute();

			if ( needUpdate )
			{
				ProcessorCommon::RemoveFile(*sd.FilePath_);
				sd.SetAll(false);
				sd.FilePath_ = filePath.string();
				SociAdaptor(Statement().Update(SV_OrderFileInfo.Use(sd)).Where(SV_OrderFileInfo.OrderID==*StatusInfo_.OrderID_ && SV_OrderFileInfo.TableType==transMsg::ETT_GC_TABLE), ServerSql_).Excute();
			}
			else
			{
				sd.OrderID_ = StatusInfo_.OrderID_;
				sd.TableType_ = transMsg::ETT_GC_TABLE;
				sd.FilePath_ = filePath.string();

				SociAdaptor(Statement().Insert(SV_OrderFileInfo.Use(sd)), ServerSql_).Excute();
			}
		}

		ServerSql_.commit();

		return transMsg::ERS_SUCCESS;
	}
}