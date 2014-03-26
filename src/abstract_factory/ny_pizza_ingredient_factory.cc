/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "abstract_factory/ny_pizza_ingredient_factory.h"
#include "abstract_factory/thin_crust_dough.h"
#include "abstract_factory/marinara_sauce.h"
#include "abstract_factory/reggiano_cheese.h"
#include "abstract_factory/fresh_clams.h"

namespace abstract_factory {
Dough* NYPizzaIngredientFactory::createDough() {
  return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce() {
  return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese() {
  return new ReggianoCheese();
}

Clams* NYPizzaIngredientFactory::createClam() {
  return new FreshClams();
}
}  // namespace abstract_factory
