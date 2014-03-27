/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "command/ceiling_fan_low_command.h"

namespace command {
CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan* ceiling_fan) :
    ceiling_fan_(ceiling_fan) {
}

CeilingFanLowCommand::~CeilingFanLowCommand() {
}

void CeilingFanLowCommand::execute() {
  prev_speed_ = ceiling_fan_->speed();
  ceiling_fan_->low();
}

void CeilingFanLowCommand::undo() {
  if (prev_speed_ == CeilingFan::HIGH) {
    ceiling_fan_->high();
  } else if (prev_speed_ == CeilingFan::MEDIUM) {
    ceiling_fan_->medium();
  } else if (prev_speed_ == CeilingFan::LOW) {
    ceiling_fan_->low();
  } else if (prev_speed_ == CeilingFan::OFF) {
    ceiling_fan_->off();
  }
}
}  // namespace command
