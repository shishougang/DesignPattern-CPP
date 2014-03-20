/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_WHIP_H_
#define DECORATOR_WHIP_H_

#include <string>
using std::string;
#include "decorator/condiment_decorator.h"
#include "decorator/beverage.h"

namespace decorator {
class Whip : public CondimentDecorator {
 public:
  explicit Whip(Beverage *beverage);
  virtual ~Whip();
  virtual string description();
  virtual double cost();
 private:
  Beverage *beverage_;
};
}  // namespace decorator
#endif  // DECORATOR_WHIP_H_
