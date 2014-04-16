# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_builder STATIC
  waiter.cc)

install(TARGETS designpattern_builder DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(builder_pizza_test ./test/builder_pizza_test.cc)
target_link_libraries(builder_pizza_test designpattern_builder)
add_test(builder_pizza_test ${EXECUTABLE_OUTPUT_PATH}/builder_pizza_test)
