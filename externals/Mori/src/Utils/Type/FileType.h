#ifndef	_DEF_FILETYPE_
#define	_DEF_FILETYPE_

#pragma once

#include "Utils/NameSpace/nsFileSystem.h"
#include <boost/filesystem/fstream.hpp>

typedef	nsFileSystem::ifstream			InFileType;
typedef	nsFileSystem::ofstream			OutFileType;
typedef	std::ios						IOModeType;

#endif