# CMakeList.txt: MusicPlayer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
set(SOURCE
        music.cpp
        player.cpp
        )
add_library(music SHARED)
set_target_properties(music PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
target_include_directories(music INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_compile_definitions(music PRIVATE JAYSHENG_LIBRARY)

add_executable (MusicPlayer ${SOURCE} MusicPlayer.cpp)
target_link_libraries(MusicPlayer winmm)

# TODO: 如有需要，请添加测试并安装目标。
