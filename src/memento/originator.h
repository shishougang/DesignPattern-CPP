/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEMENOTO_ORIGINATOR_H_
#define MEMENOTO_ORIGINATOR_H_

#include "memento/memento.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "memento/originator.h"

namespace memento {
template<typename T>
class Originator {
 public:
  virtual ~Originator() {}
  Memento<T>* CreateMemento() {
    Memento<T> *m = new Memento<T>();
    m->set_state(state_);
    return m;
  }
  void SetMemento(Memento<T> *m) {
    state_ = m->state();
  }
  void set_state(const T &state) {state_ = state;}
  void ShowState() const {
    cout << state_ << endl;
  }
 private:
  T state_;
};
}  // namespace memento
#endif  // MEMENOTO_ORIGINATOR_H_
