/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "observer/current_conditions_display.h"
#include <cstdio>

namespace observer {
CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weather_data)
    : weather_data_(weather_data) {
  weather_data->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
}

void CurrentConditionsDisplay::update(float temp, float humidity,
                                      float pressure) {
  temperature_ = temp;
  humidity_ = humidity;
  display();
}

void CurrentConditionsDisplay::display() {
  printf("Current conditions: %fF degrees and %f%% humidity\n", temperature_,
         humidity_);
}
}  // namespace observer
