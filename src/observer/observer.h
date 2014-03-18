/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_OBSERVER_H_
#define OBSERVER_OBSERVER_H_

namespace observer {
class Observer {
 public:
  virtual ~Observer() {}
  virtual void update(float temp, float humdity, float pressure) = 0;
};
}  // namespace observer

#endif  // OBSERVER_OBSERVER_H_
