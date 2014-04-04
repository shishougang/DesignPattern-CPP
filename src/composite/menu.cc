/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "composite/menu.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include <algorithm>
using std::find;
#include "composite/menu_iterator.h"
#include "composite/composite_iterator.h"

namespace composite {
Menu::Menu(const string &name, const string &description)
    : name_(name), description_(description) {
  menu_components_ = new vector<MenuComponent*>;
}

Menu::~Menu() {
  for (int i = 0; i < menu_components_->size(); ++i) {
    MenuComponent *item = menu_components_->at(i);
    delete item;
  }
  delete menu_components_;
  menu_components_ = NULL;
}

void Menu::add(MenuComponent *menu_component) {
  menu_components_->push_back(menu_component);
}

void Menu::remove(MenuComponent *menu_component) {
  menu_components_->erase(find(menu_components_->begin(),
                               menu_components_->end(), menu_component));
  delete menu_component;
}

MenuComponent* Menu::getChild(int i) const {
  if (i < 0 || i >= menu_components_->size()) {
    return NULL;
  }
  return menu_components_->at(i);
}

Iterator* Menu::createIterator() {
  return new CompositeIterator(new MenuIterator(menu_components_));
}

void Menu::print() const {
  cout << endl << name();
  cout << ", " << description() << endl;
  cout << "---------------------" << endl;
  for (int i = 0; i < menu_components_->size(); ++i) {
    MenuComponent *item = menu_components_->at(i);
    item->print();
  }
}
}  // namespace composite
