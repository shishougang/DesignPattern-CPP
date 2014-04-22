# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_prototype STATIC
  configuration.cc
  prototype_manager.cc
  user_profile.cc)

install(TARGETS designpattern_prototype DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(prototype_test ./test/prototype_test.cc)
target_link_libraries(prototype_test designpattern_prototype)
add_test(prototype_test ${EXECUTABLE_OUTPUT_PATH}/prototype_test)
