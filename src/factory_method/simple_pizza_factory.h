/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_SIMPLE_PIZZA_FACTORY_H_
#define FACTORY_METHOD_SIMPLE_PIZZA_FACTORY_H_

#include <string>
using std::string;
#include "base/macros.h"
#include "factory_method/pizza.h"

namespace factory_method {
class SimplePizzaFactory {
 public:
  explicit SimplePizzaFactory();
  virtual ~SimplePizzaFactory();
  Pizza* createPizza(string type);
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_SIMPLE_PIZZA_FACTORY_H_
