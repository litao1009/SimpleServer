#ifndef NDEBUG
#include "ProcessorCommon.h"
#include "transMsg/Test.pb.h"
#include "transMsg/UpdateOrder.pb.h"
#include "DecomposeMgr/DecomposeMgr.h"

IMPLEMENT_IMSGCALLBACK_MEMBER(transMsg::QTest);


CMsgCallBack<transMsg::QTest>::CMsgCallBack()
{

}

void CMsgCallBack<transMsg::QTest>::_Process( transMsg::QTest& amsg, uint64_t recvID, const mori::RecvFileList& files, SUserInfo& userInfo, soci::session& sql, SSendInfoSPtr& sendInfoPtr )
{
// 	sql << GL_UserInfo::SelectString() << " where " << GL_UserInfo::FactoryID() << "=7" << " and " << GL_UserInfo::UserCode() << "='10010'"
// 		,soci::into(userInfo.UserInfo_);
// 	userInfo.Rights_.insert(100);
// 
// 	transMsg::QUpdateOrder testMsg;
// 	testMsg.set_orderid(19);
// 	testMsg.set_tostatus(order::EOS_FACTORY_FINANCE_EXAMINE_DONE);
// 	auto proc = IMsgCallBack::CallBackFactory(transMsg::QUpdateOrder::descriptor()->full_name());
// 	auto truePtr = std::static_pointer_cast<CMsgCallBack<transMsg::QUpdateOrder>>(proc);
// 	truePtr->Debug(testMsg, files, userInfo, sql, sendInfoPtr);

	DecomposeMgr::GetInstance().Push(50);
}
#endif