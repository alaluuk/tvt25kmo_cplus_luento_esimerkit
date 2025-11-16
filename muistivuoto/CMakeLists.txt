cmake_minimum_required(VERSION 3.16)

project(muistivuoto LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(muistivuoto main.cpp
    dog.h dog.cpp)

include(GNUInstallDirs)
install(TARGETS muistivuoto
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
