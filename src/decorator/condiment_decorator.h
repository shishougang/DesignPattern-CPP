/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_CONDIMENT_DECORATOR_H_
#define DECORATOR_CONDIMENT_DECORATOR_H_

#include <string>
using std::string;
#include "decorator/beverage.h"

namespace decorator {
class CondimentDecorator : public Beverage {
 public:
  virtual ~CondimentDecorator() {}
  virtual string description() = 0;
};
}  // namespace decorator
#endif  // DECORATOR_CONDIMENT_DECORATOR_H_
