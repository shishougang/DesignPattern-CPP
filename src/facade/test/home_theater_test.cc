/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "facade/amplifier.h"
#include "facade/tuner.h"
#include "facade/dvd_player.h"
#include "facade/cd_player.h"
#include "facade/projector.h"
#include "facade/theater_lights.h"
#include "facade/screen.h"
#include "facade/popcorn_popper.h"
#include "facade/home_theater_facade.h"
using namespace facade;  // NOLINT

int main(int argc, char* argv[]) {
  Amplifier *amp = new Amplifier("Top-O-Line Amplifier");
  Tuner *tuner = new Tuner("Top-O-Line AM/FM Tuner", amp);
  DvdPlayer *dvd = new DvdPlayer("Top-O-Line DVD Player", amp);
  CdPlayer *cd = new CdPlayer("Top-O-Line CD Player", amp);
  Projector *projector = new Projector("Top-O-Line Projector", dvd);
  TheaterLights *lights = new TheaterLights("Theater Ceiling Lights");
  Screen *screen = new Screen("Theater Screen");
  PopcornPopper *popper = new PopcornPopper("Popcorn Popper");

  HomeTheaterFacade *homeTheater = new HomeTheaterFacade(amp, tuner, dvd, cd,
                                                         projector, screen,
                                                         lights,  popper);

  homeTheater->watchMovie("Raiders of the Lost Ark");
  homeTheater->endMovie();

  delete homeTheater;
  delete popper;
  delete screen;
  delete lights;
  delete projector;
  delete cd;
  delete dvd;
  delete tuner;
  delete amp;
  return 0;
}

