/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "visitor/car.h"

namespace visitor {
Car::Car() {
  elements_array_.push_back(new Wheel("front left"));
  elements_array_.push_back(new Wheel("front right"));
  elements_array_.push_back(new Body());
  elements_array_.push_back(new Engine());
}

Car::~Car() {
  for(unsigned int i = 0; i < elements_array_.size(); ++i) {
    CarElement *element = elements_array_[i];
    delete element;
  }
}

void Car::visit_car(CarElementVisitor *visitor) {
  visit_elements(visitor);
}

void Car::visit_elements(CarElementVisitor *visitor) {
  for(unsigned int i = 0; i < elements_array_.size(); ++i) {
    CarElement *element = elements_array_[i];
    element->accept(visitor);
  }
}
}  // namespace visitor
