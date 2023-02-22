# CMakeList.txt : CMake project for dumb_hello_world_things, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (dumb_hello_world_things "dumb_hello_world_things.cpp" "dumb_hello_world_things.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET dumb_hello_world_things PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
