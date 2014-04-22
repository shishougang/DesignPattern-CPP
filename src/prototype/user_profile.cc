/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "prototype/user_profile.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace prototype {
UserProfile::~UserProfile() {
}

void UserProfile::GetDatabaseInformation() {
  cout << "take 5 seconds to get database information" << endl;
  database_information_ = "Long database information";
}

Prototype* UserProfile::Clone() {
  UserProfile *u = new UserProfile();
  u->database_information_ = database_information_;
  return u;
}

void UserProfile::ShowInformation() {
  cout << "Showing " << database_information_ << endl;
}
}  // namespace prototype
