/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_SQUEAK_H_
#define STRATEGY_SQUEAK_H_

#include "strategy/quack_behavior.h"

namespace strategy {
class Squeak : public QuackBehavior {
 public:
  virtual ~Squeak() {}
  virtual void quack();
};
}  // namespacd strategy
#endif  // STRATEGY_SQUEAK_H_
