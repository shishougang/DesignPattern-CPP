/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_HOUSE_BLEND_H_
#define DECORATOR_HOUSE_BLEND_H_

#include "decorator/beverage.h"

namespace decorator {
class HouseBlend : public Beverage {
 public:
  HouseBlend();
  virtual ~HouseBlend();
  virtual double cost();
};
}  // namespace decorator
#endif  // DECORATOR_HOUSE_BLEND_H_
