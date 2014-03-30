/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ADAPTER_MALLARD_DUCK_H_
#define ADAPTER_MALLARD_DUCK_H_

#include "adapter/duck.h"

namespace adapter {
class MallardDuck : public Duck {
 public:
  virtual ~MallardDuck();
  void quack();
  void fly();
};
}  // namespace adapter
#endif  // ADAPTER_MALLARD_DUCK_H_
