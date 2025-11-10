cmake_minimum_required(VERSION 3.16)

project(deleteMe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(deleteMe main.cpp
    student.h student.cpp
    tuote.h tuote.cpp)

include(GNUInstallDirs)
install(TARGETS deleteMe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
