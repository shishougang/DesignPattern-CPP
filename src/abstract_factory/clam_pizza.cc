/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "abstract_factory/clam_pizza.h"

namespace abstract_factory {
ClamPizza::ClamPizza(PizzaIngredientFactory *ingredient_factory) :
    ingredient_factory_(ingredient_factory) {
}
void ClamPizza::prepare() {
  cout << "Preparing " << name_ << endl;
  dough_ = ingredient_factory_->createDough();
  sauce_ = ingredient_factory_->createSauce();
  cheese_ = ingredient_factory_->createCheese();
  clam_ = ingredient_factory_->createClam();
}
}  // namespace abstract_factory
