/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/milk.h"

namespace decorator {
Milk::Milk(Beverage *beverage) : beverage_(beverage) {
}

Milk::~Milk() {
}

string Milk::description() {
  return beverage_->description() + ", Milk";
}

double Milk::cost() {
  return 0.10 + beverage_->cost();
}
}  // namespace decorator
