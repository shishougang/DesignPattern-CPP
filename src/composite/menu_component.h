/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_MENU_COMPONENT_H_
#define COMPOSITE_MENU_COMPONENT_H_

#include <stdexcept>
using std::runtime_error;
#include <string>
using std::string;
#include "composite/iterator.h"

namespace composite {
class MenuComponent {
 public:
  virtual ~MenuComponent() { }
  virtual void add(MenuComponent *menu_component) {
    throw runtime_error("Unsupported Operation!");
  }
  virtual void remove(MenuComponent *menu_component) {
    throw runtime_error("Unsupported Operation!");
  }
  virtual MenuComponent* getChid(int i) const {
    throw runtime_error("Unsupported Operation!");
  }
  virtual string name() const {
    throw runtime_error("Unsupported Operation!");
  }
  virtual string description() const {
    throw runtime_error("Unsupported Operation!");
  }
  virtual double price() const {
    throw runtime_error("Unsupported Operation!");
  }
  virtual bool isVegetarian() const {
    throw runtime_error("Unsupported Operation!");
  }
  virtual Iterator* createIterator() = 0;
  virtual void print() const {
    throw runtime_error("Unsupported Operation!");
  }
};
}  // namespace composite
#endif  // COMPOSITE_MENU_COMPONENT_H_
