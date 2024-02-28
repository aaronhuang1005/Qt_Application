# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\qt_application_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qt_application_autogen.dir\\ParseCache.txt"
  "qt_application_autogen"
  )
endif()
