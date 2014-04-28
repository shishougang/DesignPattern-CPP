/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef MEDIATOR_SALES_MEN_H_
#define MEDIATOR_SALES_MEN_H_

#include <string>
using std::string;
#include "mediator/general_staff.h"

namespace mediator {
class SalesMen : public GeneralStaff {
 public:
  explicit SalesMen(string name) :
      GeneralStaff("Sales Man", name) {
  }
  virtual ~SalesMen() {}
};
}  // namespace mediator
#endif  // MEDIATOR_SALES_MEN_H_
