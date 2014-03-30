/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/home_theater_facade.h"
#include <iostream>   // NOLINT
using std::cout;
using std::endl;

namespace facade {
HomeTheaterFacade::HomeTheaterFacade(Amplifier* amp, Tuner* tuner, DvdPlayer*
                                     dvd, CdPlayer* cd, Projector* projector,
                                     Screen* screen, TheaterLights* lights,
                                     PopcornPopper* popper) {
  amp_ = amp;
  tuner_ = tuner;
  dvd_ = dvd;
  cd_ = cd;
  projector_ = projector;
  lights_ = lights;
  screen_ = screen;
  popper_ = popper;
}

HomeTheaterFacade::~HomeTheaterFacade() {
}

void HomeTheaterFacade::watchMovie(string movie) {
  cout << "Get ready to wath a movie..." << endl;
  popper_->on();
  popper_->pop();
  lights_->dim(10);
  screen_->down();
  projector_->on();
  projector_->wideScreenMode();
  amp_->on();
  amp_->setDvd(dvd_);
  amp_->setSurroundSound();
  amp_->setVolume(5);
  dvd_->on();
  dvd_->play(movie);
}

void HomeTheaterFacade::endMovie() {
  cout << "Shutting movie theater down..." << endl;
  popper_->off();
  lights_->on();
  screen_->up();
  projector_->off();
  amp_->off();
  dvd_->stop();
  dvd_->eject();
  dvd_->off();
}

void HomeTheaterFacade::listenToCd(string cd_title) {
  cout << "Get ready for an audiopile experience..." << endl;
  lights_->on();
  amp_->on();
  amp_->setVolume(5);
  amp_->setCd(cd_);
  amp_->setStereoSound();
  cd_->on();
  cd_->play(cd_title);
}

void HomeTheaterFacade::endCd() {
  cout << "Shutting down CD..." << endl;
  amp_->off();
  amp_->setCd(cd_);
  cd_->eject();
  cd_->off();
}

void HomeTheaterFacade::listenToRadio(double frequency) {
  cout << "Tuning in the airwaves..." << endl;
  tuner_->on();
  tuner_->set_frequency(frequency);
  amp_->on();
  amp_->setVolume(5);
  amp_->setTuner(tuner_);
}

void HomeTheaterFacade::endRadio() {
  cout << "Shutting down the tuner..." << endl;
  tuner_->off();
  amp_->off();
}
}  // namespace facade
