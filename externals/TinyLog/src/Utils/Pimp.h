#pragma once

#include <memory>

#define DEFINE_PIMP							\
	private:								\
		class	CImp;						\
		std::unique_ptr<CImp>	mImpPtr;



#define DEFINE_SHARE_PIMP							\
	private:										\
		class	CImp;								\
		typedef	std::weak_ptr<CImp>	CImpWPtr;		\
		std::shared_ptr<CImp>	mImpPtr;