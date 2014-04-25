/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "interpreter/token_reader.h"
#include <cstdlib>
#include "interpreter/number_expression.h"
#include "interpreter/add_expression.h"
#include "interpreter/subtract_expression.h"
#include "interpreter/null_expression.h"

namespace interpreter {
TokenReader::~TokenReader() {
}

Expression* TokenReader::ReadToken(vector<string> *token_vector) {
  return ReadNextToken(token_vector);
}

Expression* TokenReader::ReadNextToken(vector<string> *token_vector) {
  string token = token_vector->at(0);
  if (token == "+" || token == "-"){
    return ReadNonTerminal(token_vector);
  } else {
    int number = atoi(token.c_str());
    token_vector->erase(token_vector->begin());
    return new NumberExpression(number);
  }
}

Expression* TokenReader::ReadNonTerminal(vector<string> *token_vector) {
  string token = token_vector->at(0);
  token_vector->erase(token_vector->begin());
  Expression *left = ReadNextToken(token_vector);
  Expression *right = ReadNextToken(token_vector);
  if (token == "+") {
    return new AddExpression(left, right);
  } else if (token == "-") {
    return new SubtractExpression(left, right);
  }
  return new NullExpression();
}
}  // namespace interpreter
