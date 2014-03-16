/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_FLY_NOWAY_H_
#define STRATEGY_FLY_NOWAY_H_

#include "strategy/fly_behavior.h"

namespace strategy {
class FlyNoWay : public FlyBehavior {
 public:
  FlyNoWay() {}
  virtual ~FlyNoWay() {}
  virtual void fly();
};
}  // namespace strategy
#endif  // STRATEGY_FLY_NOWAY_H_
