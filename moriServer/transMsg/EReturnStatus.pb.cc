// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EReturnStatus.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "EReturnStatus.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace transMsg {

namespace {

const ::google::protobuf::EnumDescriptor* EReturnStatus_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_EReturnStatus_2eproto() {
  protobuf_AddDesc_EReturnStatus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "EReturnStatus.proto");
  GOOGLE_CHECK(file != NULL);
  EReturnStatus_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_EReturnStatus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_EReturnStatus_2eproto() {
}

void protobuf_AddDesc_EReturnStatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023EReturnStatus.proto\022\010transMsg*\317\003\n\rERet"
    "urnStatus\022\017\n\013ERS_SUCCESS\020\000\022\024\n\020ERS_SERVER"
    "_ERROR\020\001\022\026\n\022ERS_LIB_ALREADDONE\020\002\022\024\n\020ERS_"
    "ALREAD_LOGIN\020\003\022\022\n\016ERS_ORDER_DENY\020\004\022\032\n\026ER"
    "S_ORDER_OPERATE_FAIL\020\005\022\027\n\023ERS_ORDER_NONA"
    "CTIVE\020\006\022\026\n\022ERS_USER_NONACTIVE\020\n\022\022\n\016ERS_E"
    "MPTY_FILE\020d\022\024\n\020ERS_EMPTY_RECORD\020e\022\026\n\022ERS"
    "_EMPTY_USERINFO\020f\022\023\n\017ERS_EMPTY_STATE\020g\022\026"
    "\n\021ERS_WRONG_MESSAGE\020\310\001\022\025\n\020ERS_WRONG_ACCE"
    "SS\020\311\001\022\022\n\rERS_WRONG_PWD\020\312\001\022\025\n\020ERS_WRONG_R"
    "ECORD\020\313\001\022\026\n\021ERS_WRONG_VERCODE\020\314\001\022\023\n\016ERS_"
    "WRONG_FILE\020\315\001\022\025\n\020ERS_WRONG_STATUS\020\316\001\022\023\n\016"
    "ERS_CHARG_DENY\020\365\003", 497);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "EReturnStatus.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_EReturnStatus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_EReturnStatus_2eproto {
  StaticDescriptorInitializer_EReturnStatus_2eproto() {
    protobuf_AddDesc_EReturnStatus_2eproto();
  }
} static_descriptor_initializer_EReturnStatus_2eproto_;
const ::google::protobuf::EnumDescriptor* EReturnStatus_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EReturnStatus_descriptor_;
}
bool EReturnStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 10:
    case 100:
    case 101:
    case 102:
    case 103:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 501:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace transMsg

// @@protoc_insertion_point(global_scope)