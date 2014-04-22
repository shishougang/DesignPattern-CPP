/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROTOTYPE_PROTOTYPE_MANAGER_H_
#define PROTOTYPE_PROTOTYPE_MANAGER_H_

#include <map>
using std::map;
#include "prototype/prototype.h"

namespace prototype {
class PrototypeManager {
 public:
  PrototypeManager();
  virtual ~PrototypeManager();
  void AddPrototype(Prototype *p, int index);
  Prototype* GetPrototype(int index);
 private:
  map<int, Prototype*> *prototype_map_;
};
}  // namespace prototype
#endif  // PROTOTYPE_PROTOTYPE_MANAGER_H_
