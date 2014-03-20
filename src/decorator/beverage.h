/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef DECORATOR_BEVERAGE_H_
#define DECORATOR_BEVERAGE_H_

#include <string>
using std::string;

namespace decorator {
class Beverage {
 public:
  Beverage();
  virtual ~Beverage();
  virtual string description();
  virtual double cost() = 0;
 protected:
  string description_;
};
}  // namespace decorator
#endif  // DECORATOR_BEVERAGE_H_
