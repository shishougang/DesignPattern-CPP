/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/fly_rocketpowered.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace strategy {
void FlyRocketPowered::fly() {
  cout << "I'm flying with a rocket" << endl;
}
}  // namespace strategy
