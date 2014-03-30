# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_adapter STATIC
  duck_adapter.cc
  mallard_duck.cc
  turkey_adapter.cc
  wild_turkey.cc)

install(TARGETS designpattern_adapter DESTINATION ${LIBRARY_OUTPUT_PATH})

# Define an executable and adds a test for it using the most basic libraries
# Args:
#    name  - name of test. Must have a source file in test/<name>.cc
#    ...   - optional list of additional library dependencies
function(project_test name)
  add_executable(${name} test/${name}.cc)
  foreach (lib "${ARGN}")
    target_link_libraries(${name} ${lib})
  endforeach()
  add_test(${name} ${EXECUTABLE_OUTPUT_PATH}/${name})
endfunction()

project_test(duck_adapter_test designpattern_adapter)
project_test(turkey_adapter_test designpattern_adapter)
