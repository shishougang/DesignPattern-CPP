/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_FRESH_CLAMS_H_
#define ABSTRACT_FACTORY_FRESH_CLAMS_H_

#include <string>
using std::string;
#include "abstract_factory/clams.h"

namespace abstract_factory {
class FreshClams : public Clams {
 public:
  string toString();
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_FRESH_CLAMS_H_
