/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "observer/statistics_display.h"
#include <cstdio>

namespace observer {
StatisticsDisplay::StatisticsDisplay(Subject *weather_data)
    : weather_data_(weather_data), max_temp_(0.0f), min_temp_(200),
      temp_sum_(0.0f), num_readings_(0) {
  weather_data_->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay() {
}

void StatisticsDisplay::update(float temp, float humidity, float pressure) {
  temp_sum_ += temp;
  num_readings_++;

  if (temp > max_temp_) {
    max_temp_ = temp;
  }
  if (temp < min_temp_) {
    min_temp_ = temp;
  }
  display();
}

void StatisticsDisplay::display() {
  printf("Avg/Max/Min temperature = %f/%f/%f\n", (temp_sum_ / num_readings_),
         max_temp_, min_temp_);
}
}  // namespace observer
