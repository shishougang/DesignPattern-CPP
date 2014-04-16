/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BUILDER_PIZZA_BUILDER_H_
#define BUILDER_PIZZA_BUILDER_H_

#include "builder/pizza.h"

namespace builder {
class PizzaBuilder {
 public:
  virtual ~PizzaBuilder() {}
  Pizza* get_pizza() { return pizza_; }
  void createPizza() { pizza_ = new Pizza(); }
  virtual void buildDough() = 0;
  virtual void buildSauce() = 0;
  virtual void buildTopping() = 0;
 protected:
  Pizza *pizza_;
};
}  // namespace builder
#endif  // BUILDER_PIZZA_BUILDER_H_
