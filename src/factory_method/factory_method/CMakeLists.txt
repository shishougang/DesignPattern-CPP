# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_factorymethod STATIC
  chicago_pizza_store.cc
  ny_pizza_store.cc
  pizza.cc
  chicago_style_cheese_pizza.cc
  ny_style_cheese_pizza.cc
  pizza_store.cc
  chicago_style_clam_pizza.cc
  ny_style_clam_pizza.cc
  chicago_style_pepperoni_pizza.cc
  ny_style_pepperoni_pizza.cc)

install(TARGETS designpattern_factorymethod DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(pizza_test ./test/pizza_test.cc)
target_link_libraries(pizza_test designpattern_factorymethod)
add_test(pizza_test ${EXECUTABLE_OUTPUT_PATH}/pizza_test)
