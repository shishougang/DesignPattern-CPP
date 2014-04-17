/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROXY_DRINKER_H_
#define PROXY_DRINKER_H_

namespace proxy {
class Drinker {
 public:
  explicit Drinker(int age) : age_(age) {
  }
  int age() { return age_; }
  void set_age(int age) { age_ = age; }
 private:
  int age_;
};
}  // namespace proxy
#endif  // PROXY_DRINKER_H_
