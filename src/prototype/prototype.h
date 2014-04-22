/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROTOTYPE_PROTOTYPE_H_
#define PROTOTYPE_PROTOTYPE_H_

namespace prototype {
class Prototype {
 public:
  virtual ~Prototype() {}
  virtual Prototype* Clone() = 0;
};
}  // namespace prototype
#endif  //  PROTOTYPE_PROTOTYPE_H_
