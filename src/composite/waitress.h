/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMPOSITE_WAITRESS_H_
#define COMPOSITE_WAITRESS_H_

#include "composite/menu_component.h"

namespace composite {
class Waitress {
 public:
  explicit Waitress(MenuComponent *all_menus);
  virtual ~Waitress();
  void printMenu();
  void printVegetarianMenu();
 private:
  MenuComponent *all_menus_;
};
}  // namespace composite
#endif  // COMPOSITE_WAITRESS_H_
