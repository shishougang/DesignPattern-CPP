/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_CHICAGO_PIZZA_STORE_H
#define FACTORY_METHOD_CHICAGO_PIZZA_STORE_H

#include <string>
using std::string;
#include "base/macros.h"
#include "factory_method/factory_method/pizza.h"
#include "factory_method/factory_method/pizza_store.h"

namespace factory_method {
class ChicagoPizzaStore : public PizzaStore {
 public:
  virtual ~ChicagoPizzaStore();
  Pizza* createPizza(string item);
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_CHICAGO_PIZZA_STORE_H
