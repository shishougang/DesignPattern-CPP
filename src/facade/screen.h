/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef FACADE_SCREEN_H_
#define FACADE_SCREEN_H_

#include <string>
using std::string;

namespace facade {
class Screen {
 public:
  explicit Screen(string description);
  virtual ~Screen();
  void up();
  void down();
  string toString();
 private:
  string description_;
};
}  // namespace facade
#endif  // FACADE_SCREEN_H_
