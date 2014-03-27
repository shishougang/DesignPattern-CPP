/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/ceiling_fan.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace command {
CeilingFan::CeilingFan(string location) : location_(location) {
}

CeilingFan::~CeilingFan() {
}

void CeilingFan::high() {
  speed_ = HIGH;
  cout << location_ << " ceiling fan is on high" << endl;
}
void CeilingFan::medium() {
  speed_ = MEDIUM;
  cout << location_ << " ceiling fan is on medium" << endl;
}

void CeilingFan::low() {
  speed_ = LOW;
  cout << location_ << " ceiling fan is on low" << endl;
}

void CeilingFan::off() {
  speed_ = OFF;
  cout << location_ << " ceiling fan is off" << endl;
}

int CeilingFan::speed() {
  return speed_;
}
}  // namespace command
