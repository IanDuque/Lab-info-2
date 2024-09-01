cmake_minimum_required(VERSION 3.16)

project(ejercicio27 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ejercicio27 main.cpp)

include(GNUInstallDirs)
install(TARGETS ejercicio27
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
