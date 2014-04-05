/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "state/sold_out_state.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace state {
SoldOutState::SoldOutState(GumballMachine *gumball_machine) :
    gumball_machine_(gumball_machine) {
}

SoldOutState::~SoldOutState() {
}

void SoldOutState::insertQuarter() {
  cout << "You can't insert a quarter, the machine is sold out" << endl;
}

void SoldOutState::ejectQuarter() {
  cout << "You can't eject, you haven't inserted a quarter yet" << endl;
}

void SoldOutState::turnCrank() {
  cout << "You turned, but there's no gumballs" << endl;
}

void SoldOutState::dispense() {
  cout << "No gumball dispensed" << endl;
}

string SoldOutState::toString() {
  return "sold out";
}
}  // namespace state
