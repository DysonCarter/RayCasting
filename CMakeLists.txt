# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(RayCastingProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SDL2 package
find_package(SDL2 REQUIRED)

# Include SDL2 directories
include_directories(${SDL2_INCLUDE_DIRS})

# Add the executable
add_executable(RayCastingProject main.cpp)

# Link SDL2 library
target_link_libraries(RayCastingProject ${SDL2_LIBRARIES})

# Run Target
add_custom_target(run 
    COMMAND RayCastingProject
    DEPENDS RayCastingProject
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)