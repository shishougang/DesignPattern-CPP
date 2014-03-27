/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_NO_COMMAND_H_
#define COMMAND_NO_COMMAND_H_

#include "command/command.h"

namespace command {
class NoCommand : public Command {
 public:
  void execute() {}
  void undo() {}
};
}  // namespace command
#endif  // COMMAND_NO_COMMAND_H_
