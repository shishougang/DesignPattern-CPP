/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_QUACK_BEHAVIOR_H_
#define STRATEGY_QUACK_BEHAVIOR_H_

namespace strategy {

class QuackBehavior {
 public:
  virtual ~QuackBehavior() {}
  virtual void quack() = 0;
};
}  // namespace strategy
#endif  // STRATEGY_QUACK_BEHAVIOR_H_
