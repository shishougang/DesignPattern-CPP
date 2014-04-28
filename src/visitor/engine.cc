/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "visitor/engine.h"

namespace visitor {
Engine::~Engine() {
}

void Engine::accept(CarElementVisitor *visitor) {
  visitor->visit(this);
}
}  // namespace visitor
