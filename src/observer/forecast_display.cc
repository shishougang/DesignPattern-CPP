/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "observer/forecast_display.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace observer {
ForecastDisplay::ForecastDisplay(Subject *weather_data)
    : weather_data_(weather_data), current_pressure_(29.92f) {
  weather_data_->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay() {
}

void ForecastDisplay::update(float temp, float humidity,
                             float pressure) {
  last_pressure_ = current_pressure_;
  current_pressure_ = pressure;
  display();
}

void ForecastDisplay::display() {
  cout << "Forecast: ";
  if (current_pressure_ > last_pressure_) {
    cout << "Improving weather on the way!" << endl;
  } else if (current_pressure_ == last_pressure_) {
    cout << "More of the same" << endl;
  } else if (current_pressure_ < last_pressure_) {
    cout << "Wach out for cooler, rainy weather" << endl;
  }
}
}  // namespace observer
