# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_proxy STATIC
  proxy_bear.cc)

install(TARGETS designpattern_proxy DESTINATION ${LIBRARY_OUTPUT_PATH})

add_executable(proxy_drink_test ./test/proxy_drink_test.cc)
target_link_libraries(proxy_drink_test designpattern_proxy)
add_test(proxy_drink_test ${EXECUTABLE_OUTPUT_PATH}/proxy_drink_test)
