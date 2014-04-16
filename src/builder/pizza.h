/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef BUILDER_PIZZA_H_
#define BUILDER_PIZZA_H_

#include <string>
using std::string;

namespace builder {
class Pizza {
 public:
  Pizza() {}
  virtual ~Pizza() {}
  void set_dough(string dough) { dough_ = dough; }
  void set_sauce(string sauce) { sauce_ = sauce; }
  void set_topping(string topping) { topping_ = topping; }
  string toString() {
    string display;
    display.append("--- pizza ---\n");
    display.append(dough_ + "\n");
    display.append(sauce_ + "\n");
    display.append(topping_ + "\n");
    return display;
  }
 private:
  string dough_;
  string sauce_;
  string topping_;
};
}  // namespace builder
#endif  // BUILDER_PIZZA_H_
