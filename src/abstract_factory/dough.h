/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_DOUGH_H_
#define ABSTRACT_FACTORY_DOUGH_H_

#include <string>
using std::string;

namespace abstract_factory {
class Dough {
 public:
  virtual string toString() = 0;
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_DOUGH_H_
