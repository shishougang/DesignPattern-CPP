/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/mallard_duck.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "strategy/fly_with_wings.h"
#include "strategy/quack.h"

namespace strategy {
MallardDuck::MallardDuck() {
  fly_behavior_ = new FlyWithWings();
  quack_behavior_ = new Quack();
}

MallardDuck::~MallardDuck() {
}

void MallardDuck::display() {
  cout << "I'm a real Mallard duck" << endl;
}
}  // namespace strategy
