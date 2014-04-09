/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  //NOLINT
using std::cout;
using std::endl;
#include "templatemethod/tea.h"
#include "templatemethod/coffee.h"
#include "templatemethod/tea_with_hook.h"
#include "templatemethod/coffee_with_hook.h"
using namespace templatemethod;  // NOLINT

int main(int argc, char argv[]) {
  Tea *tea = new Tea();
  Coffee *coffee = new Coffee();

  cout << "\nMaking tea...\n";
  tea->prepareRecipe();
  cout << "\nMaking coffee...\n";
  coffee->prepareRecipe();

  delete tea;
  delete coffee;

  TeaWithHook *tea_hook = new TeaWithHook();
  CoffeeWithHook *coffee_hook = new CoffeeWithHook();

  cout << "\nMaking tea...\n";
  tea_hook->prepareRecipe();
  cout << "\nMaking coffee...\n";
  coffee_hook->prepareRecipe();

  delete tea_hook;
  delete coffee_hook;
  return 0;
}
