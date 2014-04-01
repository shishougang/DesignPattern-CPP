/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_PANCAKE_HOUSE_MENU_H_
#define ITERATOR_PANCAKE_HOUSE_MENU_H_

#include <string>
using std::string;
#include <vector>
using std::vector;
#include "iterator/menu.h"
#include "iterator/menu_item.h"
#include "iterator/iterator.h"

namespace iterator {
class PancakeHouseMenu : public Menu {
 public:
  PancakeHouseMenu();
  virtual ~PancakeHouseMenu();
  void addItem(const string &name, const string &description, bool vegetarian,
               double price);
  vector<MenuItem*>* menu_items() const { return menu_items_; }
  virtual Iterator* createIterator();
 private:
  vector<MenuItem*> *menu_items_;
};
}  // namespace iterator
#endif  // ITERATOR_PANCAKE_HOUSE_MENU_H_
