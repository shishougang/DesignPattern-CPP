/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_STATISTICS_DISPLAY_H_
#define OBSERVER_STATISTICS_DISPLAY_H_

#include "base/macros.h"
#include "observer/observer.h"
#include "observer/display_element.h"
#include "observer/subject.h"

namespace observer {
class StatisticsDisplay : public Observer, public DisplayElement {
 public:
  explicit StatisticsDisplay(Subject *weather_data);
  ~StatisticsDisplay();
  virtual void update(float temp, float humidity, float pressure);
  virtual void display();
 private:
  float max_temp_;
  float min_temp_;
  float temp_sum_;
  int num_readings_;
  Subject *weather_data_;
  DISALLOW_COPY_AND_ASSIGN(StatisticsDisplay);
};
}  // namespace observer
#endif  // OBSERVER_STATISTICS_DISPLAY_H_
