/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "visitor/car_element_print_visitor.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace visitor {
CarElementPrintVisitor::~CarElementPrintVisitor() {
}

void CarElementPrintVisitor::visit(Wheel *wheel) {
  cout << "Visiting " << wheel->name() << " wheel" << endl;
}

void CarElementPrintVisitor::visit(Engine *engine) {
  cout << "Visiting engine" << endl;
}

void CarElementPrintVisitor::visit(Body *body) {
  cout << "Visiting body" << endl;
}
}  // namespace visitor
