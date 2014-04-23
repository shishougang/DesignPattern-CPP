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
#include <stdlib.h>
#include "flyweight/circle.h"
#include "flyweight/shape_factory.h"
using namespace flyweight;

string getRandomColor(vector<string>&colors) {
  return colors[rand() % colors.size()];
}

int getRandomX() {
  return rand() % 100;
}

int getRandomY() {
  return rand() % 100;
}

int main(int argc, char *argv[]) {
  vector<string> colors;
  colors.push_back("Red");
  colors.push_back("Green");
  colors.push_back("Blue");
  colors.push_back("White");
  colors.push_back("Black");

  for(int i = 0; i < 20; ++i) {
    Circle *circle = dynamic_cast<Circle *>(ShapeFactory::getCircle(
        getRandomColor(colors)));
    circle->set_x(getRandomX());
    circle->set_y(getRandomY());
    circle->set_radius(100);
    circle->draw();
  }
  return 0;
}

  
