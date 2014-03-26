/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "abstract_factory/ny_pizza_store.h"
#include "abstract_factory/pizza_ingredient_factory.h"
#include "abstract_factory/ny_pizza_ingredient_factory.h"
#include "abstract_factory/cheese_pizza.h"
#include "abstract_factory/clam_pizza.h"

namespace abstract_factory {
NYPizzaStore::~NYPizzaStore() {
}

Pizza* NYPizzaStore::createPizza(string item) {
  Pizza *pizza = NULL;
  PizzaIngredientFactory* ingredientFactory =
      new NYPizzaIngredientFactory();
  if (item == "cheese") {
    pizza = new CheesePizza(ingredientFactory);
    pizza->set_name("New York Style Cheese Pizza");
  } else if (item == "clam") {
    pizza = new ClamPizza(ingredientFactory);
    pizza->set_name("New York Style Clam Pizza");
  }
  return pizza;
}
}  // namespace abstract_factory
