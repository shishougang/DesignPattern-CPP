/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BUILDER_CLAM_PIZZA_BUILDER_H_
#define BUILDER_CLAM_PIZZA_BUILDER_H_

#include "builder/pizza_builder.h"

namespace builder {
class ClamPizzaBuilder : public PizzaBuilder {
 public:
  virtual ~ClamPizzaBuilder() {}
  virtual void buildDough() { pizza_->set_dough("thinCrust"); }
  virtual void buildSauce() { pizza_->set_sauce("marinaSauce"); }
  virtual void buildTopping() { pizza_->set_topping("pepperoni"); }
};
}  // namespace builder
#endif  // BUILDER_CLAM_PIZZA_BUILDER_H_
