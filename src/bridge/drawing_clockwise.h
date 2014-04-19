/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BRIDGE_DRAWING_CLOCKWISE_H_
#define BRIDGE_DRAWING_CLOCKWISE_H_

#include <cstdio>
#include "bridge/drawing.h"

namespace bridge {
class DrawingClockwise : public Drawing {
 public:
  virtual ~DrawingClockwise() {}
  virtual void drawCircle(double x, double y, double radius) {
    printf("draw the circle at %f,%f, radius %f by clockwise\n", x, y, radius);
  }
};
}  // namespace bridge
#endif  // BRIDGE_DRAWING_CLOCKWISE_H_
