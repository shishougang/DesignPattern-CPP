/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "interpreter/subtract_expression.h"

namespace interpreter {
SubtractExpression::SubtractExpression(Expression *left, Expression *right) :
    left_expression_(left), right_expression_(right) {
}

SubtractExpression::~SubtractExpression() {
}

int SubtractExpression::Interpret() {
  return left_expression_->Interpret() - right_expression_->Interpret();
}
}  // namespace interpreter
