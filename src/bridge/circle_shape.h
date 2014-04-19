/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BRIDGE_CIRCLE_SHAPE_H_
#define BRIDGE_CIRCLE_SHAPE_H_

#include "bridge/shape.h"
#include "bridge/drawing.h"

namespace bridge {
class CircleShape : public Shape {
 public:
  virtual ~CircleShape();
  CircleShape(double x, double y, double radius, Drawing *drawing);
  virtual void draw();
  virtual void resizeByPercentage(double pct);
 private:
  double x_;
  double y_;
  double radius_;
  Drawing *drawing_;
};
}  // namespace bridge
#endif  // BRIDGE_CIRCLE_SHAPE_H_
