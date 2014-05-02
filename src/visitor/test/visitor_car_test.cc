/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <vector>
using std::vector;
#include "visitor/car.h"
#include "visitor/car_element_print_visitor.h"
#include "visitor/car_element_do_visitor.h"
using namespace visitor;

int main(int argc, char *argv[]) {
  CarElementVisitor *car_element_print_visitor = new CarElementPrintVisitor();
  CarElementVisitor *car_element_do_visitor = new CarElementDoVisitor();
  Car *car = new Car();
  car->visit_car(car_element_print_visitor);
  car->visit_car(car_element_do_visitor);
  delete car;
  delete car_element_print_visitor;
  delete car_element_do_visitor;
  return 0;
}
