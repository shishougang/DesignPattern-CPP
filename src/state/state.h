/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef STATE_STATE_H_
#define STATE_STATE_H_

#include <string>
using std::string;

namespace state {
class State {
 public:
  virtual ~State() {}
  virtual void insertQuarter() = 0;
  virtual void ejectQuarter() = 0;
  virtual void turnCrank() = 0;
  virtual void dispense() = 0;
  virtual string toString() = 0;
};
}  // namespace state
#endif  // STATE_STATE_H_
