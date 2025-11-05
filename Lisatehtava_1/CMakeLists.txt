cmake_minimum_required(VERSION 3.16)

project(Lisatehtava_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lisatehtava_1 main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS Lisatehtava_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
