# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_command STATIC
  ceiling_fan.cc
  dimmer_light_on_command.cc
  ceiling_fan_high_command.cc
  light.cc
  ceiling_fan_low_command.cc
  light_off_command.cc
  ceiling_fan_medium_command.cc
  light_on_command.cc
  ceiling_fan_off_command.cc
  remote_control.cc
  dimmer_light_off_command.cc)

install(TARGETS designpattern_command DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(remote_control_test ./test/remote_control_test.cc)
target_link_libraries(remote_control_test designpattern_command)
add_test(remote_control_test ${EXECUTABLE_OUTPUT_PATH}/remote_control_test)
