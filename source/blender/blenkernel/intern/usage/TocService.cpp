/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "TocService.h"

namespace wire {

uint32_t TocService_sendMessage_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->message.read(iprot);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_sendMessage_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TocService_sendMessage_args");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->message.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_sendMessage_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TocService_sendMessage_pargs");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->message)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_sendMessage_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unavailable.read(iprot);
          this->__isset.unavailable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unknownToken.read(iprot);
          this->__isset.unknownToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->incorrectlyFormattedMessage.read(iprot);
          this->__isset.incorrectlyFormattedMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_sendMessage_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("TocService_sendMessage_result");

  if (this->__isset.unavailable) {
    xfer += oprot->writeFieldBegin("unavailable", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->unavailable.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.unknownToken) {
    xfer += oprot->writeFieldBegin("unknownToken", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->unknownToken.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.incorrectlyFormattedMessage) {
    xfer += oprot->writeFieldBegin("incorrectlyFormattedMessage", ::apache::thrift::protocol::T_STRUCT, 3);
    xfer += this->incorrectlyFormattedMessage.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_sendMessage_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unavailable.read(iprot);
          this->__isset.unavailable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unknownToken.read(iprot);
          this->__isset.unknownToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->incorrectlyFormattedMessage.read(iprot);
          this->__isset.incorrectlyFormattedMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_sendScreenshot_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->screenshot.read(iprot);
          this->__isset.screenshot = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_sendScreenshot_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TocService_sendScreenshot_args");

  xfer += oprot->writeFieldBegin("screenshot", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->screenshot.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_sendScreenshot_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TocService_sendScreenshot_pargs");

  xfer += oprot->writeFieldBegin("screenshot", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += (*(this->screenshot)).write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_sendScreenshot_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unavailable.read(iprot);
          this->__isset.unavailable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unknownToken.read(iprot);
          this->__isset.unknownToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->incorrectlyFormattedMessage.read(iprot);
          this->__isset.incorrectlyFormattedMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->screenshotHashNotUnique.read(iprot);
          this->__isset.screenshotHashNotUnique = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_sendScreenshot_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("TocService_sendScreenshot_result");

  if (this->__isset.unavailable) {
    xfer += oprot->writeFieldBegin("unavailable", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->unavailable.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.unknownToken) {
    xfer += oprot->writeFieldBegin("unknownToken", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->unknownToken.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.incorrectlyFormattedMessage) {
    xfer += oprot->writeFieldBegin("incorrectlyFormattedMessage", ::apache::thrift::protocol::T_STRUCT, 3);
    xfer += this->incorrectlyFormattedMessage.write(oprot);
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.screenshotHashNotUnique) {
    xfer += oprot->writeFieldBegin("screenshotHashNotUnique", ::apache::thrift::protocol::T_STRUCT, 4);
    xfer += this->screenshotHashNotUnique.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_sendScreenshot_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unavailable.read(iprot);
          this->__isset.unavailable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unknownToken.read(iprot);
          this->__isset.unknownToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->incorrectlyFormattedMessage.read(iprot);
          this->__isset.incorrectlyFormattedMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->screenshotHashNotUnique.read(iprot);
          this->__isset.screenshotHashNotUnique = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_ping_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    xfer += iprot->skip(ftype);
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_ping_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TocService_ping_args");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_ping_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("TocService_ping_pargs");

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_ping_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unavailable.read(iprot);
          this->__isset.unavailable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TocService_ping_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("TocService_ping_result");

  if (this->__isset.unavailable) {
    xfer += oprot->writeFieldBegin("unavailable", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->unavailable.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

uint32_t TocService_ping_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->unavailable.read(iprot);
          this->__isset.unavailable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void TocServiceClient::sendMessage(const Message& message)
{
  send_sendMessage(message);
  recv_sendMessage();
}

void TocServiceClient::send_sendMessage(const Message& message)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("sendMessage", ::apache::thrift::protocol::T_CALL, cseqid);

  TocService_sendMessage_pargs args;
  args.message = &message;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void TocServiceClient::recv_sendMessage()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("sendMessage") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  TocService_sendMessage_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.unavailable) {
    throw result.unavailable;
  }
  if (result.__isset.unknownToken) {
    throw result.unknownToken;
  }
  if (result.__isset.incorrectlyFormattedMessage) {
    throw result.incorrectlyFormattedMessage;
  }
  return;
}

void TocServiceClient::sendScreenshot(const Screenshot& screenshot)
{
  send_sendScreenshot(screenshot);
  recv_sendScreenshot();
}

void TocServiceClient::send_sendScreenshot(const Screenshot& screenshot)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("sendScreenshot", ::apache::thrift::protocol::T_CALL, cseqid);

  TocService_sendScreenshot_pargs args;
  args.screenshot = &screenshot;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void TocServiceClient::recv_sendScreenshot()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("sendScreenshot") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  TocService_sendScreenshot_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.unavailable) {
    throw result.unavailable;
  }
  if (result.__isset.unknownToken) {
    throw result.unknownToken;
  }
  if (result.__isset.incorrectlyFormattedMessage) {
    throw result.incorrectlyFormattedMessage;
  }
  if (result.__isset.screenshotHashNotUnique) {
    throw result.screenshotHashNotUnique;
  }
  return;
}

void TocServiceClient::ping()
{
  send_ping();
  recv_ping();
}

void TocServiceClient::send_ping()
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("ping", ::apache::thrift::protocol::T_CALL, cseqid);

  TocService_ping_pargs args;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void TocServiceClient::recv_ping()
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("ping") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  TocService_ping_presult result;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.unavailable) {
    throw result.unavailable;
  }
  return;
}

bool TocServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void TocServiceProcessor::process_sendMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("TocService.sendMessage", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "TocService.sendMessage");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "TocService.sendMessage");
  }

  TocService_sendMessage_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "TocService.sendMessage", bytes);
  }

  TocService_sendMessage_result result;
  try {
    iface_->sendMessage(args.message);
  } catch (Unavailable &unavailable) {
    result.unavailable = unavailable;
    result.__isset.unavailable = true;
  } catch (UnknownToken &unknownToken) {
    result.unknownToken = unknownToken;
    result.__isset.unknownToken = true;
  } catch (IncorrectlyFormattedMessage &incorrectlyFormattedMessage) {
    result.incorrectlyFormattedMessage = incorrectlyFormattedMessage;
    result.__isset.incorrectlyFormattedMessage = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "TocService.sendMessage");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("sendMessage", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "TocService.sendMessage");
  }

  oprot->writeMessageBegin("sendMessage", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "TocService.sendMessage", bytes);
  }
}

void TocServiceProcessor::process_sendScreenshot(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("TocService.sendScreenshot", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "TocService.sendScreenshot");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "TocService.sendScreenshot");
  }

  TocService_sendScreenshot_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "TocService.sendScreenshot", bytes);
  }

  TocService_sendScreenshot_result result;
  try {
    iface_->sendScreenshot(args.screenshot);
  } catch (Unavailable &unavailable) {
    result.unavailable = unavailable;
    result.__isset.unavailable = true;
  } catch (UnknownToken &unknownToken) {
    result.unknownToken = unknownToken;
    result.__isset.unknownToken = true;
  } catch (IncorrectlyFormattedMessage &incorrectlyFormattedMessage) {
    result.incorrectlyFormattedMessage = incorrectlyFormattedMessage;
    result.__isset.incorrectlyFormattedMessage = true;
  } catch (ScreenshotHashNotUnique &screenshotHashNotUnique) {
    result.screenshotHashNotUnique = screenshotHashNotUnique;
    result.__isset.screenshotHashNotUnique = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "TocService.sendScreenshot");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("sendScreenshot", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "TocService.sendScreenshot");
  }

  oprot->writeMessageBegin("sendScreenshot", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "TocService.sendScreenshot", bytes);
  }
}

void TocServiceProcessor::process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("TocService.ping", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "TocService.ping");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "TocService.ping");
  }

  TocService_ping_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "TocService.ping", bytes);
  }

  TocService_ping_result result;
  try {
    iface_->ping();
  } catch (Unavailable &unavailable) {
    result.unavailable = unavailable;
    result.__isset.unavailable = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "TocService.ping");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("ping", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "TocService.ping");
  }

  oprot->writeMessageBegin("ping", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "TocService.ping", bytes);
  }
}

::boost::shared_ptr< ::apache::thrift::TProcessor > TocServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< TocServiceIfFactory > cleanup(handlerFactory_);
  ::boost::shared_ptr< TocServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::boost::shared_ptr< ::apache::thrift::TProcessor > processor(new TocServiceProcessor(handler));
  return processor;
}
} // namespace

