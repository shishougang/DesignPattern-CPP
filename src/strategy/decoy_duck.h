/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_DECOY_DUCK_H_
#define STRATEGY_DECOY_DUCK_H_

#include "base/macros.h"
#include "strategy/duck.h"

namespace strategy {
class DecoyDuck : public Duck {
 public:
  DecoyDuck();
  virtual ~DecoyDuck();
  virtual void display();
 private:
  DISALLOW_COPY_AND_ASSIGN(DecoyDuck);
};
}  // namespace strategy
#endif  // STRATEGY_DECOY_DUCK_H_
