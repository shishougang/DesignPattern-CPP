/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHOD_CHICAGO_STYLE_PEPPERONI_PIZZA_H
#define FACTORY_METHOD_CHICAGO_STYLE_PEPPERONI_PIZZA_H

#include "factory_method/factory_method/pizza.h"

namespace factory_method {
class ChicagoStylePepperoniPizza : public Pizza {
 public:
  ChicagoStylePepperoniPizza();
  virtual ~ChicagoStylePepperoniPizza();
  virtual void cut();
};
}  // namespace factory_method
#endif  // FACTORY_METHOD_CHICAGO_STYLE_PEPPERONI_PIZZA_H
