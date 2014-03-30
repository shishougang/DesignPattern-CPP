/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "adapter/turkey_adapter.h"

namespace adapter {
TurkeyAdapter::TurkeyAdapter(Turkey* turkey) : turkey_(turkey) {
}

TurkeyAdapter::~TurkeyAdapter() {
}

void TurkeyAdapter::quack() {
  turkey_->gobble();
}

void TurkeyAdapter::fly() {
  for (int i = 0; i < 5; ++i) {
    turkey_->fly();
  }
}
}  // namespace adapter
