# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_composite STATIC
  composite_iterator.cc
  menu.cc
  menu_item.cc
  menu_iterator.cc
  waitress.cc)

install(TARGETS designpattern_composite DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(menu_composite_test ./test/menu_composite_test.cc)
target_link_libraries(menu_composite_test designpattern_composite)
add_test(menu_composite_test ${EXECUTABLE_OUTPUT_PATH}/menu_composite_test)
