/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/whip.h"

namespace decorator {
Whip::Whip(Beverage *beverage) : beverage_(beverage) {
}

Whip::~Whip() {
}

string Whip::description() {
  return beverage_->description() + ", Whip";
}

double Whip::cost() {
  return 0.10 + beverage_->cost();
}
}  // namespace decorator
