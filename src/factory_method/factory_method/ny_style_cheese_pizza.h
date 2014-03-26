/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_NY_STYLE_CHEESE_PIZZA_H
#define FACTORY_METHOD_NY_STYLE_CHEESE_PIZZA_H

#include "factory_method/factory_method/pizza.h"

namespace factory_method {
class NYStyleCheesePizza : public Pizza {
 public:
  NYStyleCheesePizza();
  virtual ~NYStyleCheesePizza();
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_NY_STYLE_CHEESE_PIZZA_H
