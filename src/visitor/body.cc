/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "visitor/body.h"

namespace visitor {
Body::~Body() {
}

void Body::accept(CarElementVisitor *visitor) {
  visitor->visit(this);
}
}  // namespace visitor
