/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_NULL_ITERATOR_H_
#define COMPOSITE_NULL_ITERATOR_H_

#include "composite/iterator.h"

namespace composite {
class NullIterator : public Iterator {
 public:
  virtual ~NullIterator() {}
  virtual bool hasNext() {
    return false;
  }
  virtual void* next() {
    return NULL;
  }
};
}  // namespace composite
#endif  // COMPOSITE_NULL_ITERATOR_H_
