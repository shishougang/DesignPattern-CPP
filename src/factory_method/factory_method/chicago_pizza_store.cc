/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/chicago_pizza_store.h"
#include "factory_method/factory_method/chicago_style_cheese_pizza.h"
#include "factory_method/factory_method/chicago_style_clam_pizza.h"
#include "factory_method/factory_method/chicago_style_pepperoni_pizza.h"

namespace factory_method {
ChicagoPizzaStore::~ChicagoPizzaStore() {
}

Pizza* ChicagoPizzaStore::createPizza(string item) {
  if (item == "cheese") {
    return new ChicagoStyleCheesePizza();
  } else if (item == "clam") {
    return new ChicagoStyleClamPizza();
  } else if (item == "pepperoni") {
    return new ChicagoStylePepperoniPizza();
  } else {
    return NULL;
  }
}
}  // namespace factory_method
