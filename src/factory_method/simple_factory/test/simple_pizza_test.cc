/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "factory_method/simple_factory/simple_pizza_factory.h"
#include "factory_method/simple_factory/pizza.h"
#include "factory_method/simple_factory/pizza_store.h"
using namespace factory_method;  // NOLINT

int main(int argc, char *argv[]) {
  SimplePizzaFactory *factory = new SimplePizzaFactory();
  PizzaStore *store = new PizzaStore(factory);

  Pizza *pizza = store->orderPizza("cheese");
  cout << "We ordered a " << pizza->name() << endl;

  pizza = store->orderPizza("veggie");
  cout << "We ordered a " << pizza->name() <<endl;
  return 0;
}
