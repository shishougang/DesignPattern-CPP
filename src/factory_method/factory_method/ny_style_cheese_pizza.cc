/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/ny_style_cheese_pizza.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
namespace factory_method {
NYStyleCheesePizza::NYStyleCheesePizza() {
  name_ = "NY Style Sauce and Cheese Pizza";
  dough_ = "Thin Crust Dough";
  sauce_ = "Marinara Sauce";
  toppings_.push_back("Grated Reggiano Cheese");
}

NYStyleCheesePizza::~NYStyleCheesePizza() {
}
}  // namespace factory_method
