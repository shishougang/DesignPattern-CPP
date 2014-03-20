/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/soy.h"

namespace decorator {
Soy::Soy(Beverage *beverage) : beverage_(beverage) {
}

Soy::~Soy() {
}

string Soy::description() {
  return beverage_->description() + ", Soy";
}

double Soy::cost() {
  return 0.15 + beverage_->cost();
}
}  // namespace decorator
