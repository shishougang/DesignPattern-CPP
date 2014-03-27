/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_CEILING_FAN_HIGH_COMMAND_H_
#define COMMAND_CEILING_FAN_HIGH_COMMAND_H_

#include "command/command.h"
#include "command/ceiling_fan.h"

namespace command {
class CeilingFanHighCommand : public Command {
 public:
  explicit CeilingFanHighCommand(CeilingFan *ceiling_fan);
  virtual ~CeilingFanHighCommand();
  void execute();
  void undo();
 private:
  CeilingFan* ceiling_fan_;
  int prev_speed_;
};
}  // namespace command
#endif  // COMMAND_CEILING_FAN_HIGH_COMMAND_H_
