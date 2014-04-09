/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef TEMPLATEMETHOD_COFFEE_WITH_HOOK_H_
#define TEMPLATEMETHOD_COFFEE_WITH_HOOK_H_

#include <string>
using std::string;
#include "templatemethod/caffeine_beverage_with_hook.h"

namespace templatemethod {
class CoffeeWithHook : public CaffeineBeverageWithHook {
 public:
  virtual ~CoffeeWithHook();
 protected:
  virtual void brew();
  virtual void addCondiments();
  virtual bool customerWantsCondiments();
 private:
  string getUserInput();
};
}  // namespace templatemethod
#endif  // TEMPLATEMETHOD_COFFEE_WITH_HOOK_H_
