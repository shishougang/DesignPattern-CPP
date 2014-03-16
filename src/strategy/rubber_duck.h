/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_RUBBER_DUCK_H_
#define STRATEGY_RUBBER_DUCK_H_

#include "base/macros.h"
#include "strategy/duck.h"

namespace strategy {
class RubberDuck : public Duck {
 public:
  RubberDuck();
  virtual ~RubberDuck();
  virtual void display();
 private:
  DISALLOW_COPY_AND_ASSIGN(RubberDuck);
};
}  // namespace strategy
#endif  // STRATEGY_RUBBER_DUCK_H_
