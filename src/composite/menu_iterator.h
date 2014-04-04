/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_MENU_ITERATOR_H_
#define COMPOSITE_MENU_ITERATOR_H_

#include <vector>
using std::vector;
#include "composite/menu_component.h"
#include "composite/iterator.h"

namespace composite {
class MenuIterator : public Iterator {
 public:
  MenuIterator(vector<MenuComponent*> *menu_components);
  virtual ~MenuIterator();
  virtual bool hasNext();
  virtual void* next();
 private:
  vector<MenuComponent*> *menu_components_;
  int position_;
};
}  // namespace composite
#endif  // COMPOSITE_MENU_ITERATOR_H_
