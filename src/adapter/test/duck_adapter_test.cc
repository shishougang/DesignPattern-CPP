/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "adapter/mallard_duck.h"
#include "adapter/wild_turkey.h"
#include "adapter/turkey_adapter.h"
#include "adapter/duck.h"
using namespace adapter;  // NOLINT

static void testDuck(Duck* duck) {
  duck->quack();
  duck->fly();
}

int main(int argc, char* argv[]) {
  MallardDuck* duck = new MallardDuck();
  WildTurkey* turkey = new WildTurkey();
  Duck* turkeyAdapter = new TurkeyAdapter(turkey);

  cout << "The Turkey says..." << endl;
  turkey->gobble();
  turkey->fly();

  cout << endl << "The Duck says..." << endl;
  testDuck(duck);

  cout << endl << "The TurkeyAdapter says..." << endl;
  testDuck(turkeyAdapter);

  delete duck;
  delete turkey;
  delete turkeyAdapter;
}
