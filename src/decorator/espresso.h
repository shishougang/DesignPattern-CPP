/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_ESPRESSO_H_
#define DECORATOR_ESPRESSO_H_

#include "decorator/beverage.h"

namespace decorator {
class Espresso: public Beverage {
 public:
  Espresso();
  virtual ~Espresso();
  virtual double cost();
};
}  // namespace decorator
#endif  // DECORATOR_ESPRESSO_H_
