cmake_minimum_required(VERSION 3.19)
project(Widget_Esim2 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(Widget_Esim2
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    form1.h form1.cpp form1.ui
    form2.h form2.cpp form2.ui
    person.h person.cpp
    style.qss
)

qt_add_resources(RESOURCES_ADDED resource.qrc)
target_sources(Widget_Esim2 PRIVATE ${RESOURCES_ADDED})

target_link_libraries(Widget_Esim2
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS Widget_Esim2
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Widget_Esim2
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
