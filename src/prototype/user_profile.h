/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROTOTYPE_USER_PROFILE_H_
#define PROTOTYPE_USER_PROFILE_H_

#include <string>
using std::string;
#include "prototype/prototype.h"

namespace prototype {
class UserProfile : public Prototype {
 public:
  virtual ~UserProfile();
  void GetDatabaseInformation();
  virtual Prototype* Clone();
  void ShowInformation();
 private:
  string database_information_;
};
}  // namespace prototype
#endif  // PROTOTYPE_USER_PROFILE_H_
