/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_REMOTE_CONTROL_H_
#define COMMAND_REMOTE_CONTROL_H_

#include <string>
using std::string;
#include "command/command.h"
#include "command/no_command.h"

namespace command {
class RemoteControl {
 public:
  RemoteControl();
  virtual ~RemoteControl();
  void setCommand(int slot, Command *on_command, Command *off_command);
  void onButtonWasPushed(int slot);
  void offButtonWasPushed(int slot);
  void undoButtonWasPushed();
  string toString();
 private:
  Command* on_commands_[7];
  Command* off_commands_[7];
  Command* undo_command_;
};
}  // namespace command
#endif  // COMMAND_REMOTE_CONTROL_H_
