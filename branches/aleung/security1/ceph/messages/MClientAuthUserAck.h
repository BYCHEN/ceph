// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*- 
/*
 * Ceph - scalable distributed file system
 *
 * Copyright (C) 2004-2006 Sage Weil <sage@newdream.net>
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1, as published by the Free Software 
 * Foundation.  See file COPYING.
 * 
 */


#ifndef __MCLIENTAUTHUSERACK_H
#define __MCLIENTAUTHUSERACK_H

#include "msg/Message.h"

class MClientAuthUserAck : public Message {
 public:
  MClientAuthUserAck() : Message(MSG_CLIENT_AUTH_USER_ACK) { 
  }

  char *get_type_name() { return "client_auth_user_ack"; }

  uid_t get_uid() { return 0; }  // fixme

  void decode_payload() {  
  }
  void encode_payload() {  
  }
};

#endif
