/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_DIMMER_LIGHT_OFF_COMMAND_H_
#define COMMAND_DIMMER_LIGHT_OFF_COMMAND_H_

#include "command/command.h"
#include "command/light.h"

namespace command {
class DimmerLightOffCommand : public Command {
 public:
  explicit DimmerLightOffCommand(Light* light);
  virtual ~DimmerLightOffCommand();
  void execute();
  void undo();
 private:
  Light* light_;
  int level_;
};
}  // namespace command
#endif  // COMMAND_DIMMER_LIGHT_OFF_COMMAND_H_
