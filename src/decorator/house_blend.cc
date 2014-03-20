/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "decorator/house_blend.h"

namespace decorator {
HouseBlend::HouseBlend() {
  description_ = "House Blend Coffee";
}

HouseBlend::~HouseBlend() {
}

double HouseBlend::cost() {
  return 0.89;
}
}  // namespace decorator
