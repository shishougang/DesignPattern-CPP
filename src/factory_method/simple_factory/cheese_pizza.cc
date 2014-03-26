/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/simple_factory/cheese_pizza.h"

namespace factory_method {
CheesePizza::CheesePizza() {
  name_ = "Cheese Pizza";
  dough_ = "Regular Crust";
  sauce_ = "Marinara Pizza Sauce";
  toppings_.push_back("Fresh Mozzarella");
  toppings_.push_back("Parmesan");
}

CheesePizza::~CheesePizza() {
}
}  // namespace factory_method
