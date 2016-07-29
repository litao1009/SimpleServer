// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UploadOrder.proto

#ifndef PROTOBUF_UploadOrder_2eproto__INCLUDED
#define PROTOBUF_UploadOrder_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace transMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_UploadOrder_2eproto();
void protobuf_AssignDesc_UploadOrder_2eproto();
void protobuf_ShutdownFile_UploadOrder_2eproto();

class SNewOrder;
class QUploadOrder;
class AUploadOrder;

// ===================================================================

class SNewOrder : public ::google::protobuf::Message {
 public:
  SNewOrder();
  virtual ~SNewOrder();

  SNewOrder(const SNewOrder& from);

  inline SNewOrder& operator=(const SNewOrder& from) {
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
  static const SNewOrder& default_instance();

  void Swap(SNewOrder* other);

  // implements Message ----------------------------------------------

  SNewOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SNewOrder& from);
  void MergeFrom(const SNewOrder& from);
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

  // required int64 OldID = 1;
  inline bool has_oldid() const;
  inline void clear_oldid();
  static const int kOldIDFieldNumber = 1;
  inline ::google::protobuf::int64 oldid() const;
  inline void set_oldid(::google::protobuf::int64 value);

  // required int64 NewID = 2;
  inline bool has_newid() const;
  inline void clear_newid();
  static const int kNewIDFieldNumber = 2;
  inline ::google::protobuf::int64 newid() const;
  inline void set_newid(::google::protobuf::int64 value);

  // required int32 NewIndex = 3;
  inline bool has_newindex() const;
  inline void clear_newindex();
  static const int kNewIndexFieldNumber = 3;
  inline ::google::protobuf::int32 newindex() const;
  inline void set_newindex(::google::protobuf::int32 value);

  // required bytes NewCode = 4;
  inline bool has_newcode() const;
  inline void clear_newcode();
  static const int kNewCodeFieldNumber = 4;
  inline const ::std::string& newcode() const;
  inline void set_newcode(const ::std::string& value);
  inline void set_newcode(const char* value);
  inline void set_newcode(const void* value, size_t size);
  inline ::std::string* mutable_newcode();
  inline ::std::string* release_newcode();
  inline void set_allocated_newcode(::std::string* newcode);

  // @@protoc_insertion_point(class_scope:transMsg.SNewOrder)
 private:
  inline void set_has_oldid();
  inline void clear_has_oldid();
  inline void set_has_newid();
  inline void clear_has_newid();
  inline void set_has_newindex();
  inline void clear_has_newindex();
  inline void set_has_newcode();
  inline void clear_has_newcode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 oldid_;
  ::google::protobuf::int64 newid_;
  ::std::string* newcode_;
  ::google::protobuf::int32 newindex_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_UploadOrder_2eproto();
  friend void protobuf_AssignDesc_UploadOrder_2eproto();
  friend void protobuf_ShutdownFile_UploadOrder_2eproto();

  void InitAsDefaultInstance();
  static SNewOrder* default_instance_;
};
// -------------------------------------------------------------------

class QUploadOrder : public ::google::protobuf::Message {
 public:
  QUploadOrder();
  virtual ~QUploadOrder();

  QUploadOrder(const QUploadOrder& from);

  inline QUploadOrder& operator=(const QUploadOrder& from) {
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
  static const QUploadOrder& default_instance();

  void Swap(QUploadOrder* other);

  // implements Message ----------------------------------------------

  QUploadOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const QUploadOrder& from);
  void MergeFrom(const QUploadOrder& from);
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

  // required int64 OrderID = 1;
  inline bool has_orderid() const;
  inline void clear_orderid();
  static const int kOrderIDFieldNumber = 1;
  inline ::google::protobuf::int64 orderid() const;
  inline void set_orderid(::google::protobuf::int64 value);

  // required bytes OrderTable = 2;
  inline bool has_ordertable() const;
  inline void clear_ordertable();
  static const int kOrderTableFieldNumber = 2;
  inline const ::std::string& ordertable() const;
  inline void set_ordertable(const ::std::string& value);
  inline void set_ordertable(const char* value);
  inline void set_ordertable(const void* value, size_t size);
  inline ::std::string* mutable_ordertable();
  inline ::std::string* release_ordertable();
  inline void set_allocated_ordertable(::std::string* ordertable);

  // optional bool IsNewOrder = 3 [default = false];
  inline bool has_isneworder() const;
  inline void clear_isneworder();
  static const int kIsNewOrderFieldNumber = 3;
  inline bool isneworder() const;
  inline void set_isneworder(bool value);

  // optional int64 ParentID = 5;
  inline bool has_parentid() const;
  inline void clear_parentid();
  static const int kParentIDFieldNumber = 5;
  inline ::google::protobuf::int64 parentid() const;
  inline void set_parentid(::google::protobuf::int64 value);

  // optional int32 OrderType = 6;
  inline bool has_ordertype() const;
  inline void clear_ordertype();
  static const int kOrderTypeFieldNumber = 6;
  inline ::google::protobuf::int32 ordertype() const;
  inline void set_ordertype(::google::protobuf::int32 value);

  // optional bool IsZbOrder = 7 [default = false];
  inline bool has_iszborder() const;
  inline void clear_iszborder();
  static const int kIsZbOrderFieldNumber = 7;
  inline bool iszborder() const;
  inline void set_iszborder(bool value);

  // optional bool WithFile = 8 [default = false];
  inline bool has_withfile() const;
  inline void clear_withfile();
  static const int kWithFileFieldNumber = 8;
  inline bool withfile() const;
  inline void set_withfile(bool value);

  // @@protoc_insertion_point(class_scope:transMsg.QUploadOrder)
 private:
  inline void set_has_orderid();
  inline void clear_has_orderid();
  inline void set_has_ordertable();
  inline void clear_has_ordertable();
  inline void set_has_isneworder();
  inline void clear_has_isneworder();
  inline void set_has_parentid();
  inline void clear_has_parentid();
  inline void set_has_ordertype();
  inline void clear_has_ordertype();
  inline void set_has_iszborder();
  inline void clear_has_iszborder();
  inline void set_has_withfile();
  inline void clear_has_withfile();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 orderid_;
  ::std::string* ordertable_;
  ::google::protobuf::int64 parentid_;
  ::google::protobuf::int32 ordertype_;
  bool isneworder_;
  bool iszborder_;
  bool withfile_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_UploadOrder_2eproto();
  friend void protobuf_AssignDesc_UploadOrder_2eproto();
  friend void protobuf_ShutdownFile_UploadOrder_2eproto();

  void InitAsDefaultInstance();
  static QUploadOrder* default_instance_;
};
// -------------------------------------------------------------------

class AUploadOrder : public ::google::protobuf::Message {
 public:
  AUploadOrder();
  virtual ~AUploadOrder();

  AUploadOrder(const AUploadOrder& from);

  inline AUploadOrder& operator=(const AUploadOrder& from) {
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
  static const AUploadOrder& default_instance();

  void Swap(AUploadOrder* other);

  // implements Message ----------------------------------------------

  AUploadOrder* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AUploadOrder& from);
  void MergeFrom(const AUploadOrder& from);
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

  // optional .transMsg.SNewOrder NewInfo = 2;
  inline bool has_newinfo() const;
  inline void clear_newinfo();
  static const int kNewInfoFieldNumber = 2;
  inline const ::transMsg::SNewOrder& newinfo() const;
  inline ::transMsg::SNewOrder* mutable_newinfo();
  inline ::transMsg::SNewOrder* release_newinfo();
  inline void set_allocated_newinfo(::transMsg::SNewOrder* newinfo);

  // @@protoc_insertion_point(class_scope:transMsg.AUploadOrder)
 private:
  inline void set_has_stats();
  inline void clear_has_stats();
  inline void set_has_newinfo();
  inline void clear_has_newinfo();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::transMsg::SNewOrder* newinfo_;
  int stats_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_UploadOrder_2eproto();
  friend void protobuf_AssignDesc_UploadOrder_2eproto();
  friend void protobuf_ShutdownFile_UploadOrder_2eproto();

  void InitAsDefaultInstance();
  static AUploadOrder* default_instance_;
};
// ===================================================================


// ===================================================================

// SNewOrder

// required int64 OldID = 1;
inline bool SNewOrder::has_oldid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SNewOrder::set_has_oldid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SNewOrder::clear_has_oldid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SNewOrder::clear_oldid() {
  oldid_ = GOOGLE_LONGLONG(0);
  clear_has_oldid();
}
inline ::google::protobuf::int64 SNewOrder::oldid() const {
  return oldid_;
}
inline void SNewOrder::set_oldid(::google::protobuf::int64 value) {
  set_has_oldid();
  oldid_ = value;
}

// required int64 NewID = 2;
inline bool SNewOrder::has_newid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SNewOrder::set_has_newid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SNewOrder::clear_has_newid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SNewOrder::clear_newid() {
  newid_ = GOOGLE_LONGLONG(0);
  clear_has_newid();
}
inline ::google::protobuf::int64 SNewOrder::newid() const {
  return newid_;
}
inline void SNewOrder::set_newid(::google::protobuf::int64 value) {
  set_has_newid();
  newid_ = value;
}

// required int32 NewIndex = 3;
inline bool SNewOrder::has_newindex() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SNewOrder::set_has_newindex() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SNewOrder::clear_has_newindex() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SNewOrder::clear_newindex() {
  newindex_ = 0;
  clear_has_newindex();
}
inline ::google::protobuf::int32 SNewOrder::newindex() const {
  return newindex_;
}
inline void SNewOrder::set_newindex(::google::protobuf::int32 value) {
  set_has_newindex();
  newindex_ = value;
}

// required bytes NewCode = 4;
inline bool SNewOrder::has_newcode() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SNewOrder::set_has_newcode() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SNewOrder::clear_has_newcode() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SNewOrder::clear_newcode() {
  if (newcode_ != &::google::protobuf::internal::kEmptyString) {
    newcode_->clear();
  }
  clear_has_newcode();
}
inline const ::std::string& SNewOrder::newcode() const {
  return *newcode_;
}
inline void SNewOrder::set_newcode(const ::std::string& value) {
  set_has_newcode();
  if (newcode_ == &::google::protobuf::internal::kEmptyString) {
    newcode_ = new ::std::string;
  }
  newcode_->assign(value);
}
inline void SNewOrder::set_newcode(const char* value) {
  set_has_newcode();
  if (newcode_ == &::google::protobuf::internal::kEmptyString) {
    newcode_ = new ::std::string;
  }
  newcode_->assign(value);
}
inline void SNewOrder::set_newcode(const void* value, size_t size) {
  set_has_newcode();
  if (newcode_ == &::google::protobuf::internal::kEmptyString) {
    newcode_ = new ::std::string;
  }
  newcode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SNewOrder::mutable_newcode() {
  set_has_newcode();
  if (newcode_ == &::google::protobuf::internal::kEmptyString) {
    newcode_ = new ::std::string;
  }
  return newcode_;
}
inline ::std::string* SNewOrder::release_newcode() {
  clear_has_newcode();
  if (newcode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = newcode_;
    newcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SNewOrder::set_allocated_newcode(::std::string* newcode) {
  if (newcode_ != &::google::protobuf::internal::kEmptyString) {
    delete newcode_;
  }
  if (newcode) {
    set_has_newcode();
    newcode_ = newcode;
  } else {
    clear_has_newcode();
    newcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// QUploadOrder

// required int64 OrderID = 1;
inline bool QUploadOrder::has_orderid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void QUploadOrder::set_has_orderid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void QUploadOrder::clear_has_orderid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void QUploadOrder::clear_orderid() {
  orderid_ = GOOGLE_LONGLONG(0);
  clear_has_orderid();
}
inline ::google::protobuf::int64 QUploadOrder::orderid() const {
  return orderid_;
}
inline void QUploadOrder::set_orderid(::google::protobuf::int64 value) {
  set_has_orderid();
  orderid_ = value;
}

// required bytes OrderTable = 2;
inline bool QUploadOrder::has_ordertable() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void QUploadOrder::set_has_ordertable() {
  _has_bits_[0] |= 0x00000002u;
}
inline void QUploadOrder::clear_has_ordertable() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void QUploadOrder::clear_ordertable() {
  if (ordertable_ != &::google::protobuf::internal::kEmptyString) {
    ordertable_->clear();
  }
  clear_has_ordertable();
}
inline const ::std::string& QUploadOrder::ordertable() const {
  return *ordertable_;
}
inline void QUploadOrder::set_ordertable(const ::std::string& value) {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  ordertable_->assign(value);
}
inline void QUploadOrder::set_ordertable(const char* value) {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  ordertable_->assign(value);
}
inline void QUploadOrder::set_ordertable(const void* value, size_t size) {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  ordertable_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* QUploadOrder::mutable_ordertable() {
  set_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    ordertable_ = new ::std::string;
  }
  return ordertable_;
}
inline ::std::string* QUploadOrder::release_ordertable() {
  clear_has_ordertable();
  if (ordertable_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ordertable_;
    ordertable_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void QUploadOrder::set_allocated_ordertable(::std::string* ordertable) {
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

// optional bool IsNewOrder = 3 [default = false];
inline bool QUploadOrder::has_isneworder() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void QUploadOrder::set_has_isneworder() {
  _has_bits_[0] |= 0x00000004u;
}
inline void QUploadOrder::clear_has_isneworder() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void QUploadOrder::clear_isneworder() {
  isneworder_ = false;
  clear_has_isneworder();
}
inline bool QUploadOrder::isneworder() const {
  return isneworder_;
}
inline void QUploadOrder::set_isneworder(bool value) {
  set_has_isneworder();
  isneworder_ = value;
}

// optional int64 ParentID = 5;
inline bool QUploadOrder::has_parentid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void QUploadOrder::set_has_parentid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void QUploadOrder::clear_has_parentid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void QUploadOrder::clear_parentid() {
  parentid_ = GOOGLE_LONGLONG(0);
  clear_has_parentid();
}
inline ::google::protobuf::int64 QUploadOrder::parentid() const {
  return parentid_;
}
inline void QUploadOrder::set_parentid(::google::protobuf::int64 value) {
  set_has_parentid();
  parentid_ = value;
}

// optional int32 OrderType = 6;
inline bool QUploadOrder::has_ordertype() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void QUploadOrder::set_has_ordertype() {
  _has_bits_[0] |= 0x00000010u;
}
inline void QUploadOrder::clear_has_ordertype() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void QUploadOrder::clear_ordertype() {
  ordertype_ = 0;
  clear_has_ordertype();
}
inline ::google::protobuf::int32 QUploadOrder::ordertype() const {
  return ordertype_;
}
inline void QUploadOrder::set_ordertype(::google::protobuf::int32 value) {
  set_has_ordertype();
  ordertype_ = value;
}

// optional bool IsZbOrder = 7 [default = false];
inline bool QUploadOrder::has_iszborder() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void QUploadOrder::set_has_iszborder() {
  _has_bits_[0] |= 0x00000020u;
}
inline void QUploadOrder::clear_has_iszborder() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void QUploadOrder::clear_iszborder() {
  iszborder_ = false;
  clear_has_iszborder();
}
inline bool QUploadOrder::iszborder() const {
  return iszborder_;
}
inline void QUploadOrder::set_iszborder(bool value) {
  set_has_iszborder();
  iszborder_ = value;
}

// optional bool WithFile = 8 [default = false];
inline bool QUploadOrder::has_withfile() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void QUploadOrder::set_has_withfile() {
  _has_bits_[0] |= 0x00000040u;
}
inline void QUploadOrder::clear_has_withfile() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void QUploadOrder::clear_withfile() {
  withfile_ = false;
  clear_has_withfile();
}
inline bool QUploadOrder::withfile() const {
  return withfile_;
}
inline void QUploadOrder::set_withfile(bool value) {
  set_has_withfile();
  withfile_ = value;
}

// -------------------------------------------------------------------

// AUploadOrder

// required .transMsg.EReturnStatus Stats = 1;
inline bool AUploadOrder::has_stats() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AUploadOrder::set_has_stats() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AUploadOrder::clear_has_stats() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AUploadOrder::clear_stats() {
  stats_ = 0;
  clear_has_stats();
}
inline ::transMsg::EReturnStatus AUploadOrder::stats() const {
  return static_cast< ::transMsg::EReturnStatus >(stats_);
}
inline void AUploadOrder::set_stats(::transMsg::EReturnStatus value) {
  assert(::transMsg::EReturnStatus_IsValid(value));
  set_has_stats();
  stats_ = value;
}

// optional .transMsg.SNewOrder NewInfo = 2;
inline bool AUploadOrder::has_newinfo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AUploadOrder::set_has_newinfo() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AUploadOrder::clear_has_newinfo() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AUploadOrder::clear_newinfo() {
  if (newinfo_ != NULL) newinfo_->::transMsg::SNewOrder::Clear();
  clear_has_newinfo();
}
inline const ::transMsg::SNewOrder& AUploadOrder::newinfo() const {
  return newinfo_ != NULL ? *newinfo_ : *default_instance_->newinfo_;
}
inline ::transMsg::SNewOrder* AUploadOrder::mutable_newinfo() {
  set_has_newinfo();
  if (newinfo_ == NULL) newinfo_ = new ::transMsg::SNewOrder;
  return newinfo_;
}
inline ::transMsg::SNewOrder* AUploadOrder::release_newinfo() {
  clear_has_newinfo();
  ::transMsg::SNewOrder* temp = newinfo_;
  newinfo_ = NULL;
  return temp;
}
inline void AUploadOrder::set_allocated_newinfo(::transMsg::SNewOrder* newinfo) {
  delete newinfo_;
  newinfo_ = newinfo;
  if (newinfo) {
    set_has_newinfo();
  } else {
    clear_has_newinfo();
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

#endif  // PROTOBUF_UploadOrder_2eproto__INCLUDED