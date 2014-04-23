/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FLYWEIGHT_CIRCLE_H_
#define FLYWEIGHT_CIRCLE_H_

#include <string>
using std::string;
#include "flyweight/shape.h"

namespace flyweight {
class Circle : public Shape {
 public:
  explicit Circle(string color);
  virtual ~Circle();
  void set_x(int x) {x_ = x;}
  void set_y(int y) {y_ = y;}
  void set_radius(int radius) {radius_ = radius;}
  virtual void draw();
 private:
  string color_;
  int x_;
  int y_;
  int radius_;
};
}  // namespace flyweight
#endif  // FLYWEIGHT_CIRCLE_H_
