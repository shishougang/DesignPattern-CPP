/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_ITERATOR_H_
#define ITERATOR_ITERATOR_H_

namespace iterator {
class Iterator {
 public:
  virtual ~Iterator() {}
  virtual bool hasNext() = 0;
  virtual void* next() = 0;
};
}  // namespace iterator
#endif  // ITERATOR_ITERATOR_H_
