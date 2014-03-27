/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/dimmer_light_off_command.h"

namespace command {
DimmerLightOffCommand::DimmerLightOffCommand(Light* light) :
    light_(light), level_(100) {
}

DimmerLightOffCommand::~DimmerLightOffCommand() {
}

void DimmerLightOffCommand::execute() {
  level_ = light_->level();
  light_->off();
}

void DimmerLightOffCommand::undo() {
  light_->dim(level_);
}
}  // namespace command
