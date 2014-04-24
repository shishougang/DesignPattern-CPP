/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef CHAINRESPONSIBILITY_MANAGER_H_
#define CHAINRESPONSIBILITY_MANAGER_H_

#include "chain_of_responsibility/staff.h"
#include "chain_of_responsibility/request.h"

namespace chain_of_responsibility {
class Manager : public Staff {
 public:
  virtual ~Manager();
  virtual void ProcessRequest(Request *a_request);
};
}  // namespace chain_of_responsibility
#endif  // CHAINRESPONSIBILITY_MANAGER_H_
