/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "state/sold_state.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace state {
SoldState::SoldState(GumballMachine *gumball_machine) :
    gumball_machine_(gumball_machine) {
}

SoldState::~SoldState() {
}

void SoldState::insertQuarter() {
  cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::ejectQuarter() {
  cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank() {
  cout << "Turning twice doesn't get you another gumball!" << endl;
}

void SoldState::dispense() {
  gumball_machine_->releaseBall();
  if (gumball_machine_->count() > 0) {
    gumball_machine_->setState(gumball_machine_->no_quarter_state());
  } else {
    cout << "Oops, out of gumballs!" << endl;
    gumball_machine_->setState(gumball_machine_->sold_out_state());
  }
}

string SoldState::toString() {
  return "dispensing a gumball";
}
}  // namespace state
