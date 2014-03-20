/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/beverage.h"

namespace decorator {
Beverage::Beverage() : description_("Unknown Beverage") {
}

Beverage::~Beverage() {
}

string Beverage::description() {
  return description_;
}
}  // namespace decorator
