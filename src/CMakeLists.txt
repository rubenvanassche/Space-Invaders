# Extend the CMake module path to find the FindSFML.cmake
# file in {project root}/cmake/Modules
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cMake" ${CMAKE_MODULE_PATH})

# The source files to compile
SET(SRC SpaceInvaders.cpp Alien.cpp Bullet.cpp Point.cpp Size.cpp Color.cpp)

# Look for SFML >= 2.0, with the specific subcomponents listed below
FIND_PACKAGE(SFML 2 COMPONENTS system window audio graphics)

# Add include dirs for SFML
# (The SFML_INCLUDE_DIR variable is defined by FindSFML.cmake, if SFML was found)
INCLUDE_DIRECTORIES(${SFML_INCLUDE_DIR})

# The program we're compiling with the sources set above
ADD_EXECUTABLE(Space\ Invaders ${SRC})

# Link target to SFML libs
# (The SFML_LIBRARIES variable is defined by FindSFML.cmake, if SFML was found)
TARGET_LINK_LIBRARIES(Space\ Invaders ${SFML_LIBRARIES})

INSTALL(TARGETS Space\ Invaders DESTINATION ${CMAKE_SOURCE_DIR})