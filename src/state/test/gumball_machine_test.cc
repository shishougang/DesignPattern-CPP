/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "state/gumball_machine.h"
using namespace state;  // NOLINT

int main(int argc, char *argv[]) {
  GumballMachine *gumball_machine = new GumballMachine(5);
  cout << *gumball_machine << endl;
  gumball_machine->insertQuarter();
  gumball_machine->turnCrank();
  cout << *gumball_machine << endl;
  gumball_machine->insertQuarter();
  gumball_machine->turnCrank();
  gumball_machine->insertQuarter();
  gumball_machine->turnCrank();
  cout << *gumball_machine << endl;
  return 0;
}

