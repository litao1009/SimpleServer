// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EReturnStatus.proto

#ifndef PROTOBUF_EReturnStatus_2eproto__INCLUDED
#define PROTOBUF_EReturnStatus_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace transMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_EReturnStatus_2eproto();
void protobuf_AssignDesc_EReturnStatus_2eproto();
void protobuf_ShutdownFile_EReturnStatus_2eproto();


enum EReturnStatus {
  ERS_SUCCESS = 0,
  ERS_SERVER_ERROR = 1,
  ERS_LIB_ALREADDONE = 2,
  ERS_ALREAD_LOGIN = 3,
  ERS_ORDER_DENY = 4,
  ERS_ORDER_OPERATE_FAIL = 5,
  ERS_ORDER_NONACTIVE = 6,
  ERS_USER_NONACTIVE = 10,
  ERS_EMPTY_FILE = 100,
  ERS_EMPTY_RECORD = 101,
  ERS_EMPTY_USERINFO = 102,
  ERS_EMPTY_STATE = 103,
  ERS_WRONG_MESSAGE = 200,
  ERS_WRONG_ACCESS = 201,
  ERS_WRONG_PWD = 202,
  ERS_WRONG_RECORD = 203,
  ERS_WRONG_VERCODE = 204,
  ERS_WRONG_FILE = 205,
  ERS_WRONG_STATUS = 206,
  ERS_CHARG_DENY = 501
};
bool EReturnStatus_IsValid(int value);
const EReturnStatus EReturnStatus_MIN = ERS_SUCCESS;
const EReturnStatus EReturnStatus_MAX = ERS_CHARG_DENY;
const int EReturnStatus_ARRAYSIZE = EReturnStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* EReturnStatus_descriptor();
inline const ::std::string& EReturnStatus_Name(EReturnStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    EReturnStatus_descriptor(), value);
}
inline bool EReturnStatus_Parse(
    const ::std::string& name, EReturnStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EReturnStatus>(
    EReturnStatus_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace transMsg

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::transMsg::EReturnStatus>() {
  return ::transMsg::EReturnStatus_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EReturnStatus_2eproto__INCLUDED