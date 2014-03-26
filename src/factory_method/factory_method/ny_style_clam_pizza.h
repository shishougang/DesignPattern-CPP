/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_NY_STYLE_CLAM_PIZZA_H
#define FACTORY_METHOD_NY_STYLE_CLAM_PIZZA_H

#include "factory_method/factory_method/pizza.h"

namespace factory_method {
class NYStyleClamPizza : public Pizza {
 public:
  NYStyleClamPizza();
  virtual ~NYStyleClamPizza();
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_NY_STYLE_CLAM_PIZZA_H
