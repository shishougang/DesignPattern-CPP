/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef TEMPLATEMETHOD_TEA_WITH_HOOK_H_
#define TEMPLATEMETHOD_TEA_WITH_HOOK_H_

#include <string>
using std::string;
#include "templatemethod/caffeine_beverage_with_hook.h"

namespace templatemethod {
class TeaWithHook : public CaffeineBeverageWithHook {
 public:
  virtual ~TeaWithHook();
 protected:
  virtual void brew();
  virtual void addCondiments();
  virtual bool customerWantsCondiments();
 private:
  string getUserInput();
};
}  // namespace templatemethod
#endif  // TEMPLATEMETHOD_TEA_WITH_HOOK_H_
