/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STATE_SOLD_OUT_STATE_H_
#define STATE_SOLD_OUT_STATE_H_

#include <string>
using std::string;
#include "state/gumball_machine.h"
#include "state/state.h"

namespace state {
class SoldOutState : public State {
 public:
  explicit SoldOutState(GumballMachine *gumball_machine);
  virtual ~SoldOutState();
  virtual void insertQuarter();
  virtual void ejectQuarter();
  virtual void turnCrank();
  virtual void dispense();
  virtual string toString();
 private:
  GumballMachine *gumball_machine_;
};
}  // namespace state
#endif  // STATE_SOLD_OUT_STATE_H_
