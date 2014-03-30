/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "adapter/duck_adapter.h"
#include <cstdlib>

namespace adapter {
DuckAdapter::DuckAdapter(Duck* duck) : duck_(duck) {
}

DuckAdapter::~DuckAdapter() {
}

void DuckAdapter::gobble() {
  duck_->quack();
}

void DuckAdapter::fly() {
  if (rand() % 5 == 0) {
    duck_->fly();
  }
}
}  // namespace adapter
