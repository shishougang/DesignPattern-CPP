/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef TEMPLATEMETHOD_CAFFEINE_BEVERAGE_WITH_HOOK_H_
#define TEMPLATEMETHOD_CAFFEINE_BEVERAGE_WITH_HOOK_H_

namespace templatemethod {
class CaffeineBeverageWithHook {
 public:
  virtual ~CaffeineBeverageWithHook();
  void prepareRecipe();
 protected:
  void boilWater();
  void pourInCup();
  virtual bool customerWantsCondiments();
  virtual void brew() = 0;
  virtual void addCondiments() = 0;
};
}  // namespace templatemethod
#endif  // TEMPLATEMETHOD_CAFFEINE_BEVERAGE_WITH_HOOK_H_
