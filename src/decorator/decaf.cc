/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/decaf.h"

namespace decorator {
Decaf::Decaf() {
  description_ = "Decaf Coffee";
}

Decaf::~Decaf() {
}

double Decaf::cost() {
  return 1.05;
}
}  // namespace decorator
