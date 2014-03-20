/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/mocha.h"

namespace decorator {
Mocha::Mocha(Beverage *beverage) : beverage_(beverage) {
}

Mocha::~Mocha() {
}

string Mocha::description() {
  return beverage_->description() + ", Mocha";
}

double Mocha::cost() {
  return 0.20 + beverage_->cost();
}
}  // namespace decorator
