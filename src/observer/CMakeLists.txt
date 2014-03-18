# just for testing
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/test)

add_library(designpattern_observer STATIC
  current_conditions_display.cc
  heatindex_display.cc
  weather_data.cc
  forecast_display.cc
  statistics_display.cc)

install(TARGETS designpattern_observer DESTINATION ${LIBRARY_OUTPUT_PATH})

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

project_test(weather_station_heatindex_test designpattern_observer)
project_test(weather_station_test designpattern_observer)
