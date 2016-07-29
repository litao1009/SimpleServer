#ifndef ValueWrap_h__
#define ValueWrap_h__

#pragma once

#include "AutoDB/Config.h"
#include "AutoDB/Exchange.h"

namespace autoDB
{

class	ValueWrap
{
public:

	enum class EValueType
	{
		EVT_INT,
		EVT_BIGINT,
		EVT_FLOAT,
		EVT_STRING,
		EVT_TIME,
		EVT_BOOL,
		EVT_COUNT
	};

	template<EDataType T>
	class	ValueTrait
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_COUNT;
	};

	template<>
	class	ValueTrait<EDataType::EDT_INT>
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_INT;
	};

	template<>
	class	ValueTrait<EDataType::EDT_BIGINT>
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_BIGINT;
	};

	template<>
	class	ValueTrait<EDataType::EDT_FLOAT>
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_FLOAT;
	};

	template<>
	class	ValueTrait<EDataType::EDT_STRING>
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_STRING;
	};

	template<>
	class	ValueTrait<EDataType::EDT_TIME>
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_TIME;
	};

	template<>
	class	ValueTrait<EDataType::EDT_BOOL>
	{
	public:
		static	const EValueType		TraitType = EValueType::EVT_BOOL;
	};

	static	EValueType	TransFromEDT(EDataType edt)
	{
		switch (edt)
		{
		case autoDB::EDataType::EDT_INT:
			return EValueType::EVT_INT;
			break;
		case autoDB::EDataType::EDT_BIGINT:
			return EValueType::EVT_BIGINT;
			break;
		case autoDB::EDataType::EDT_FLOAT:
			return EValueType::EVT_FLOAT;
			break;
		case autoDB::EDataType::EDT_STRING:
			return EValueType::EVT_STRING;
			break;
		case autoDB::EDataType::EDT_TIME:
			return EValueType::EVT_TIME;
			break;
		case autoDB::EDataType::EDT_BOOL:
			return EValueType::EVT_BOOL;
			break;
		default:
			return EValueType::EVT_COUNT;
			break;
		}
	}

	enum class EAccessType
	{
		EAT_INTO,
		EAT_USE,
		EAT_COUNT
	};

	ValueWrap(EValueType evt, CallBackFtr ftr, bool isVec)
	{
		AccessType_ = EAccessType::EAT_INTO;
		IsVec_ = isVec;
		ValType_ = evt;
		Ftr_ = ftr;
	}

	ValueWrap(EValueType et, CallBackFtr ftr)
	{
		AccessType_ = EAccessType::EAT_USE;
		ValType_ = et;
		Ftr_ = ftr;
	}

	bool		IsVec_;
	EValueType	ValType_;
	EAccessType	AccessType_;
	CallBackFtr	Ftr_;
};

}


#endif // ValueWrap_h__
