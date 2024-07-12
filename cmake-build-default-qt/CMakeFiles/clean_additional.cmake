# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtMySQL_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtMySQL_autogen.dir\\ParseCache.txt"
  "QtMySQL_autogen"
  )
endif()
