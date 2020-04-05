
cmake_minimum_required(VERSION 3.1)

project(DisplayCameraFeed)

find_package(OpenCV REQUIRED)

set(NAME_HEADERS include/DisplayLiveCameraFeed.h)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/../opencv2/Versions/A/Headers)

link_directories(${CMAKE_BINARY_DIR}/bin)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

target_link_libraries( sample_pcTest ${OpenCV_LIBS} )

add_executable(DisplayCameraFeed src/DisplayCameraFeed.cpp)

