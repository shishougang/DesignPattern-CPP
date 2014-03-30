/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/projector.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace facade {
Projector::Projector(string description, DvdPlayer* dvd_player) :
    description_(description), dvd_player_(dvd_player) {
}

Projector::~Projector() {
}

void Projector::on() {
  cout << description_ << " on" << endl;
}

void Projector::off() {
  cout << description_ << " off" << endl;
}

void Projector::wideScreenMode() {
  cout << description_ << " in widescreen mode" << endl;
}

void Projector::tvMode() {
  cout << description_ << " in tv mode" << endl;
}

string Projector::toString() {
  return description_;
}
}  // namespace facade
