# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_visitor STATIC
  body.cc
  car_element_print_visitor.cc
  wheel.cc
  car_element_do_visitor.cc
  engine.cc)

install(TARGETS designpattern_visitor DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(visitor_car_test ./test/visitor_car_test.cc)
target_link_libraries(visitor_car_test designpattern_visitor)
add_test(visitor_car_test ${EXECUTABLE_OUTPUT_PATH}/visitor_car_test)
