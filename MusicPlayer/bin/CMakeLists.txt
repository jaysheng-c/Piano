# CMakeList.txt: MusicPlayer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 将源代码添加到此项目的可执行文件。
set(SOURCE
        ${BASE_DIR}/src/music.cpp
        ${BASE_DIR}/src/player.cpp
        )
add_executable(Player ${SOURCE} MusicPlayer.cpp)
target_link_libraries(Player winmm)
