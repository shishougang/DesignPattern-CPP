/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_SUBJECT_H_
#define OBSERVER_SUBJECT_H_

#include "observer/observer.h"

namespace observer {
class Subject {
 public:
  virtual ~Subject() {}
  virtual void registerObserver(Observer *o) = 0;
  virtual void removeObserver(Observer *o) = 0;
  virtual void notifyObservers() = 0;
};
}  // namespace observer
#endif  // OBSERVER_SUBJECT_H_
