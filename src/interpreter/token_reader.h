/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef INTERPRETER_TOKEN_READER_H_
#define INTERPRETER_TOKEN_READER_H_

#include <vector>
using std::vector;
#include <string>
using std::string;
#include "interpreter/expression.h"

namespace interpreter {
class TokenReader {
 public:
  virtual ~TokenReader();
  Expression* ReadToken(vector<string> *token_vector);
  Expression* ReadNextToken(vector<string> *token_vector);
  Expression* ReadNonTerminal(vector<string> *token_vector);
};
}  // namespace interpreter
#endif  // INTERPRETER_TOKEN_READER_H_
