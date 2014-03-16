/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/fly_with_wings.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace strategy {

void FlyWithWings::fly() {
  cout << "I'm flying!" << endl;
}
}  // namespace strategy
