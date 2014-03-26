/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "abstract_factory/chicago_pizza_store.h"
#include "abstract_factory/pizza_ingredient_factory.h"
#include "abstract_factory/chicago_pizza_ingredient_factory.h"
#include "abstract_factory/cheese_pizza.h"
#include "abstract_factory/clam_pizza.h"

namespace abstract_factory {
ChicagoPizzaStore::~ChicagoPizzaStore() {
}

Pizza* ChicagoPizzaStore::createPizza(string item) {
  Pizza *pizza = NULL;
  PizzaIngredientFactory* ingredientFactory =
      new ChicagoPizzaIngredientFactory();
  if (item == "cheese") {
    pizza = new CheesePizza(ingredientFactory);
    pizza->set_name("Chicago Style Cheese Pizza");
  } else if (item == "clam") {
    pizza = new ClamPizza(ingredientFactory);
    pizza->set_name("Chicago Style Clam Pizza");
  }
  return pizza;
}
}  // namespace abstract_factory
