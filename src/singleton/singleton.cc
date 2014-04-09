/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "singleton/singleton.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace singleton {
Singleton* Singleton::pInstance = NULL;

Singleton::~Singleton() {
}

Singleton* Singleton::instance() {
  cout << "call the singleton instance" << endl;
  static Mutex mutex_(base::LINKER_INITIALIZED);
  MutexLock l(&mutex_);
  if (pInstance == NULL) {
    cout << "In the Lock" << endl;
    pInstance = new Singleton();
  }
  return pInstance;
}  // release MutexLock (via MutexLock destructor)
}  // namespace singleton
