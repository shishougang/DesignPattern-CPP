/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "builder/waiter.h"

namespace builder {
Waiter::~Waiter() {
}

void Waiter::constructPizza() {
  pizza_builder_->createPizza();
  pizza_builder_->buildDough();
  pizza_builder_->buildSauce();
  pizza_builder_->buildTopping();
}
}  // namespace builder
