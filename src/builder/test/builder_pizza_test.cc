/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "builder/waiter.h"
#include "builder/pizza_builder.h"
#include "builder/cheese_pizza_builder.h"
#include "builder/clam_pizza_builder.h"
using namespace builder;  // NOLINT

int main(int argc, char *argv[]) {
  Waiter *waiter = new Waiter();
  PizzaBuilder *cheese_pizza_builder = new CheesePizzaBuilder();
  PizzaBuilder *clam_pizza_builder = new ClamPizzaBuilder();

  waiter->set_pizza_builder(cheese_pizza_builder);
  waiter->constructPizza();

  Pizza *pizza = waiter->get_pizza();
  cout << pizza->toString() << endl;
}
