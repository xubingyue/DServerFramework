// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerConfig.proto

#ifndef PROTOBUF_ServerConfig_2eproto__INCLUDED
#define PROTOBUF_ServerConfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ServerConfig {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ServerConfig_2eproto();
void protobuf_AssignDesc_ServerConfig_2eproto();
void protobuf_ShutdownFile_ServerConfig_2eproto();

class CenterServerConfig;
class ConnectionServerConfig;
class EtcdAddr;
class LogicServerConfig;

// ===================================================================

class CenterServerConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ServerConfig.CenterServerConfig) */ {
 public:
  CenterServerConfig();
  virtual ~CenterServerConfig();

  CenterServerConfig(const CenterServerConfig& from);

  inline CenterServerConfig& operator=(const CenterServerConfig& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CenterServerConfig& default_instance();

  void Swap(CenterServerConfig* other);

  // implements Message ----------------------------------------------

  inline CenterServerConfig* New() const { return New(NULL); }

  CenterServerConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CenterServerConfig& from);
  void MergeFrom(const CenterServerConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CenterServerConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool enableIPV6 = 1;
  void clear_enableipv6();
  static const int kEnableIPV6FieldNumber = 1;
  bool enableipv6() const;
  void set_enableipv6(bool value);

  // optional string bindIP = 2;
  void clear_bindip();
  static const int kBindIPFieldNumber = 2;
  const ::std::string& bindip() const;
  void set_bindip(const ::std::string& value);
  void set_bindip(const char* value);
  void set_bindip(const char* value, size_t size);
  ::std::string* mutable_bindip();
  ::std::string* release_bindip();
  void set_allocated_bindip(::std::string* bindip);

  // optional int32 listenPort = 3;
  void clear_listenport();
  static const int kListenPortFieldNumber = 3;
  ::google::protobuf::int32 listenport() const;
  void set_listenport(::google::protobuf::int32 value);

  // optional string logicServerLoginPassword = 4;
  void clear_logicserverloginpassword();
  static const int kLogicServerLoginPasswordFieldNumber = 4;
  const ::std::string& logicserverloginpassword() const;
  void set_logicserverloginpassword(const ::std::string& value);
  void set_logicserverloginpassword(const char* value);
  void set_logicserverloginpassword(const char* value, size_t size);
  ::std::string* mutable_logicserverloginpassword();
  ::std::string* release_logicserverloginpassword();
  void set_allocated_logicserverloginpassword(::std::string* logicserverloginpassword);

  // @@protoc_insertion_point(class_scope:ServerConfig.CenterServerConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr bindip_;
  bool enableipv6_;
  ::google::protobuf::int32 listenport_;
  ::google::protobuf::internal::ArenaStringPtr logicserverloginpassword_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ServerConfig_2eproto();
  friend void protobuf_AssignDesc_ServerConfig_2eproto();
  friend void protobuf_ShutdownFile_ServerConfig_2eproto();

  void InitAsDefaultInstance();
  static CenterServerConfig* default_instance_;
};
// -------------------------------------------------------------------

class EtcdAddr : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ServerConfig.EtcdAddr) */ {
 public:
  EtcdAddr();
  virtual ~EtcdAddr();

  EtcdAddr(const EtcdAddr& from);

  inline EtcdAddr& operator=(const EtcdAddr& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EtcdAddr& default_instance();

  void Swap(EtcdAddr* other);

  // implements Message ----------------------------------------------

  inline EtcdAddr* New() const { return New(NULL); }

  EtcdAddr* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EtcdAddr& from);
  void MergeFrom(const EtcdAddr& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EtcdAddr* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string ip = 1;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  void set_ip(const char* value);
  void set_ip(const char* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // optional int32 port = 2;
  void clear_port();
  static const int kPortFieldNumber = 2;
  ::google::protobuf::int32 port() const;
  void set_port(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ServerConfig.EtcdAddr)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::int32 port_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ServerConfig_2eproto();
  friend void protobuf_AssignDesc_ServerConfig_2eproto();
  friend void protobuf_ShutdownFile_ServerConfig_2eproto();

  void InitAsDefaultInstance();
  static EtcdAddr* default_instance_;
};
// -------------------------------------------------------------------

class ConnectionServerConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ServerConfig.ConnectionServerConfig) */ {
 public:
  ConnectionServerConfig();
  virtual ~ConnectionServerConfig();

  ConnectionServerConfig(const ConnectionServerConfig& from);

  inline ConnectionServerConfig& operator=(const ConnectionServerConfig& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConnectionServerConfig& default_instance();

  void Swap(ConnectionServerConfig* other);

  // implements Message ----------------------------------------------

  inline ConnectionServerConfig* New() const { return New(NULL); }

  ConnectionServerConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectionServerConfig& from);
  void MergeFrom(const ConnectionServerConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ConnectionServerConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool enableIPV6 = 1;
  void clear_enableipv6();
  static const int kEnableIPV6FieldNumber = 1;
  bool enableipv6() const;
  void set_enableipv6(bool value);

  // optional string bindIP = 2;
  void clear_bindip();
  static const int kBindIPFieldNumber = 2;
  const ::std::string& bindip() const;
  void set_bindip(const ::std::string& value);
  void set_bindip(const char* value);
  void set_bindip(const char* value, size_t size);
  ::std::string* mutable_bindip();
  ::std::string* release_bindip();
  void set_allocated_bindip(::std::string* bindip);

  // optional int32 portForClient = 3;
  void clear_portforclient();
  static const int kPortForClientFieldNumber = 3;
  ::google::protobuf::int32 portforclient() const;
  void set_portforclient(::google::protobuf::int32 value);

  // optional int32 portForLogicServer = 4;
  void clear_portforlogicserver();
  static const int kPortForLogicServerFieldNumber = 4;
  ::google::protobuf::int32 portforlogicserver() const;
  void set_portforlogicserver(::google::protobuf::int32 value);

  // optional int32 id = 5;
  void clear_id();
  static const int kIdFieldNumber = 5;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // repeated .ServerConfig.EtcdAddr etcdservers = 6;
  int etcdservers_size() const;
  void clear_etcdservers();
  static const int kEtcdserversFieldNumber = 6;
  const ::ServerConfig::EtcdAddr& etcdservers(int index) const;
  ::ServerConfig::EtcdAddr* mutable_etcdservers(int index);
  ::ServerConfig::EtcdAddr* add_etcdservers();
  ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >*
      mutable_etcdservers();
  const ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >&
      etcdservers() const;

  // optional string logicServerLoginPassword = 7;
  void clear_logicserverloginpassword();
  static const int kLogicServerLoginPasswordFieldNumber = 7;
  const ::std::string& logicserverloginpassword() const;
  void set_logicserverloginpassword(const ::std::string& value);
  void set_logicserverloginpassword(const char* value);
  void set_logicserverloginpassword(const char* value, size_t size);
  ::std::string* mutable_logicserverloginpassword();
  ::std::string* release_logicserverloginpassword();
  void set_allocated_logicserverloginpassword(::std::string* logicserverloginpassword);

  // @@protoc_insertion_point(class_scope:ServerConfig.ConnectionServerConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr bindip_;
  bool enableipv6_;
  ::google::protobuf::int32 portforclient_;
  ::google::protobuf::int32 portforlogicserver_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr > etcdservers_;
  ::google::protobuf::internal::ArenaStringPtr logicserverloginpassword_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ServerConfig_2eproto();
  friend void protobuf_AssignDesc_ServerConfig_2eproto();
  friend void protobuf_ShutdownFile_ServerConfig_2eproto();

  void InitAsDefaultInstance();
  static ConnectionServerConfig* default_instance_;
};
// -------------------------------------------------------------------

class LogicServerConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ServerConfig.LogicServerConfig) */ {
 public:
  LogicServerConfig();
  virtual ~LogicServerConfig();

  LogicServerConfig(const LogicServerConfig& from);

  inline LogicServerConfig& operator=(const LogicServerConfig& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LogicServerConfig& default_instance();

  void Swap(LogicServerConfig* other);

  // implements Message ----------------------------------------------

  inline LogicServerConfig* New() const { return New(NULL); }

  LogicServerConfig* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogicServerConfig& from);
  void MergeFrom(const LogicServerConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LogicServerConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional bool isPrimary = 2;
  void clear_isprimary();
  static const int kIsPrimaryFieldNumber = 2;
  bool isprimary() const;
  void set_isprimary(bool value);

  // repeated .ServerConfig.EtcdAddr etcdservers = 3;
  int etcdservers_size() const;
  void clear_etcdservers();
  static const int kEtcdserversFieldNumber = 3;
  const ::ServerConfig::EtcdAddr& etcdservers(int index) const;
  ::ServerConfig::EtcdAddr* mutable_etcdservers(int index);
  ::ServerConfig::EtcdAddr* add_etcdservers();
  ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >*
      mutable_etcdservers();
  const ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >&
      etcdservers() const;

  // @@protoc_insertion_point(class_scope:ServerConfig.LogicServerConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 id_;
  bool isprimary_;
  ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr > etcdservers_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ServerConfig_2eproto();
  friend void protobuf_AssignDesc_ServerConfig_2eproto();
  friend void protobuf_ShutdownFile_ServerConfig_2eproto();

  void InitAsDefaultInstance();
  static LogicServerConfig* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CenterServerConfig

// optional bool enableIPV6 = 1;
inline void CenterServerConfig::clear_enableipv6() {
  enableipv6_ = false;
}
inline bool CenterServerConfig::enableipv6() const {
  // @@protoc_insertion_point(field_get:ServerConfig.CenterServerConfig.enableIPV6)
  return enableipv6_;
}
inline void CenterServerConfig::set_enableipv6(bool value) {
  
  enableipv6_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.CenterServerConfig.enableIPV6)
}

// optional string bindIP = 2;
inline void CenterServerConfig::clear_bindip() {
  bindip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CenterServerConfig::bindip() const {
  // @@protoc_insertion_point(field_get:ServerConfig.CenterServerConfig.bindIP)
  return bindip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CenterServerConfig::set_bindip(const ::std::string& value) {
  
  bindip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ServerConfig.CenterServerConfig.bindIP)
}
inline void CenterServerConfig::set_bindip(const char* value) {
  
  bindip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ServerConfig.CenterServerConfig.bindIP)
}
inline void CenterServerConfig::set_bindip(const char* value, size_t size) {
  
  bindip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ServerConfig.CenterServerConfig.bindIP)
}
inline ::std::string* CenterServerConfig::mutable_bindip() {
  
  // @@protoc_insertion_point(field_mutable:ServerConfig.CenterServerConfig.bindIP)
  return bindip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CenterServerConfig::release_bindip() {
  // @@protoc_insertion_point(field_release:ServerConfig.CenterServerConfig.bindIP)
  
  return bindip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CenterServerConfig::set_allocated_bindip(::std::string* bindip) {
  if (bindip != NULL) {
    
  } else {
    
  }
  bindip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bindip);
  // @@protoc_insertion_point(field_set_allocated:ServerConfig.CenterServerConfig.bindIP)
}

// optional int32 listenPort = 3;
inline void CenterServerConfig::clear_listenport() {
  listenport_ = 0;
}
inline ::google::protobuf::int32 CenterServerConfig::listenport() const {
  // @@protoc_insertion_point(field_get:ServerConfig.CenterServerConfig.listenPort)
  return listenport_;
}
inline void CenterServerConfig::set_listenport(::google::protobuf::int32 value) {
  
  listenport_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.CenterServerConfig.listenPort)
}

// optional string logicServerLoginPassword = 4;
inline void CenterServerConfig::clear_logicserverloginpassword() {
  logicserverloginpassword_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CenterServerConfig::logicserverloginpassword() const {
  // @@protoc_insertion_point(field_get:ServerConfig.CenterServerConfig.logicServerLoginPassword)
  return logicserverloginpassword_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CenterServerConfig::set_logicserverloginpassword(const ::std::string& value) {
  
  logicserverloginpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ServerConfig.CenterServerConfig.logicServerLoginPassword)
}
inline void CenterServerConfig::set_logicserverloginpassword(const char* value) {
  
  logicserverloginpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ServerConfig.CenterServerConfig.logicServerLoginPassword)
}
inline void CenterServerConfig::set_logicserverloginpassword(const char* value, size_t size) {
  
  logicserverloginpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ServerConfig.CenterServerConfig.logicServerLoginPassword)
}
inline ::std::string* CenterServerConfig::mutable_logicserverloginpassword() {
  
  // @@protoc_insertion_point(field_mutable:ServerConfig.CenterServerConfig.logicServerLoginPassword)
  return logicserverloginpassword_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CenterServerConfig::release_logicserverloginpassword() {
  // @@protoc_insertion_point(field_release:ServerConfig.CenterServerConfig.logicServerLoginPassword)
  
  return logicserverloginpassword_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CenterServerConfig::set_allocated_logicserverloginpassword(::std::string* logicserverloginpassword) {
  if (logicserverloginpassword != NULL) {
    
  } else {
    
  }
  logicserverloginpassword_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), logicserverloginpassword);
  // @@protoc_insertion_point(field_set_allocated:ServerConfig.CenterServerConfig.logicServerLoginPassword)
}

// -------------------------------------------------------------------

// EtcdAddr

// optional string ip = 1;
inline void EtcdAddr::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EtcdAddr::ip() const {
  // @@protoc_insertion_point(field_get:ServerConfig.EtcdAddr.ip)
  return ip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EtcdAddr::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ServerConfig.EtcdAddr.ip)
}
inline void EtcdAddr::set_ip(const char* value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ServerConfig.EtcdAddr.ip)
}
inline void EtcdAddr::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ServerConfig.EtcdAddr.ip)
}
inline ::std::string* EtcdAddr::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:ServerConfig.EtcdAddr.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EtcdAddr::release_ip() {
  // @@protoc_insertion_point(field_release:ServerConfig.EtcdAddr.ip)
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EtcdAddr::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:ServerConfig.EtcdAddr.ip)
}

// optional int32 port = 2;
inline void EtcdAddr::clear_port() {
  port_ = 0;
}
inline ::google::protobuf::int32 EtcdAddr::port() const {
  // @@protoc_insertion_point(field_get:ServerConfig.EtcdAddr.port)
  return port_;
}
inline void EtcdAddr::set_port(::google::protobuf::int32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.EtcdAddr.port)
}

// -------------------------------------------------------------------

// ConnectionServerConfig

// optional bool enableIPV6 = 1;
inline void ConnectionServerConfig::clear_enableipv6() {
  enableipv6_ = false;
}
inline bool ConnectionServerConfig::enableipv6() const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.enableIPV6)
  return enableipv6_;
}
inline void ConnectionServerConfig::set_enableipv6(bool value) {
  
  enableipv6_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.ConnectionServerConfig.enableIPV6)
}

// optional string bindIP = 2;
inline void ConnectionServerConfig::clear_bindip() {
  bindip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConnectionServerConfig::bindip() const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.bindIP)
  return bindip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionServerConfig::set_bindip(const ::std::string& value) {
  
  bindip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ServerConfig.ConnectionServerConfig.bindIP)
}
inline void ConnectionServerConfig::set_bindip(const char* value) {
  
  bindip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ServerConfig.ConnectionServerConfig.bindIP)
}
inline void ConnectionServerConfig::set_bindip(const char* value, size_t size) {
  
  bindip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ServerConfig.ConnectionServerConfig.bindIP)
}
inline ::std::string* ConnectionServerConfig::mutable_bindip() {
  
  // @@protoc_insertion_point(field_mutable:ServerConfig.ConnectionServerConfig.bindIP)
  return bindip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionServerConfig::release_bindip() {
  // @@protoc_insertion_point(field_release:ServerConfig.ConnectionServerConfig.bindIP)
  
  return bindip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionServerConfig::set_allocated_bindip(::std::string* bindip) {
  if (bindip != NULL) {
    
  } else {
    
  }
  bindip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bindip);
  // @@protoc_insertion_point(field_set_allocated:ServerConfig.ConnectionServerConfig.bindIP)
}

// optional int32 portForClient = 3;
inline void ConnectionServerConfig::clear_portforclient() {
  portforclient_ = 0;
}
inline ::google::protobuf::int32 ConnectionServerConfig::portforclient() const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.portForClient)
  return portforclient_;
}
inline void ConnectionServerConfig::set_portforclient(::google::protobuf::int32 value) {
  
  portforclient_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.ConnectionServerConfig.portForClient)
}

// optional int32 portForLogicServer = 4;
inline void ConnectionServerConfig::clear_portforlogicserver() {
  portforlogicserver_ = 0;
}
inline ::google::protobuf::int32 ConnectionServerConfig::portforlogicserver() const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.portForLogicServer)
  return portforlogicserver_;
}
inline void ConnectionServerConfig::set_portforlogicserver(::google::protobuf::int32 value) {
  
  portforlogicserver_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.ConnectionServerConfig.portForLogicServer)
}

// optional int32 id = 5;
inline void ConnectionServerConfig::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 ConnectionServerConfig::id() const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.id)
  return id_;
}
inline void ConnectionServerConfig::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.ConnectionServerConfig.id)
}

// repeated .ServerConfig.EtcdAddr etcdservers = 6;
inline int ConnectionServerConfig::etcdservers_size() const {
  return etcdservers_.size();
}
inline void ConnectionServerConfig::clear_etcdservers() {
  etcdservers_.Clear();
}
inline const ::ServerConfig::EtcdAddr& ConnectionServerConfig::etcdservers(int index) const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.etcdservers)
  return etcdservers_.Get(index);
}
inline ::ServerConfig::EtcdAddr* ConnectionServerConfig::mutable_etcdservers(int index) {
  // @@protoc_insertion_point(field_mutable:ServerConfig.ConnectionServerConfig.etcdservers)
  return etcdservers_.Mutable(index);
}
inline ::ServerConfig::EtcdAddr* ConnectionServerConfig::add_etcdservers() {
  // @@protoc_insertion_point(field_add:ServerConfig.ConnectionServerConfig.etcdservers)
  return etcdservers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >*
ConnectionServerConfig::mutable_etcdservers() {
  // @@protoc_insertion_point(field_mutable_list:ServerConfig.ConnectionServerConfig.etcdservers)
  return &etcdservers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >&
ConnectionServerConfig::etcdservers() const {
  // @@protoc_insertion_point(field_list:ServerConfig.ConnectionServerConfig.etcdservers)
  return etcdservers_;
}

// optional string logicServerLoginPassword = 7;
inline void ConnectionServerConfig::clear_logicserverloginpassword() {
  logicserverloginpassword_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConnectionServerConfig::logicserverloginpassword() const {
  // @@protoc_insertion_point(field_get:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
  return logicserverloginpassword_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionServerConfig::set_logicserverloginpassword(const ::std::string& value) {
  
  logicserverloginpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
}
inline void ConnectionServerConfig::set_logicserverloginpassword(const char* value) {
  
  logicserverloginpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
}
inline void ConnectionServerConfig::set_logicserverloginpassword(const char* value, size_t size) {
  
  logicserverloginpassword_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
}
inline ::std::string* ConnectionServerConfig::mutable_logicserverloginpassword() {
  
  // @@protoc_insertion_point(field_mutable:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
  return logicserverloginpassword_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConnectionServerConfig::release_logicserverloginpassword() {
  // @@protoc_insertion_point(field_release:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
  
  return logicserverloginpassword_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConnectionServerConfig::set_allocated_logicserverloginpassword(::std::string* logicserverloginpassword) {
  if (logicserverloginpassword != NULL) {
    
  } else {
    
  }
  logicserverloginpassword_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), logicserverloginpassword);
  // @@protoc_insertion_point(field_set_allocated:ServerConfig.ConnectionServerConfig.logicServerLoginPassword)
}

// -------------------------------------------------------------------

// LogicServerConfig

// optional int32 id = 1;
inline void LogicServerConfig::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 LogicServerConfig::id() const {
  // @@protoc_insertion_point(field_get:ServerConfig.LogicServerConfig.id)
  return id_;
}
inline void LogicServerConfig::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.LogicServerConfig.id)
}

// optional bool isPrimary = 2;
inline void LogicServerConfig::clear_isprimary() {
  isprimary_ = false;
}
inline bool LogicServerConfig::isprimary() const {
  // @@protoc_insertion_point(field_get:ServerConfig.LogicServerConfig.isPrimary)
  return isprimary_;
}
inline void LogicServerConfig::set_isprimary(bool value) {
  
  isprimary_ = value;
  // @@protoc_insertion_point(field_set:ServerConfig.LogicServerConfig.isPrimary)
}

// repeated .ServerConfig.EtcdAddr etcdservers = 3;
inline int LogicServerConfig::etcdservers_size() const {
  return etcdservers_.size();
}
inline void LogicServerConfig::clear_etcdservers() {
  etcdservers_.Clear();
}
inline const ::ServerConfig::EtcdAddr& LogicServerConfig::etcdservers(int index) const {
  // @@protoc_insertion_point(field_get:ServerConfig.LogicServerConfig.etcdservers)
  return etcdservers_.Get(index);
}
inline ::ServerConfig::EtcdAddr* LogicServerConfig::mutable_etcdservers(int index) {
  // @@protoc_insertion_point(field_mutable:ServerConfig.LogicServerConfig.etcdservers)
  return etcdservers_.Mutable(index);
}
inline ::ServerConfig::EtcdAddr* LogicServerConfig::add_etcdservers() {
  // @@protoc_insertion_point(field_add:ServerConfig.LogicServerConfig.etcdservers)
  return etcdservers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >*
LogicServerConfig::mutable_etcdservers() {
  // @@protoc_insertion_point(field_mutable_list:ServerConfig.LogicServerConfig.etcdservers)
  return &etcdservers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ServerConfig::EtcdAddr >&
LogicServerConfig::etcdservers() const {
  // @@protoc_insertion_point(field_list:ServerConfig.LogicServerConfig.etcdservers)
  return etcdservers_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ServerConfig

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ServerConfig_2eproto__INCLUDED