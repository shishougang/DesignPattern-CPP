/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_LIGHT_ON_COMMAND_H_
#define COMMAND_LIGHT_ON_COMMAND_H_

#include "command/command.h"
#include "command/light.h"

namespace command {
class LightOnCommand : public Command {
 public:
  explicit LightOnCommand(Light* light);
  void execute();
  void undo();
 private:
  Light* light_;
  int level_;
};
}  // namespace command
#endif  // COMMAND_LIGHT_ON_COMMAND_H_
