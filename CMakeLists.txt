CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(SpaceInvaders)

# C++ Flags
SET(CMAKE_CXX_FLAGS "-Wall")
SET(CMAKE_CXX_FLAGS "-g")
SET(CMAKE_CXX_FLAGS "-ggdb")
SET(CMAKE_CXX_FLAGS "-std=c++11")

# Include the source
ADD_SUBDIRECTORY(src)

# Documentation
SET(BUILD_DOCS TRUE)

if(BUILD_DOCS)
    add_subdirectory(docs)
endif()
