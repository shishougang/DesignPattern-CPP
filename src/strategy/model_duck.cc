/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/model_duck.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "strategy/fly_noway.h"
#include "strategy/quack.h"

namespace strategy {
ModelDuck::ModelDuck() {
  fly_behavior_ = new FlyNoWay();
  quack_behavior_ = new Quack();
}

ModelDuck::~ModelDuck() {
}

void ModelDuck::display() {
  cout << "I'm a model duck" << endl;
}
}  // namespace strategy
