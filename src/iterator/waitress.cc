/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "iterator/waitress.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "iterator/menu_item.h"

namespace iterator {
Waitress::Waitress(Menu *pancake_house_menu, Menu *diner_menu)
    : pancake_house_menu_(pancake_house_menu), diner_menu_(diner_menu) {
}

Waitress::~Waitress() {
}

void Waitress::printMenu() const {
  Iterator *pancake_iterator = pancake_house_menu_->createIterator();
  Iterator *diner_iterator = diner_menu_->createIterator();

  cout << "MENU\n----\nBREAKFAST" << endl;
  printMenu(pancake_iterator);
  cout << "\nLUNCH" << endl;
  printMenu(diner_iterator);
}

void Waitress::printMenu(Iterator *iterator) const {
  while (iterator->hasNext()) {
    MenuItem *menu_item = static_cast<MenuItem*>(iterator->next());
    cout << menu_item->name() << ", " << menu_item->price() << " -- " <<
        menu_item->description() << endl;
  }
}

void Waitress::printVegetarianMenu() const {
  cout << "\nVEGETARIAN MENU\n----\nBREAKFAST" << endl;
  printVegetarianMenu(pancake_house_menu_->createIterator());
  cout << "\nLUNCH" << endl;
  printVegetarianMenu(diner_menu_->createIterator());
}

void Waitress::printVegetarianMenu(Iterator *iterator) const {
  while (iterator->hasNext()) {
    MenuItem *menu_item = static_cast<MenuItem*>(iterator->next());
    if (menu_item->isVegetarian()) {
      cout << menu_item->name();
      cout << "\t\t" << menu_item->price() << endl;
      cout << "\t" << menu_item->description() << endl;
    }
  }
}

bool Waitress::isItemVegetarian(const string &name) const {
  Iterator *pancake_iterator = pancake_house_menu_->createIterator();
  if (isVegetarian(name, pancake_iterator)) {
    return true;
  }
  Iterator *diner_iterator = diner_menu_->createIterator();
  if (isVegetarian(name, diner_iterator)) {
    return true;
  }
  return false;
}

bool Waitress::isVegetarian(const string &name, Iterator *iterator) const {
  while (iterator->hasNext()) {
    MenuItem *menu_item = static_cast<MenuItem*>(iterator->next());
    if (menu_item->name() == name) {
      if (menu_item->isVegetarian()) {
        return true;
      }
    }
  }
  return false;
}
}  // namespace iterator
