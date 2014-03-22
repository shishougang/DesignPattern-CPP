# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_factorymethod STATIC
  cheese_pizza.cc
  pepperoni_pizza.cc
  pizza_store.cc
  veggie_pizza.cc
  clam_pizza.cc
  pizza.cc
  simple_pizza_factory.cc)

install(TARGETS designpattern_factorymethod DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(pizza_test ./test/pizza_test.cc)
target_link_libraries(pizza_test designpattern_factorymethod)
add_test(pizza_test ${EXECUTABLE_OUTPUT_PATH}/pizza_test)
