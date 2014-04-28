/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_EMPLOEE_H_
#define MEDIATOR_EMPLOEE_H_

#include <string>
using std::string;
#include "mediator/colleague.h"

namespace mediator {
class Employee : public Colleague {
 public:
  Employee(string title, string name) : title_(title), name_(name) {
  }
  virtual ~Employee() {}
  string title() {return title_;}
  string name() {return name_;}
 protected:
  string title_;
  string name_;
};
}  // namespace mediator
#endif  // MEDIATOR_EMPLOEE_H_
