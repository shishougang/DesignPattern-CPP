/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "visitor/wheel.h"

namespace visitor {
Wheel::Wheel(string name) : name_(name) {
}

Wheel::~Wheel() {
}

void Wheel::accept(CarElementVisitor *visitor) {
  visitor->visit(this);
}
}  // namespace visitor
