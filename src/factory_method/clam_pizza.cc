/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/clam_pizza.h"

namespace factory_method {
ClamPizza::ClamPizza() {
  name_ = "Clam Pizza";
  dough_ = "Thin crust";
  sauce_ = "White garlic sauce";
  toppings_.push_back("Clams");
  toppings_.push_back("Grated parmesan cheese");
}

ClamPizza::~ClamPizza() {
}
}  // namespace factory_method
