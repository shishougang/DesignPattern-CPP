/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ADAPTER_TURKEY_ADAPTER_H_
#define ADAPTER_TURKEY_ADAPTER_H_

#include "adapter/duck.h"
#include "adapter/turkey.h"

namespace adapter {
class TurkeyAdapter : public Duck {
 public:
  explicit TurkeyAdapter(Turkey* turkey);
  virtual ~TurkeyAdapter();
  void quack();
  void fly();
 private:
  Turkey* turkey_;
};
}  // namespace adapter
#endif  // ADAPTER_TURKEY_ADAPTER_H_
