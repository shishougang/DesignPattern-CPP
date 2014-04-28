/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "mediator/sys_admin.h"
#include "mediator/staff_msg.h"

namespace mediator {
SysAdmin::SysAdmin(string name) : GeneralStaff("Sys Admin", name) {
}

SysAdmin::~SysAdmin() {
}

void SysAdmin::AdviceForSoftwareUpdate(string sw_name) {
  general_staff_event_.FireEvent(StaffMsg("Software Update Advice", sw_name));
}
}  // namespace mediator
