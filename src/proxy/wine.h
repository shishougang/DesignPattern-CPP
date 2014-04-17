/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#ifndef PROXY_WINE_H_
#define PROXY_WINE_H_

namespace proxy {
class Wine {
 public:
  virtual ~Wine() {}
  virtual void drink() = 0;
};
}  // namespace proxy
#endif  // PROXY_WINE_H_
