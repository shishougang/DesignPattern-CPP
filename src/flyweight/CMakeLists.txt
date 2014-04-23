# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_flyweight STATIC
 circle.cc
 shape_factory.cc)

install(TARGETS designpattern_flyweight DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(flyweight_shape_test ./test/flyweight_shape_test.cc)
target_link_libraries(flyweight_shape_test designpattern_flyweight)
add_test(flyweight_shape_test ${EXECUTABLE_OUTPUT_PATH}/flyweight_shape_test)
