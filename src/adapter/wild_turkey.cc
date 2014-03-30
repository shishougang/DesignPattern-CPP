/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "adapter/wild_turkey.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace adapter {
WildTurkey::~WildTurkey() {
}

void WildTurkey::gobble() {
  cout << "Gobble gobble" << endl;
}

void WildTurkey::fly() {
  cout << "I'm flying a short distance" << endl;
}
}  // namespace adapter
