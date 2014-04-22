/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "prototype/configuration.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace prototype {
Configuration::~Configuration() {
}

void Configuration::GetFileInformation() {
  cout << "takes 5 seconds to get information" << endl;
  file_information_ = "Long file information";
}

Prototype* Configuration::Clone() {
  Configuration *c = new Configuration();
  c->file_information_ = file_information_;
  return c;
}

void Configuration::ShowInformation() {
  cout << "Showing " << file_information_ << endl;
}
}  // namespace prototype
