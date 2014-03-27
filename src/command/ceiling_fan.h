/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_CEILING_FAN_H_
#define COMMAND_CEILING_FAN_H_

#include <string>
using std::string;

namespace command {
class CeilingFan {
 public:
  explicit CeilingFan(string location);
  virtual ~CeilingFan();

  enum SpeedType {
    HIGH,
    MEDIUM,
    LOW,
    OFF,
  };

  void high();
  void medium();
  void low();
  void off();
  int speed();
 private:
  string location_;
  int speed_;
};
}  // namespace command
#endif  // COMMAND_CEILING_FAN_H_
