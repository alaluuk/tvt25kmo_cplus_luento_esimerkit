cmake_minimum_required(VERSION 3.16)

project(h2b4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2b4 main.cpp
    tuote.cpp tuote.h)

include(GNUInstallDirs)
install(TARGETS h2b4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
