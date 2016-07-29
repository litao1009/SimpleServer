 #ifndef DecomposeMgr_h__
 #define DecomposeMgr_h__
 
 #pragma once
 
 #include "Utils/intDef.h"
 #include "Utils/Pimp.h"
 
 
 class	DecomposeMgr
 {
 	DEFINE_PIMP
 
 	DecomposeMgr();
 
 public:
 
 	~DecomposeMgr();
 
 	static	DecomposeMgr&	GetInstance();
 
 			void	Push(int64_t orderID);
 
 			void	Start();
 
 			void	Stop();
 };
 #endif // DecomposeMgr_h__