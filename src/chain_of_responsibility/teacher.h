/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef CHAINRESPONSIBILITY_TEACHER_H_
#define CHAINRESPONSIBILITY_TEACHER_H_

#include "chain_of_responsibility/staff.h"
#include "chain_of_responsibility/request.h"

namespace chain_of_responsibility {
class Teacher : public Staff {
 public:
  virtual ~Teacher();
  virtual void ProcessRequest(Request *a_request);
};
}  // namespace chain_of_responsibility
#endif  // CHAINRESPONSIBILITY_TEACHER_H_
