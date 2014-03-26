/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/ny_style_clam_pizza.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
namespace factory_method {
NYStyleClamPizza::NYStyleClamPizza() {
  name_ = "NY Style Clam Pizza";
  dough_ = "Thin Crust Dough";
  sauce_ = "Marinara Sauce";
  toppings_.push_back("Grated Reggiano Cheese");
  toppings_.push_back("Fresh Clams from Long Island Sound");
}

NYStyleClamPizza::~NYStyleClamPizza() {
}
}  // namespace factory_method
