/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "proxy/wine.h"
#include "proxy/proxy_bear.h"
#include "proxy/drinker.h"
using namespace proxy;  // NOLINT

int main(int argc, char *argv[]) {
  Wine *wine = new ProxyBear(new Drinker(15));
  wine->drink();
  delete wine;
  wine = new ProxyBear(new Drinker(25));
  wine->drink();
  delete wine;
}
