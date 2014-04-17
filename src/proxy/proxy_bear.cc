/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "proxy/proxy_bear.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "proxy/bear.h"

namespace proxy {
#define kDrinkAge 16
ProxyBear::ProxyBear(Drinker *drinker) : drinker_(drinker) {
  real_bear_ = new Bear();
}

ProxyBear::~ProxyBear() {
  delete real_bear_;
  delete drinker_;
}

void ProxyBear::drink() {
  if (drinker_->age() < kDrinkAge) {
    cout << "Sorry the drinker is too young to drink" << endl;
  } else {
    real_bear_->drink();
  }
}
}  // namespace proxy
