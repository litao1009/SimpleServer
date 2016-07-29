#ifndef	_DEF_THREADTYPE_
#define	_DEF_THREADTYPE_

#pragma once

#include <thread>
#include <vector>
#include <memory>

typedef	std::thread					ThreadType;
typedef	std::unique_ptr<ThreadType>	ThreadTypeUPtr;
typedef	std::vector<ThreadTypeUPtr>	ThreadGroupType;

#endif