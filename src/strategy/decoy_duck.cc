/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/decoy_duck.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "strategy/fly_noway.h"
#include "strategy/mute_quack.h"

namespace strategy {
DecoyDuck::DecoyDuck() {
  fly_behavior_ = new FlyNoWay;
  quack_behavior_ = new MuteQuack;
}

DecoyDuck::~DecoyDuck() {
}

void DecoyDuck::display() {
  cout << "I'm a duck Decoy" << endl;
}
}  // namespace strategy
