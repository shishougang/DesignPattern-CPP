/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/amplifier.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace facade {
Amplifier::Amplifier(string description) : description_(description) {
}

Amplifier::~Amplifier() {
}

void Amplifier::on() {
  cout << description_ << " on" << endl;
}

void Amplifier::off() {
  cout << description_ << " off" << endl;
}

void Amplifier::setStereoSound() {
  cout << description_ << " stereo mode on" << endl;
}

void Amplifier::setSurroundSound() {
  cout << description_ << " surround sound on" << endl;
}

void Amplifier::setVolume(int level) {
  cout << description_ << " setting volume to " << level << endl;
}

void Amplifier::setTuner(Tuner* tuner) {
  cout << description_ << " setting tuner to " << dvd_ << endl;
  tuner_ = tuner;
}

void Amplifier::setDvd(DvdPlayer *dvd) {
  cout << description_ << " settign DVD player to " << dvd << endl;
  dvd_ = dvd;
}

void Amplifier::setCd(CdPlayer *cd) {
  cout << description_ + " setting CD player to " << cd << endl;
}

string Amplifier::toString() {
  return description_;
}
}  // namespace facade
