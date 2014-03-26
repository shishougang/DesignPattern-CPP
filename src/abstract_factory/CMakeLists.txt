# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_abstractfactory STATIC
  cheese_pizza.cc
  ny_pizza_ingredient_factory.cc
  chicago_pizza_ingredient_factory.cc
  pizza.cc
  chicago_pizza_store.cc
  pizza_store.cc
  fresh_clams.cc
  plum_tomato_sauce.cc
  frozen_clams.cc
  clam_pizza.cc
  reggiano_cheese.cc
  marinara_sauce.cc
  ny_pizza_store.cc
  thick_crust_dough.cc
  mozzarella_cheese.cc
  thin_crust_dough.cc)

install(TARGETS designpattern_abstractfactory DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(abstract_method_pizza_test ./test/abstract_method_pizza_test.cc)
target_link_libraries(abstract_method_pizza_test designpattern_abstractfactory)
add_test(abstract_method_pizza_test ${EXECUTABLE_OUTPUT_PATH}/pizza_test)
