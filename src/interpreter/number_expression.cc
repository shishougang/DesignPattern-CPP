/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "interpreter/number_expression.h"

namespace interpreter {
NumberExpression::NumberExpression(int num) : number_(num) {
}

NumberExpression::~NumberExpression() {
}

int NumberExpression::Interpret() {
  return number_;
}
}  // namespace interpreter
