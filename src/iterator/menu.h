/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_MENU_H_
#define ITERATOR_MENU_H_

#include "iterator/iterator.h"

namespace iterator {
class Menu {
 public:
  virtual ~Menu() {}
  virtual Iterator* createIterator() = 0;
};
}  // namespace iterator
#endif  // ITERATOR_MENU_H_
