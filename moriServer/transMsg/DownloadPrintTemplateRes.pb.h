// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DownloadPrintTemplateRes.proto

#ifndef PROTOBUF_DownloadPrintTemplateRes_2eproto__INCLUDED
#define PROTOBUF_DownloadPrintTemplateRes_2eproto__INCLUDED

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
void  protobuf_AddDesc_DownloadPrintTemplateRes_2eproto();
void protobuf_AssignDesc_DownloadPrintTemplateRes_2eproto();
void protobuf_ShutdownFile_DownloadPrintTemplateRes_2eproto();

class QDownloadPrintTemplateRes;
class ADownloadPrintTemplateRes;

// ===================================================================

class QDownloadPrintTemplateRes : public ::google::protobuf::Message {
 public:
  QDownloadPrintTemplateRes();
  virtual ~QDownloadPrintTemplateRes();

  QDownloadPrintTemplateRes(const QDownloadPrintTemplateRes& from);

  inline QDownloadPrintTemplateRes& operator=(const QDownloadPrintTemplateRes& from) {
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
  static const QDownloadPrintTemplateRes& default_instance();

  void Swap(QDownloadPrintTemplateRes* other);

  // implements Message ----------------------------------------------

  QDownloadPrintTemplateRes* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QDownloadPrintTemplateRes& from);
  void MergeFrom(const QDownloadPrintTemplateRes& from);
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

  // repeated bytes HashCodes = 1;
  inline int hashcodes_size() const;
  inline void clear_hashcodes();
  static const int kHashCodesFieldNumber = 1;
  inline const ::std::string& hashcodes(int index) const;
  inline ::std::string* mutable_hashcodes(int index);
  inline void set_hashcodes(int index, const ::std::string& value);
  inline void set_hashcodes(int index, const char* value);
  inline void set_hashcodes(int index, const void* value, size_t size);
  inline ::std::string* add_hashcodes();
  inline void add_hashcodes(const ::std::string& value);
  inline void add_hashcodes(const char* value);
  inline void add_hashcodes(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& hashcodes() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_hashcodes();

  // @@protoc_insertion_point(class_scope:transMsg.QDownloadPrintTemplateRes)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> hashcodes_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_DownloadPrintTemplateRes_2eproto();
  friend void protobuf_AssignDesc_DownloadPrintTemplateRes_2eproto();
  friend void protobuf_ShutdownFile_DownloadPrintTemplateRes_2eproto();

  void InitAsDefaultInstance();
  static QDownloadPrintTemplateRes* default_instance_;
};
// -------------------------------------------------------------------

class ADownloadPrintTemplateRes : public ::google::protobuf::Message {
 public:
  ADownloadPrintTemplateRes();
  virtual ~ADownloadPrintTemplateRes();

  ADownloadPrintTemplateRes(const ADownloadPrintTemplateRes& from);

  inline ADownloadPrintTemplateRes& operator=(const ADownloadPrintTemplateRes& from) {
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
  static const ADownloadPrintTemplateRes& default_instance();

  void Swap(ADownloadPrintTemplateRes* other);

  // implements Message ----------------------------------------------

  ADownloadPrintTemplateRes* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ADownloadPrintTemplateRes& from);
  void MergeFrom(const ADownloadPrintTemplateRes& from);
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

  // repeated bytes PassedHashCodes = 2;
  inline int passedhashcodes_size() const;
  inline void clear_passedhashcodes();
  static const int kPassedHashCodesFieldNumber = 2;
  inline const ::std::string& passedhashcodes(int index) const;
  inline ::std::string* mutable_passedhashcodes(int index);
  inline void set_passedhashcodes(int index, const ::std::string& value);
  inline void set_passedhashcodes(int index, const char* value);
  inline void set_passedhashcodes(int index, const void* value, size_t size);
  inline ::std::string* add_passedhashcodes();
  inline void add_passedhashcodes(const ::std::string& value);
  inline void add_passedhashcodes(const char* value);
  inline void add_passedhashcodes(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& passedhashcodes() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_passedhashcodes();

  // repeated bytes RejectedHashCodes = 3;
  inline int rejectedhashcodes_size() const;
  inline void clear_rejectedhashcodes();
  static const int kRejectedHashCodesFieldNumber = 3;
  inline const ::std::string& rejectedhashcodes(int index) const;
  inline ::std::string* mutable_rejectedhashcodes(int index);
  inline void set_rejectedhashcodes(int index, const ::std::string& value);
  inline void set_rejectedhashcodes(int index, const char* value);
  inline void set_rejectedhashcodes(int index, const void* value, size_t size);
  inline ::std::string* add_rejectedhashcodes();
  inline void add_rejectedhashcodes(const ::std::string& value);
  inline void add_rejectedhashcodes(const char* value);
  inline void add_rejectedhashcodes(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& rejectedhashcodes() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_rejectedhashcodes();

  // @@protoc_insertion_point(class_scope:transMsg.ADownloadPrintTemplateRes)
 private:
  inline void set_has_stats();
  inline void clear_has_stats();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> passedhashcodes_;
  ::google::protobuf::RepeatedPtrField< ::std::string> rejectedhashcodes_;
  int stats_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_DownloadPrintTemplateRes_2eproto();
  friend void protobuf_AssignDesc_DownloadPrintTemplateRes_2eproto();
  friend void protobuf_ShutdownFile_DownloadPrintTemplateRes_2eproto();

  void InitAsDefaultInstance();
  static ADownloadPrintTemplateRes* default_instance_;
};
// ===================================================================


// ===================================================================

// QDownloadPrintTemplateRes

// repeated bytes HashCodes = 1;
inline int QDownloadPrintTemplateRes::hashcodes_size() const {
  return hashcodes_.size();
}
inline void QDownloadPrintTemplateRes::clear_hashcodes() {
  hashcodes_.Clear();
}
inline const ::std::string& QDownloadPrintTemplateRes::hashcodes(int index) const {
  return hashcodes_.Get(index);
}
inline ::std::string* QDownloadPrintTemplateRes::mutable_hashcodes(int index) {
  return hashcodes_.Mutable(index);
}
inline void QDownloadPrintTemplateRes::set_hashcodes(int index, const ::std::string& value) {
  hashcodes_.Mutable(index)->assign(value);
}
inline void QDownloadPrintTemplateRes::set_hashcodes(int index, const char* value) {
  hashcodes_.Mutable(index)->assign(value);
}
inline void QDownloadPrintTemplateRes::set_hashcodes(int index, const void* value, size_t size) {
  hashcodes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* QDownloadPrintTemplateRes::add_hashcodes() {
  return hashcodes_.Add();
}
inline void QDownloadPrintTemplateRes::add_hashcodes(const ::std::string& value) {
  hashcodes_.Add()->assign(value);
}
inline void QDownloadPrintTemplateRes::add_hashcodes(const char* value) {
  hashcodes_.Add()->assign(value);
}
inline void QDownloadPrintTemplateRes::add_hashcodes(const void* value, size_t size) {
  hashcodes_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
QDownloadPrintTemplateRes::hashcodes() const {
  return hashcodes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
QDownloadPrintTemplateRes::mutable_hashcodes() {
  return &hashcodes_;
}

// -------------------------------------------------------------------

// ADownloadPrintTemplateRes

// required .transMsg.EReturnStatus Stats = 1;
inline bool ADownloadPrintTemplateRes::has_stats() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ADownloadPrintTemplateRes::set_has_stats() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ADownloadPrintTemplateRes::clear_has_stats() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ADownloadPrintTemplateRes::clear_stats() {
  stats_ = 0;
  clear_has_stats();
}
inline ::transMsg::EReturnStatus ADownloadPrintTemplateRes::stats() const {
  return static_cast< ::transMsg::EReturnStatus >(stats_);
}
inline void ADownloadPrintTemplateRes::set_stats(::transMsg::EReturnStatus value) {
  assert(::transMsg::EReturnStatus_IsValid(value));
  set_has_stats();
  stats_ = value;
}

// repeated bytes PassedHashCodes = 2;
inline int ADownloadPrintTemplateRes::passedhashcodes_size() const {
  return passedhashcodes_.size();
}
inline void ADownloadPrintTemplateRes::clear_passedhashcodes() {
  passedhashcodes_.Clear();
}
inline const ::std::string& ADownloadPrintTemplateRes::passedhashcodes(int index) const {
  return passedhashcodes_.Get(index);
}
inline ::std::string* ADownloadPrintTemplateRes::mutable_passedhashcodes(int index) {
  return passedhashcodes_.Mutable(index);
}
inline void ADownloadPrintTemplateRes::set_passedhashcodes(int index, const ::std::string& value) {
  passedhashcodes_.Mutable(index)->assign(value);
}
inline void ADownloadPrintTemplateRes::set_passedhashcodes(int index, const char* value) {
  passedhashcodes_.Mutable(index)->assign(value);
}
inline void ADownloadPrintTemplateRes::set_passedhashcodes(int index, const void* value, size_t size) {
  passedhashcodes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ADownloadPrintTemplateRes::add_passedhashcodes() {
  return passedhashcodes_.Add();
}
inline void ADownloadPrintTemplateRes::add_passedhashcodes(const ::std::string& value) {
  passedhashcodes_.Add()->assign(value);
}
inline void ADownloadPrintTemplateRes::add_passedhashcodes(const char* value) {
  passedhashcodes_.Add()->assign(value);
}
inline void ADownloadPrintTemplateRes::add_passedhashcodes(const void* value, size_t size) {
  passedhashcodes_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ADownloadPrintTemplateRes::passedhashcodes() const {
  return passedhashcodes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ADownloadPrintTemplateRes::mutable_passedhashcodes() {
  return &passedhashcodes_;
}

// repeated bytes RejectedHashCodes = 3;
inline int ADownloadPrintTemplateRes::rejectedhashcodes_size() const {
  return rejectedhashcodes_.size();
}
inline void ADownloadPrintTemplateRes::clear_rejectedhashcodes() {
  rejectedhashcodes_.Clear();
}
inline const ::std::string& ADownloadPrintTemplateRes::rejectedhashcodes(int index) const {
  return rejectedhashcodes_.Get(index);
}
inline ::std::string* ADownloadPrintTemplateRes::mutable_rejectedhashcodes(int index) {
  return rejectedhashcodes_.Mutable(index);
}
inline void ADownloadPrintTemplateRes::set_rejectedhashcodes(int index, const ::std::string& value) {
  rejectedhashcodes_.Mutable(index)->assign(value);
}
inline void ADownloadPrintTemplateRes::set_rejectedhashcodes(int index, const char* value) {
  rejectedhashcodes_.Mutable(index)->assign(value);
}
inline void ADownloadPrintTemplateRes::set_rejectedhashcodes(int index, const void* value, size_t size) {
  rejectedhashcodes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ADownloadPrintTemplateRes::add_rejectedhashcodes() {
  return rejectedhashcodes_.Add();
}
inline void ADownloadPrintTemplateRes::add_rejectedhashcodes(const ::std::string& value) {
  rejectedhashcodes_.Add()->assign(value);
}
inline void ADownloadPrintTemplateRes::add_rejectedhashcodes(const char* value) {
  rejectedhashcodes_.Add()->assign(value);
}
inline void ADownloadPrintTemplateRes::add_rejectedhashcodes(const void* value, size_t size) {
  rejectedhashcodes_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ADownloadPrintTemplateRes::rejectedhashcodes() const {
  return rejectedhashcodes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ADownloadPrintTemplateRes::mutable_rejectedhashcodes() {
  return &rejectedhashcodes_;
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

#endif  // PROTOBUF_DownloadPrintTemplateRes_2eproto__INCLUDED