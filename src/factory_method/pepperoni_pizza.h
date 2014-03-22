/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_PEPPERONI_PIZZA_H_
#define FACTORY_METHOD_PEPPERONI_PIZZA_H_

#include "base/macros.h"
#include "factory_method/pizza.h"

namespace factory_method {
class PepperoniPizza : public Pizza {
 public:
  PepperoniPizza();
  virtual ~PepperoniPizza();
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_PEPPERONI_PIZZA_H_
