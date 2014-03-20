/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */
#ifndef DECORATOR_MILK_H_
#define DECORATOR_MILK_H_

#include <string>
using std::string;
#include "decorator/condiment_decorator.h"
#include "decorator/beverage.h"

namespace decorator {
class Milk : public CondimentDecorator {
 public:
  explicit Milk(Beverage *beverage);
  virtual ~Milk();
  virtual string description();
  virtual double cost();
 private:
  Beverage *beverage_;
};
}  // namespace decorator
#endif  // DECORATOR_MILK_H_
