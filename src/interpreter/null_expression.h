/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef INTERPRETER_NULL_EXPRESSION_H_
#define INTERPRETER_NULL_EXPRESSION_H_

#include <stdexcept>
using std::runtime_error;
#include "interpreter/expression.h"

namespace interpreter {
class NullExpression : public Expression {
 public:
  virtual ~NullExpression() {}
  virtual int Interpret() {
    throw runtime_error("Null Expression");
  }
};
}  // namespace interpreter
#endif  // INTERPRETER_NULL_EXPRESSION_H_
