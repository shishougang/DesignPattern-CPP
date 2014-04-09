/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */
#ifndef SINGLETON_SINGLETON_H_
#define SINGLETON_SINGLETON_H_

#include "base/macros.h"
#include "singleton/mutex.h"

namespace singleton {
class Singleton {
 public:
  Singleton() {}
  static Singleton* instance();
 private:
  static Singleton* pInstance;
  virtual ~Singleton();
  DISALLOW_COPY_AND_ASSIGN(Singleton);
};
}  // namespace singleton
#endif   // SINGLETON_SINGLETON_H_
