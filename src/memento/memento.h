/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEMENTO_MEMENTO_H_
#define MEMENTO_MEMENTO_H_

namespace memento {
template<typename T>
class Memento {
 public:
  virtual ~Memento() {}
  T state() const {return state_;}
  void set_state(T state) {state_ = state;}
 private:
  T state_;
};
}  // namespace memento
#endif  // MEMENTO_MEMENTO_H_
