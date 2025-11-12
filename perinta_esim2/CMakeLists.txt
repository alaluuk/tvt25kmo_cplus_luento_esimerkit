cmake_minimum_required(VERSION 3.16)

project(perinta_esim2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(perinta_esim2 main.cpp
    tuote.h tuote.cpp
    televisio.h televisio.cpp
    pesukone.h pesukone.cpp
    pesukone.cpp pesukone.h)

include(GNUInstallDirs)
install(TARGETS perinta_esim2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
