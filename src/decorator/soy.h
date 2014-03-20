/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_SOY_H_
#define DECORATOR_SOY_H_

#include <string>
using std::string;
#include "decorator/condiment_decorator.h"
#include "decorator/beverage.h"

namespace decorator {
class Soy : public CondimentDecorator {
 public:
  explicit Soy(Beverage *beverage);
  virtual ~Soy();
  virtual string description();
  virtual double cost();
 private:
  Beverage *beverage_;
};
}  // namespace decorator
#endif  // DECORATOR_SOY_H_
