/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/cd_player.h"
using std::cout;
using std::endl;

namespace facade {
CdPlayer::CdPlayer(string description, Amplifier* amplifier) :
    description_(description), amplifier_(amplifier) {
}

CdPlayer::~CdPlayer() {
}

void CdPlayer::on() {
  cout << description_ << " on" << endl;
}

void CdPlayer::off() {
  cout << description_ << " off" << endl;
}

void CdPlayer::eject() {
  title_ = "";
  cout << description_ << " eject" << endl;
}

void CdPlayer::play(string title) {
  title_ = title;
  current_track_ = 0;
  cout << description_ << " playing \"" << title_ << "\"" << endl;
}

void CdPlayer::play(int track) {
  if (title_ == "") {
    cout << description_ << " can't play track " << track <<
        ", no cd inserted" << endl;
  } else {
    current_track_ = track;
    cout << description_ << " playing track " << current_track_ << endl;
  }
}

void CdPlayer::stop() {
  current_track_ = 0;
  cout << description_ << " stopped" << endl;
}

void CdPlayer::pause() {
  cout << description_ << " paused \"" << title_ << "\"" << endl;
}

ostream& operator<<(ostream& out, const CdPlayer& cd_player) {
  return out << cd_player.description_;
}
}  // namespace facade
