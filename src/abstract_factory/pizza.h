/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_PIZZA_H_
#define ABSTRACT_FACTORY_PIZZA_H_

#include <string>
#include <vector>
#include <iostream>  // NOLINT
using std::string;
using std::vector;
using std::cout;
using std::endl;
#include "abstract_factory/dough.h"
#include "abstract_factory/sauce.h"
#include "abstract_factory/cheese.h"
#include "abstract_factory/clams.h"

namespace abstract_factory {
class Pizza {
 public:
  Pizza();
  virtual ~Pizza();
  string name();
  void set_name(string name);
  virtual void prepare() = 0;
  virtual void bake();
  virtual void cut();
  virtual void box();
  string toString();
 protected:
  string name_;
  Dough *dough_;
  Sauce *sauce_;
  Cheese *cheese_;
  Clams *clam_;
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_PIZZA_H_
