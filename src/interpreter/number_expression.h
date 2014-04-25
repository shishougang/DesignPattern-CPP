/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef INTERPRETER_NUMBER_EXPRESSION_H_
#define INTERPRETER_NUMBER_EXPRESSION_H_

#include "interpreter/expression.h"

namespace interpreter {
class NumberExpression : public Expression {
 public:
  explicit NumberExpression(int num);
  virtual ~NumberExpression();
  virtual int Interpret();
 private:
  int number_;
};
}  // namespace interpreter
#endif  // INTERPRETER_NUMBER_EXPRESSION_H_
