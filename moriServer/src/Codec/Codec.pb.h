// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Codec.proto

#ifndef PROTOBUF_Codec_2eproto__INCLUDED
#define PROTOBUF_Codec_2eproto__INCLUDED

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
#include "EClientType.pb.h"
// @@protoc_insertion_point(includes)

namespace CodecProtocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Codec_2eproto();
void protobuf_AssignDesc_Codec_2eproto();
void protobuf_ShutdownFile_Codec_2eproto();

class Codec;

// ===================================================================

class Codec : public ::google::protobuf::Message {
 public:
  Codec();
  virtual ~Codec();

  Codec(const Codec& from);

  inline Codec& operator=(const Codec& from) {
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
  static const Codec& default_instance();

  void Swap(Codec* other);

  // implements Message ----------------------------------------------

  Codec* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Codec& from);
  void MergeFrom(const Codec& from);
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

  // required string MsgName = 1;
  inline bool has_msgname() const;
  inline void clear_msgname();
  static const int kMsgNameFieldNumber = 1;
  inline const ::std::string& msgname() const;
  inline void set_msgname(const ::std::string& value);
  inline void set_msgname(const char* value);
  inline void set_msgname(const char* value, size_t size);
  inline ::std::string* mutable_msgname();
  inline ::std::string* release_msgname();
  inline void set_allocated_msgname(::std::string* msgname);

  // required .CodecProtocol.EClientType ClientType = 2;
  inline bool has_clienttype() const;
  inline void clear_clienttype();
  static const int kClientTypeFieldNumber = 2;
  inline ::CodecProtocol::EClientType clienttype() const;
  inline void set_clienttype(::CodecProtocol::EClientType value);

  // optional int32 UserID = 3;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUserIDFieldNumber = 3;
  inline ::google::protobuf::int32 userid() const;
  inline void set_userid(::google::protobuf::int32 value);

  // optional bytes VerifyCode = 4;
  inline bool has_verifycode() const;
  inline void clear_verifycode();
  static const int kVerifyCodeFieldNumber = 4;
  inline const ::std::string& verifycode() const;
  inline void set_verifycode(const ::std::string& value);
  inline void set_verifycode(const char* value);
  inline void set_verifycode(const void* value, size_t size);
  inline ::std::string* mutable_verifycode();
  inline ::std::string* release_verifycode();
  inline void set_allocated_verifycode(::std::string* verifycode);

  // optional int32 RawSize = 5;
  inline bool has_rawsize() const;
  inline void clear_rawsize();
  static const int kRawSizeFieldNumber = 5;
  inline ::google::protobuf::int32 rawsize() const;
  inline void set_rawsize(::google::protobuf::int32 value);

  // optional bytes AESKey = 6;
  inline bool has_aeskey() const;
  inline void clear_aeskey();
  static const int kAESKeyFieldNumber = 6;
  inline const ::std::string& aeskey() const;
  inline void set_aeskey(const ::std::string& value);
  inline void set_aeskey(const char* value);
  inline void set_aeskey(const void* value, size_t size);
  inline ::std::string* mutable_aeskey();
  inline ::std::string* release_aeskey();
  inline void set_allocated_aeskey(::std::string* aeskey);

  // optional bool RSAEncode = 7 [default = false];
  inline bool has_rsaencode() const;
  inline void clear_rsaencode();
  static const int kRSAEncodeFieldNumber = 7;
  inline bool rsaencode() const;
  inline void set_rsaencode(bool value);

  // @@protoc_insertion_point(class_scope:CodecProtocol.Codec)
 private:
  inline void set_has_msgname();
  inline void clear_has_msgname();
  inline void set_has_clienttype();
  inline void clear_has_clienttype();
  inline void set_has_userid();
  inline void clear_has_userid();
  inline void set_has_verifycode();
  inline void clear_has_verifycode();
  inline void set_has_rawsize();
  inline void clear_has_rawsize();
  inline void set_has_aeskey();
  inline void clear_has_aeskey();
  inline void set_has_rsaencode();
  inline void clear_has_rsaencode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* msgname_;
  int clienttype_;
  ::google::protobuf::int32 userid_;
  ::std::string* verifycode_;
  ::std::string* aeskey_;
  ::google::protobuf::int32 rawsize_;
  bool rsaencode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_Codec_2eproto();
  friend void protobuf_AssignDesc_Codec_2eproto();
  friend void protobuf_ShutdownFile_Codec_2eproto();

  void InitAsDefaultInstance();
  static Codec* default_instance_;
};
// ===================================================================


// ===================================================================

// Codec

// required string MsgName = 1;
inline bool Codec::has_msgname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Codec::set_has_msgname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Codec::clear_has_msgname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Codec::clear_msgname() {
  if (msgname_ != &::google::protobuf::internal::kEmptyString) {
    msgname_->clear();
  }
  clear_has_msgname();
}
inline const ::std::string& Codec::msgname() const {
  return *msgname_;
}
inline void Codec::set_msgname(const ::std::string& value) {
  set_has_msgname();
  if (msgname_ == &::google::protobuf::internal::kEmptyString) {
    msgname_ = new ::std::string;
  }
  msgname_->assign(value);
}
inline void Codec::set_msgname(const char* value) {
  set_has_msgname();
  if (msgname_ == &::google::protobuf::internal::kEmptyString) {
    msgname_ = new ::std::string;
  }
  msgname_->assign(value);
}
inline void Codec::set_msgname(const char* value, size_t size) {
  set_has_msgname();
  if (msgname_ == &::google::protobuf::internal::kEmptyString) {
    msgname_ = new ::std::string;
  }
  msgname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Codec::mutable_msgname() {
  set_has_msgname();
  if (msgname_ == &::google::protobuf::internal::kEmptyString) {
    msgname_ = new ::std::string;
  }
  return msgname_;
}
inline ::std::string* Codec::release_msgname() {
  clear_has_msgname();
  if (msgname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msgname_;
    msgname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Codec::set_allocated_msgname(::std::string* msgname) {
  if (msgname_ != &::google::protobuf::internal::kEmptyString) {
    delete msgname_;
  }
  if (msgname) {
    set_has_msgname();
    msgname_ = msgname;
  } else {
    clear_has_msgname();
    msgname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .CodecProtocol.EClientType ClientType = 2;
inline bool Codec::has_clienttype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Codec::set_has_clienttype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Codec::clear_has_clienttype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Codec::clear_clienttype() {
  clienttype_ = 2;
  clear_has_clienttype();
}
inline ::CodecProtocol::EClientType Codec::clienttype() const {
  return static_cast< ::CodecProtocol::EClientType >(clienttype_);
}
inline void Codec::set_clienttype(::CodecProtocol::EClientType value) {
  assert(::CodecProtocol::EClientType_IsValid(value));
  set_has_clienttype();
  clienttype_ = value;
}

// optional int32 UserID = 3;
inline bool Codec::has_userid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Codec::set_has_userid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Codec::clear_has_userid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Codec::clear_userid() {
  userid_ = 0;
  clear_has_userid();
}
inline ::google::protobuf::int32 Codec::userid() const {
  return userid_;
}
inline void Codec::set_userid(::google::protobuf::int32 value) {
  set_has_userid();
  userid_ = value;
}

// optional bytes VerifyCode = 4;
inline bool Codec::has_verifycode() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Codec::set_has_verifycode() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Codec::clear_has_verifycode() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Codec::clear_verifycode() {
  if (verifycode_ != &::google::protobuf::internal::kEmptyString) {
    verifycode_->clear();
  }
  clear_has_verifycode();
}
inline const ::std::string& Codec::verifycode() const {
  return *verifycode_;
}
inline void Codec::set_verifycode(const ::std::string& value) {
  set_has_verifycode();
  if (verifycode_ == &::google::protobuf::internal::kEmptyString) {
    verifycode_ = new ::std::string;
  }
  verifycode_->assign(value);
}
inline void Codec::set_verifycode(const char* value) {
  set_has_verifycode();
  if (verifycode_ == &::google::protobuf::internal::kEmptyString) {
    verifycode_ = new ::std::string;
  }
  verifycode_->assign(value);
}
inline void Codec::set_verifycode(const void* value, size_t size) {
  set_has_verifycode();
  if (verifycode_ == &::google::protobuf::internal::kEmptyString) {
    verifycode_ = new ::std::string;
  }
  verifycode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Codec::mutable_verifycode() {
  set_has_verifycode();
  if (verifycode_ == &::google::protobuf::internal::kEmptyString) {
    verifycode_ = new ::std::string;
  }
  return verifycode_;
}
inline ::std::string* Codec::release_verifycode() {
  clear_has_verifycode();
  if (verifycode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = verifycode_;
    verifycode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Codec::set_allocated_verifycode(::std::string* verifycode) {
  if (verifycode_ != &::google::protobuf::internal::kEmptyString) {
    delete verifycode_;
  }
  if (verifycode) {
    set_has_verifycode();
    verifycode_ = verifycode;
  } else {
    clear_has_verifycode();
    verifycode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 RawSize = 5;
inline bool Codec::has_rawsize() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Codec::set_has_rawsize() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Codec::clear_has_rawsize() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Codec::clear_rawsize() {
  rawsize_ = 0;
  clear_has_rawsize();
}
inline ::google::protobuf::int32 Codec::rawsize() const {
  return rawsize_;
}
inline void Codec::set_rawsize(::google::protobuf::int32 value) {
  set_has_rawsize();
  rawsize_ = value;
}

// optional bytes AESKey = 6;
inline bool Codec::has_aeskey() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Codec::set_has_aeskey() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Codec::clear_has_aeskey() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Codec::clear_aeskey() {
  if (aeskey_ != &::google::protobuf::internal::kEmptyString) {
    aeskey_->clear();
  }
  clear_has_aeskey();
}
inline const ::std::string& Codec::aeskey() const {
  return *aeskey_;
}
inline void Codec::set_aeskey(const ::std::string& value) {
  set_has_aeskey();
  if (aeskey_ == &::google::protobuf::internal::kEmptyString) {
    aeskey_ = new ::std::string;
  }
  aeskey_->assign(value);
}
inline void Codec::set_aeskey(const char* value) {
  set_has_aeskey();
  if (aeskey_ == &::google::protobuf::internal::kEmptyString) {
    aeskey_ = new ::std::string;
  }
  aeskey_->assign(value);
}
inline void Codec::set_aeskey(const void* value, size_t size) {
  set_has_aeskey();
  if (aeskey_ == &::google::protobuf::internal::kEmptyString) {
    aeskey_ = new ::std::string;
  }
  aeskey_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Codec::mutable_aeskey() {
  set_has_aeskey();
  if (aeskey_ == &::google::protobuf::internal::kEmptyString) {
    aeskey_ = new ::std::string;
  }
  return aeskey_;
}
inline ::std::string* Codec::release_aeskey() {
  clear_has_aeskey();
  if (aeskey_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = aeskey_;
    aeskey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Codec::set_allocated_aeskey(::std::string* aeskey) {
  if (aeskey_ != &::google::protobuf::internal::kEmptyString) {
    delete aeskey_;
  }
  if (aeskey) {
    set_has_aeskey();
    aeskey_ = aeskey;
  } else {
    clear_has_aeskey();
    aeskey_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bool RSAEncode = 7 [default = false];
inline bool Codec::has_rsaencode() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Codec::set_has_rsaencode() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Codec::clear_has_rsaencode() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Codec::clear_rsaencode() {
  rsaencode_ = false;
  clear_has_rsaencode();
}
inline bool Codec::rsaencode() const {
  return rsaencode_;
}
inline void Codec::set_rsaencode(bool value) {
  set_has_rsaencode();
  rsaencode_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace CodecProtocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Codec_2eproto__INCLUDED