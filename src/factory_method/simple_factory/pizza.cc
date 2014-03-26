/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "factory_method/simple_factory/pizza.h"

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
}

void Pizza::bake() {
  cout << "Baking " << name_ << endl;
}

void Pizza::cut() {
  cout << "Cutting " + name_ << endl;
}

void Pizza::box() {
  cout << "Boxing " + name_ << endl;
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
