/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef CHAINRESPONSIBILITY_DIRECTOR_H_
#define CHAINRESPONSIBILITY_DIRECTOR_H_

#include "chain_of_responsibility/staff.h"
#include "chain_of_responsibility/request.h"

namespace chain_of_responsibility {
class Director : public Staff {
 public:
  virtual ~Director();
  virtual void ProcessRequest(Request *a_request);
};
}  // namespace chain_fo_responsibility
#endif  // CHAINRESPONSIBILITY_DIRECTOR_H_
