/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef SINGLETON_MUTEX_H_
#define SINGLETON_MUTEX_H_

#include <pthread.h>
#include <cassert>
#include "base/macros.h"

namespace singleton {
class PThreadMutex {
 public:
  explicit PThreadMutex(base::LinkerInitialized) {
    pthread_mutex_init(&mutex_, NULL);
  }
  PThreadMutex() { pthread_mutex_init(&mutex_, NULL); }
  ~PThreadMutex() { pthread_mutex_destroy(&mutex_); }

  void Lock() {
    int rc = pthread_mutex_lock(&mutex_);
    assert(rc == 0);
  }
  void Unlock() {
    int rc = pthread_mutex_unlock(&mutex_);
    assert(rc == 0);
  }
 private:
  pthread_mutex_t mutex_;
  DISALLOW_COPY_AND_ASSIGN(PThreadMutex);
};

typedef PThreadMutex Mutex;

class MutexLock {
 public:
  explicit MutexLock(Mutex* mutex) : mutex_(mutex) { mutex->Lock(); }
  ~MutexLock() { mutex_->Unlock(); }
 private:
  Mutex* mutex_;
  DISALLOW_COPY_AND_ASSIGN(MutexLock);
};
}  // namespace singleton

using singleton::Mutex;
using singleton::MutexLock;
#endif  // SINGLETON_MUTEX_H_
