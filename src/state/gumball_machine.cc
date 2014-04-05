/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "state/gumball_machine.h"
#include <iostream>  //NOLINT
using std::cout;
using std::endl;
#include "state/sold_out_state.h"
#include "state/no_quarter_state.h"
#include "state/has_quarter_state.h"
#include "state/sold_state.h"

namespace state {
GumballMachine::GumballMachine(int number_gumballs) :
    count_(number_gumballs), state_(sold_out_state_) {
  sold_out_state_ = new SoldOutState(this);
  no_quarter_state_ = new NoQuarterState(this);
  has_quarter_state_ = new HasQuarterState(this);
  sold_state_ = new SoldState(this);
  if (count_ > 0) {
    state_ = no_quarter_state_;
  }
}

GumballMachine::~GumballMachine() {
  delete sold_out_state_;
  delete no_quarter_state_;
  delete has_quarter_state_;
  delete sold_state_;
}

void GumballMachine::insertQuarter() {
  state_->insertQuarter();
}

void GumballMachine::ejectQuarter() {
  state_->ejectQuarter();
}

void GumballMachine::turnCrank() {
  state_->turnCrank();
  state_->dispense();
}

void GumballMachine::releaseBall() {
  cout << "A gumball comes rolling out the slot..." << endl;
  if (count_ != 0) {
    count_--;
  }
}

void GumballMachine::refill(int count) {
  count_ = count;
  state_ = no_quarter_state_;
}

ostream& operator<<(ostream &out, const GumballMachine &machine) {
  out << "\nMighty Gumball, Inc.";
  out << "\nInventory: " << machine.count_ << " gumball";
  if (machine.count_ != 1) {
    out << "s";
  }
  cout << "\nMachine is " << machine.state_->toString() << endl;
  return out;
}
}  // namespace state
