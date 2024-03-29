// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GetLibStatus.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GetLibStatus.pb.h"

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

const ::google::protobuf::Descriptor* QGetLibStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QGetLibStatus_reflection_ = NULL;
const ::google::protobuf::Descriptor* AGetLibStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AGetLibStatus_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_GetLibStatus_2eproto() {
  protobuf_AddDesc_GetLibStatus_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "GetLibStatus.proto");
  GOOGLE_CHECK(file != NULL);
  QGetLibStatus_descriptor_ = file->message_type(0);
  static const int QGetLibStatus_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetLibStatus, begintime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetLibStatus, endtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetLibStatus, vercodes_),
  };
  QGetLibStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QGetLibStatus_descriptor_,
      QGetLibStatus::default_instance_,
      QGetLibStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetLibStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetLibStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QGetLibStatus));
  AGetLibStatus_descriptor_ = file->message_type(1);
  static const int AGetLibStatus_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetLibStatus, stats_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetLibStatus, gl_sugarverinfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetLibStatus, hashcodes_),
  };
  AGetLibStatus_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AGetLibStatus_descriptor_,
      AGetLibStatus::default_instance_,
      AGetLibStatus_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetLibStatus, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetLibStatus, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AGetLibStatus));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_GetLibStatus_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QGetLibStatus_descriptor_, &QGetLibStatus::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AGetLibStatus_descriptor_, &AGetLibStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_GetLibStatus_2eproto() {
  delete QGetLibStatus::default_instance_;
  delete QGetLibStatus_reflection_;
  delete AGetLibStatus::default_instance_;
  delete AGetLibStatus_reflection_;
}

void protobuf_AddDesc_GetLibStatus_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::transMsg::protobuf_AddDesc_EReturnStatus_2eproto();
  ::transMsg::protobuf_AddDesc_msg_2dGL_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022GetLibStatus.proto\022\010transMsg\032\023EReturnS"
    "tatus.proto\032\014msg-GL.proto\"I\n\rQGetLibStat"
    "us\022\021\n\tBeginTime\030\013 \001(\003\022\017\n\007EndTime\030\014 \001(\003\022\024"
    "\n\010VerCodes\030\r \003(\003B\002\020\001\"~\n\rAGetLibStatus\022&\n"
    "\005Stats\030\001 \002(\0162\027.transMsg.EReturnStatus\0222\n"
    "\017GL_SugarVerInfo\030e \003(\0132\031.transMsg.GL_Sug"
    "arVerInfo\022\021\n\tHashCodes\030f \003(\t", 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GetLibStatus.proto", &protobuf_RegisterTypes);
  QGetLibStatus::default_instance_ = new QGetLibStatus();
  AGetLibStatus::default_instance_ = new AGetLibStatus();
  QGetLibStatus::default_instance_->InitAsDefaultInstance();
  AGetLibStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GetLibStatus_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GetLibStatus_2eproto {
  StaticDescriptorInitializer_GetLibStatus_2eproto() {
    protobuf_AddDesc_GetLibStatus_2eproto();
  }
} static_descriptor_initializer_GetLibStatus_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int QGetLibStatus::kBeginTimeFieldNumber;
const int QGetLibStatus::kEndTimeFieldNumber;
const int QGetLibStatus::kVerCodesFieldNumber;
#endif  // !_MSC_VER

QGetLibStatus::QGetLibStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QGetLibStatus::InitAsDefaultInstance() {
}

QGetLibStatus::QGetLibStatus(const QGetLibStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QGetLibStatus::SharedCtor() {
  _cached_size_ = 0;
  begintime_ = GOOGLE_LONGLONG(0);
  endtime_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QGetLibStatus::~QGetLibStatus() {
  SharedDtor();
}

void QGetLibStatus::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QGetLibStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QGetLibStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QGetLibStatus_descriptor_;
}

const QGetLibStatus& QGetLibStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GetLibStatus_2eproto();
  return *default_instance_;
}

QGetLibStatus* QGetLibStatus::default_instance_ = NULL;

QGetLibStatus* QGetLibStatus::New() const {
  return new QGetLibStatus;
}

void QGetLibStatus::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    begintime_ = GOOGLE_LONGLONG(0);
    endtime_ = GOOGLE_LONGLONG(0);
  }
  vercodes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QGetLibStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 BeginTime = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &begintime_)));
          set_has_begintime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_EndTime;
        break;
      }

      // optional int64 EndTime = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_EndTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &endtime_)));
          set_has_endtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(106)) goto parse_VerCodes;
        break;
      }

      // repeated int64 VerCodes = 13 [packed = true];
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_VerCodes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_vercodes())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 106, input, this->mutable_vercodes())));
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

void QGetLibStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 BeginTime = 11;
  if (has_begintime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(11, this->begintime(), output);
  }

  // optional int64 EndTime = 12;
  if (has_endtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(12, this->endtime(), output);
  }

  // repeated int64 VerCodes = 13 [packed = true];
  if (this->vercodes_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(13, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_vercodes_cached_byte_size_);
  }
  for (int i = 0; i < this->vercodes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64NoTag(
      this->vercodes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QGetLibStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 BeginTime = 11;
  if (has_begintime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(11, this->begintime(), target);
  }

  // optional int64 EndTime = 12;
  if (has_endtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(12, this->endtime(), target);
  }

  // repeated int64 VerCodes = 13 [packed = true];
  if (this->vercodes_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      13,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _vercodes_cached_byte_size_, target);
  }
  for (int i = 0; i < this->vercodes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64NoTagToArray(this->vercodes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QGetLibStatus::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 BeginTime = 11;
    if (has_begintime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->begintime());
    }

    // optional int64 EndTime = 12;
    if (has_endtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->endtime());
    }

  }
  // repeated int64 VerCodes = 13 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->vercodes_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->vercodes(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _vercodes_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
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

void QGetLibStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QGetLibStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QGetLibStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QGetLibStatus::MergeFrom(const QGetLibStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  vercodes_.MergeFrom(from.vercodes_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_begintime()) {
      set_begintime(from.begintime());
    }
    if (from.has_endtime()) {
      set_endtime(from.endtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QGetLibStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QGetLibStatus::CopyFrom(const QGetLibStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QGetLibStatus::IsInitialized() const {

  return true;
}

void QGetLibStatus::Swap(QGetLibStatus* other) {
  if (other != this) {
    std::swap(begintime_, other->begintime_);
    std::swap(endtime_, other->endtime_);
    vercodes_.Swap(&other->vercodes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QGetLibStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QGetLibStatus_descriptor_;
  metadata.reflection = QGetLibStatus_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AGetLibStatus::kStatsFieldNumber;
const int AGetLibStatus::kGLSugarVerInfoFieldNumber;
const int AGetLibStatus::kHashCodesFieldNumber;
#endif  // !_MSC_VER

AGetLibStatus::AGetLibStatus()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AGetLibStatus::InitAsDefaultInstance() {
}

AGetLibStatus::AGetLibStatus(const AGetLibStatus& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AGetLibStatus::SharedCtor() {
  _cached_size_ = 0;
  stats_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AGetLibStatus::~AGetLibStatus() {
  SharedDtor();
}

void AGetLibStatus::SharedDtor() {
  if (this != default_instance_) {
  }
}

void AGetLibStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AGetLibStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AGetLibStatus_descriptor_;
}

const AGetLibStatus& AGetLibStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GetLibStatus_2eproto();
  return *default_instance_;
}

AGetLibStatus* AGetLibStatus::default_instance_ = NULL;

AGetLibStatus* AGetLibStatus::New() const {
  return new AGetLibStatus;
}

void AGetLibStatus::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    stats_ = 0;
  }
  gl_sugarverinfo_.Clear();
  hashcodes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AGetLibStatus::MergePartialFromCodedStream(
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
        if (input->ExpectTag(810)) goto parse_GL_SugarVerInfo;
        break;
      }

      // repeated .transMsg.GL_SugarVerInfo GL_SugarVerInfo = 101;
      case 101: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_GL_SugarVerInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_gl_sugarverinfo()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(810)) goto parse_GL_SugarVerInfo;
        if (input->ExpectTag(818)) goto parse_HashCodes;
        break;
      }

      // repeated string HashCodes = 102;
      case 102: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_HashCodes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_hashcodes()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->hashcodes(this->hashcodes_size() - 1).data(),
            this->hashcodes(this->hashcodes_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(818)) goto parse_HashCodes;
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

void AGetLibStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .transMsg.EReturnStatus Stats = 1;
  if (has_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->stats(), output);
  }

  // repeated .transMsg.GL_SugarVerInfo GL_SugarVerInfo = 101;
  for (int i = 0; i < this->gl_sugarverinfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      101, this->gl_sugarverinfo(i), output);
  }

  // repeated string HashCodes = 102;
  for (int i = 0; i < this->hashcodes_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->hashcodes(i).data(), this->hashcodes(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      102, this->hashcodes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AGetLibStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .transMsg.EReturnStatus Stats = 1;
  if (has_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->stats(), target);
  }

  // repeated .transMsg.GL_SugarVerInfo GL_SugarVerInfo = 101;
  for (int i = 0; i < this->gl_sugarverinfo_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        101, this->gl_sugarverinfo(i), target);
  }

  // repeated string HashCodes = 102;
  for (int i = 0; i < this->hashcodes_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->hashcodes(i).data(), this->hashcodes(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(102, this->hashcodes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AGetLibStatus::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .transMsg.EReturnStatus Stats = 1;
    if (has_stats()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->stats());
    }

  }
  // repeated .transMsg.GL_SugarVerInfo GL_SugarVerInfo = 101;
  total_size += 2 * this->gl_sugarverinfo_size();
  for (int i = 0; i < this->gl_sugarverinfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->gl_sugarverinfo(i));
  }

  // repeated string HashCodes = 102;
  total_size += 2 * this->hashcodes_size();
  for (int i = 0; i < this->hashcodes_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->hashcodes(i));
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

void AGetLibStatus::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AGetLibStatus* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AGetLibStatus*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AGetLibStatus::MergeFrom(const AGetLibStatus& from) {
  GOOGLE_CHECK_NE(&from, this);
  gl_sugarverinfo_.MergeFrom(from.gl_sugarverinfo_);
  hashcodes_.MergeFrom(from.hashcodes_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stats()) {
      set_stats(from.stats());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AGetLibStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AGetLibStatus::CopyFrom(const AGetLibStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AGetLibStatus::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void AGetLibStatus::Swap(AGetLibStatus* other) {
  if (other != this) {
    std::swap(stats_, other->stats_);
    gl_sugarverinfo_.Swap(&other->gl_sugarverinfo_);
    hashcodes_.Swap(&other->hashcodes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AGetLibStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AGetLibStatus_descriptor_;
  metadata.reflection = AGetLibStatus_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace transMsg

// @@protoc_insertion_point(global_scope)
