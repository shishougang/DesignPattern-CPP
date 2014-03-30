/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/theater_lights.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace facade {
TheaterLights::TheaterLights(string description) :
    description_(description) {
}

TheaterLights::~TheaterLights() {
}

void TheaterLights::on() {
  cout << description_ << " on" << endl;
}

void TheaterLights::off() {
  cout << description_ << " off" << endl;
}

void TheaterLights::dim(int level) {
  cout << description_ << " diming to " << level << "%" << endl;
}

string TheaterLights::toString() {
  return description_;
}
}  // namespace facade
