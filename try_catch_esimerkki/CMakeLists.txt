cmake_minimum_required(VERSION 3.16)

project(try_catch_esimerkki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(try_catch_esimerkki main.cpp)

include(GNUInstallDirs)
install(TARGETS try_catch_esimerkki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
