/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_MUTE_QUACK_H_
#define STRATEGY_MUTE_QUACK_H_

#include "strategy/quack_behavior.h"

namespace strategy {
class MuteQuack : public QuackBehavior {
 public:
  virtual ~MuteQuack() {}
  virtual void quack();
};
}  // namespacd strategy
#endif  // STRATEGY_MUTE_QUACK_H_
