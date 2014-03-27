/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/light_on_command.h"

namespace command {
LightOnCommand::LightOnCommand(Light* light) : light_(light) {
}

void LightOnCommand::execute() {
  level_ = light_->level();
  light_->on();
}

void LightOnCommand::undo() {
  light_->dim(level_);
}
}  // namespace command
