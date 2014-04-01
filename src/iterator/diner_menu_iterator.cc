/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "iterator/diner_menu_iterator.h"

namespace iterator {
DinerMenuIterator::DinerMenuIterator(MenuItem **items) :
    items_(items), position_(0) {
}

DinerMenuIterator::~DinerMenuIterator() {
}

bool DinerMenuIterator::hasNext() {
  if (position_ >= kMaxItems || items_[position_] == NULL) {
    return false;
  }
  return true;
}

void* DinerMenuIterator::next() {
  MenuItem* menu_item = items_[position_];
  position_++;
  return reinterpret_cast<void*>(menu_item);
}
}  // namespace iterator
