/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "composite/waitress.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include <exception>
using std::exception;
#include "composite/iterator.h"

namespace composite {
Waitress::Waitress(MenuComponent *all_menus) : all_menus_(all_menus) {
}

Waitress::~Waitress() {
}

void Waitress::printMenu() {
  all_menus_->print();
}

void Waitress::printVegetarianMenu() {
  Iterator *iterator = all_menus_->createIterator();
  cout << "\nVEGETARIAN MENU\n----" << endl;
  while (iterator->hasNext()) {
    MenuComponent *menu_component = reinterpret_cast<MenuComponent *>
        (iterator->next());
    try {
      if (menu_component->isVegetarian()) {
        menu_component->print();
      }
    } catch (exception &ex) {
    }
  }
  delete iterator;
}
}  // namespace composite
