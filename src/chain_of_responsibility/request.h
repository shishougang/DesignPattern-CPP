/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef CHAINRESPONSIBILITY_REQUEST_H_
#define CHAINRESPONSIBILITY_REQUEST_H_

#include <string>
using std::string;

namespace chain_of_responsibility {
enum ResponsiableLevel {
  kLow,
  kMedium,
  kHigh
};

class Request {
 public:
  virtual ~Request() {}
  void set_level(ResponsiableLevel level) {level_ = level;}
  ResponsiableLevel level() {return level_;}
  void set_description(string description) {description_ = description;}
  string description() {return description_;}
 private:
  string description_;
  ResponsiableLevel level_;
};
}  // namespace chain_of_responsibility
#endif  // CHAINRESPONSIBILITY_REQUEST_H_
