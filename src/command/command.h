/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef COMMAND_COMMAND_H_
#define COMMAND_COMMAND_H_
namespace command {
class Command {
 public:
  virtual void execute() = 0;
  virtual void undo() = 0;
};
}  // namespace command
#endif  // COMMAND_COMMAND_H_
