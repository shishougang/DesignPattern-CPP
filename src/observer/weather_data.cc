/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "observer/weather_data.h"
#include <algorithm>

namespace observer {
WeatherData::WeatherData() {
  observers_ = new std::vector<Observer*>;
}

WeatherData::~WeatherData() {
  while (!observers_->empty()) {
    Observer* observer = observers_->back();
    delete observer;
    observers_->pop_back();
  }
  delete observers_;
}

void WeatherData::registerObserver(Observer *o) {
  observers_->push_back(o);
}

void WeatherData::removeObserver(Observer *o) {
  std::vector<Observer*>::iterator it;
  it = std::find(observers_->begin(), observers_->end(), o);
  if (it != observers_->end()) {
    observers_->erase(it);
  }
  delete o;
}

void WeatherData::notifyObservers() {
  int i;
  for (i = 0; i < observers_->size(); ++i) {
    Observer* observer = (*observers_)[i];
    observer->update(temperature_, humidity_, pressure_);
  }
}

void WeatherData::measurementsChanged() {
  notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity,
                                  float pressure) {
  temperature_ = temperature;
  humidity_ = humidity;
  pressure_ = pressure;
  measurementsChanged();
}

float WeatherData::temperature() {
  return temperature_;
}

float WeatherData::humidity() {
  return humidity_;
}

float WeatherData::pressure() {
  return pressure_;
}
}  // namespace observer
