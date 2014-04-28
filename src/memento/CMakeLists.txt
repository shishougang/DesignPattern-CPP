# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_executable(memento_test ./test/memento_test.cc)
add_test(memento_test ${EXECUTABLE_OUTPUT_PATH}/memento_test)
