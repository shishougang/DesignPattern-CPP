/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "chain_of_responsibility/request.h"
#include "chain_of_responsibility/teacher.h"
#include "chain_of_responsibility/manager.h"
#include "chain_of_responsibility/director.h"
using namespace chain_of_responsibility;  // NOLINT

int main(int argc, char *agrv[]) {
  Teacher *teacher = new Teacher();
  teacher->set_name("Lily");
  Manager *manager = new Manager();
  manager->set_name("Lucy");
  Director *director = new Director();
  director->set_name("LiLei");

  teacher->set_boss(manager);
  manager->set_boss(director);

  Request *first_request = new Request();
  first_request->set_description("The parent requests to have a copy"
                                  " of their kid's daily status");
  first_request->set_level(kLow);
  cout << "Request Info: " + first_request->description() << endl;
  teacher->ProcessRequest(first_request);
  cout << endl;

  Request *second_request = new Request();
  second_request->set_description("The parent requests to pay the tuition.");
  second_request->set_level(kMedium);
  cout << "Request Info: " + second_request->description() << endl;
  teacher->ProcessRequest(second_request);
  cout << endl;
}
