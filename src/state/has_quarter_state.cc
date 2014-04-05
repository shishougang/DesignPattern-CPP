/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "state/has_quarter_state.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace state {
HasQuarterState::HasQuarterState(GumballMachine *gumball_machine) :
    gumball_machine_(gumball_machine) {
}

HasQuarterState::~HasQuarterState() {
}

void HasQuarterState::insertQuarter() {
  cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter() {
  cout << "Quarter returned" << endl;
  gumball_machine_->setState(gumball_machine_->no_quarter_state());
}

void HasQuarterState::turnCrank() {
  cout << "You turned..." << endl;
  gumball_machine_->setState(gumball_machine_->sold_state());
}

void HasQuarterState::dispense() {
  cout << "No gumball dispensed" << endl;
}

string HasQuarterState::toString() {
  return "waiting for turn of crank";
}
}  // namespace state
