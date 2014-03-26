/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_H_
#define ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_H_

#include "abstract_factory/dough.h"
#include "abstract_factory/sauce.h"
#include "abstract_factory/cheese.h"
#include "abstract_factory/clams.h"

namespace abstract_factory {
class PizzaIngredientFactory {
 public:
  virtual ~PizzaIngredientFactory() {}
  virtual Dough* createDough() = 0;
  virtual Sauce* createSauce() = 0;
  virtual Cheese* createCheese() = 0;
  virtual Clams* createClam() = 0;
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_PIZZA_INGREDIENT_FACTORY_H_
