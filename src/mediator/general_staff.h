/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_GENERAL_STAFF_H_
#define MEDIATOR_GENERAL_STAFF_H_

#include <string>
using std::string;
#include "mediator/employee.h"
#include "mediator/colleague_event.h"
#include "mediator/staff_msg.h"

namespace mediator {
class GeneralStaff : public Employee {
 public:
  GeneralStaff(string title, string name);
  virtual ~GeneralStaff();
  static void OnColleagueEvent(Colleague *source, StaffMsg data,
                               Colleague* context);
 protected:
  ColleagueEvent<StaffMsg> general_staff_event_;
};
}  // namespace mediator
#endif  // MEDIATOR_GENERAL_STAFF_H_
