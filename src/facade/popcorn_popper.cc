/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/popcorn_popper.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace facade {
PopcornPopper::PopcornPopper(string description) : description_(description) {
}

PopcornPopper::~PopcornPopper() {
}

void PopcornPopper::on() {
  cout << description_ << " on" << endl;
}

void PopcornPopper::off() {
  cout << description_ << " off" << endl;
}

void PopcornPopper::pop() {
  cout << description_ << " popping popcorn!" << endl;
}

string PopcornPopper::toString() {
  return description_;
}
}  // namespace facade
