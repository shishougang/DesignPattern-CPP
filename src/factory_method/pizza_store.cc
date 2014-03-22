/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/pizza_store.h"

namespace factory_method {
PizzaStore::~PizzaStore() {
}

PizzaStore::PizzaStore(SimplePizzaFactory *factory) : factory_(factory) {
}

Pizza* PizzaStore::orderPizza(string type) {
  Pizza *pizza;
  pizza = factory_->createPizza(type);

  pizza->prepare();
  pizza->bake();
  pizza->cut();
  pizza->box();
  return pizza;
}
}  // namespace factory_method
