/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_DIMMER_LIGHT_ON_COMMAND_H_
#define COMMAND_DIMMER_LIGHT_ON_COMMAND_H_

#include "command/command.h"
#include "command/light.h"

namespace command {
class DimmerLightOnCommand : public Command {
 public:
  explicit DimmerLightOnCommand(Light* light);
  void execute();
  void undo();
 private:
  Light* light_;
  int level_;
};
}  // namespace command
#endif  // COMMAND_DIMMER_LIGHT_ON_COMMAND_H_
