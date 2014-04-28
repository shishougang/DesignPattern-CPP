/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_SYS_ADMIN_H_
#define MEDIATOR_SYS_ADMIN_H_

#include <string>
using std::string;
#include "mediator/general_staff.h"

namespace mediator {
class SysAdmin : public GeneralStaff {
 public:
  explicit SysAdmin(string name);
  virtual ~SysAdmin();
  void AdviceForSoftwareUpdate(string sw_name);
};
}  // namespace mediator
#endif  // MEDIATOR_SYS_ADMIN_H_
