/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "abstract_factory/chicago_pizza_ingredient_factory.h"
#include "abstract_factory/thick_crust_dough.h"
#include "abstract_factory/plum_tomato_sauce.h"
#include "abstract_factory/mozzarella_cheese.h"
#include "abstract_factory/frozen_clams.h"

namespace abstract_factory {
Dough* ChicagoPizzaIngredientFactory::createDough() {
  return new ThickCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::createSauce() {
  return new PlumTomatoSauce();
}

Cheese* ChicagoPizzaIngredientFactory::createCheese() {
  return new MozzarellaCheese();
}

Clams* ChicagoPizzaIngredientFactory::createClam() {
  return new FrozenClams();
}
}  // namespace abstract_factory
