/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_ITERATOR_H_
#define COMPOSITE_ITERATOR_H_

namespace composite {
class Iterator {
 public:
  virtual ~Iterator() {}
  virtual bool hasNext() = 0;
  virtual void* next() = 0;
};
}  // namespace composite
#endif  // COMPOSITE_ITERATOR_H_
