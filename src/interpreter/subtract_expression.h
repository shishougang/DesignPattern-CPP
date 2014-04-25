/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef INTERPRETER_SUBTRACT_EXPRESSION_H_
#define INTERPRETER_SUBTRACT_EXPRESSION_H_

#include "interpreter/expression.h"

namespace interpreter {
class SubtractExpression : public Expression {
 public:
  SubtractExpression(Expression *left, Expression *right);
  virtual ~SubtractExpression();
  virtual int Interpret();
 private:
  Expression *left_expression_;
  Expression *right_expression_;
};
}  // namespace interpreter
#endif  // INTERPRETER_SUBTRACT_EXPRESSION_H_
