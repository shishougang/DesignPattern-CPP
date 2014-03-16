/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_MALLARD_DUCK_H_
#define STRATEGY_MALLARD_DUCK_H_

#include "base/macros.h"
#include "strategy/duck.h"

namespace strategy {
class MallardDuck : public Duck {
 public:
  MallardDuck();
  virtual ~MallardDuck();
  virtual void display();
 private:
  DISALLOW_COPY_AND_ASSIGN(MallardDuck);
};
}  // namespace strategy
#endif  // STRATEGY_MALLARD_DUCK_H_
