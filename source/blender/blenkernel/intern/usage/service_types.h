/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef service_TYPES_H
#define service_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "data_types.h"
#include "metadata_types.h"


namespace wire {

typedef struct _Message__isset {
  _Message__isset() : metadata(false), data(false), user(false), timestamp(false), token(false) {}
  bool metadata;
  bool data;
  bool user;
  bool timestamp;
  bool token;
} _Message__isset;

class Message {
 public:

  static const char* ascii_fingerprint; // = "E73E89F7689E021E65F450EAE558E413";
  static const uint8_t binary_fingerprint[16]; // = {0xE7,0x3E,0x89,0xF7,0x68,0x9E,0x02,0x1E,0x65,0xF4,0x50,0xEA,0xE5,0x58,0xE4,0x13};

  Message() : user(0), timestamp(0), token() {
  }

  virtual ~Message() throw() {}

   ::wire::metadata::Metadata metadata;
   ::wire::data::Data data;
  int64_t user;
  int64_t timestamp;
  std::string token;

  _Message__isset __isset;

  void __set_metadata(const  ::wire::metadata::Metadata& val) {
    metadata = val;
    __isset.metadata = true;
  }

  void __set_data(const  ::wire::data::Data& val) {
    data = val;
    __isset.data = true;
  }

  void __set_user(const int64_t val) {
    user = val;
    __isset.user = true;
  }

  void __set_timestamp(const int64_t val) {
    timestamp = val;
    __isset.timestamp = true;
  }

  void __set_token(const std::string& val) {
    token = val;
    __isset.token = true;
  }

  bool operator == (const Message & rhs) const
  {
    if (__isset.metadata != rhs.__isset.metadata)
      return false;
    else if (__isset.metadata && !(metadata == rhs.metadata))
      return false;
    if (__isset.data != rhs.__isset.data)
      return false;
    else if (__isset.data && !(data == rhs.data))
      return false;
    if (__isset.user != rhs.__isset.user)
      return false;
    else if (__isset.user && !(user == rhs.user))
      return false;
    if (__isset.timestamp != rhs.__isset.timestamp)
      return false;
    else if (__isset.timestamp && !(timestamp == rhs.timestamp))
      return false;
    if (__isset.token != rhs.__isset.token)
      return false;
    else if (__isset.token && !(token == rhs.token))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Message &a, Message &b);

typedef struct _Screenshot__isset {
  _Screenshot__isset() : token(false), hash(false), screenshot(false), timestamp(false), subdivisions(false) {}
  bool token;
  bool hash;
  bool screenshot;
  bool timestamp;
  bool subdivisions;
} _Screenshot__isset;

class Screenshot {
 public:

  static const char* ascii_fingerprint; // = "EC500A9237B8225E8EEAAA066785F02E";
  static const uint8_t binary_fingerprint[16]; // = {0xEC,0x50,0x0A,0x92,0x37,0xB8,0x22,0x5E,0x8E,0xEA,0xAA,0x06,0x67,0x85,0xF0,0x2E};

  Screenshot() : token(), hash(), screenshot(), timestamp(0), subdivisions(0) {
  }

  virtual ~Screenshot() throw() {}

  std::string token;
  std::string hash;
  std::string screenshot;
  int64_t timestamp;
  int16_t subdivisions;

  _Screenshot__isset __isset;

  void __set_token(const std::string& val) {
    token = val;
    __isset.token = true;
  }

  void __set_hash(const std::string& val) {
    hash = val;
    __isset.hash = true;
  }

  void __set_screenshot(const std::string& val) {
    screenshot = val;
    __isset.screenshot = true;
  }

  void __set_timestamp(const int64_t val) {
    timestamp = val;
    __isset.timestamp = true;
  }

  void __set_subdivisions(const int16_t val) {
    subdivisions = val;
    __isset.subdivisions = true;
  }

  bool operator == (const Screenshot & rhs) const
  {
    if (__isset.token != rhs.__isset.token)
      return false;
    else if (__isset.token && !(token == rhs.token))
      return false;
    if (__isset.hash != rhs.__isset.hash)
      return false;
    else if (__isset.hash && !(hash == rhs.hash))
      return false;
    if (__isset.screenshot != rhs.__isset.screenshot)
      return false;
    else if (__isset.screenshot && !(screenshot == rhs.screenshot))
      return false;
    if (__isset.timestamp != rhs.__isset.timestamp)
      return false;
    else if (__isset.timestamp && !(timestamp == rhs.timestamp))
      return false;
    if (__isset.subdivisions != rhs.__isset.subdivisions)
      return false;
    else if (__isset.subdivisions && !(subdivisions == rhs.subdivisions))
      return false;
    return true;
  }
  bool operator != (const Screenshot &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Screenshot & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Screenshot &a, Screenshot &b);

typedef struct _Unavailable__isset {
  _Unavailable__isset() : message(false) {}
  bool message;
} _Unavailable__isset;

class Unavailable : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  Unavailable() : message() {
  }

  virtual ~Unavailable() throw() {}

  std::string message;

  _Unavailable__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
    __isset.message = true;
  }

  bool operator == (const Unavailable & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const Unavailable &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Unavailable & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Unavailable &a, Unavailable &b);

typedef struct _UnknownToken__isset {
  _UnknownToken__isset() : message(false) {}
  bool message;
} _UnknownToken__isset;

class UnknownToken : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  UnknownToken() : message() {
  }

  virtual ~UnknownToken() throw() {}

  std::string message;

  _UnknownToken__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
    __isset.message = true;
  }

  bool operator == (const UnknownToken & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const UnknownToken &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UnknownToken & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(UnknownToken &a, UnknownToken &b);

typedef struct _IncorrectlyFormattedMessage__isset {
  _IncorrectlyFormattedMessage__isset() : message(false) {}
  bool message;
} _IncorrectlyFormattedMessage__isset;

class IncorrectlyFormattedMessage : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  IncorrectlyFormattedMessage() : message() {
  }

  virtual ~IncorrectlyFormattedMessage() throw() {}

  std::string message;

  _IncorrectlyFormattedMessage__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
    __isset.message = true;
  }

  bool operator == (const IncorrectlyFormattedMessage & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const IncorrectlyFormattedMessage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const IncorrectlyFormattedMessage & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(IncorrectlyFormattedMessage &a, IncorrectlyFormattedMessage &b);

} // namespace

#endif
