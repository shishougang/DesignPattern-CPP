/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "factory_method/factory_method/pizza.h"
#include "factory_method/factory_method/pizza_store.h"
#include "factory_method/factory_method/ny_pizza_store.h"
#include "factory_method/factory_method/chicago_pizza_store.h"
using namespace factory_method;  // NOLINT

int main(int argc, char *argv[]) {
  PizzaStore* nyStore = new NYPizzaStore();
  PizzaStore* chicagoStore = new ChicagoPizzaStore();
  
  Pizza* pizza = nyStore->orderPizza("cheese");
  cout << "Ethan ordered a " << pizza->name() << endl;

  pizza = chicagoStore->orderPizza("cheese");
  cout << "Joel ordered a " + pizza->name() << endl;

  pizza = nyStore->orderPizza("clam");
  cout << "Ethan ordered a " << pizza->name() << endl;

  pizza = chicagoStore->orderPizza("clam");
  cout << "Joel ordered a " + pizza->name() << endl;
}
  

