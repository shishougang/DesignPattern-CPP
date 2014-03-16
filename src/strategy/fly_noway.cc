/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "strategy/fly_noway.h"

#include <iostream> //NOLINT
using std::cout;
using std::endl;

namespace strategy {
void FlyNoWay::fly() {
  cout << "I can't fly" << endl;
}
}  // namespace strategy
