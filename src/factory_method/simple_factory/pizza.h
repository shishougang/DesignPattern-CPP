/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACTORY_METHO_PIZZA_H_
#define FACTORY_METHO_PIZZA_H_

#include <string>
#include <vector>
#include <iostream>  // NOLINT
using std::string;
using std::vector;
using std::cout;
using std::endl;

namespace factory_method {
class Pizza {
 public:
  Pizza();
  virtual ~Pizza();
  string name();
  void prepare();
  void bake();
  void cut();
  void box();
  string toString();
 protected:
  string name_;
  string dough_;
  string sauce_;
  vector<string> toppings_;
};
}  // namespace factory_method
#endif  // FACTORY_METHO_PIZZA_H_
