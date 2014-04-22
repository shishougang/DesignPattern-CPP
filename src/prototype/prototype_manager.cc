/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "prototype/prototype_manager.h"

namespace prototype {
PrototypeManager::PrototypeManager() {
  prototype_map_ = new map<int, Prototype*>;
}

PrototypeManager::~PrototypeManager() {
  delete prototype_map_;
}

void PrototypeManager::AddPrototype(Prototype *p, int index) {
  (*prototype_map_)[index] = p;
}
      

Prototype* PrototypeManager::GetPrototype(int index) {
  return prototype_map_->at(index)->Clone();
}
}  // namespace prototype
