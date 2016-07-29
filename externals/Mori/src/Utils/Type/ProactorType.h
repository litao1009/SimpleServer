#ifndef	_DEF_PROACTORTYPE_
#define	_DEF_PROACTORTYPE_

#pragma once

#include "Utils/NameSpace/nsAsio.h"

typedef	nsAsio::io_service			ProactorType;
typedef	ProactorType::strand		SafeProactorType;

#endif