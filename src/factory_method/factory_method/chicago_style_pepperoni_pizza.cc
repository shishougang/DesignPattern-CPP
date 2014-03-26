/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/chicago_style_pepperoni_pizza.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
namespace factory_method {
ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza() {
  name_ = "Chicago Style Pepperoni Pizza";
  dough_ = "Extra Thick Crust Dough";
  sauce_ = "Plum Tomato Sauce";
  toppings_.push_back("Shredded Mozzarella Cheese");
  toppings_.push_back("Black Olives");
  toppings_.push_back("Spinach");
  toppings_.push_back("Eggplant");
  toppings_.push_back("Sliced Pepperoni");
}

ChicagoStylePepperoniPizza::~ChicagoStylePepperoniPizza() {
}

void ChicagoStylePepperoniPizza::cut() {
  cout << "Cutting the pizza into square slices"  << endl;
}
}  // namespace factory_method
