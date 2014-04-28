/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEMENTO_CARETAKER_H_
#define MEMENTO_CARETAKER_H_
#include <vector>
using std::vector;
#include "memento/memento.h"
#include "memento/originator.h"

namespace memento {
template <typename T>
class Caretaker {
 public:
  virtual ~Caretaker() {}
  void SaveState(Originator<T> *orig) {
    memento_array_.push_back(orig->CreateMemento());
  }
  void RestoreState(Originator<T> *orig, int state_number) {
    orig->SetMemento(memento_array_[state_number]);
  }
 private:
  vector<Memento<T> *> memento_array_;
};
}  // namespace memento
#endif  // MEMENTO_CARETAKER_H_
