/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FLYWEIGHT_SHAPE_FACTORY_H_
#define FLYWEIGHT_SHAPE_FACTORY_H_

#include <map>
using std::map;
#include <string>
using std::string;
#include "flyweight/circle.h"
#include "flyweight/shape.h"

namespace flyweight {
class ShapeFactory {
 public:
  virtual ~ShapeFactory();
  static Shape* getCircle(string color);
 private:
  static map<string, Shape*> *map_;
};
}  // namespace flyweight
#endif  // FLYWEIGHT_SHAPE_FACTORY_H_
