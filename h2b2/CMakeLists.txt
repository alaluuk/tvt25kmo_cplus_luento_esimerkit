cmake_minimum_required(VERSION 3.16)

project(h2b2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2b2 main.cpp
    tuote.h tuote.cpp)

include(GNUInstallDirs)
install(TARGETS h2b2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
