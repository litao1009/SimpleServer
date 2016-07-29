// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EClientType.proto

#ifndef PROTOBUF_EClientType_2eproto__INCLUDED
#define PROTOBUF_EClientType_2eproto__INCLUDED

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

namespace CodecProtocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_EClientType_2eproto();
void protobuf_AssignDesc_EClientType_2eproto();
void protobuf_ShutdownFile_EClientType_2eproto();


enum EClientType {
  ECT_FACTORY_BUILD = 2,
  ECT_DESIGN = 3,
  ECT_DESIGN_BUILD = 4,
  ECT_PRINT_TEMPLATE = 5,
  ECT_REVIEW = 6,
  ECT_PRINT = 7,
  ECT_CRAFT_BUILD = 8,
  ECT_SERVER = 9
};
bool EClientType_IsValid(int value);
const EClientType EClientType_MIN = ECT_FACTORY_BUILD;
const EClientType EClientType_MAX = ECT_SERVER;
const int EClientType_ARRAYSIZE = EClientType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EClientType_descriptor();
inline const ::std::string& EClientType_Name(EClientType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EClientType_descriptor(), value);
}
inline bool EClientType_Parse(
    const ::std::string& name, EClientType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EClientType>(
    EClientType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace CodecProtocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::CodecProtocol::EClientType>() {
  return ::CodecProtocol::EClientType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EClientType_2eproto__INCLUDED