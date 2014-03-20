/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_MACHA_H_
#define DECORATOR_MACHA_H_

#include <string>
using std::string;
#include "decorator/condiment_decorator.h"
#include "decorator/beverage.h"

namespace decorator {
class Mocha: public CondimentDecorator {
 public:
  explicit Mocha(Beverage *beverage);
  virtual ~Mocha();
  virtual string description();
  virtual double cost();
 private:
  Beverage *beverage_;
};
}  // namespace decorator
#endif  // DECORATOR_MACHA_H_
