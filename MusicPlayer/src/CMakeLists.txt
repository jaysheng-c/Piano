# CMakeList.txt: MusicPlayer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)
add_library(music SHARED)
link_libxml2(music)

# 将源代码添加到此项目的可执行文件。
set(SOURCE
        serialize.cpp
        xml_writer.cpp
        xml_reader.cpp
        music.cpp
        player.cpp
        )

set_target_properties(music PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
target_sources(music PRIVATE ${SOURCE})
target_link_libraries(music PRIVATE winmm)
target_include_directories(music INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_compile_definitions(music PRIVATE JAYSHENG_LIBRARY)

