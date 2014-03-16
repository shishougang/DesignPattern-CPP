# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_strategy STATIC
  decoy_duck.cc
  fly_rocketpowerd.cc
  model_duck.cc
  rubber_duck.cc
  duck.cc
  fly_with_wings.cc
  mute_quack.cc
  squeak.cc
  fly_noway.cc
  mallard_duck.cc
  quack.cc)
install(TARGETS designpattern_strategy DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(duck_test ./test/duck_test.cc)
target_link_libraries(duck_test designpattern_strategy)
add_test(duck_test ${EXECUTABLE_OUTPUT_PATH}/duck_test)
