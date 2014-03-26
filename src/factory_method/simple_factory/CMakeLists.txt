# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_simplefactory STATIC
  cheese_pizza.cc
  pepperoni_pizza.cc
  pizza_store.cc
  veggie_pizza.cc
  clam_pizza.cc
  pizza.cc
  simple_pizza_factory.cc)

install(TARGETS designpattern_simplefactory DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(simple_pizza_test ./test/simple_pizza_test.cc)
target_link_libraries(simple_pizza_test designpattern_simplefactory)
add_test(simple_pizza_test ${EXECUTABLE_OUTPUT_PATH}/simple_pizza_test)
