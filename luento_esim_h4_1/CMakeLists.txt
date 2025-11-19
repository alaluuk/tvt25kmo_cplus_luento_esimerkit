cmake_minimum_required(VERSION 3.16)

project(luento_esim_h4_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(luento_esim_h4_1 main.cpp
    address.h address.cpp
    person.h person.cpp)

include(GNUInstallDirs)
install(TARGETS luento_esim_h4_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
