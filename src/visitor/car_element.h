/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_CAR_ELEMENT_H_
#define VISITOR_CAR_ELEMENT_H_

#include "visitor/car_element_visitor.h"

namespace visitor {
class CarElement {
 public:
  virtual ~CarElement() {}
  virtual void accept(CarElementVisitor *visitor) = 0;
};
}  // namespace visitor
#endif  // VISITOR_CAR_ELEMENT_H_
