#include "ProcessorCommon.h"
#include "transMsg/UploadASData.pb.h"


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QUploadASData);


CMsgCallBack<transMsg::QUploadASData>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QUploadASData>::_Process( transMsg::QUploadASData& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	auto retMsg = smartPtr::make_shared<transMsg::AUploadASData>();
	auto& retInfo = sendInfoPtr->Add();
	retInfo.MsgPtr_ = retMsg;

	retMsg->set_stats(transMsg::ERS_SERVER_ERROR);

	{
		SociAdaptor(Statement().Delete(GL_AppleseedInfo), sql).Excute();
	}

	GL_AppleseedInfo_Data insertData;
	insertData.SetAll(true);

	SociAdaptor ada(Statement().Insert(GL_AppleseedInfo.Use(insertData)), sql);

	for ( auto& cur : msg.asdatainfo() )
	{
		insertData.ItemID_ = cur.itemid();
		insertData.ItemName_ = cur.itemname();
		insertData.ItemData_ = cur.itemdata();
		ToASCII(insertData);
		
		ada.Excute();
	}

	retMsg->set_stats(transMsg::ERS_SUCCESS);
}