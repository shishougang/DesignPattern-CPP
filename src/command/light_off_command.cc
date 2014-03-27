/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/light_off_command.h"

namespace command {
LightOffCommand::LightOffCommand(Light* light) : light_(light) {
}

LightOffCommand::~LightOffCommand() {
}

void LightOffCommand::execute() {
  level_ = light_->level();
  light_->off();
}

void LightOffCommand::undo() {
  light_->dim(level_);
}
}  // namespace command
