/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef INTERPRETER_ADD_EXPRESSION_H_
#define INTERPRETER_ADD_EXPRESSION_H_

#include "interpreter/expression.h"

namespace interpreter {
class AddExpression : public Expression {
 public:
  AddExpression(Expression *left, Expression *right);
  virtual ~AddExpression();
  virtual int Interpret();
 private:
  Expression *left_expression_;
  Expression *right_expression_;
};
}  // namespace interpreter
#endif  // INTERPRETER_ADD_EXPRESSION_H_
