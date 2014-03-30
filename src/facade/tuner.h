/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_TUNER_H_
#define FACADE_TUNER_H_

#include <string>
using std::string;
#include "facade/amplifier.h"

namespace facade {
class Amplifier;
class Tuner {
 public:
  explicit Tuner(string description, Amplifier* amplifier);
  virtual ~Tuner();
  void on();
  void off();
  void set_frequency(double frequency);
  void setAM();
  void setFM();
  string toString();
 private:
  string description_;
  Amplifier* amplifier_;
  double frequency_;
};
}  // namespace facade
#endif  // FACADE_TUNER_H_
