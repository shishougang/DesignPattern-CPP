/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_PANCAKE_HOUSE_MENU_ITERATOR_H_
#define ITERATOR_PANCAKE_HOUSE_MENU_ITERATOR_H_

#include <vector>
using std::vector;
#include "iterator/iterator.h"
#include "iterator/menu_item.h"

namespace iterator {
class PancakeHouseMenuIterator : public Iterator {
 public:
  explicit PancakeHouseMenuIterator(vector<MenuItem*> *items);
  virtual ~PancakeHouseMenuIterator();
  bool hasNext();
  void* next();
 private:
  vector<MenuItem*> *items_;
  int position_;
};
}  // namespace iterator
#endif  // ITERATOR_PANCAKE_HOUSE_MENU_ITERATOR_H_
