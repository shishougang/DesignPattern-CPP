/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_PIZZA_STORE_H_
#define ABSTRACT_FACTORY_PIZZA_STORE_H_

#include <string>
using std::string;
#include "base/macros.h"
#include "pizza.h"

namespace abstract_factory {
class PizzaStore {
 public:
  virtual ~PizzaStore();
  Pizza* orderPizza(string type);
 protected:
  virtual Pizza* createPizza(string item) = 0;
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_PIZZA_STORE_H_

