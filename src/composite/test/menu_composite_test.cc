/*
 * \copyright Copyright 2014
 * \license @{
 * Licensed under the Apache License, Version 2.0 (the "License");
 * @}
 */

#include "composite/menu_component.h"
#include "composite/menu_item.h"
#include "composite/waitress.h"
#include "composite/menu.h"
using namespace composite;

int main(int argc, char *argv[]) {
  MenuComponent *pancake_house_menu =
      new Menu("PANCAKE HOUSE MENU", "Breakfast");
  MenuComponent *diner_menu = new Menu("DINER MENU", "Lunch");
  MenuComponent *cafe_menu = new Menu("CAFE MENU", "Dinner");
  MenuComponent *dessert_menu = new Menu("DESSERT MENU", "Dessert of course!");
  MenuComponent *coffee_menu =
      new Menu("COFFEE MENU", "Stuff to go with your afternoon coffee");
  MenuComponent *all_menus = new Menu("ALL MENUS", "All menus combined");

  all_menus->add(pancake_house_menu);
  all_menus->add(diner_menu);
  all_menus->add(cafe_menu);

  pancake_house_menu->add(new MenuItem(
      "K&B's Pancake Breakfast", 
      "Pancakes with scrambled eggs, and toast", 
      true,
      2.99));
  pancake_house_menu->add(new MenuItem(
      "Regular Pancake Breakfast", 
      "Pancakes with fried eggs, sausage", 
      false,
      2.99));
  pancake_house_menu->add(new MenuItem(
      "Blueberry Pancakes",
      "Pancakes made with fresh blueberries, and blueberry syrup",
      true,
      3.49));
  pancake_house_menu->add(new MenuItem(
      "Waffles",
      "Waffles, with your choice of blueberries or strawberries",
      true,
      3.59));

  diner_menu->add(new MenuItem(
      "Vegetarian BLT",
      "(Fakin') Bacon with lettuce & tomato on whole wheat", 
      true, 
      2.99));
  diner_menu->add(new MenuItem(
      "BLT",
      "Bacon with lettuce & tomato on whole wheat", 
      false, 
      2.99));
  diner_menu->add(new MenuItem(
      "Soup of the day",
      "A bowl of the soup of the day, with a side of potato salad", 
      false, 
      3.29));
  diner_menu->add(new MenuItem(
      "Hotdog",
      "A hot dog, with saurkraut, relish, onions, topped with cheese",
      false, 
      3.05));
  diner_menu->add(new MenuItem(
      "Steamed Veggies and Brown Rice",
      "Steamed vegetables over brown rice", 
      true, 
      3.99));
  diner_menu->add(new MenuItem(
      "Pasta",
      "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
      true, 
      3.89));
  diner_menu->add(dessert_menu);

  dessert_menu->add(new MenuItem(
      "Apple Pie",
      "Apple pie with a flakey crust, topped with vanilla icecream",
      true,
      1.59));
  dessert_menu->add(new MenuItem(
      "Cheesecake",
      "Creamy New York cheesecake, with a chocolate graham crust",
      true,
      1.99));
  dessert_menu->add(new MenuItem(
      "Sorbet",
      "A scoop of raspberry and a scoop of lime",
      true,
      1.89));

  cafe_menu->add(new MenuItem(
      "Veggie Burger and Air Fries",
      "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
      true, 
      3.99));
  cafe_menu->add(new MenuItem(
      "Soup of the day",
      "A cup of the soup of the day, with a side salad",
      false, 
      3.69));
  cafe_menu->add(new MenuItem(
      "Burrito",
      "A large burrito, with whole pinto beans, salsa, guacamole",
      true, 
      4.29));

  cafe_menu->add(coffee_menu);

  coffee_menu->add(new MenuItem(
      "Coffee Cake",
      "Crumbly cake topped with cinnamon and walnuts",
      true,
      1.59));
  coffee_menu->add(new MenuItem(
      "Bagel",
      "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin",
      false,
      0.69));
  coffee_menu->add(new MenuItem(
      "Biscotti",
      "Three almond or hazelnut biscotti cookies",
      true,
      0.89));

  Waitress *waitress = new Waitress(all_menus);
  waitress->printVegetarianMenu();

  delete waitress;
  return 0;
}

