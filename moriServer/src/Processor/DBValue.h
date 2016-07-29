#ifndef	_DB_VALUE_H_
#define _DB_VALUE_H_

#pragma once
#include "Utils/intDef.h"
#include "Codec/EClientType.pb.h"

class	DBValue
{
public:

	static	const	int32_t	True	= 1;
	static	const	int32_t	False	= 0;

	class	LoginStatus
	{
	public:
		static	const	int32_t	Logout	= 2;
		static	const	int32_t	Login	= 1;
		static	const	int32_t	Except	= 0;
	};
	
	class	UploadStatus
	{
	public:
		static	const	int32_t	Done	= 2;
		static	const	int32_t	Wait	= 1;
	};
	
	class	VerDbState
	{
	public:
		static	const	int32_t	On		= 1;
		static	const	int32_t	Off		= 0;
	};
	
	class	OrderAction
	{
	public:
		static	const	int32_t	Save						= 1;
		static	const	int32_t	ShopExamineWait				= 2;
		static	const	int32_t	ShopExamineDuring			= 3;
		static	const	int32_t	ShopExamineFail				= 4;
		static	const	int32_t	ShopCommitWait				= 5;
		static	const	int32_t	ShopCommitDone				= 6;
		static	const	int32_t	FactoryExamineFail			= 7;
		static	const	int32_t	FactoryGraphExamineDuring	= 8;
		static	const	int32_t	FactoryGraphExaminePass		= 9;
		static	const	int32_t	FactoryDecomposeDuring		= 10;
		static	const	int32_t	FactoryDecomposeFail		= 11;
		static	const	int32_t	FactoryDecomposeError		= 12;
		static	const	int32_t	FactoryDecomposeOnProcess	= 13;
		static	const	int32_t	FactoryListExamineDuring	= 14;
		static	const	int32_t	FactoryListExamineWait		= 15;
		static	const	int32_t	FactoryPriceExamineDuring	= 16;
		static	const	int32_t	FactoryPriceExamineWait		= 17;
		static	const	int32_t	FactoryFinanceExamineDuring	= 18;
		static	const	int32_t	FactoryFinanceExamineWait	= 19;
		static	const	int32_t	FactoryFinanceExaminePass	= 20;
		static	const	int32_t	Reset						= 21;
		static	const	int32_t	Transfer					= 22;
		static	const	int32_t	Upload						= 23;
		static	const	int32_t	Download					= 24;
	};
	
	class	ObjectType
	{
	public:
		static	const	int32_t	Cabinet						= 1;	//����
		static	const	int32_t	Door						= 2;	//����
		static	const	int32_t	DoorUnit					= 3;	//���ŵ�Ԫ
		static	const	int32_t	DecorBoard					= 4;	//װ�ΰ�
		static	const	int32_t	DecorShelf					= 5;	//װ�μ�
		static	const	int32_t	DecorLine					= 6;	//װ����
		static	const	int32_t	InnerComponent				= 7;	//�������
		static	const	int32_t	Fitting						= 8;	//�������
		static	const	int32_t	FittingPackage				= 18;	//���������
		static	const	int32_t	CabFNFHWF					= 17;	//����С��
		static	const	int32_t	HWFitting					= 9;	//������
		static	const	int32_t	FNFitting					= 10;	//�������
		static	const	int32_t	FNFittingPart				= 11;	//����������
		static	const	int32_t	Product						= 12;	//��Ʒ
		static	const	int32_t	Decor						= 13;	//����װ��
		static	const	int32_t	WallDecor					= 14;	//ǽ��װ��
		static	const	int32_t	Table						= 15;	//̨��
		static	const	int32_t	TablePart					= 16;	//�¹ҡ���ˮ
	};

	class	GType
	{
	public:
	};

	class	BoardType
	{
	public:
		static	const	int32_t	Unkown						= 0;
		static	const	int32_t	CabBoard					= 1;
		static	const	int32_t	DoorBoard					= 2;
		static	const	int32_t	DecorBoard					= 3;
		static	const	int32_t	DecorShelf					= 4;
		static	const	int32_t	InnerComponent				= 5;
		static	const	int32_t	Table						= 6;
		static	const	int32_t	TablePart					= 7;
		static	const	int32_t	Other						= 8;
	};

	class	ChargeCatType
	{
	public:
		static	const	int32_t	BookTime					= 12;	//��ʱ���
		static	const	int32_t	BookSquare					= 13;	//������
	};

	class	SupplyType
	{
	public:
		static	const	int32_t	FactoryOnly					= 1;	//������
		static	const	int32_t	ShopOnly					= 2;	//������
		static	const	int32_t	FactoryOrShop				= 3;	//���������
		static	const	int32_t	ShopOrCustomer				= 4;	//���̻�ͻ�(�����������ʾ�����޸Ĺ���״̬)
		static	const	int32_t	CustomerProvide				= 5;	//�û��Թ�
	};
};

#define FIX_VALUE_FACTOR(rValue, eType)		(rValue + CodecProtocol::eType*100000)

class	RValue
{
public:

	static	int32_t FixValueFactor(int32_t rValue, CodecProtocol::EClientType ect)
	{
		return rValue + ect * 100000;
	}

	static	const	int32_t	Login				= 100;
	
	class	Desgin	//������
	{
	public:

		static	const	int32_t	Design				= FIX_VALUE_FACTOR(1000,ECT_DESIGN);	//���
		static	const	int32_t	Examine				= FIX_VALUE_FACTOR(2000,ECT_DESIGN);	//����
		static	const	int32_t	ZBDesign			= FIX_VALUE_FACTOR(1500,ECT_DESIGN);	//���������
		static	const	int32_t	Commit				= FIX_VALUE_FACTOR(3000,ECT_DESIGN);	//�ύ����
	};
	
	class	FactoryExamine	//�������
	{
	public:

		static	const	int32_t	GraphExamine		= FIX_VALUE_FACTOR(1000,ECT_REVIEW);	//ͼ��
		static	const	int32_t	ListExamine			= FIX_VALUE_FACTOR(2000,ECT_REVIEW);	//����
		static	const	int32_t	FinanceExamine		= FIX_VALUE_FACTOR(4000,ECT_REVIEW);	//�������
	};

	class	PrintTemplate	//��ӡģ��
	{
	public:

		static	const	int32_t	Upload				= FIX_VALUE_FACTOR(1000,ECT_PRINT_TEMPLATE);	//�ϴ�
	};

	class	PrintReport	//��ӡ����
	{
	public:

		static	const	int32_t	Design				= FIX_VALUE_FACTOR(1000,ECT_PRINT);				//���
		static	const	int32_t	Download			= FIX_VALUE_FACTOR(2000,ECT_PRINT);				//����
	};
	
	class	FactoryBuildLib	//��������
	{
	public:

		static	const	int32_t	BuildLib			= FIX_VALUE_FACTOR(1000,ECT_FACTORY_BUILD);
	};
	
	static	const	int32_t	ShopDownload			= 100;
	static	const	int32_t	DropOrder				= 100;
};

template<typename T>
static void ToUTF8(T& t)
{
#ifdef USE_SQLSERVER
	t.ToUtf8();
#endif
}

template<typename T>
static void ToASCII(T& t)
{
#ifdef USE_SQLSERVER
	t.ToAscii();
#endif
}

#if defined USE_SQLSERVER
#define ISNULL			"isnull"
#define SET_NOCOUNTON	"set nocount on;"
#elif defined USE_MYSQL
#define ISNULL	"ifnull"
#define SET_NOCOUNTON	"TO DO"
#endif // USE_SQLSERVER

#endif