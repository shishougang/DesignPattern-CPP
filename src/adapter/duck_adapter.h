/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ADAPTER_DUCK_ADAPTER_H_
#define ADAPTER_DUCK_ADAPTER_H_

#include "adapter/turkey.h"
#include "adapter/duck.h"

namespace adapter {
class DuckAdapter : public Turkey {
 public:
  explicit DuckAdapter(Duck* duck);
  virtual ~DuckAdapter();
  void gobble();
  void fly();
 private:
  Duck* duck_;
};
}  // namespace adapter
#endif  // ADAPTER_DUCK_ADAPTER_H_
