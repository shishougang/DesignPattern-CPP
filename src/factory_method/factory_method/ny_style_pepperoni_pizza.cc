/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/ny_style_pepperoni_pizza.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
namespace factory_method {
NYStylePepperoniPizza::NYStylePepperoniPizza() {
  name_ = "NY Style Pepperoni Pizza";
  dough_ = "Thin Crust Dough";
  sauce_ = "Marinara Sauce";
  toppings_.push_back("Grated Reggiano Cheese");
  toppings_.push_back("Sliced Pepperoni");
  toppings_.push_back("Garlic");
  toppings_.push_back("Onion");
  toppings_.push_back("Mushrooms");
  toppings_.push_back("Red Pepper");
}

NYStylePepperoniPizza::~NYStylePepperoniPizza() {
}
}  // namespace factory_method
