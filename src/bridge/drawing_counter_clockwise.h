/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BRIDGE_DRAWING_COUNTER_CLOCKwISE_H_
#define BRIDGE_DRAWING_COUNTER_CLOCKwISE_H_

#include <cstdio>
#include "bridge/drawing.h"

namespace bridge {
class DrawingCounterClockwise : public Drawing {
 public:
  virtual ~DrawingCounterClockwise() {}
  virtual void drawCircle(double x, double y, double radius) {
    printf("draw the circle at %f,%f, radius %f by counter clockwise\n",
           x, y, radius);
  }
};
}   // namespace bridge
#endif  // BRIDGE_DRAWING_COUNTER_CLOCKwISE_H_
