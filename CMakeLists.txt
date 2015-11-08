project(cforce)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})

# Find all the input files
FILE(GLOB inFiles RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.in")

#add_library(Input ${inFiles})
#add_library(${inFiles} UNKNOWN IMPORTED)

add_custom_target(Input SOURCES ${inFiles})

## Compiler flags
if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_BUILD_TYPE "Debug")
endif()
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

