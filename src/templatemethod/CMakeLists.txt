# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_templatemethod STATIC
  caffeine_beverage.cc
  coffee.cc
  tea.cc
  caffeine_beverage_with_hook.cc
  coffee_with_hook.cc
  tea_with_hook.cc)

install(TARGETS designpattern_templatemethod DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(beverage_test ./test/beverage_test.cc)
target_link_libraries(beverage_test designpattern_templatemethod)
add_test(beverage_test ${EXECUTABLE_OUTPUT_PATH}/beverage_test)
