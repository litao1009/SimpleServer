// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UploadPrintTemplate.proto

#ifndef PROTOBUF_UploadPrintTemplate_2eproto__INCLUDED
#define PROTOBUF_UploadPrintTemplate_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "EReturnStatus.pb.h"
#include "msg-GL.pb.h"
// @@protoc_insertion_point(includes)

namespace transMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UploadPrintTemplate_2eproto();
void protobuf_AssignDesc_UploadPrintTemplate_2eproto();
void protobuf_ShutdownFile_UploadPrintTemplate_2eproto();

class QUploadPrintTemplate;
class AUploadPrintTemplate;

// ===================================================================

class QUploadPrintTemplate : public ::google::protobuf::Message {
 public:
  QUploadPrintTemplate();
  virtual ~QUploadPrintTemplate();

  QUploadPrintTemplate(const QUploadPrintTemplate& from);

  inline QUploadPrintTemplate& operator=(const QUploadPrintTemplate& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const QUploadPrintTemplate& default_instance();

  void Swap(QUploadPrintTemplate* other);

  // implements Message ----------------------------------------------

  QUploadPrintTemplate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QUploadPrintTemplate& from);
  void MergeFrom(const QUploadPrintTemplate& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .transMsg.GL_PrintTemplateInfo GL_PrintTemplateInfo = 1;
  inline int gl_printtemplateinfo_size() const;
  inline void clear_gl_printtemplateinfo();
  static const int kGLPrintTemplateInfoFieldNumber = 1;
  inline const ::transMsg::GL_PrintTemplateInfo& gl_printtemplateinfo(int index) const;
  inline ::transMsg::GL_PrintTemplateInfo* mutable_gl_printtemplateinfo(int index);
  inline ::transMsg::GL_PrintTemplateInfo* add_gl_printtemplateinfo();
  inline const ::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo >&
      gl_printtemplateinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo >*
      mutable_gl_printtemplateinfo();

  // @@protoc_insertion_point(class_scope:transMsg.QUploadPrintTemplate)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo > gl_printtemplateinfo_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_UploadPrintTemplate_2eproto();
  friend void protobuf_AssignDesc_UploadPrintTemplate_2eproto();
  friend void protobuf_ShutdownFile_UploadPrintTemplate_2eproto();

  void InitAsDefaultInstance();
  static QUploadPrintTemplate* default_instance_;
};
// -------------------------------------------------------------------

class AUploadPrintTemplate : public ::google::protobuf::Message {
 public:
  AUploadPrintTemplate();
  virtual ~AUploadPrintTemplate();

  AUploadPrintTemplate(const AUploadPrintTemplate& from);

  inline AUploadPrintTemplate& operator=(const AUploadPrintTemplate& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AUploadPrintTemplate& default_instance();

  void Swap(AUploadPrintTemplate* other);

  // implements Message ----------------------------------------------

  AUploadPrintTemplate* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AUploadPrintTemplate& from);
  void MergeFrom(const AUploadPrintTemplate& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .transMsg.EReturnStatus Stats = 1;
  inline bool has_stats() const;
  inline void clear_stats();
  static const int kStatsFieldNumber = 1;
  inline ::transMsg::EReturnStatus stats() const;
  inline void set_stats(::transMsg::EReturnStatus value);

  // @@protoc_insertion_point(class_scope:transMsg.AUploadPrintTemplate)
 private:
  inline void set_has_stats();
  inline void clear_has_stats();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int stats_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_UploadPrintTemplate_2eproto();
  friend void protobuf_AssignDesc_UploadPrintTemplate_2eproto();
  friend void protobuf_ShutdownFile_UploadPrintTemplate_2eproto();

  void InitAsDefaultInstance();
  static AUploadPrintTemplate* default_instance_;
};
// ===================================================================


// ===================================================================

// QUploadPrintTemplate

// repeated .transMsg.GL_PrintTemplateInfo GL_PrintTemplateInfo = 1;
inline int QUploadPrintTemplate::gl_printtemplateinfo_size() const {
  return gl_printtemplateinfo_.size();
}
inline void QUploadPrintTemplate::clear_gl_printtemplateinfo() {
  gl_printtemplateinfo_.Clear();
}
inline const ::transMsg::GL_PrintTemplateInfo& QUploadPrintTemplate::gl_printtemplateinfo(int index) const {
  return gl_printtemplateinfo_.Get(index);
}
inline ::transMsg::GL_PrintTemplateInfo* QUploadPrintTemplate::mutable_gl_printtemplateinfo(int index) {
  return gl_printtemplateinfo_.Mutable(index);
}
inline ::transMsg::GL_PrintTemplateInfo* QUploadPrintTemplate::add_gl_printtemplateinfo() {
  return gl_printtemplateinfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo >&
QUploadPrintTemplate::gl_printtemplateinfo() const {
  return gl_printtemplateinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::transMsg::GL_PrintTemplateInfo >*
QUploadPrintTemplate::mutable_gl_printtemplateinfo() {
  return &gl_printtemplateinfo_;
}

// -------------------------------------------------------------------

// AUploadPrintTemplate

// required .transMsg.EReturnStatus Stats = 1;
inline bool AUploadPrintTemplate::has_stats() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AUploadPrintTemplate::set_has_stats() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AUploadPrintTemplate::clear_has_stats() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AUploadPrintTemplate::clear_stats() {
  stats_ = 0;
  clear_has_stats();
}
inline ::transMsg::EReturnStatus AUploadPrintTemplate::stats() const {
  return static_cast< ::transMsg::EReturnStatus >(stats_);
}
inline void AUploadPrintTemplate::set_stats(::transMsg::EReturnStatus value) {
  assert(::transMsg::EReturnStatus_IsValid(value));
  set_has_stats();
  stats_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace transMsg

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UploadPrintTemplate_2eproto__INCLUDED
