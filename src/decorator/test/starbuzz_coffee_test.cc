/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "decorator/beverage.h"
#include "decorator/espresso.h"
#include "decorator/darkroast.h"
#include "decorator/house_blend.h"
#include "decorator/mocha.h"
#include "decorator/soy.h"
#include "decorator/whip.h"
using namespace decorator;  // NOLINT

int main(int argc, char *argv[]) {
  Beverage *beverage = new Espresso();
  cout << beverage->description() << " $" << beverage->cost() << endl;

  Beverage *beverage2 = new DarkRoast();
  beverage2 = new Mocha(beverage2);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Whip(beverage2);
  cout << beverage2->description() << " $" << beverage2->cost() << endl;

  Beverage *beverage3 = new HouseBlend();
  beverage3 = new Soy(beverage3);
  beverage3 = new Mocha(beverage3);
  beverage3 = new Whip(beverage3);
  cout << beverage3->description() << " $" << beverage3->cost() << endl;
  return 0;
}
