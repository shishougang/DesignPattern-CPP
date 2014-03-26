/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "abstract_factory/cheese_pizza.h"

namespace abstract_factory {
CheesePizza::CheesePizza(PizzaIngredientFactory *ingredient_factory) :
    ingredient_factory_(ingredient_factory) {
}
void CheesePizza::prepare() {
  cout << "Preparing " << name_ << endl;
  dough_ = ingredient_factory_->createDough();
  sauce_ = ingredient_factory_->createSauce();
  cheese_ = ingredient_factory_->createCheese();
}
}  // namespace abstract_factory
