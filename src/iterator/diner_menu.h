/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_DINER_MENU_H_
#define ITERATOR_DINER_MENU_H_

#include <string>
using std::string;
#include "iterator/iterator.h"
#include "iterator/menu.h"
#include "iterator/menu_item.h"

namespace iterator {
class DinerMenu : public Menu {
 public:
  enum { kMaxItems = 6 };
  DinerMenu();
  virtual ~DinerMenu();
  void addItem(const string &name, const string &description, bool vegetarian,
               double price);
  MenuItem* menu_items() const { return *menu_items_; }
  virtual Iterator* createIterator();
 private:
  int number_of_items_;
  MenuItem *menu_items_[kMaxItems];
};
}  // namespace iterator
#endif  // ITERATOR_DINER_MENU_H_
