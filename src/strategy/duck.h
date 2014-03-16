/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_DUCK_H_
#define STRATEGY_DUCK_H_

#include "strategy/fly_behavior.h"
#include "strategy/quack_behavior.h"

namespace strategy {

class Duck {
 public:
  Duck(void);
  virtual ~Duck();
  virtual void display() = 0;
  virtual void swim();
  void set_fly_behavior(FlyBehavior *fly_behavior);
  void set_quack_behavior(QuackBehavior *quack_behavior);
  void performFly();
  void performQuack();
 protected:
  FlyBehavior *fly_behavior_;
  QuackBehavior *quack_behavior_;
};
}  // namespace strategy
#endif  // STRATEGY_DUCK_H_
