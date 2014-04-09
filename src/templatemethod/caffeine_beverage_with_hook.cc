/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "templatemethod/caffeine_beverage_with_hook.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace templatemethod {
CaffeineBeverageWithHook::~CaffeineBeverageWithHook() {
}

void CaffeineBeverageWithHook::prepareRecipe() {
  boilWater();
  brew();
  pourInCup();
  if (customerWantsCondiments()) {
    addCondiments();
  }
}

void CaffeineBeverageWithHook::boilWater() {
  cout << "Boiling water" << endl;
}

void CaffeineBeverageWithHook::pourInCup() {
  cout << "Pouring into cup" << endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments() {
  return true;
}
}  // namespace templatemethod
