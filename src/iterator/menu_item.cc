/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "iterator/menu_item.h"

namespace iterator {
MenuItem::MenuItem(const string &name, const string &description,
                   bool vegetarian, double price) :
    name_(name), description_(description), vegetarian_(vegetarian),
    price_(price) {
}

MenuItem::~MenuItem() {
}
}  // namespace iterator
