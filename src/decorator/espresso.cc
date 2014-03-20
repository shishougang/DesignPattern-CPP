/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/espresso.h"

namespace decorator {
Espresso::Espresso() {
  description_ = "Espresso";
}

Espresso::~Espresso() {
}

double Espresso::cost() {
  return 1.99;
}
}  // namespace decorator
