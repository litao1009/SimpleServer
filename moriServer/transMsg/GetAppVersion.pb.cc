// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GetAppVersion.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GetAppVersion.pb.h"

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

const ::google::protobuf::Descriptor* QGetAppVersion_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QGetAppVersion_reflection_ = NULL;
const ::google::protobuf::Descriptor* AGetAppVersion_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AGetAppVersion_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_GetAppVersion_2eproto() {
  protobuf_AddDesc_GetAppVersion_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "GetAppVersion.proto");
  GOOGLE_CHECK(file != NULL);
  QGetAppVersion_descriptor_ = file->message_type(0);
  static const int QGetAppVersion_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetAppVersion, appverid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetAppVersion, isdownload_),
  };
  QGetAppVersion_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QGetAppVersion_descriptor_,
      QGetAppVersion::default_instance_,
      QGetAppVersion_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetAppVersion, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QGetAppVersion, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QGetAppVersion));
  AGetAppVersion_descriptor_ = file->message_type(1);
  static const int AGetAppVersion_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetAppVersion, stats_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetAppVersion, gl_appverinfo_),
  };
  AGetAppVersion_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      AGetAppVersion_descriptor_,
      AGetAppVersion::default_instance_,
      AGetAppVersion_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetAppVersion, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AGetAppVersion, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(AGetAppVersion));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_GetAppVersion_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QGetAppVersion_descriptor_, &QGetAppVersion::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    AGetAppVersion_descriptor_, &AGetAppVersion::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_GetAppVersion_2eproto() {
  delete QGetAppVersion::default_instance_;
  delete QGetAppVersion_reflection_;
  delete AGetAppVersion::default_instance_;
  delete AGetAppVersion_reflection_;
}

void protobuf_AddDesc_GetAppVersion_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::transMsg::protobuf_AddDesc_EReturnStatus_2eproto();
  ::transMsg::protobuf_AddDesc_msg_2dGL_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023GetAppVersion.proto\022\010transMsg\032\023EReturn"
    "Status.proto\032\014msg-GL.proto\"=\n\016QGetAppVer"
    "sion\022\020\n\010AppVerID\030\001 \002(\005\022\031\n\nIsDownload\030\002 \001"
    "(\010:\005false\"h\n\016AGetAppVersion\022&\n\005Stats\030\001 \002"
    "(\0162\027.transMsg.EReturnStatus\022.\n\rGL_AppVer"
    "Info\030e \001(\0132\027.transMsg.GL_AppVerInfo", 235);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GetAppVersion.proto", &protobuf_RegisterTypes);
  QGetAppVersion::default_instance_ = new QGetAppVersion();
  AGetAppVersion::default_instance_ = new AGetAppVersion();
  QGetAppVersion::default_instance_->InitAsDefaultInstance();
  AGetAppVersion::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GetAppVersion_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GetAppVersion_2eproto {
  StaticDescriptorInitializer_GetAppVersion_2eproto() {
    protobuf_AddDesc_GetAppVersion_2eproto();
  }
} static_descriptor_initializer_GetAppVersion_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int QGetAppVersion::kAppVerIDFieldNumber;
const int QGetAppVersion::kIsDownloadFieldNumber;
#endif  // !_MSC_VER

QGetAppVersion::QGetAppVersion()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QGetAppVersion::InitAsDefaultInstance() {
}

QGetAppVersion::QGetAppVersion(const QGetAppVersion& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QGetAppVersion::SharedCtor() {
  _cached_size_ = 0;
  appverid_ = 0;
  isdownload_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QGetAppVersion::~QGetAppVersion() {
  SharedDtor();
}

void QGetAppVersion::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QGetAppVersion::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QGetAppVersion::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QGetAppVersion_descriptor_;
}

const QGetAppVersion& QGetAppVersion::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GetAppVersion_2eproto();
  return *default_instance_;
}

QGetAppVersion* QGetAppVersion::default_instance_ = NULL;

QGetAppVersion* QGetAppVersion::New() const {
  return new QGetAppVersion;
}

void QGetAppVersion::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    appverid_ = 0;
    isdownload_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QGetAppVersion::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 AppVerID = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &appverid_)));
          set_has_appverid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_IsDownload;
        break;
      }

      // optional bool IsDownload = 2 [default = false];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_IsDownload:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isdownload_)));
          set_has_isdownload();
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

void QGetAppVersion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 AppVerID = 1;
  if (has_appverid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->appverid(), output);
  }

  // optional bool IsDownload = 2 [default = false];
  if (has_isdownload()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->isdownload(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QGetAppVersion::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 AppVerID = 1;
  if (has_appverid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->appverid(), target);
  }

  // optional bool IsDownload = 2 [default = false];
  if (has_isdownload()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->isdownload(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QGetAppVersion::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 AppVerID = 1;
    if (has_appverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->appverid());
    }

    // optional bool IsDownload = 2 [default = false];
    if (has_isdownload()) {
      total_size += 1 + 1;
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

void QGetAppVersion::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QGetAppVersion* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QGetAppVersion*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QGetAppVersion::MergeFrom(const QGetAppVersion& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_appverid()) {
      set_appverid(from.appverid());
    }
    if (from.has_isdownload()) {
      set_isdownload(from.isdownload());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QGetAppVersion::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QGetAppVersion::CopyFrom(const QGetAppVersion& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QGetAppVersion::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void QGetAppVersion::Swap(QGetAppVersion* other) {
  if (other != this) {
    std::swap(appverid_, other->appverid_);
    std::swap(isdownload_, other->isdownload_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QGetAppVersion::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QGetAppVersion_descriptor_;
  metadata.reflection = QGetAppVersion_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int AGetAppVersion::kStatsFieldNumber;
const int AGetAppVersion::kGLAppVerInfoFieldNumber;
#endif  // !_MSC_VER

AGetAppVersion::AGetAppVersion()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void AGetAppVersion::InitAsDefaultInstance() {
  gl_appverinfo_ = const_cast< ::transMsg::GL_AppVerInfo*>(&::transMsg::GL_AppVerInfo::default_instance());
}

AGetAppVersion::AGetAppVersion(const AGetAppVersion& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void AGetAppVersion::SharedCtor() {
  _cached_size_ = 0;
  stats_ = 0;
  gl_appverinfo_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

AGetAppVersion::~AGetAppVersion() {
  SharedDtor();
}

void AGetAppVersion::SharedDtor() {
  if (this != default_instance_) {
    delete gl_appverinfo_;
  }
}

void AGetAppVersion::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AGetAppVersion::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AGetAppVersion_descriptor_;
}

const AGetAppVersion& AGetAppVersion::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_GetAppVersion_2eproto();
  return *default_instance_;
}

AGetAppVersion* AGetAppVersion::default_instance_ = NULL;

AGetAppVersion* AGetAppVersion::New() const {
  return new AGetAppVersion;
}

void AGetAppVersion::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    stats_ = 0;
    if (has_gl_appverinfo()) {
      if (gl_appverinfo_ != NULL) gl_appverinfo_->::transMsg::GL_AppVerInfo::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool AGetAppVersion::MergePartialFromCodedStream(
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
        if (input->ExpectTag(810)) goto parse_GL_AppVerInfo;
        break;
      }

      // optional .transMsg.GL_AppVerInfo GL_AppVerInfo = 101;
      case 101: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_GL_AppVerInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gl_appverinfo()));
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

void AGetAppVersion::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .transMsg.EReturnStatus Stats = 1;
  if (has_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->stats(), output);
  }

  // optional .transMsg.GL_AppVerInfo GL_AppVerInfo = 101;
  if (has_gl_appverinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      101, this->gl_appverinfo(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* AGetAppVersion::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .transMsg.EReturnStatus Stats = 1;
  if (has_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->stats(), target);
  }

  // optional .transMsg.GL_AppVerInfo GL_AppVerInfo = 101;
  if (has_gl_appverinfo()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        101, this->gl_appverinfo(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int AGetAppVersion::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .transMsg.EReturnStatus Stats = 1;
    if (has_stats()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->stats());
    }

    // optional .transMsg.GL_AppVerInfo GL_AppVerInfo = 101;
    if (has_gl_appverinfo()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->gl_appverinfo());
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

void AGetAppVersion::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const AGetAppVersion* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const AGetAppVersion*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void AGetAppVersion::MergeFrom(const AGetAppVersion& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stats()) {
      set_stats(from.stats());
    }
    if (from.has_gl_appverinfo()) {
      mutable_gl_appverinfo()->::transMsg::GL_AppVerInfo::MergeFrom(from.gl_appverinfo());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void AGetAppVersion::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AGetAppVersion::CopyFrom(const AGetAppVersion& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AGetAppVersion::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void AGetAppVersion::Swap(AGetAppVersion* other) {
  if (other != this) {
    std::swap(stats_, other->stats_);
    std::swap(gl_appverinfo_, other->gl_appverinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata AGetAppVersion::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AGetAppVersion_descriptor_;
  metadata.reflection = AGetAppVersion_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace transMsg

// @@protoc_insertion_point(global_scope)
