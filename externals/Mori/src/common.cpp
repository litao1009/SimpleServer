#include "mori/common.h"
#include <google/protobuf/stubs/common.h>

namespace mori
{
	void	ReleaseMoriState()
	{
		google::protobuf::ShutdownProtobufLibrary();
	}
}