cmake_minimum_required(VERSION 3.14)

project(qt6cb-8-3 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(qt6cb-8-3
  main.cpp
  toaster.h
  freezer.h
  microwave.h
  applicance.cpp
  applicance.h
)
target_link_libraries(qt6cb-8-3 Qt${QT_VERSION_MAJOR}::Core)
