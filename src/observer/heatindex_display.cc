/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "observer/heatindex_display.h"
#include <cstdio>

namespace observer {
HeatIndexDisplay::HeatIndexDisplay(Subject *weather_data)
    : weather_data_(weather_data), heat_index_(0.0f) {
  weather_data_->registerObserver(this);
}

HeatIndexDisplay::~HeatIndexDisplay() {
}

void HeatIndexDisplay::update(float temp, float humidity, float pressure) {
  heat_index_ = computeHeatIndex(temp, humidity);
  display();
}

float HeatIndexDisplay::computeHeatIndex(float t, float rh) {
  float index = static_cast<float>(
      (16.923 + (0.185212 * t) + (5.37941 * rh) -
       (0.100254 * t * rh) + (0.00941695 * (t * t)) +
       (0.00728898 * (rh * rh)) + (0.000345372 * (t * t * rh))
       - (0.000814971 * (t * rh * rh)) +
       (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) +
       (0.0000291583 * (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
       (0.000000197483 * (t * rh * rh * rh)) -
       (0.0000000218429 * (t * t * t * rh * rh)) +
       0.000000000843296 * (t * t * rh * rh * rh)) -
      (0.0000000000481975 * (t * t * t * rh * rh * rh)));
  return index;
}

void HeatIndexDisplay::display() {
  printf("Heat index is %f\n", heat_index_);
}
}  // namespace observer
