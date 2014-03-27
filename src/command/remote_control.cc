/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/remote_control.h"
#include <cstdio>
#include <typeinfo>

namespace command {
RemoteControl::RemoteControl() {
  for (int i = 0; i < 7; ++i) {
    on_commands_[i] = new NoCommand();
    off_commands_[i] = new NoCommand();
  }
  undo_command_ = NULL;
}

RemoteControl::~RemoteControl() {
  for (int i = 0; i < 7; ++i) {
    delete on_commands_[i];
    delete off_commands_[i];
  }
}

void RemoteControl::setCommand(int slot, Command *on_command,
                               Command *off_command) {
  if (on_commands_[slot] != on_command) {
    delete on_commands_[slot];
  }
  if (off_commands_[slot] != off_command) {
    delete off_commands_[slot];
  }
  on_commands_[slot] = on_command;
  off_commands_[slot] = off_command;
}

void RemoteControl::onButtonWasPushed(int slot) {
  on_commands_[slot]->execute();
  undo_command_ = on_commands_[slot];
}

void RemoteControl::offButtonWasPushed(int slot) {
  off_commands_[slot]->execute();
  undo_command_ = off_commands_[slot];
}

void RemoteControl::undoButtonWasPushed() {
  if (undo_command_) {
    undo_command_->undo();
  }
}

string RemoteControl::toString() {
  string display;
  display.append("\n------ Remote Control ------\n");
  char tmpstr[100];
  for (int i = 0; i < 7; ++i) {
    snprintf(tmpstr, sizeof(tmpstr), "[slot %d] %s  %s\n", i,
             typeid(*on_commands_[i]).name(), typeid(*off_commands_[i]).name());
    display.append(string(tmpstr));
  }
  snprintf(tmpstr, sizeof(tmpstr), "[undo] %s\n",
           typeid(*undo_command_).name());
  display.append(string(tmpstr));
  return display;
}
}  // namespace command
