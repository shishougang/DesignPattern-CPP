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
#include "factory_method/simple_factory/simple_pizza_factory.h"
#include "factory_method/simple_factory/pizza.h"

namespace factory_method {
class PizzaStore {
 public:
  virtual ~PizzaStore();
  explicit PizzaStore(SimplePizzaFactory* factory);
  Pizza* orderPizza(string type);
 private:
  SimplePizzaFactory *factory_;
  DISALLOW_COPY_AND_ASSIGN(PizzaStore);
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_PIZZA_STORE_H_

