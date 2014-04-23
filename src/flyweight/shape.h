/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FLYWEIGHT_SHAPE_H_
#define FLYWEIGHT_SHAPE_H_

namespace flyweight {
class Shape {
 public:
  virtual ~Shape() {}
  virtual void draw() = 0;
};
}  // namespace flyweight
#endif  // FLYWEIGHT_SHAPE_H_
