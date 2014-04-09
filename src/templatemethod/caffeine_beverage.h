/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef TEMPLATEMETHOD_CAFFEINE_BEVERAGE_H_
#define TEMPLATEMETHOD_CAFFEINE_BEVERAGE_H_

namespace templatemethod {
class CaffeineBeverage {
 public:
  virtual ~CaffeineBeverage();
  void prepareRecipe();
 protected:
  void boilWater();
  void pourInCup();
  virtual void brew() = 0;
  virtual void addCondiments() = 0;
};
}  // namespace templatemethod
#endif  // TEMPLATEMETHOD_CAFFEINE_BEVERAGE_H_
