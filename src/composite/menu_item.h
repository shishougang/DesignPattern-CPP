/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_MENU_ITEM_H_
#define COMPOSITE_MENU_ITEM_H_

#include <string>
using std::string;
#include "composite/menu_component.h"
#include "composite/iterator.h"

namespace composite {
class MenuItem : public MenuComponent {
 public:
  MenuItem(const string &name, const string &description, bool vegetarian,
           double price);
  virtual ~MenuItem();
  string name() const {
    return name_;
  }
  string description() const {
    return description_;
  }
  double price() const {
    return price_;
  }
  bool isVegetarian() const {
    return vegetarian_;
  }
  void print() const;
  Iterator* createIterator();
 private:
  string name_;
  string description_;
  bool vegetarian_;
  double price_;
};
}  // namespace composite
#endif  // COMPOSITE_MENU_ITEM_H_
