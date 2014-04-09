/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "templatemethod/tea_with_hook.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
using std::cin;
#include <cctype>
#include <algorithm>
using std::transform;

namespace templatemethod {
TeaWithHook::~TeaWithHook() {
}

void TeaWithHook::brew() {
  cout << "Steeping the tea" << endl;
}

void TeaWithHook::addCondiments() {
  cout << "Adding Lemon" << endl;
}

bool TeaWithHook::customerWantsCondiments() {
  string answer = getUserInput();
  transform(answer.begin(), answer.end(), answer.begin(), toupper);
  if (answer.find('Y') == 0) {
    return true;
  } else {
    return false;
  }
}

string TeaWithHook::getUserInput() {
  string answer;
  cout << "Would you like lemon with your tea (y/n)?" << endl;
  cin >> answer;
  return answer;
}
}  // namespace templatemethod
