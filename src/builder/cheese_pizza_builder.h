/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BUILDER_CHEESE_PIZZA_BUILDER_H_
#define BUILDER_CHEESE_PIZZA_BUILDER_H_

#include "builder/pizza_builder.h"

namespace builder {
class CheesePizzaBuilder : public PizzaBuilder {
 public:
  virtual ~CheesePizzaBuilder() {}
  virtual void buildDough() { pizza_->set_dough("thickCrust"); }
  virtual void buildSauce() { pizza_->set_sauce("plumTomato"); }
  virtual void buildTopping() { pizza_->set_topping("pineapple"); }
};
}  // namespace builder
#endif  // BUILDER_CHEESE_PIZZA_BUILDER_H_
