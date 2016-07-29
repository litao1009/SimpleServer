#pragma once

#include "Utils/Pimp.h"
#include <boost/filesystem/path.hpp>

class	moriServer
{
	DEFINE_SHARE_PIMP

public:

	moriServer();

	~moriServer();

	bool	Start(const boost::filesystem::path& workingPath=".");

	bool	IsStart();

	void	Stop();

	void	Join();
};