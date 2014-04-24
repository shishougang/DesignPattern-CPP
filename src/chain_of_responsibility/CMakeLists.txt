# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_chainresponsibility STATIC
  director.cc
  manager.cc
  teacher.cc)

install(TARGETS designpattern_chainresponsibility DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(staff_responsibility_test ./test/staff_responsibility_test.cc)
target_link_libraries(staff_responsibility_test designpattern_chainresponsibility)
add_test(staff_responsibility_test ${EXECUTABLE_OUTPUT_PATH}/staff_responsibility_test)
