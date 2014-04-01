/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ITERATOR_MENU_ITEM_H_
#define ITERATOR_MENU_ITEM_H_

#include <string>
using std::string;

namespace iterator {
class MenuItem {
 public:
  MenuItem(const string &name, const string &description,
           bool vegetarian, double price);
  virtual ~MenuItem();
  string name() const { return name_; }
  string description() const { return description_; }
  double price() const { return price_; }
  bool isVegetarian() const { return vegetarian_; }
 private:
  string name_;
  string description_;
  bool vegetarian_;
  double price_;
};
}  // namespace iterator
#endif  // ITERATOR_MENU_ITEM_H_
