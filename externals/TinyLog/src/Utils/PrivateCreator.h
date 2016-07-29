#pragma once

#define	DEFINE_PRIVATE_CREATORCLASS		class	PrivateCreator;
#define PRIVATE_IMPLEMENT(T)			class	T::PrivateCreator {};smartPtr::unique_ptr<T>		sIntancePtr;

#define	PRIVATE_CREATORCLASS_NAME		PrivateCreator
