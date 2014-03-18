/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_FORECAST_DISPLAY_H_
#define OBSERVER_FORECAST_DISPLAY_H_

#include "base/macros.h"
#include "observer/observer.h"
#include "observer/display_element.h"
#include "observer/subject.h"

namespace observer {
class ForecastDisplay : public Observer, public DisplayElement {
 public:
  explicit ForecastDisplay(Subject *weather_data);
  virtual ~ForecastDisplay();
  virtual void update(float temp, float humidity, float pressure);
  virtual void display();
 private:
  float current_pressure_;
  float last_pressure_;
  Subject *weather_data_;
  DISALLOW_COPY_AND_ASSIGN(ForecastDisplay);
};
}  // namespace observer
#endif  // OBSERVER_FORECAST_DISPLAY_H_
