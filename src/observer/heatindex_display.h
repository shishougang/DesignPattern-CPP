/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_HEATINDEX_DISPLAY_H_
#define OBSERVER_HEATINDEX_DISPLAY_H_

#include "base/macros.h"
#include "observer/observer.h"
#include "observer/display_element.h"
#include "observer/subject.h"

namespace observer {
class HeatIndexDisplay : public Observer, public DisplayElement {
 public:
  explicit HeatIndexDisplay(Subject *weather_data);
  virtual ~HeatIndexDisplay();
  float computeHeatIndex(float t, float rh);
  virtual void update(float temp, float humidity, float pressure);
  virtual void display();
 private:
  float heat_index_;
  Subject *weather_data_;
  DISALLOW_COPY_AND_ASSIGN(HeatIndexDisplay);
};
}  // namespace observer
#endif  // OBSERVER_HEATINDEX_DISPLAY_H_

