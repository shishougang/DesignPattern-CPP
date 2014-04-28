/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <vector>
using std::vector;
#include "visitor/car_element.h"
#include "visitor/wheel.h"
#include "visitor/engine.h"
#include "visitor/body.h"
#include "visitor/car_element_visitor.h"
#include "visitor/car_element_print_visitor.h"
#include "visitor/car_element_do_visitor.h"
using namespace visitor;

void visit_elements(const vector<CarElement *> &elements_array,
                    CarElementVisitor *visitor) {
  for(unsigned int i = 0; i < elements_array.size(); ++i) {
    CarElement *element = elements_array[i];
    element->accept(visitor);
  }
}

int main(int argc, char *argv[]) {
  vector<CarElement *> elements_array;
  elements_array.push_back(new Wheel("front left"));
  elements_array.push_back(new Wheel("front right"));
  elements_array.push_back(new Body());
  elements_array.push_back(new Engine());

  CarElementVisitor *car_element_print_visitor = new CarElementPrintVisitor();
  CarElementVisitor *car_element_do_visitor = new CarElementDoVisitor();
  visit_elements(elements_array, car_element_print_visitor);
  visit_elements(elements_array, car_element_do_visitor);
  return 0;
}
