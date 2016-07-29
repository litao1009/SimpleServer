 #ifndef ConditionImp_h__
 #define ConditionImp_h__
 
 #pragma once
 
 #include "AutoDB/Condition.h"
 #include "ValueWrap.h"
 
 #include <vector>
 
 namespace autoDB
 {
 
 class	Condition::Imp
 {
 public:
 
 	StringType				Str_;
 	std::vector<ValueWrap>	UseValues_;
 };
 
 }
 
 #endif // ConditionImp_h__
