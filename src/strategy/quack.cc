/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/quack.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace strategy {
void Quack::quack() {
  cout << "Quack" << endl;
}
}  // strategy
