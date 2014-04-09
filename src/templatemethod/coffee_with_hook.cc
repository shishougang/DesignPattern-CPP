/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "templatemethod/coffee_with_hook.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
using std::cin;
#include <cctype>
#include <algorithm>
using std::transform;

namespace templatemethod {
CoffeeWithHook::~CoffeeWithHook() {
}

void CoffeeWithHook::brew() {
  cout << "Dripping CoffeeWithHook through filter" << endl;
}

void CoffeeWithHook::addCondiments() {
  cout << "Adding Sugar and Milk" << endl;
}

bool CoffeeWithHook::customerWantsCondiments() {
  string answer = getUserInput();
  transform(answer.begin(), answer.end(), answer.begin(), toupper);
  if (answer.find('Y') == 0) {
    return true;
  } else {
    return false;
  }
}

string CoffeeWithHook::getUserInput() {
  string answer;
  cout << "Would you like milk and sugar with your coffee (y/n)?" << endl;
  cin >> answer;
  return answer;
}
}  // namespace templatemethod
