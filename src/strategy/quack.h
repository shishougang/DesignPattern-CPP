/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_QUACK_H_
#define STRATEGY_QUACK_H_
#include "strategy/quack_behavior.h"

namespace strategy {
class Quack : public QuackBehavior {
 public:
  virtual ~Quack() {}
  virtual void quack();
};
}  // namespace strategy
#endif  // STRATEGY_QUACK_H_
