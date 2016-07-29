#include "ProcessorCommon.h"
#include "transMsg/HeartBeat.pb.h"


IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QHeartBeat);


CMsgCallBack<transMsg::QHeartBeat>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QHeartBeat>::_Process( transMsg::QHeartBeat& msg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
	LOG_INFO << L"HeartBeat " << recvID;
}