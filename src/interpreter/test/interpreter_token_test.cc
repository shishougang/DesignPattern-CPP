/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::stringstream;
#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "interpreter/expression.h"
#include "interpreter/token_reader.h"
using namespace interpreter;  // NOLINT

void split(const string &s, char delim, vector<string> *elems) {
  stringstream ss(s);
  string item;
  while (getline(ss, item, delim)) {
    elems->push_back(item);
  }
}

vector<string> split(const string &s, char delim) {
  vector<string> elems;
  split(s, delim, &elems);
  return elems;
}

int main(int argc, char *argv[]) {
  string token_string = "+ - 10 2 3";
  vector<string> token_vector;
  token_vector = split(token_string, ' ');

  TokenReader *token_reader = new TokenReader();
  Expression *expression = token_reader->ReadToken(&token_vector);
  cout << expression->Interpret() << endl;
}
