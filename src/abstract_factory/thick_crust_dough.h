/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_THICK_CRUST_DOUGH_H_
#define ABSTRACT_FACTORY_THICK_CRUST_DOUGH_H_

#include <string>
using std::string;
#include "abstract_factory/dough.h"

namespace abstract_factory {
class ThickCrustDough : public Dough {
 public:
  string toString();
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_THICK_CRUST_DOUGH_H_
