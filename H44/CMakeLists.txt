cmake_minimum_required(VERSION 3.16)

project(H44 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H44 main.cpp
    Car.cpp Car.h Engine.cpp Engine.h Wheel.cpp Wheel.h)

include(GNUInstallDirs)
install(TARGETS H44
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
