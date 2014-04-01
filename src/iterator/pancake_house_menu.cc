/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "iterator/pancake_house_menu.h"
#include "iterator/pancake_house_menu_iterator.h"

namespace iterator {
PancakeHouseMenu::PancakeHouseMenu() {
  menu_items_ = new vector<MenuItem*>;

  addItem("K&B's Pancake Breakfast",
          "Pancakes with scrambled eggs, and toast",
          true,
          2.99);
  addItem("Regular Pancake Breakfast",
          "Pancakes with fried eggs, sausage",
          false,
          2.99);
  addItem("Blueberry Pancakes",
          "Pancakes made with fresh blueberries",
          true,
          3.49);
  addItem("Waffles",
          "Waffles, with your choice of blueberries or strawberries",
          true,
          3.59);
}

PancakeHouseMenu::~PancakeHouseMenu() {
  for (int i = 0; i < menu_items_->size(); ++i) {
    MenuItem *menu_item = menu_items_->at(i);
    delete menu_item;
  }
  delete menu_items_;
}

void PancakeHouseMenu::addItem(const string &name, const string &description,
                               bool vegetarian, double price) {
  MenuItem *menu_item = new MenuItem(name, description, vegetarian, price);
  menu_items_->push_back(menu_item);
}

Iterator* PancakeHouseMenu::createIterator() {
  return new PancakeHouseMenuIterator(menu_items_);
}
}  // namespace iterator
