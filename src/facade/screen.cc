/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/screen.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace facade {
Screen::Screen(string description) : description_(description) {
}

Screen::~Screen() {
}

void Screen::up() {
  cout << description_ << " going up" << endl;
}

void Screen::down() {
  cout << description_ << " going down" << endl;
}

string Screen::toString() {
  return description_;
}
}  // namespace facade
