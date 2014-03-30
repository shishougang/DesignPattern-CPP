/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_POPCORN_POPPER_H_
#define FACADE_POPCORN_POPPER_H_

#include <string>
using std::string;

namespace facade {
class PopcornPopper {
 public:
  explicit PopcornPopper(string description);
  virtual ~PopcornPopper();
  void on();
  void off();
  void pop();
  string toString();
 private:
  string description_;
};
}  // namespace facade
#endif  // FACADE_POPCORN_POPPER_H_
