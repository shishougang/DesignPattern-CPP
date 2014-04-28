/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "mediator/manager.h"
#include "mediator/staff_msg.h"

namespace mediator {
Manager::Manager(string name) : GeneralStaff("Manager", name) {
}

Manager::~Manager() {
}

void Manager::BookMeetingRoom(string meeting_room_name) {
  general_staff_event_.FireEvent(StaffMsg("Meeting Room Booking",
                                          meeting_room_name));
}
}  // namespace mediator
