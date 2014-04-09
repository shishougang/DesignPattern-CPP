/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef TEMPLATEMETHOD_TEA_H_
#define TEMPLATEMETHOD_TEA_H_

#include "templatemethod/caffeine_beverage.h"

namespace templatemethod {
class Tea : public CaffeineBeverage {
 public:
  virtual ~Tea();
 protected:
  virtual void brew();
  virtual void addCondiments();
};
}  // namespace templatemethod
#endif  // TEMPLATEMETHOD_TEA_H_
