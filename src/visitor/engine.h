/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_ENGINE_H_
#define VISITOR_ENGINE_H_

#include <string>
using std::string;
#include "visitor/car_element.h"

namespace visitor {
class CarElementVisitor;

class Engine : public CarElement {
 public:
  virtual ~Engine();
  virtual void accept(CarElementVisitor *visitor);
};
}  // namespace visitor
#endif  // VISITOR_ENGINE_H_
