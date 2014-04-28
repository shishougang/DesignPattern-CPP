/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "mediator/manager.h"
#include "mediator/sys_admin.h"
#include "mediator/sales_men.h"
using namespace mediator;  // NOLINT

int main(int argc, char *argv[]) {
  Manager mng1("Vivek"), mng2("Pradeep");
  SysAdmin sys_admin("Sony");
  SalesMen sl1("Dave"), s12("Mike"), s13("Allen");

  mng1.BookMeetingRoom("Big Room");
  cout << endl;
  sys_admin.AdviceForSoftwareUpdate("Win7");
  cout << endl;
  return 0;
}
