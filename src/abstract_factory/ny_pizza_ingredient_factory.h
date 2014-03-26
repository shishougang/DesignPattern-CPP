/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT_FACTORY_H_
#define ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT_FACTORY_H_

#include "abstract_factory/pizza_ingredient_factory.h"

namespace abstract_factory {
class NYPizzaIngredientFactory : public PizzaIngredientFactory {
 public:
  virtual Dough* createDough();
  virtual Sauce* createSauce();
  virtual Cheese* createCheese();
  virtual Clams* createClam();
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_NY_PIZZA_INGREDIENT_FACTORY_H_
