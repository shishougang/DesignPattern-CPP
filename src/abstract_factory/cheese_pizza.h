/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_CHEESE_PIZZA_H_
#define ABSTRACT_FACTORY_CHEESE_PIZZA_H_
#include "abstract_factory/pizza.h"
#include "abstract_factory/pizza_ingredient_factory.h"

namespace abstract_factory {
class CheesePizza : public Pizza {
 public:
  explicit CheesePizza(PizzaIngredientFactory *ingredient_factory);
  void prepare();
 private:
  PizzaIngredientFactory *ingredient_factory_;
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_CHEESE_PIZZA_H_
