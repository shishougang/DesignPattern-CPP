/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include <iostream>  // NOLINT
using std::cout;
using std::endl;
#include "strategy/mallard_duck.h"
#include "strategy/rubber_duck.h"
#include "strategy/decoy_duck.h"
#include "strategy/model_duck.h"
#include "strategy/fly_rocketpowered.h"
using namespace strategy;  // NOLINT
int main(int argc, char *argv[]) {
  MallardDuck *mallard = new MallardDuck;
  RubberDuck *rubberDuckie = new RubberDuck;
  DecoyDuck *decoy = new DecoyDuck;
  ModelDuck *model = new ModelDuck;

  mallard->performQuack();
  rubberDuckie->performQuack();
  decoy->performQuack();

  model->performFly();
  model->set_fly_behavior(new FlyRocketPowered);
  model->performFly();
  return 0;
}
