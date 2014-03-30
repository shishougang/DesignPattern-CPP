/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "adapter/mallard_duck.h"

namespace adapter {
MallardDuck::~MallardDuck() {
}

void MallardDuck::quack() {
  cout << "Quack" << endl;
}

void MallardDuck::fly() {
  cout << "I'm flying" << endl;
}
}  // namespace adapter
