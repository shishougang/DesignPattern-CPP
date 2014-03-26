/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef ABSTRACT_FACTORY_MARINARA_SAUCE_H_
#define ABSTRACT_FACTORY_MARINARA_SAUCE_H_

#include <string>
using std::string;
#include "abstract_factory/sauce.h"

namespace abstract_factory {
class MarinaraSauce : public Sauce {
 public:
  string toString();
};
}  // namespace abstract_factory
#endif  // ABSTRACT_FACTORY_MARINARA_SAUCE_H_
