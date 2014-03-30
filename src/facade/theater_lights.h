/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_THEATER_LIGHTS_H_
#define FACADE_THEATER_LIGHTS_H_

#include <string>
using std::string;

namespace facade {
class TheaterLights {
 public:
  explicit TheaterLights(string description);
  virtual ~TheaterLights();
  void on();
  void off();
  void dim(int level);
  string toString();
 private:
  string description_;
};
}  // namespace facade
#endif  // FACADE_THEATER_LIGHTS_H_
