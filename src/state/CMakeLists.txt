# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_state STATIC
  gumball_machine.cc
  no_quarter_state.cc
  sold_state.cc
  has_quarter_state.cc
  sold_out_state.cc)

install(TARGETS designpattern_state DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(gumball_machine_test ./test/gumball_machine_test.cc)
target_link_libraries(gumball_machine_test designpattern_state)
add_test(gumball_machine_test ${EXECUTABLE_OUTPUT_PATH}/gumball_machine_test)
