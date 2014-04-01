/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "iterator/pancake_house_menu_iterator.h"

namespace iterator {
PancakeHouseMenuIterator::PancakeHouseMenuIterator(vector<MenuItem*> *items)
    : items_(items), position_(0) {
}

PancakeHouseMenuIterator::~PancakeHouseMenuIterator() {
}

bool PancakeHouseMenuIterator::hasNext() {
  if (position_ >= items_->size() || items_->at(position_) == NULL) {
    return false;
  }
  return true;
}

void* PancakeHouseMenuIterator::next() {
  MenuItem *menu_item = items_->at(position_);
  position_++;
  return reinterpret_cast<void*>(menu_item);
}
}  // namespace iterator
