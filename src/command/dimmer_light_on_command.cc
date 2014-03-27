/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/dimmer_light_on_command.h"

namespace command {
DimmerLightOnCommand::DimmerLightOnCommand(Light* light) : light_(light) {
}

void DimmerLightOnCommand::execute() {
  level_ = light_->level();
  light_->dim(75);
}

void DimmerLightOnCommand::undo() {
  light_->dim(level_);
}
}  // namespace command
