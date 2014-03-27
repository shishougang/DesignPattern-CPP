/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/light.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace command {
Light::Light(string location) : location_(location) {
}

Light::~Light() {
}

void Light::on() {
  level_ = 100;
  cout << "Light is on" << endl;
}

void Light::off() {
  level_ = 0;
  cout << "Light is off" << endl;
}

void Light::dim(int level) {
  level_ = level;
  if (level_ == 0) {
    off();
  } else {
    cout << "Light is dimmed to " << level_ << "%" << endl;
  }
}

int Light::level() {
  return level_;
}
}  // namespace command
