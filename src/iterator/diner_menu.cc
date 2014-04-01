/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "iterator/diner_menu.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "iterator/diner_menu_iterator.h"

namespace iterator {
DinerMenu::DinerMenu() : number_of_items_(0) {
  addItem("Vegetarian BLT",
          "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
  addItem("BLT",
          "Bacon with lettuce & tomato on whole wheat", false, 2.99);
  addItem("Soup of the day",
          "Soup of the day, with a side of potato salad", false, 3.29);
  addItem("Hotdog",
          "A hot dog, with saurkraut, relish, onions, topped with cheese",
          false, 3.05);
  addItem("Steamed Veggies and Brown Rice",
          "Steamed vegetables over brown rice", true, 3.99);
  addItem("Pasta",
          "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
          true, 3.89);
}

DinerMenu::~DinerMenu() {
  for (int i = 0; i < number_of_items_; ++i) {
    MenuItem *menu_item = menu_items_[i];
    delete menu_item;
  }
}

void DinerMenu::addItem(const string &name, const string &description,
                        bool vegetarian, double price) {
  if (number_of_items_ >= kMaxItems) {
    cout << "Sorry, menu is full!  Can't add item to menu" << endl;
    return;
  }
  MenuItem *menu_item = new MenuItem(name, description, vegetarian, price);
  menu_items_[number_of_items_] = menu_item;
  number_of_items_++;
}

Iterator* DinerMenu::createIterator() {
  return new DinerMenuIterator(menu_items_);
}
}  // namespace iterator

