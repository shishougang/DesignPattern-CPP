/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/rubber_duck.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "strategy/fly_noway.h"
#include "strategy/squeak.h"

namespace strategy {
RubberDuck::RubberDuck() {
  fly_behavior_ = new FlyNoWay();
  quack_behavior_ = new Squeak();
}

RubberDuck::~RubberDuck() {
}

void RubberDuck::display() {
  cout << "I'm a rubber duckie" << endl;
}
}  // namespace strategy
