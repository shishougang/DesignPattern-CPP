/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/pizza_store.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
namespace factory_method {
PizzaStore::~PizzaStore() {
}

Pizza* PizzaStore::orderPizza(string type) {
  Pizza *pizza;
  pizza = createPizza(type);
  cout << "--- Making a " + pizza->name() + " ---" << endl;
  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();
  return pizza;
}
}  // namespace factory_method
