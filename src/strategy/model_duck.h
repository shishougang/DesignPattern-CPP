/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STRATEGY_MODEL_DUCK_H_
#define STRATEGY_MODEL_DUCK_H_

#include "base/macros.h"
#include "strategy/duck.h"

namespace strategy {
class ModelDuck : public Duck {
 public:
  ModelDuck();
  virtual ~ModelDuck();
  virtual void display();
 private:
  DISALLOW_COPY_AND_ASSIGN(ModelDuck);
};
}  // namespace strategy
#endif  // STRATEGY_MODEL_DUCK_H_
