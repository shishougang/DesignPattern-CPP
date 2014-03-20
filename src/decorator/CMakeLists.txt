# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_decorator STATIC
  beverage.cc
  decaf.cc
  house_blend.cc
  mocha.cc
  whip.cc
  darkroast.cc
  espresso.cc
  milk.cc
  soy.cc)

install(TARGETS designpattern_decorator DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(starbuzz_coffee_test ./test/starbuzz_coffee_test.cc)
target_link_libraries(starbuzz_coffee_test designpattern_decorator)
add_test(starbuzz_coffee_test ${EXECUTABLE_OUTPUT_PATH}/starbuzz_coffee_test)
