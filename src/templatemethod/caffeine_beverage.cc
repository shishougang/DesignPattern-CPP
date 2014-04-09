/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "templatemethod/caffeine_beverage.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace templatemethod {
CaffeineBeverage::~CaffeineBeverage() {
}

void CaffeineBeverage::prepareRecipe() {
  boilWater();
  brew();
  pourInCup();
  addCondiments();
}

void CaffeineBeverage::boilWater() {
  cout << "Boiling water" << endl;
}

void CaffeineBeverage::pourInCup() {
  cout << "Pouring into cup" << endl;
}
}  // namespace templatemethod
