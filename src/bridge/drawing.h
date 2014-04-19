/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BRIDGE_DRAWING_H_
#define BRIDGE_DRAWING_H_

namespace bridge {
class Drawing {
 public:
  virtual ~Drawing() {}
  virtual void drawCircle(double x, double y, double radius) = 0;
};
}  // namespace bridge
#endif  // BRIDGE_DRAWING_H_
