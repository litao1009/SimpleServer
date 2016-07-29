#include "CTcpDefaultContext.h"
#include "mori/net/TcpConnection.h"

#include "Log.h"

namespace mori
{

CTcpDefaultContext::CTcpDefaultContext( TcpConnectionWPtr& connPtr, UpdateFtr ftr ):ITcpContext(connPtr),ConnWPtr_(connPtr),UpdateFtr_(ftr)
{

}

CTcpDefaultContext::~CTcpDefaultContext()
{
	TcpConnectionSPtr connSPtr = ConnWPtr_.lock();
	if ( connSPtr )
	{
		TLOG(LOG_INFO << L" Mori:³¬Ê±¹Ø±Õ" << connSPtr->GetRemoteEP();)

		connSPtr->ShutDown();
	}
}

void CTcpDefaultContext::Update()
{
	if ( UpdateFtr_ )
	{
		UpdateFtr_(ITcpContextWPtr(std::static_pointer_cast<ITcpContext>(shared_from_this())));
	}
}


}