# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_mediator STATIC
  general_staff.cc
  manager.cc
  sys_admin.cc)

install(TARGETS designpattern_mediator DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(mediator_staff_test ./test/mediator_staff_test.cc)
target_link_libraries(mediator_staff_test designpattern_mediator)
add_test(mediator_staff_test ${EXECUTABLE_OUTPUT_PATH}/mediator_staff_test)
