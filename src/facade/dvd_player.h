/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_DVD_PLAYER_H_
#define FACADE_DVD_PLAYER_H_

#include <string>
using std::string;
#include <iostream>  // NOLINT
using std::ostream;
#include "facade/amplifier.h"

namespace facade {
class Amplifier;
class DvdPlayer {
 public:
  explicit DvdPlayer(string description, Amplifier* amplifier);
  virtual ~DvdPlayer();
  void on();
  void off();
  void eject();
  void play(string movie);
  void play(int track);
  void stop();
  void pause();
  void setTwoChannelAudio();
  void setSurroundAudio();
  friend ostream& operator<<(ostream& out, const DvdPlayer& dvd_player);
 private:
  string description_;
  int current_track_;
  Amplifier* amplifier_;
  string movie_;
};
}  // namespace facade
#endif  // FACADE_DVD_PLAYER_H_
