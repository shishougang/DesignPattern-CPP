/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_CEILING_FAN_LOW_COMMAND_H_
#define COMMAND_CEILING_FAN_LOW_COMMAND_H_

#include "command/command.h"
#include "command/ceiling_fan.h"

namespace command {
class CeilingFanLowCommand : public Command {
 public:
  explicit CeilingFanLowCommand(CeilingFan* ceiling_fan);
  virtual ~CeilingFanLowCommand();
  void execute();
  void undo();
 private:
  CeilingFan* ceiling_fan_;
  int prev_speed_;
};
}  // namespace command
#endif  // COMMAND_CEILING_FAN_LOW_COMMAND_H_
