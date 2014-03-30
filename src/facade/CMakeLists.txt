# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_facade STATIC
  amplifier.cc
  home_theater_facade.cc
  screen.cc
  cd_player.cc
  popcorn_popper.cc
  theater_lights.cc
  dvd_player.cc
  projector.cc
  tuner.cc)

install(TARGETS designpattern_facade DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(home_theater_test ./test/home_theater_test.cc)
target_link_libraries(home_theater_test designpattern_facade)
add_test(home_theater_test ${EXECUTABLE_OUTPUT_PATH}/home_theater_test)
