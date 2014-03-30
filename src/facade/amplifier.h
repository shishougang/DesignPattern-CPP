/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_AMPLIFIER_H_
#define FACADE_AMPLIFIER_H_

#include <string>
using std::string;
#include "facade/tuner.h"
#include "facade/dvd_player.h"
#include "facade/cd_player.h"

namespace facade {
class CdPlayer;
class DvdPlayer;
class Tuner;
class Amplifier {
 public:
  explicit Amplifier(string description);
  virtual ~Amplifier();
  void on();
  void off();
  void setStereoSound();
  void setSurroundSound();
  void setVolume(int level);
  void setTuner(Tuner* tuner);
  void setDvd(DvdPlayer* dvd);
  void setCd(CdPlayer* cd);
  string toString();
 private:
  string description_;
  Tuner* tuner_;
  DvdPlayer* dvd_;
  CdPlayer* cd_;
};
}  // namespace facade
#endif  // FACADE_AMPLIFIER_H_
