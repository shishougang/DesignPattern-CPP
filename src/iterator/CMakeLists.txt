# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_iterator STATIC
  diner_menu.cc
  menu_item.cc
  pancake_house_menu_iterator.cc
  diner_menu_iterator.cc
  pancake_house_menu.cc
  waitress.cc)

install(TARGETS designpattern_iterator DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(menu_test ./test/menu_test.cc)
target_link_libraries(menu_test designpattern_iterator)
add_test(menu_test ${EXECUTABLE_OUTPUT_PATH}/menu_test)
