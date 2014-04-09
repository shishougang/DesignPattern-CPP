# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_singleton STATIC
  singleton.cc)

install(TARGETS designpattern_singleton DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(singleton_test ./test/singleton_test.cc)
target_link_libraries(singleton_test designpattern_singleton)
find_package(Threads)
target_link_libraries(singleton_test ${CMAKE_THREAD_LIBS_INIT})
add_test(singleton_test ${EXECUTABLE_OUTPUT_PATH}/singleton_test)
