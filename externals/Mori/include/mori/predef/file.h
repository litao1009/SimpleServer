#ifndef mori_file_h__
#define mori_file_h__

#pragma once

#include "int.h"

#include <boost/filesystem/path.hpp>
#include <vector>

namespace mori
{
	typedef	boost::filesystem::path		FilePath;
	
	class	SFileInfo
	{
	public:
		SFileInfo():Size_(0),Chksum_(0),ChkFaild_(false) {}

		FilePath	Path_;
		uint32_t	Size_;
		uint32_t	Chksum_;
		bool		ChkFaild_;
	};

	typedef	std::vector<SFileInfo>		FileInfoList;
	typedef	std::vector<SFileInfo>		RecvFileList;
	typedef	std::vector<FilePath>		SendFileList;
	typedef	std::vector<FilePath>		FileList;
}
#endif // file_h__