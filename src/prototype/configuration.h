/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROTOTYPE_CONFIGURATION_H_
#define PROTOTYPE_CONFIGURATION_H_

#include <string>
using std::string;
#include "prototype/prototype.h"

namespace prototype {
class Configuration : public Prototype {
 public:
  virtual ~Configuration();
  void GetFileInformation();
  virtual Prototype* Clone();
  void ShowInformation();
 private:
  string file_information_;
};
}  // namespace prototype
#endif  // PROTOTYPE_CONFIGURATION_H_
