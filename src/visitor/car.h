/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_CAR_H_
#define VISITOR_CAR_H_

#include <vector>
using std::vector;
#include "visitor/car_element.h"
#include "visitor/wheel.h"
#include "visitor/engine.h"
#include "visitor/body.h"
#include "visitor/car_element_do_visitor.h"

namespace visitor {
class Car {
 public:
  Car();
  virtual ~Car();
  void visit_car(CarElementVisitor *visitor);
 private:
  void visit_elements(CarElementVisitor *visitor);
  vector<CarElement *> elements_array_;
};
}  // namespace visitor
#endif  // VISITOR_CAR_H_
