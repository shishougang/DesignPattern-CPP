/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_WHEEL_H_
#define VISITOR_WHEEL_H_

#include <string>
using std::string;
#include "visitor/car_element.h"

namespace visitor {
class Wheel : public CarElement {
 public:
  explicit Wheel(string name);
  virtual ~Wheel();
  virtual void accept(CarElementVisitor *visitor);
  string name() const {return name_;}
 private:
  string name_;
};
}  // namespace visitor
#endif  // VISITOR_WHEEL_H_
