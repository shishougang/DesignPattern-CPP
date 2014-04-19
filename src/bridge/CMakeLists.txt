# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_bridge STATIC
  circle_shape.cc)

install(TARGETS designpattern_bridge DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(bridge_circle_shape_test ./test/bridge_circle_shape_test.cc)
target_link_libraries(bridge_circle_shape_test designpattern_bridge)
add_test(bridge_circle_shape_test ${EXECUTABLE_OUTPUT_PATH}/bridge_circle_shape_test)
