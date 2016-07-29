#ifndef SociAdaptor_h__
#define SociAdaptor_h__

#pragma once

#include "AutoDB/Config.h"
#include "soci.h"
#include "AutoDB/Statement.h"

namespace autoDB
{

class	SociAdaptor
{
	class	Imp;
	std::unique_ptr<Imp>	ImpUPtr_;

public:

	SociAdaptor(const Statement& st, soci::session& sql);

	~SociAdaptor();

public:

	bool	Excute(bool withDataChange = true);

	bool	Fetch();

	void	SetFetchSize(uint32_t size);

	int64_t	GetAffectedRows();
};


}

#endif // SociAdaptor_h__