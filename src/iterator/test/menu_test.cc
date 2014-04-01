/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "iterator/pancake_house_menu.h"
#include "iterator/diner_menu.h"
#include "iterator/waitress.h"
using namespace iterator;  // NOLINT

int main(int agrc, char *argv[]) {
  PancakeHouseMenu *pancake_house_menu = new PancakeHouseMenu();
  DinerMenu *diner_menu = new DinerMenu();
  Waitress *waitress = new Waitress(pancake_house_menu, diner_menu);
  waitress->printMenu();
  waitress->printVegetarianMenu();

  cout << "\nCustomer asks, is the Hotdog vegetarian?" << endl;
  cout << "Waitress says: ";
  if (waitress->isItemVegetarian("Hotdog")) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  cout << "\nCustomer asks, are the Waffles vegetarian?" << endl;
  cout << "Waitress says: ";
  if (waitress->isItemVegetarian("Waffies")) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
