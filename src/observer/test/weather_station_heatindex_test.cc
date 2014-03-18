/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "observer/weather_data.h"
#include "observer/current_conditions_display.h"
#include "observer/statistics_display.h"
#include "observer/forecast_display.h"
#include "observer/heatindex_display.h"
using namespace observer;  // NOLINT
int main(int argc, char *argv[]) {
  WeatherData *weather_data = new WeatherData();

  CurrentConditionsDisplay *current_display =
      new CurrentConditionsDisplay(weather_data);
  StatisticsDisplay *statistics_display =
      new StatisticsDisplay(weather_data);
  ForecastDisplay *forecast_display =
      new ForecastDisplay(weather_data);
  HeatIndexDisplay *heatindex_display =
      new HeatIndexDisplay(weather_data);

  weather_data->setMeasurements(80, 65, 30.4f);
  weather_data->setMeasurements(82, 70, 29.2f);
  weather_data->setMeasurements(78, 90, 29.2f);
}
