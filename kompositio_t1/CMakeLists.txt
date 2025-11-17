cmake_minimum_required(VERSION 3.16)

project(kompositio_t1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(kompositio_t1 main.cpp
    address.h address.cpp
    person.h person.cpp)

include(GNUInstallDirs)
install(TARGETS kompositio_t1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
