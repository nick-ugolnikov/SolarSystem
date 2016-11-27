cmake_minimum_required(VERSION 3.5)
project(SolarSystem)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/Modules)
set(CMAKE_CXX_STANDARD 11)

find_package(SFML COMPONENTS graphics window system)
set(SOURCE_FILES main.cpp SolarSystemHandler.cpp SolarSystemHandler.h AbstractSpaceObject.cpp AbstractSpaceObject.h Sun.cpp Sun.h Earth.cpp Earth.h Mars.cpp Mars.h Mercury.cpp Mercury.h Venus.cpp Venus.h Jupiter.cpp Jupiter.h Saturn.cpp Saturn.h Uranus.cpp Uranus.h Neptune.cpp Neptune.h Moon.cpp Moon.h Star.cpp Star.h Menu.cpp Menu.h)
include_directories(${SFML_INCLUDE_DIR})
add_executable(SolarSystem ${SOURCE_FILES})
target_link_libraries(SolarSystem ${SFML_LIBRARIES})