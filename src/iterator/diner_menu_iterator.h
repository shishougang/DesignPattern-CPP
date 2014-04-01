/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_DINER_MENU_ITERATOR_H_
#define ITERATOR_DINER_MENU_ITERATOR_H_

#include "iterator/iterator.h"
#include "iterator/menu_item.h"

namespace iterator {
class DinerMenuIterator : public Iterator {
 public:
  enum { kMaxItems = 6 };
  DinerMenuIterator(MenuItem **items);
  virtual ~DinerMenuIterator();
  virtual bool hasNext();
  virtual void* next();
 private:
  MenuItem **items_;
  int position_;
};
}  // namespace iterator
#endif  // ITERATOR_DINER_MENU_ITERATOR_H_
