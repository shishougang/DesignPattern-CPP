/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "flyweight/circle.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace flyweight {
Circle::Circle(string color) {
  color_ = color;
}

Circle::~Circle() {
}

void Circle::draw() {
  cout << "Circle:Draw() Color:" << color_ << ",x:" << x_ << ",y:" << y_ <<
      ",radius:" << radius_ << endl;
}
}  // namespace flyweight
