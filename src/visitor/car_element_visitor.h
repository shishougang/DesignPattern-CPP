/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_CAR_ELEMENT_VISITOR_H_
#define VISITOR_CAR_ELEMENT_VISITOR_H_

namespace visitor {
class Wheel;
class Engine;
class Body;

class CarElementVisitor {
 public:
  virtual ~CarElementVisitor() {}
  virtual void visit(Wheel *wheel) = 0;
  virtual void visit(Engine *engine) = 0;
  virtual void visit(Body *body) = 0;
};
}  // namespace visitor
#endif  // VISITOR_CAR_ELEMENT_VISITOR_H_
