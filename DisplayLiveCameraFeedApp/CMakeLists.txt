# Minimum required version of CMake
cmake_minimum_required(VERSION 3.1)

# Project name
project(DisplayLiveCameraFeed)

# OpenCV package is required
find_package(OpenCV REQUIRED)

# Create executable name from source files
add_executable(myCameraFeedApp src/DisplayCameraFeed.cpp)

# Link required libraries to executable
target_link_libraries( myCameraFeedApp ${OpenCV_LIBS} )

