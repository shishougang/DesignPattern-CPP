/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/chicago_style_cheese_pizza.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
namespace factory_method {
ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
  name_ = "Chicago Style Deep Dish Cheese Pizza";
  dough_ = "Extra Thick Crust Dough";
  sauce_ = "Plum Tomato Sauce";
  toppings_.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleCheesePizza::~ChicagoStyleCheesePizza() {
}

void ChicagoStyleCheesePizza::cut() {
  cout << "Cutting the pizza into square slices" << endl;
}
}  // namespace factory_method
