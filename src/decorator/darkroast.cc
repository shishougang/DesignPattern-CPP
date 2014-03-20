/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/darkroast.h"
namespace decorator {
DarkRoast::DarkRoast() {
  description_ = "Dark Roast Coffee";
}

DarkRoast::~DarkRoast() {
}

double DarkRoast::cost() {
  return 0.99;
}
}  // namespace decorator
