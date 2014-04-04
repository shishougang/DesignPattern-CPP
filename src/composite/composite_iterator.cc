/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "composite/composite_iterator.h"
#include <typeinfo>
#include "composite/menu_component.h"
#include "composite/menu.h"

namespace composite {
CompositeIterator::CompositeIterator(Iterator *iterator) {
  stack_ = new stack<Iterator*>;
  stack_->push(iterator);
}

CompositeIterator::~CompositeIterator() {
}

bool CompositeIterator::hasNext() {
  if (stack_->empty()) {
    return false;
  } else {
    Iterator *iterator = stack_->top();
    if (!iterator->hasNext()) {
      stack_->pop();
      delete iterator;
      return hasNext();
    } else {
      return true;
    }
  }
}

void* CompositeIterator::next() {
  if (hasNext()) {
    Iterator *iterator = stack_->top();
    MenuComponent *component =
        reinterpret_cast<MenuComponent*>(iterator->next());
    if (typeid(*component) == typeid(Menu)) {
      stack_->push(component->createIterator());
    }
    return component;
  } else {
    return NULL;
  }
}
}  // namespace composite
