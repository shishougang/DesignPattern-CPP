/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_WAITRESS_H_
#define ITERATOR_WAITRESS_H_

#include <string>
using std::string;
#include "iterator/menu.h"
#include "iterator/iterator.h"

namespace iterator {
class Waitress {
 public:
  Waitress(Menu *pancake_house_menu, Menu *diner_menu);
  virtual ~Waitress();
  void printMenu() const;
  void printVegetarianMenu() const;
  bool isItemVegetarian(const string &name) const;
 private:
  void printMenu(Iterator *iterator) const;
  void printVegetarianMenu(Iterator *iterator) const;
  bool isVegetarian(const string &name, Iterator *iterator) const;
  Menu *pancake_house_menu_;
  Menu *diner_menu_;
};
}  // namespace iterator
#endif  // ITERATOR_WAITRESS_H_
