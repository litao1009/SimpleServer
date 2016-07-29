#ifndef CTcpDefaultContext_h__
#define CTcpDefaultContext_h__

#include "mori/net/ITcpContext.h"
#include "mori/net/TcpConnection.h"

namespace mori
{
	class	CTcpDefaultContext : public ITcpContext, public std::enable_shared_from_this<CTcpDefaultContext>
	{
	public:

		typedef	std::function<void(ITcpContextWPtr)>	UpdateFtr;

		CTcpDefaultContext(TcpConnectionWPtr& connPtr, UpdateFtr ftr);

		virtual	void	Update();

		virtual	~CTcpDefaultContext();

	private:

		TcpConnectionWPtr	ConnWPtr_;
		UpdateFtr			UpdateFtr_;
	};
}
#endif // CTcpDefaultContext_h__