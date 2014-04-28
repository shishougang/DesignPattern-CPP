/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_MANAGER_H_
#define MEDIATOR_MANAGER_H_

#include <string>
using std::string;
#include "mediator/general_staff.h"
#include "mediator/colleague_event.h"

namespace mediator {
class Manager : public GeneralStaff {
 public:
  explicit Manager(string name);
  virtual ~Manager();
  void BookMeetingRoom(string meeting_room_name);
};
}  // namespace mediator
#endif  // MEDIATOR_MANAGER_H_
