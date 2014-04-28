/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <string>
using std::string;
#include "memento/originator.h"
#include "memento/caretaker.h"
using namespace memento;

int main(int argc, char *argv[]) {
  Originator<string> *orig = new Originator<string>();
  Caretaker<string> *care_taker = new Caretaker<string> ();
  
  orig->set_state("state #0");
  care_taker->SaveState(orig);
  orig->ShowState();

  orig->set_state("state #1");
  care_taker->SaveState(orig);
  orig->ShowState();

  orig->set_state("state #2");
  care_taker->SaveState(orig);
  orig->ShowState();

  care_taker->RestoreState(orig, 0);
  orig->ShowState();
  return 0;
}
