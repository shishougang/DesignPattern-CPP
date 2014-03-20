/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_DECAF_H_
#define DECORATOR_DECAF_H_

#include "decorator/beverage.h"

namespace decorator {
class Decaf : public Beverage {
 public:
  Decaf();
  virtual ~Decaf();
  virtual double cost();
};
}  // namespace decorator
#endif  // DECORATOR_DECAF_H_
