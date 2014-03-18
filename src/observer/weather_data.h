/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_WEATHER_DATA_H_
#define OBSERVER_WEATHER_DATA_H_

#include <vector>
#include "observer/subject.h"
#include "observer/observer.h"

namespace observer {
class WeatherData : public Subject {
 public:
  WeatherData();
  virtual ~WeatherData();
  virtual void registerObserver(Observer *o);
  virtual void removeObserver(Observer *o);
  virtual void notifyObservers();
  void measurementsChanged();
  void setMeasurements(float temperature, float humidity, float pressure);
  float temperature();
  float humidity();
  float pressure();
 private:
  std::vector<Observer*> *observers_;
  float temperature_;
  float humidity_;
  float pressure_;
};
}  // namespace observer
#endif  // OBSERVER_WEATHER_DATA_H_
