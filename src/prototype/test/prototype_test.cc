/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "prototype/prototype.h"
#include "prototype/configuration.h"
#include "prototype/user_profile.h"
#include "prototype/prototype_manager.h"
using namespace prototype;  // NOLINT

int main(int argc, char *argv[]) {
  Configuration *c = new Configuration();
  c->GetFileInformation();

  UserProfile *u = new UserProfile();
  u->GetDatabaseInformation();

  PrototypeManager *manager = new PrototypeManager();
  manager->AddPrototype(c, 0);
  manager->AddPrototype(u, 1);

  Configuration *config_clone = dynamic_cast<Configuration *>
      (manager->GetPrototype(0));
  config_clone->ShowInformation();

  UserProfile *user_profile_clone = dynamic_cast<UserProfile *>
      (manager->GetPrototype(1));
  user_profile_clone->ShowInformation();
  delete user_profile_clone;
  delete config_clone;
  delete manager;
  delete u;
  delete c;
}
