/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef CHAINRESPONSIBILITY_STAFF_H_
#define CHAINRESPONSIBILITY_STAFF_H_

#include <string>
using std::string;
#include "chain_of_responsibility/request.h"

namespace chain_of_responsibility {
class Staff {
 public:
  virtual ~Staff() {}
  void set_name(string name) {name_ = name;}
  string name() {return name_;}
  void set_boss(Staff *boss) {boss_ = boss;}
  Staff* boss() {return boss_;}
  virtual void ProcessRequest(Request *a_request) = 0;
 protected:
  string name_;
  Staff *boss_;
};
}  // namespace chain_of_responsibility
#endif  // CHAINRESPONSIBILITY_STAFF_H_
