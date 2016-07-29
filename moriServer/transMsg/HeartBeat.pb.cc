// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HeartBeat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HeartBeat.pb.h"

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

const ::google::protobuf::Descriptor* QHeartBeat_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QHeartBeat_reflection_ = NULL;
const ::google::protobuf::Descriptor* AHeartBeat_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AHeartBeat_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_HeartBeat_2eproto() {
  protobuf_AddDesc_HeartBeat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "HeartBeat.proto");
  GOOGLE_CHECK(file != NULL);
  QHeartBeat_descriptor_ = file->message_type(0);
  static const int QHeartBeat_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QHeartBeat, curtime_),
  };
  QHeartBeat_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QHeartBeat_descriptor_,
      QHeartBeat::default_instance_,
      QHeartBeat_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QHeartBeat, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QHeartBeat, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QHeartBeat));
  AHeartBeat_descriptor_ = file->message_type(1);
  static const int AHeartBeat_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AHeartBeat, stats_),
  };
  AHeartBeat_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AHeartBeat_descriptor_,
      AHeartBeat::default_instance_,
      AHeartBeat_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AHeartBeat, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AHeartBeat, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AHeartBeat));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_HeartBeat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QHeartBeat_descriptor_, &QHeartBeat::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AHeartBeat_descriptor_, &AHeartBeat::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_HeartBeat_2eproto() {
  delete QHeartBeat::default_instance_;
  delete QHeartBeat_reflection_;
  delete AHeartBeat::default_instance_;
  delete AHeartBeat_reflection_;
}

void protobuf_AddDesc_HeartBeat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::transMsg::protobuf_AddDesc_EReturnStatus_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017HeartBeat.proto\022\010transMsg\032\023EReturnStat"
    "us.proto\"\035\n\nQHeartBeat\022\017\n\007CurTime\030\001 \001(\005\""
    "4\n\nAHeartBeat\022&\n\005Stats\030\001 \002(\0162\027.transMsg."
    "EReturnStatus", 133);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "HeartBeat.proto", &protobuf_RegisterTypes);
  QHeartBeat::default_instance_ = new QHeartBeat();
  AHeartBeat::default_instance_ = new AHeartBeat();
  QHeartBeat::default_instance_->InitAsDefaultInstance();
  AHeartBeat::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_HeartBeat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_HeartBeat_2eproto {
  StaticDescriptorInitializer_HeartBeat_2eproto() {
    protobuf_AddDesc_HeartBeat_2eproto();
  }
} static_descriptor_initializer_HeartBeat_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int QHeartBeat::kCurTimeFieldNumber;
#endif  // !_MSC_VER

QHeartBeat::QHeartBeat()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QHeartBeat::InitAsDefaultInstance() {
}

QHeartBeat::QHeartBeat(const QHeartBeat& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QHeartBeat::SharedCtor() {
  _cached_size_ = 0;
  curtime_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QHeartBeat::~QHeartBeat() {
  SharedDtor();
}

void QHeartBeat::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QHeartBeat::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QHeartBeat::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QHeartBeat_descriptor_;
}

const QHeartBeat& QHeartBeat::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_HeartBeat_2eproto();
  return *default_instance_;
}

QHeartBeat* QHeartBeat::default_instance_ = NULL;

QHeartBeat* QHeartBeat::New() const {
  return new QHeartBeat;
}

void QHeartBeat::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    curtime_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QHeartBeat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 CurTime = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &curtime_)));
          set_has_curtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void QHeartBeat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 CurTime = 1;
  if (has_curtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->curtime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QHeartBeat::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 CurTime = 1;
  if (has_curtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->curtime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QHeartBeat::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 CurTime = 1;
    if (has_curtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->curtime());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QHeartBeat::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QHeartBeat* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QHeartBeat*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QHeartBeat::MergeFrom(const QHeartBeat& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_curtime()) {
      set_curtime(from.curtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QHeartBeat::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QHeartBeat::CopyFrom(const QHeartBeat& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QHeartBeat::IsInitialized() const {

  return true;
}

void QHeartBeat::Swap(QHeartBeat* other) {
  if (other != this) {
    std::swap(curtime_, other->curtime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QHeartBeat::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QHeartBeat_descriptor_;
  metadata.reflection = QHeartBeat_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AHeartBeat::kStatsFieldNumber;
#endif  // !_MSC_VER

AHeartBeat::AHeartBeat()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AHeartBeat::InitAsDefaultInstance() {
}

AHeartBeat::AHeartBeat(const AHeartBeat& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AHeartBeat::SharedCtor() {
  _cached_size_ = 0;
  stats_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AHeartBeat::~AHeartBeat() {
  SharedDtor();
}

void AHeartBeat::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AHeartBeat::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AHeartBeat::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AHeartBeat_descriptor_;
}

const AHeartBeat& AHeartBeat::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_HeartBeat_2eproto();
  return *default_instance_;
}

AHeartBeat* AHeartBeat::default_instance_ = NULL;

AHeartBeat* AHeartBeat::New() const {
  return new AHeartBeat;
}

void AHeartBeat::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    stats_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AHeartBeat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .transMsg.EReturnStatus Stats = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::transMsg::EReturnStatus_IsValid(value)) {
            set_stats(static_cast< ::transMsg::EReturnStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void AHeartBeat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .transMsg.EReturnStatus Stats = 1;
  if (has_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->stats(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AHeartBeat::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .transMsg.EReturnStatus Stats = 1;
  if (has_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->stats(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AHeartBeat::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .transMsg.EReturnStatus Stats = 1;
    if (has_stats()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->stats());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AHeartBeat::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AHeartBeat* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AHeartBeat*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AHeartBeat::MergeFrom(const AHeartBeat& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stats()) {
      set_stats(from.stats());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AHeartBeat::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AHeartBeat::CopyFrom(const AHeartBeat& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AHeartBeat::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void AHeartBeat::Swap(AHeartBeat* other) {
  if (other != this) {
    std::swap(stats_, other->stats_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AHeartBeat::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AHeartBeat_descriptor_;
  metadata.reflection = AHeartBeat_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace transMsg

// @@protoc_insertion_point(global_scope)
