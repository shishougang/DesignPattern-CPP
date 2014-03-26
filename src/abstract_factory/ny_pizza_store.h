/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_NY_PIZZA_STORE_H_
#define ABSTRACT_FACTORY_NY_PIZZA_STORE_H_

#include <string>
using std::string;
#include "base/macros.h"
#include "abstract_factory/pizza.h"
#include "abstract_factory/pizza_store.h"

namespace abstract_factory {
class NYPizzaStore : public PizzaStore {
 public:
  virtual ~NYPizzaStore();
  Pizza* createPizza(string item);
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_NY_PIZZA_STORE_H_
