/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/factory_method/pizza.h"

namespace factory_method {
Pizza::Pizza() {
}

Pizza::~Pizza() {
}

string Pizza::name() {
  return name_;
}

void Pizza::prepare() {
  cout << "Preparing " << name_ << endl;
  cout << "Tossing dough..." << endl;
  cout << "Adding sauce ..." << endl;
  cout << "Adding toppings: " << endl;
  for (int i = 0; i < toppings_.size(); ++i) {
    cout << "   " << toppings_[i] << endl;
  }
}

void Pizza::bake() {
  cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut() {
  cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box() {
  cout << "Place pizza in official PizzaStore box" << endl;
}

// code to display pizza name and ingredients
string Pizza::toString() {
  string display;
  display.append("---- " + name_ + " ----\n");
  display.append(dough_ + "\n");
  display.append(sauce_ + "\n");
  for (int i = 0; i < toppings_.size(); ++i) {
    display.append(toppings_[i] + "\n");
  }
  return display;
}
}  // namespace factory_method
