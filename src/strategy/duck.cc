/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/duck.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace strategy {

Duck::Duck(void)
    : fly_behavior_(NULL), quack_behavior_(NULL) {
}

Duck::~Duck() {
  delete fly_behavior_;
  fly_behavior_ = NULL;
  delete quack_behavior_;
  quack_behavior_ = NULL;
}

void Duck::swim() {
  cout << "All ducks float, even decoys!" << endl;
}

void Duck::set_fly_behavior(FlyBehavior *fly_behavior) {
  fly_behavior_ = fly_behavior;
}

void Duck::set_quack_behavior(QuackBehavior *quack_behavior) {
  quack_behavior_ = quack_behavior;
}

void Duck::performFly() {
  fly_behavior_->fly();
}

void Duck::performQuack() {
  quack_behavior_->quack();
}
}  // namespace strategy
