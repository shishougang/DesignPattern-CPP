/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROXY_PROXY_BEAR_H_
#define PROXY_PROXY_BEAR_H_

#include "proxy/wine.h"
#include "proxy/drinker.h"

namespace proxy {
class ProxyBear : public Wine {
 public:
  explicit ProxyBear(Drinker *drinker);
  virtual ~ProxyBear();
  virtual void drink();
 private:
  Wine *real_bear_;
  Drinker *drinker_;
};
}  // namespace proxy
#endif  // PROXY_PROXY_BEAR_H_
