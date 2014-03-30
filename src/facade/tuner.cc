/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/tuner.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace facade {
Tuner::Tuner(string description, Amplifier* amplifier) :
    description_(description), amplifier_(amplifier) {
}

Tuner::~Tuner() {
}

void Tuner::on() {
  cout << description_ << " on" << endl;
}

void Tuner::off() {
  cout << description_ << " off" << endl;
}

void Tuner::set_frequency(double frequency) {
  frequency_ = frequency;
  cout << description_ << " setting frequency to " << frequency_ << endl;
}

void Tuner::setAM() {
  cout << description_ << " setting AM mode" << endl;
}

void Tuner::setFM() {
  cout << description_ << " setting FM mode" << endl;
}

string Tuner::toString() {
  return description_;
}
}  // namespace facade
