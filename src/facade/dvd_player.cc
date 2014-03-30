/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/dvd_player.h"
using std::cout;
using std::endl;

namespace facade {
DvdPlayer::DvdPlayer(string description, Amplifier* amplifier) :
    description_(description), amplifier_(amplifier) {
}

DvdPlayer::~DvdPlayer() {
}

void DvdPlayer::on() {
  cout << description_ << " on" << endl;
}

void DvdPlayer::off() {
  cout << description_ << " off" << endl;
}

void DvdPlayer::eject() {
  movie_ = "";
  current_track_ = 0;
  cout << description_ << " eject" << endl;
}

void DvdPlayer::play(string movie) {
  movie_ = movie;
  current_track_ = 0;
  cout << description_ << " playing \"" << movie_ << "\"" << endl;
}

void DvdPlayer::play(int track) {
  if (movie_ == "") {
    cout << description_ << " can't play track " << track << " no dvd inserted"
         << endl;
  } else {
    current_track_ = track;
    cout << description_ << " playing track" << current_track_ << " of \""
         << movie_ << "\"" << endl;
  }
}

void DvdPlayer::stop() {
  current_track_ = 0;
  cout << description_ << " stopped \"" << movie_ << "\"" << endl;
}

void DvdPlayer::pause() {
  cout << description_ << " paused \"" << movie_ << "\"" << endl;
}

void DvdPlayer::setTwoChannelAudio() {
  cout << description_ << " set tow channel audio" << endl;
}

void DvdPlayer::setSurroundAudio() {
  cout << description_ << " set surround audio" << endl;
}

ostream& operator<<(ostream& out, const DvdPlayer& dvd_player) {
  return out << dvd_player.description_;
}
}  // namespace facade
