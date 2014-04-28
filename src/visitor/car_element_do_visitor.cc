/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "visitor/car_element_do_visitor.h"
#include <iostream>  // NOLINT
using std::cout;
using std::endl;

namespace visitor {
CarElementDoVisitor::~CarElementDoVisitor() {
}

void CarElementDoVisitor::visit(Wheel *wheel) {
  cout << "Kicking my " << wheel->name() << " wheel" << endl;
}

void CarElementDoVisitor::visit(Engine *engine) {
  cout << "Starting my engine" << endl;
}

void CarElementDoVisitor::visit(Body *body) {
  cout << "Moving my body" << endl;
}
}  // namespace visitor
