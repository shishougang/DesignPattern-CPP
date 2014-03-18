/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_CURRENT_CONDITIONS_DISPLAY_H_
#define OBSERVER_CURRENT_CONDITIONS_DISPLAY_H_

#include "base/macros.h"
#include "observer/observer.h"
#include "observer/display_element.h"
#include "observer/subject.h"

namespace observer {
class CurrentConditionsDisplay : public Observer, public DisplayElement {
 public:
  explicit CurrentConditionsDisplay(Subject *weather_data);
  virtual ~CurrentConditionsDisplay();
  virtual void update(float temp, float humidity, float pressure);
  virtual void display();
 private:
  float temperature_;
  float humidity_;
  Subject *weather_data_;
  DISALLOW_COPY_AND_ASSIGN(CurrentConditionsDisplay);
};
}  // namespace observer
#endif  // OBSERVER_CURRENT_CONDITIONS_DISPLAY_H_
