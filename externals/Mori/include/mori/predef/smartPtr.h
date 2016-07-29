#ifndef mori_smartPtr_h__
#define mori_smartPtr_h__

#pragma once

#include <memory>

namespace mori
{
	using	std::unique_ptr;
	using	std::shared_ptr;
	using	std::weak_ptr;
	using	std::enable_shared_from_this;
	using	std::make_shared;
}


#define MORI_DEFINE_PIMP				\
	private:							\
	class	Imp;						\
	mori::unique_ptr<Imp>	ImpUPtr_;



#define MORI_DEFINE_SHARE_PIMP					\
	private:									\
	class	Imp;								\
	mori::shared_ptr<Imp>	ImpSPtr_;
#endif // smartPtr_h__