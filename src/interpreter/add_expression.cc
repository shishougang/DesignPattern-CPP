/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "interpreter/add_expression.h"

namespace interpreter {
AddExpression::AddExpression(Expression *left, Expression *right) :
    left_expression_(left), right_expression_(right) {
}

AddExpression::~AddExpression() {
  delete left_expression_;
  delete right_expression_;
}

int AddExpression::Interpret() {
  return left_expression_->Interpret() + right_expression_->Interpret();
}
}  // namespace interpreter
