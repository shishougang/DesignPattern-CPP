/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "singleton/singleton.h"
using namespace singleton;  // NOLINT

int main(int argc, char *argv[]) {
  Singleton* const instance = Singleton::instance();
  return 0;
}
