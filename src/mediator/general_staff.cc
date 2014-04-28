/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "mediator/general_staff.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace mediator {
GeneralStaff::GeneralStaff(string title, string name)
    : Employee(title, name), general_staff_event_(this, OnColleagueEvent) {
}

GeneralStaff::~GeneralStaff() {
}

void GeneralStaff::OnColleagueEvent(Colleague *source, StaffMsg data,
                                           Colleague* context) {
  Employee *src_colleague = static_cast<Employee *> (source);
  Employee *ctx_colleague = static_cast<Employee *> (context);
  cout << endl << ctx_colleague->title()
       << " - " << ctx_colleague->name()
       << " is notified by "
       << src_colleague->title() << " - "
       << src_colleague->name()
       << " of STAFF Event " << data.msg_name()
       << " with " << data.msg_data();
}
}  // namespace mediator
