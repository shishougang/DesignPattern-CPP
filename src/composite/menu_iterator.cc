/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "composite/menu_iterator.h"

namespace composite {
MenuIterator::MenuIterator(vector<MenuComponent*> *menu_components)
    : position_(0), menu_components_(menu_components) {
}

MenuIterator::~MenuIterator() {
}

bool MenuIterator::hasNext() {
  if (position_ >= menu_components_->size()) {
    return false;
  }
  return true;
}

void* MenuIterator::next() {
  MenuComponent *item = menu_components_->at(position_);
  position_++;
  return dynamic_cast<void*>(item);
}
}  // namespace composite
