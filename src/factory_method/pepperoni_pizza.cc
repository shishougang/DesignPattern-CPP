/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/pepperoni_pizza.h"

namespace factory_method {
PepperoniPizza::PepperoniPizza() {
  name_ = "Pepperoni Pizza";
  dough_ = "Crust";
  sauce_ = "Marinara sauce";
  toppings_.push_back("Sliced Pepperoni");
  toppings_.push_back("Sliced Onion");
  toppings_.push_back("Grated parmesan cheese");
}

PepperoniPizza::~PepperoniPizza() {
}
}  // namespace factory_method
