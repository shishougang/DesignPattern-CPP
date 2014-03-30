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
#include "adapter/duck_adapter.h"
#include "adapter/turkey.h"
using namespace adapter;  // NOLINT

int main(int argc, char* argv[]) {
  MallardDuck* duck = new MallardDuck();
  Turkey* duckAdapter = new DuckAdapter(duck);
  for (int i = 0; i < 10; ++i) {
    cout << "The DuckAdapter says..." << endl;
    duckAdapter->gobble();
    duckAdapter->fly();
  }
  delete duck;
  delete duckAdapter;
}
