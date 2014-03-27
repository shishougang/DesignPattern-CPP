/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_CEILING_FAN_MEDIUM_COMMAND_H_
#define COMMAND_CEILING_FAN_MEDIUM_COMMAND_H_

#include "command/command.h"
#include "command/ceiling_fan.h"

namespace command {
class CeilingFanMediumCommand : public Command {
 public:
  explicit CeilingFanMediumCommand(CeilingFan *ceiling_fan);
  virtual ~CeilingFanMediumCommand();
  void execute();
  void undo();
 private:
  CeilingFan* ceiling_fan_;
  int prev_speed_;
};
}  // namespace command
#endif  // COMMAND_CEILING_FAN_MEDIUM_COMMAND_H_
