/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef OBSERVER_DISPLAY_ELEMENT_H_
#define OBSERVER_DISPLAY_ELEMENT_H_

namespace observer {
class DisplayElement {
 public:
  virtual ~DisplayElement() {} 
  virtual void display() = 0;
};
}  // namespace observer

#endif  // OBSERVER_DISPLAY_ELEMENT_H_
