/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>
using std::cout;
using std::endl;
#include "command/remote_control.h"
#include "command/light.h"
#include "command/light_on_command.h"
#include "command/light_off_command.h"
#include "command/ceiling_fan.h"
#include "command/ceiling_fan_medium_command.h"
#include "command/ceiling_fan_high_command.h"
#include "command/ceiling_fan_off_command.h"
using namespace command;

int main(int argc, char* argv[]){
  RemoteControl* remote_control = new RemoteControl();
  Light* living_room_light = new Light("Living Room");
  LightOnCommand* living_room_light_on = new LightOnCommand(
      living_room_light);
  LightOffCommand* living_room_light_off = new LightOffCommand(
      living_room_light);

  remote_control->setCommand(0, living_room_light_on, living_room_light_off);
  remote_control->onButtonWasPushed(0);
  remote_control->offButtonWasPushed(0);
  cout << remote_control->toString() << endl;
  remote_control->undoButtonWasPushed();
  remote_control->onButtonWasPushed(0);
  cout << remote_control->toString() << endl;
  remote_control->undoButtonWasPushed();

  CeilingFan* ceiling_fan = new CeilingFan("Living Room");
  CeilingFanMediumCommand* ceiling_fan_medium =
      new CeilingFanMediumCommand(ceiling_fan);
  CeilingFanHighCommand* ceiling_fan_high =
      new CeilingFanHighCommand(ceiling_fan);
  CeilingFanOffCommand* ceiling_fan_off =
      new CeilingFanOffCommand(ceiling_fan);

  remote_control->setCommand(0, ceiling_fan_medium, ceiling_fan_off);
  remote_control->setCommand(1, ceiling_fan_high, ceiling_fan_off);

  remote_control->onButtonWasPushed(0);
  remote_control->offButtonWasPushed(0);
  cout << remote_control->toString() << endl;
  remote_control->undoButtonWasPushed();

  remote_control->onButtonWasPushed(1);
  cout << remote_control->toString() << endl;
  remote_control->undoButtonWasPushed();

  delete ceiling_fan;
  delete living_room_light;
  delete remote_control;
}
