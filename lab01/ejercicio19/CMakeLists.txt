cmake_minimum_required(VERSION 3.16)

project(ejercicio19 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ejercicio19 main.cpp)

include(GNUInstallDirs)
install(TARGETS ejercicio19
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
