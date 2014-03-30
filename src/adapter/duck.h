/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ADAPTER_DUCK_H_
#define ADAPTER_DUCK_H_

namespace adapter {
class Duck {
 public:
  virtual ~Duck() {}
  virtual void quack() {};
  virtual void fly() {};
};
}  // namespace adapter
#endif  // ADAPTER_DUCK_H_
