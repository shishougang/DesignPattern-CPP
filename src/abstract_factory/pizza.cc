/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "abstract_factory/pizza.h"

namespace abstract_factory {
Pizza::Pizza() : dough_(NULL), sauce_(NULL), cheese_(NULL), clam_(NULL) {
}

Pizza::~Pizza() {
}

string Pizza::name() {
  return name_;
}

void Pizza::set_name(string name) {
  name_ = name;
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
  if (dough_ != NULL) {
    display.append(dough_->toString() + "\n");
  }
  if (sauce_ != NULL) {
    display.append(sauce_->toString() + "\n");
  }
  if (cheese_ != NULL) {
    display.append(cheese_->toString() + "\n");
  }
  if (clam_ != NULL) {
    display.append(clam_->toString() + "\n");
  }
  return display;
}
}  // namespace abstract_factory
