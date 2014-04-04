/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "composite/menu_item.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "composite/null_iterator.h"

namespace composite {
MenuItem::MenuItem (const string &name, const string &description,
                    bool vegetarian, double price)
    : name_(name), description_(description),
  vegetarian_(vegetarian), price_(price) {
}

MenuItem::~MenuItem() {
}

void MenuItem::print() const {
  cout << "  " << name();
  if (isVegetarian()) {
    cout << "(v)";
  }
  cout << ", " << price() << endl;
  cout << "    -- " << description() << endl;
}

Iterator* MenuItem::createIterator() {
  return new NullIterator();
}
}  // namespace composite
