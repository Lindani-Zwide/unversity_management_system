# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\school_management_system_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\school_management_system_autogen.dir\\ParseCache.txt"
  "school_management_system_autogen"
  )
endif()
