/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_COMPOSITE_ITERATOR_H_
#define COMPOSITE_COMPOSITE_ITERATOR_H_

#include <stack>
using std::stack;
#include "composite/iterator.h"

namespace composite {
class CompositeIterator : public Iterator {
 public:
  explicit CompositeIterator(Iterator *iterator);
  ~CompositeIterator();
  virtual bool hasNext();
  virtual void* next();
 private:
  stack<Iterator*> *stack_;
};
}  // namespace composite
#endif  // COMPOSITE_COMPOSITE_ITERATOR_H_
