/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "flyweight/shape_factory.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace flyweight {
map<string, Shape*> *ShapeFactory::map_ = new map<string, Shape*>();

ShapeFactory::~ShapeFactory() {
}

Shape* ShapeFactory::getCircle(string color) {
  map<string, Shape*>::iterator it;
  it = map_->find(color);
  if (it != map_->end()) {
    return it->second;
  }
  Circle *circle = new Circle(color);
  map_->insert(std::pair<string, Shape*>(color, circle));
  cout << "Creating circle of color:" << color << endl;
  return circle;
}
}  // namespace flyweight
