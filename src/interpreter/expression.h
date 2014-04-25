/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef INTERPRETER_EXPRESSION_H_
#define INTERPRETER_EXPRESSION_H_

namespace interpreter {
class Expression {
 public:
  virtual ~Expression() {}
  virtual int Interpret() = 0;
};
}  // namespace interpreter
#endif  // INTERPRETER_EXPRESSION_H_
