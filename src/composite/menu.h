/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_MENU_H_
#define COMPOSITE_MENU_H_

#include <vector>
using std::vector;
#include <string>
using std::string;
#include "composite/menu_component.h"

namespace composite {
class Menu : public MenuComponent {
 public:
  Menu(const string &name, const string &description);
  ~Menu();
  virtual void add(MenuComponent *menu_component);
  virtual void remove(MenuComponent *menu_component);
  virtual MenuComponent* getChild(int i) const;
  virtual string name() const {
    return name_;
  }
  virtual string description() const {
    return description_;
  }
  virtual Iterator* createIterator();
  virtual void print() const;
 private:
  string name_;
  string description_;
  vector<MenuComponent*> *menu_components_;
};
}  // namespace composite
#endif  // COMPOSITE_MENU_H_
