﻿# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project (Piano)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/output CACHE PATH "install path prefix" FORCE)
set(GTEST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/output/gtest)


# 包含子项目
add_subdirectory(thirdparty/gtest)
add_subdirectory(MusicPlayer)
add_subdirectory(ui)
add_subdirectory(MusicPlayer/cmake/superbuild)