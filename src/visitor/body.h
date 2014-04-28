/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef VISITOR_BODY_H_
#define VISITOR_BODY_H_

#include <string>
using std::string;
#include "visitor/car_element.h"

namespace visitor {
class Body : public CarElement {
 public:
  virtual ~Body();
  virtual void accept(CarElementVisitor *visitor);
};
}  // namespace visitor
#endif  // VISITOR_BODY_H_
