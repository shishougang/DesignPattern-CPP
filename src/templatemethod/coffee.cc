/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "templatemethod/coffee.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace templatemethod {
Coffee::~Coffee() {
}

void Coffee::brew() {
  cout << "Dripping Coffee through filter" << endl;
}

void Coffee::addCondiments() {
  cout << "Adding Sugar and Milk" << endl;
}
}  // namespace templatemethod
