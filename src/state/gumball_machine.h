/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STATE_GUMBALL_MACHINE_H_
#define STATE_GUMBALL_MACHINE_H_

#include <string>
using std::string;
#include <iostream>
using std::ostream;
#include "state/state.h"

namespace state {
class GumballMachine {
 public:
  explicit GumballMachine(int number_gumballs);
  virtual ~GumballMachine();
  void insertQuarter();
  void ejectQuarter();
  void turnCrank();
  void setState(State *state) {
    state_ = state;
  }
  void releaseBall();
  int count() const {
    return count_;
  }
  void refill(int count);
  State* state() const {
    return state_;
  }
  State* sold_out_state() const {
    return sold_out_state_;
  }
  State* no_quarter_state() const {
    return no_quarter_state_;
  }
  State* has_quarter_state() const {
    return has_quarter_state_;
  }
  State* sold_state() const {
    return sold_state_;
  }
  friend ostream& operator<<(ostream &out, const GumballMachine &machine);
 private:
  State *sold_out_state_;
  State *no_quarter_state_;
  State *has_quarter_state_;
  State *sold_state_;
  State *state_;
  int count_;
};
}  // namespace state
#endif  // STATE_GUMBALL_MACHINE_H_
