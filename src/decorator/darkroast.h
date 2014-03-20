/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_DARKROAST_H_
#define DECORATOR_DARKROAST_H_

#include "decorator/beverage.h"

namespace decorator {
class DarkRoast : public Beverage {
 public:
  DarkRoast();
  virtual ~DarkRoast();
  virtual double cost();
};
}  // namespace decorator
#endif  // DECORATOR_DARKROAST_H_
