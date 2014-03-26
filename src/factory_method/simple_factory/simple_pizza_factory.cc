/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/simple_factory/simple_pizza_factory.h"
#include "factory_method/simple_factory/cheese_pizza.h"
#include "factory_method/simple_factory/pepperoni_pizza.h"
#include "factory_method/simple_factory/clam_pizza.h"
#include "factory_method/simple_factory/veggie_pizza.h"

namespace factory_method {
SimplePizzaFactory::SimplePizzaFactory() {
}

SimplePizzaFactory::~SimplePizzaFactory() {
}

Pizza* SimplePizzaFactory::createPizza(string type) {
  Pizza* pizza = NULL;
  if (type == "cheese") {
    pizza = new CheesePizza();
  } else if (type == "pepperoni") {
    pizza = new PepperoniPizza();
  } else if (type == "clam") {
    pizza = new ClamPizza();
  } else if (type == "veggie") {
    pizza = new VeggiePizza();
  }
  return pizza;
}
}  // namespace factory_method
