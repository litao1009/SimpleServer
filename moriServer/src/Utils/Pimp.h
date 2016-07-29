#pragma once

#include <memory>

#define DEFINE_PIMP							\
	private:								\
		class	Imp;						\
		std::unique_ptr<Imp>	ImpUPtr_;



#define DEFINE_SHARE_PIMP							\
	private:										\
		class	Imp;								\
		typedef	std::weak_ptr<Imp>	ImpWPtr;		\
		std::shared_ptr<Imp>		ImpSPtr_;