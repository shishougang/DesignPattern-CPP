/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "bridge/drawing.h"
#include "bridge/shape.h"
#include "bridge/circle_shape.h"
#include "bridge/drawing_clockwise.h"
#include "bridge/drawing_counter_clockwise.h"
using namespace bridge;

int main(int argc, char *argv[]) {
  Shape *shape_clockwise = new CircleShape(1, 2, 3, new DrawingClockwise());
  Shape *shape_counter_clockwise = new CircleShape(
      5, 7, 11, new DrawingCounterClockwise());
  shape_clockwise->draw();
  shape_counter_clockwise->resizeByPercentage(2.5);
  shape_counter_clockwise->draw();
}
