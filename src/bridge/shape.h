/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BRIDGE_SHAPE_H_
#define BRIDGE_SHAPE_H_

#include "bridge/drawing.h"

namespace bridge {
class Shape {
 public:
  virtual ~Shape() {}
  virtual void draw() = 0;
  virtual void resizeByPercentage(double pct) = 0;
};
}  // namespace bridge
#endif  // BRIDGE_SHAPE_H_
