/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_PIZZA_STORE_H_
#define FACTORY_METHOD_PIZZA_STORE_H_

#include <string>
using std::string;
#include "base/macros.h"
#include "factory_method/factory_method/pizza.h"

namespace factory_method {
class PizzaStore {
 public:
  virtual ~PizzaStore();
  virtual Pizza* createPizza(string item) = 0;
  Pizza* orderPizza(string type);
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_PIZZA_STORE_H_

