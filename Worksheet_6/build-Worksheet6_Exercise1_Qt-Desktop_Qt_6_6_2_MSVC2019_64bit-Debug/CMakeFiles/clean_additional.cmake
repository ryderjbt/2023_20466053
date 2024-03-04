# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Worksheet6_Exercise1_Qt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Worksheet6_Exercise1_Qt_autogen.dir\\ParseCache.txt"
  "Worksheet6_Exercise1_Qt_autogen"
  )
endif()
