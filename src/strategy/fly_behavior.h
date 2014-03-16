/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_FLY_BEHAVIOR_H_
#define STRATEGY_FLY_BEHAVIOR_H_

namespace strategy {
class FlyBehavior {
 public:
  virtual ~FlyBehavior() {}
  virtual void fly() = 0;
};
}  // namespace strategy
#endif  // STRATEGY_FLY_BEHAVIOR_H_
