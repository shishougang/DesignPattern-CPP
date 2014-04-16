/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BUILDER_WAITER_H_
#define BUILDER_WAITER_H_

#include "builder/pizza_builder.h"

namespace builder {
class Waiter {
 public:
  virtual ~Waiter();
  void set_pizza_builder(PizzaBuilder *pizza_builder) {
    pizza_builder_ = pizza_builder;
  }
  Pizza* get_pizza() { return pizza_builder_->get_pizza(); }
  void constructPizza();
 private:
  PizzaBuilder *pizza_builder_;
};
}  // namespace builder
#endif  // BUILDER_WAITER_H_
