/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_CEILING_FAN_OFF_COMMAND_H_
#define COMMAND_CEILING_FAN_OFF_COMMAND_H_

#include "command/command.h"
#include "command/ceiling_fan.h"

namespace command {
class CeilingFanOffCommand : public Command {
 public:
  explicit CeilingFanOffCommand(CeilingFan *ceiling_fan);
  virtual ~CeilingFanOffCommand();
  void execute();
  void undo();
 private:
  CeilingFan* ceiling_fan_;
  int prev_speed_;
};
}  // namespace command
#endif  // COMMAND_CEILING_FAN_OFF_COMMAND_H_
