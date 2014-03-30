/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_CD_PLAYER_H_
#define FACADE_CD_PLAYER_H_

#include <string>
using std::string;
#include <iostream>  // NOLINT
using std::ostream;
#include "facade/amplifier.h"

namespace facade {
class CdPlayer {
 public:
  explicit CdPlayer(string description, Amplifier* amplifier);
  virtual ~CdPlayer();
  void on();
  void off();
  void eject();
  void play(string title);
  void play(int track);
  void stop();
  void pause();
  friend ostream& operator<<(ostream& out, const CdPlayer& cd_player);
 private:
  string description_;
  int current_track_;
  Amplifier* amplifier_;
  string title_;
};  
}  // namespace facade
#endif  // FACADE_CD_PLAYER_H_
