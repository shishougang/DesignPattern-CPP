/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ADAPTER_WILD_TURKEY_H_
#define ADAPTER_WILD_TURKEY_H_

#include "adapter/turkey.h"

namespace adapter {
class WildTurkey : public Turkey {
 public:
  virtual ~WildTurkey();
  void gobble();
  void fly();
};
}  // namespace addapter
#endif  // ADAPTER_WILD_TURKEY_H_
