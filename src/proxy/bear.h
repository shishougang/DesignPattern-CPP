/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROXY_BEAR_H_
#define PROXY_BEAR_H_

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "proxy/wine.h"

namespace proxy {
class Bear : public Wine {
 public:
  virtual ~Bear() {}
  virtual void drink() {
    cout << "drink the bear" << endl;
  }
};
}  // namespace proxy
#endif  // PROXY_BEAR_H_
