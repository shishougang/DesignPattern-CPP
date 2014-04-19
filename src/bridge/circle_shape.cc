/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "bridge/circle_shape.h"

namespace bridge {
CircleShape::CircleShape(double x, double y, double radius, Drawing *drawing) :
      x_(x), y_(y), radius_(radius), drawing_(drawing)  {
}

CircleShape::~CircleShape() {
    delete drawing_;
}

void CircleShape::draw() {
    drawing_->drawCircle(x_, y_, radius_);
}

void CircleShape::resizeByPercentage(double pct) {
    radius_ *= pct;
}
}  // namespace bridge
