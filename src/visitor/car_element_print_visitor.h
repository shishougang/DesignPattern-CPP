/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_CAR_ELEMENT_PRINT_VISITOR_H_
#define VISITOR_CAR_ELEMENT_PRINT_VISITOR_H_

#include "visitor/car_element_visitor.h"
#include "visitor/wheel.h"
#include "visitor/engine.h"
#include "visitor/body.h"

namespace visitor {
class CarElementPrintVisitor : public CarElementVisitor {
 public:
  virtual ~CarElementPrintVisitor();
  virtual void visit(Wheel *wheel);
  virtual void visit(Engine *engine);
  virtual void visit(Body *body);
};
}  // namespace visitor
#endif  // VISITOR_CAR_ELEMENT_PRINT_VISITOR_H_
