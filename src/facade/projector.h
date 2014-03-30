/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_PROJECTOR_H_
#define FACADE_PROJECTOR_H_

#include <string>
using std::string;
#include "facade/dvd_player.h"

namespace facade {
class Projector {
 public:
  explicit Projector(string description, DvdPlayer* dvd_player);
  virtual ~Projector();
  void on();
  void off();
  void wideScreenMode();
  void tvMode();
  string toString();
 private:
  string description_;
  DvdPlayer* dvd_player_;
};
}  // namespace facade
#endif  // FACADE_PROJECTOR_H_
