// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DownloadOrder.proto

#ifndef PROTOBUF_DownloadOrder_2eproto__INCLUDED
#define PROTOBUF_DownloadOrder_2eproto__INCLUDED

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
#include "ETableType.pb.h"
#include "msg-GL.pb.h"
// @@protoc_insertion_point(includes)

namespace transMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DownloadOrder_2eproto();
void protobuf_AssignDesc_DownloadOrder_2eproto();
void protobuf_ShutdownFile_DownloadOrder_2eproto();

class SDownloadOrder;
class QDownloadOrder;
class ADownloadOrder;

// ===================================================================

class SDownloadOrder : public ::google::protobuf::Message {
 public:
  SDownloadOrder();
  virtual ~SDownloadOrder();

  SDownloadOrder(const SDownloadOrder& from);

  inline SDownloadOrder& operator=(const SDownloadOrder& from) {
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
  static const SDownloadOrder& default_instance();

  void Swap(SDownloadOrder* other);

  // implements Message ----------------------------------------------

  SDownloadOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SDownloadOrder& from);
  void MergeFrom(const SDownloadOrder& from);
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

  // required .transMsg.ETableType TableType = 1;
  inline bool has_tabletype() const;
  inline void clear_tabletype();
  static const int kTableTypeFieldNumber = 1;
  inline ::transMsg::ETableType tabletype() const;
  inline void set_tabletype(::transMsg::ETableType value);

  // required bytes OrderTable = 101;
  inline bool has_ordertable() const;
  inline void clear_ordertable();
  static const int kOrderTableFieldNumber = 101;
  inline const ::std::string& ordertable() const;
  inline void set_ordertable(const ::std::string& value);
  inline void set_ordertable(const char* value);
  inline void set_ordertable(const void* value, size_t size);
  inline ::std::string* mutable_ordertable();
  inline ::std::string* release_ordertable();
  inline void set_allocated_ordertable(::std::string* ordertable);

  // required .transMsg.GL_OrderInfo GL_OrderInfo = 102;
  inline bool has_gl_orderinfo() const;
  inline void clear_gl_orderinfo();
  static const int kGLOrderInfoFieldNumber = 102;
  inline const ::transMsg::GL_OrderInfo& gl_orderinfo() const;
  inline ::transMsg::GL_OrderInfo* mutable_gl_orderinfo();
  inline ::transMsg::GL_OrderInfo* release_gl_orderinfo();
  inline void set_allocated_gl_orderinfo(::transMsg::GL_OrderInfo* gl_orderinfo);

  // @@protoc_insertion_point(class_scope:transMsg.SDownloadOrder)
 private:
  inline void set_has_tabletype();
  inline void clear_has_tabletype();
  inline void set_has_ordertable();
  inline void clear_has_ordertable();
  inline void set_has_gl_orderinfo();
  inline void clear_has_gl_orderinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* ordertable_;
  ::transMsg::GL_OrderInfo* gl_orderinfo_;
  int tabletype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_DownloadOrder_2eproto();
  friend void protobuf_AssignDesc_DownloadOrder_2eproto();
  friend void protobuf_ShutdownFile_DownloadOrder_2eproto();

  void InitAsDefaultInstance();
  static SDownloadOrder* default_instance_;
};
// -------------------------------------------------------------------

class QDownloadOrder : public ::google::protobuf::Message {
 public:
  QDownloadOrder();
  virtual ~QDownloadOrder();

  QDownloadOrder(const QDownloadOrder& from);

  inline QDownloadOrder& operator=(const QDownloadOrder& from) {
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
  static const QDownloadOrder& default_instance();

  void Swap(QDownloadOrder* other);

  // implements Message ----------------------------------------------

  QDownloadOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QDownloadOrder& from);
  void MergeFrom(const QDownloadOrder& from);
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

  // required .transMsg.ETableType TableType = 1;
  inline bool has_tabletype() const;
  inline void clear_tabletype();
  static const int kTableTypeFieldNumber = 1;
  inline ::transMsg::ETableType tabletype() const;
  inline void set_tabletype(::transMsg::ETableType value);

  // required int64 OrderID = 2;
  inline bool has_orderid() const;
  inline void clear_orderid();
  static const int kOrderIDFieldNumber = 2;
  inline ::google::protobuf::int64 orderid() const;
  inline void set_orderid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:transMsg.QDownloadOrder)
 private:
  inline void set_has_tabletype();
  inline void clear_has_tabletype();
  inline void set_has_orderid();
  inline void clear_has_orderid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 orderid_;
  int tabletype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_DownloadOrder_2eproto();
  friend void protobuf_AssignDesc_DownloadOrder_2eproto();
  friend void protobuf_ShutdownFile_DownloadOrder_2eproto();

  void InitAsDefaultInstance();
  static QDownloadOrder* default_instance_;
};
// -------------------------------------------------------------------

class ADownloadOrder : public ::google::protobuf::Message {
 public:
  ADownloadOrder();
  virtual ~ADownloadOrder();

  ADownloadOrder(const ADownloadOrder& from);

  inline ADownloadOrder& operator=(const ADownloadOrder& from) {
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
  static const ADownloadOrder& default_instance();

  void Swap(ADownloadOrder* other);

  // implements Message ----------------------------------------------

  ADownloadOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ADownloadOrder& from);
  void MergeFrom(const ADownloadOrder& from);
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

  // optional .transMsg.SDownloadOrder DownloadOrder = 101;
  inline bool has_downloadorder() const;
  inline void clear_downloadorder();
  static const int kDownloadOrderFieldNumber = 101;
  inline const ::transMsg::SDownloadOrder& downloadorder() const;
  inline ::transMsg::SDownloadOrder* mutable_downloadorder();
  inline ::transMsg::SDownloadOrder* release_downloadorder();
  inline void set_allocated_downloadorder(::transMsg::SDownloadOrder* downloadorder);

  // @@protoc_insertion_point(class_scope:transMsg.ADownloadOrder)
 private:
  inline void set_has_stats();
  inline void clear_has_stats();
  inline void set_has_downloadorder();
  inline void clear_has_downloadorder();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::transMsg::SDownloadOrder* downloadorder_;
  int stats_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_DownloadOrder_2eproto();
  friend void protobuf_AssignDesc_DownloadOrder_2eproto();
  friend void protobuf_ShutdownFile_DownloadOrder_2eproto();

  void InitAsDefaultInstance();
  static ADownloadOrder* default_instance_;
};
// ===================================================================


// ===================================================================

// SDownloadOrder

// required .transMsg.ETableType TableType = 1;
inline bool SDownloadOrder::has_tabletype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SDownloadOrder::set_has_tabletype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SDownloadOrder::clear_has_tabletype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SDownloadOrder::clear_tabletype() {
  tabletype_ = 1;
  clear_has_tabletype();
}
inline ::transMsg::ETableType SDownloadOrder::tabletype() const {
  return static_cast< ::transMsg::ETableType >(tabletype_);
}
inline void SDownloadOrder::set_tabletype(::transMsg::ETableType value) {
  assert(::transMsg::ETableType_IsValid(value));
  set_has_tabletype();
  tabletype_ = value;
}

// required bytes OrderTable = 101;
inline bool SDownloadOrder::has_ordertable() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SDownloadOrder::set_has_ordertable() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SDownloadOrder::clear_has_ordertable() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SDownloadOrder::clear_ordertable() {
  if (ordertable_ != &::google::protobuf::internal::kEmptyString) {
    ordertable_->clear();
  }
  clear_has_ordertable();
}
inline const ::std::string& SDownloadOrder::ordertable() const {
  return *ordertable_;
}
inline void SDownloadOrder::set_ordertable(const ::std::string& value) {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  ordertable_->assign(value);
}
inline void SDownloadOrder::set_ordertable(const char* value) {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  ordertable_->assign(value);
}
inline void SDownloadOrder::set_ordertable(const void* value, size_t size) {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  ordertable_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SDownloadOrder::mutable_ordertable() {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  return ordertable_;
}
inline ::std::string* SDownloadOrder::release_ordertable() {
  clear_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ordertable_;
    ordertable_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SDownloadOrder::set_allocated_ordertable(::std::string* ordertable) {
  if (ordertable_ != &::google::protobuf::internal::kEmptyString) {
    delete ordertable_;
  }
  if (ordertable) {
    set_has_ordertable();
    ordertable_ = ordertable;
  } else {
    clear_has_ordertable();
    ordertable_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .transMsg.GL_OrderInfo GL_OrderInfo = 102;
inline bool SDownloadOrder::has_gl_orderinfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SDownloadOrder::set_has_gl_orderinfo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SDownloadOrder::clear_has_gl_orderinfo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SDownloadOrder::clear_gl_orderinfo() {
  if (gl_orderinfo_ != NULL) gl_orderinfo_->::transMsg::GL_OrderInfo::Clear();
  clear_has_gl_orderinfo();
}
inline const ::transMsg::GL_OrderInfo& SDownloadOrder::gl_orderinfo() const {
  return gl_orderinfo_ != NULL ? *gl_orderinfo_ : *default_instance_->gl_orderinfo_;
}
inline ::transMsg::GL_OrderInfo* SDownloadOrder::mutable_gl_orderinfo() {
  set_has_gl_orderinfo();
  if (gl_orderinfo_ == NULL) gl_orderinfo_ = new ::transMsg::GL_OrderInfo;
  return gl_orderinfo_;
}
inline ::transMsg::GL_OrderInfo* SDownloadOrder::release_gl_orderinfo() {
  clear_has_gl_orderinfo();
  ::transMsg::GL_OrderInfo* temp = gl_orderinfo_;
  gl_orderinfo_ = NULL;
  return temp;
}
inline void SDownloadOrder::set_allocated_gl_orderinfo(::transMsg::GL_OrderInfo* gl_orderinfo) {
  delete gl_orderinfo_;
  gl_orderinfo_ = gl_orderinfo;
  if (gl_orderinfo) {
    set_has_gl_orderinfo();
  } else {
    clear_has_gl_orderinfo();
  }
}

// -------------------------------------------------------------------

// QDownloadOrder

// required .transMsg.ETableType TableType = 1;
inline bool QDownloadOrder::has_tabletype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QDownloadOrder::set_has_tabletype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QDownloadOrder::clear_has_tabletype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QDownloadOrder::clear_tabletype() {
  tabletype_ = 1;
  clear_has_tabletype();
}
inline ::transMsg::ETableType QDownloadOrder::tabletype() const {
  return static_cast< ::transMsg::ETableType >(tabletype_);
}
inline void QDownloadOrder::set_tabletype(::transMsg::ETableType value) {
  assert(::transMsg::ETableType_IsValid(value));
  set_has_tabletype();
  tabletype_ = value;
}

// required int64 OrderID = 2;
inline bool QDownloadOrder::has_orderid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QDownloadOrder::set_has_orderid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QDownloadOrder::clear_has_orderid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QDownloadOrder::clear_orderid() {
  orderid_ = GOOGLE_LONGLONG(0);
  clear_has_orderid();
}
inline ::google::protobuf::int64 QDownloadOrder::orderid() const {
  return orderid_;
}
inline void QDownloadOrder::set_orderid(::google::protobuf::int64 value) {
  set_has_orderid();
  orderid_ = value;
}

// -------------------------------------------------------------------

// ADownloadOrder

// required .transMsg.EReturnStatus Stats = 1;
inline bool ADownloadOrder::has_stats() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ADownloadOrder::set_has_stats() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ADownloadOrder::clear_has_stats() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ADownloadOrder::clear_stats() {
  stats_ = 0;
  clear_has_stats();
}
inline ::transMsg::EReturnStatus ADownloadOrder::stats() const {
  return static_cast< ::transMsg::EReturnStatus >(stats_);
}
inline void ADownloadOrder::set_stats(::transMsg::EReturnStatus value) {
  assert(::transMsg::EReturnStatus_IsValid(value));
  set_has_stats();
  stats_ = value;
}

// optional .transMsg.SDownloadOrder DownloadOrder = 101;
inline bool ADownloadOrder::has_downloadorder() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ADownloadOrder::set_has_downloadorder() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ADownloadOrder::clear_has_downloadorder() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ADownloadOrder::clear_downloadorder() {
  if (downloadorder_ != NULL) downloadorder_->::transMsg::SDownloadOrder::Clear();
  clear_has_downloadorder();
}
inline const ::transMsg::SDownloadOrder& ADownloadOrder::downloadorder() const {
  return downloadorder_ != NULL ? *downloadorder_ : *default_instance_->downloadorder_;
}
inline ::transMsg::SDownloadOrder* ADownloadOrder::mutable_downloadorder() {
  set_has_downloadorder();
  if (downloadorder_ == NULL) downloadorder_ = new ::transMsg::SDownloadOrder;
  return downloadorder_;
}
inline ::transMsg::SDownloadOrder* ADownloadOrder::release_downloadorder() {
  clear_has_downloadorder();
  ::transMsg::SDownloadOrder* temp = downloadorder_;
  downloadorder_ = NULL;
  return temp;
}
inline void ADownloadOrder::set_allocated_downloadorder(::transMsg::SDownloadOrder* downloadorder) {
  delete downloadorder_;
  downloadorder_ = downloadorder;
  if (downloadorder) {
    set_has_downloadorder();
  } else {
    clear_has_downloadorder();
  }
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

#endif  // PROTOBUF_DownloadOrder_2eproto__INCLUDED