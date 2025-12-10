cmake_minimum_required(VERSION 3.19)
project(UseLibrary LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(UseLibrary
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_link_libraries(UseLibrary
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS UseLibrary
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET UseLibrary
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

# Lisää kirjaston header-hakemisto
target_include_directories(UseLibrary PRIVATE "C:/codes/tvt25kmo_cplus_luento_esimerkit/MyMathLibrary")

# Lisää linkitys kirjastoon
target_link_libraries(UseLibrary PRIVATE "C:/codes/tvt25kmo_cplus_luento_esimerkit/MyMathLibrary/build/libMyMathLibrary.dll.a")
