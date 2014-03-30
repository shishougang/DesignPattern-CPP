/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "abstract_factory/ny_pizza_store.h"
#include "abstract_factory/chicago_pizza_store.h"
#include "abstract_factory/pizza.h"
#include "abstract_factory/pizza_store.h"
using namespace abstract_factory;  // NOLINT

int main(int argc, char *argv[]) {
  PizzaStore *nyStore = new NYPizzaStore();
  PizzaStore *chicagoStore = new ChicagoPizzaStore();

  Pizza *pizza = nyStore->orderPizza("cheese");
  cout << "Ethan ordered a " + pizza->toString() << endl;
  delete pizza;
  pizza = chicagoStore->orderPizza("cheese");
  cout << "Joel ordered a " + pizza->toString() << endl;
  delete pizza;

  pizza = nyStore->orderPizza("clam");
  cout << "Ethan ordered a " + pizza->toString() << endl;
  delete pizza;
  pizza = chicagoStore->orderPizza("clam");
  cout << "Joel ordered a " + pizza->toString() << endl;
  delete pizza;

  delete nyStore;
  delete chicagoStore;

  return 0;
}
