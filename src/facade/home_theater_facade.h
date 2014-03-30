/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_HOME_THEATER_FACADE_H_
#define FACADE_HOME_THEATER_FACADE_H_

#include <string>
using std::string;
#include "facade/amplifier.h"
#include "facade/tuner.h"
#include "facade/dvd_player.h"
#include "facade/cd_player.h"
#include "facade/projector.h"
#include "facade/theater_lights.h"
#include "facade/screen.h"
#include "facade/popcorn_popper.h"

namespace facade {
class HomeTheaterFacade {
 public:
  HomeTheaterFacade(Amplifier* amp, Tuner* tuner, DvdPlayer* dvd, CdPlayer* cd,
                    Projector* projector, Screen* screen, TheaterLights*
                    lights, PopcornPopper* popper);
  virtual ~HomeTheaterFacade();
  void watchMovie(string movie);
  void endMovie();
  void listenToCd(string cd_title);
  void endCd();
  void listenToRadio(double frequency);
  void endRadio();
 private:
  Amplifier* amp_;
  Tuner* tuner_;
  DvdPlayer* dvd_;
  CdPlayer* cd_;
  Projector* projector_;
  TheaterLights* lights_;
  Screen* screen_;
  PopcornPopper* popper_;
};
}  // namespace facade
#endif  // FACADE_HOME_THEATER_FACADE_H_
