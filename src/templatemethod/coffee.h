/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef TEMPLATEMETHOD_COFFEE_H_
#define TEMPLATEMETHOD_COFFEE_H_

#include "templatemethod/caffeine_beverage.h"

namespace templatemethod {
class Coffee : public CaffeineBeverage {
 public:
  virtual ~Coffee();
 protected:
  virtual void brew();
  virtual void addCondiments();
};
}  // namespace templatemethod
#endif  // TEMPLATEMETHOD_COFFEE_H_
