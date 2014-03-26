/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/simple_factory/veggie_pizza.h"

namespace factory_method {
VeggiePizza::VeggiePizza() {
  name_ = "Veggie Pizza";
  dough_ = "Crust";
  sauce_ = "Marinara sauce";
  toppings_.push_back("Shredded mozzarella");
  toppings_.push_back("Grated parmesan");
  toppings_.push_back("Diced onion");
  toppings_.push_back("Sliced mushrooms");
  toppings_.push_back("Sliced red pepper");
  toppings_.push_back("Sliced black olives");
}

VeggiePizza::~VeggiePizza() {
}
}  // namespace factory_method
