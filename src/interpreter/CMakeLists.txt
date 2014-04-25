# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_interpreter STATIC
  add_expression.cc
  subtract_expression.cc
  number_expression.cc
  token_reader.cc)

install(TARGETS designpattern_interpreter DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(interpreter_token_test ./test/interpreter_token_test.cc)
target_link_libraries(interpreter_token_test designpattern_interpreter)
add_test(interpreter_token_test ${EXECUTABLE_OUTPUT_PATH}/interpreter_token_test)
