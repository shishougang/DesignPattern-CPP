/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "state/no_quarter_state.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace state {
NoQuarterState::NoQuarterState(GumballMachine *gumball_machine) :
    gumball_machine_(gumball_machine) {
}

NoQuarterState::~NoQuarterState() {
}

void NoQuarterState::insertQuarter() {
  cout << "You inserted a quarter" << endl;
  gumball_machine_->setState(gumball_machine_->has_quarter_state());
}

void NoQuarterState::ejectQuarter() {
  cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank() {
  cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense() {
  cout << "You need to pay first" << endl;
}

string NoQuarterState::toString() {
  return "waiting for quarter";
}
}  // namespace state
