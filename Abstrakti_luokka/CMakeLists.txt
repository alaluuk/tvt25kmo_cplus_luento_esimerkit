cmake_minimum_required(VERSION 3.16)

project(Abstrakti_luokka LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Abstrakti_luokka main.cpp
    animal.h animal.cpp
    cat.h cat.cpp
    ianimal.h ianimal.cpp
    dog.h dog.cpp)

include(GNUInstallDirs)
install(TARGETS Abstrakti_luokka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
