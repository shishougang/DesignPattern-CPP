/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "templatemethod/tea.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace templatemethod {
Tea::~Tea() {
}

void Tea::brew() {
  cout << "Steeping the tea" << endl;
}

void Tea::addCondiments() {
  cout << "Adding Lemon" << endl;
}
}  // namespace templatemethod
