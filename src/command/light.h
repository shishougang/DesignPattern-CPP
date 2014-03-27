/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_LIGHT_H_
#define COMMAND_LIGHT_H_

#include <string>
using std::string;

namespace command {
class Light {
 public:
  explicit Light(string location);
  virtual ~Light();
  void on();
  void off();
  void dim(int level);
  int level();
 private:
  string location_;
  int level_;
};
}  // namespace command
#endif  // COMMAND_LIGHT_H_
