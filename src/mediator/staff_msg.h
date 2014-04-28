/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_STAFF_MSG_H_
#define MEDIATOR_STAFF_MSG_H_

#include <string>
using std::string;

namespace mediator {
class StaffMsg {
 public:
  StaffMsg(string name, string data) : msg_name_(name), msg_data_(data) {
  }
  virtual ~StaffMsg() {}
  string msg_name() {return msg_name_;}
  string msg_data() {return msg_data_;}
 private:
  string msg_name_;
  string msg_data_;
};
}  // namespace mediator
#endif  // MEDIATOR_STAFF_MSG_H_
