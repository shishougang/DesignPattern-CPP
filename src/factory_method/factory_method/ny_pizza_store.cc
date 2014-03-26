/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/ny_pizza_store.h"
#include "factory_method/factory_method/ny_style_cheese_pizza.h"
#include "factory_method/factory_method/ny_style_clam_pizza.h"
#include "factory_method/factory_method/ny_style_pepperoni_pizza.h"

namespace factory_method {
NYPizzaStore::~NYPizzaStore() {
}

Pizza* NYPizzaStore::createPizza(string item) {
  if (item == "cheese") {
    return new NYStyleCheesePizza();
  } else if (item == "clam") {
    return new NYStyleClamPizza();
  } else if (item == "pepperoni") {
    return new NYStylePepperoniPizza();
  } else {
    return NULL;
  }
}
}  // namespace factory_method
