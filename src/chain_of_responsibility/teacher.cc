/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "chain_of_responsibility/teacher.h"
#include <iostream>
using std::cout;
using std::endl;

namespace chain_of_responsibility {
Teacher::~Teacher() {
}

void Teacher::ProcessRequest(Request *a_request) {
  if (a_request->level() == kLow) {
    cout << "This is " << name_ << ". I am a teacher of this daycare. " <<
        "Your request has been approved!" << endl;
  } else {
    if (boss_ != NULL) {
      cout << "This is " << name_ << ". I am a teacher of this daycare. " <<
          " I am not able to process your request. " << "My boss " <<
          boss_->name() << "will review your request" << endl;
      boss_->ProcessRequest(a_request);
    } else {
      cout << "No boss assigned" << endl;
    }
  }
}
}  // namespace chain_of_responsibility
