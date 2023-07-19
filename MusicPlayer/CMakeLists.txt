# CMakeList.txt: MusicPlayer 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)
project(MusicPlayer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INSTALL_MESSAGE ALWAYS)
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/output CACHE PATH "install path prefix")
#set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

set(INSTALL_BASE_DIR "")
set(INSTALL_INCLUDE_DIR include)
set(INSTALL_LIBRARY_DIR lib)
set(INSTALL_ARCHIVE_DIR lib)
set(INSTALL_OBJECT_DIR lib)
set(INSTALL_RUNTIME_DIR bin)
set(INSTALL_CONFIG_DIR lib/cmake)

get_filename_component(TOP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)
set(OUTPUT_BASE_DIR ${CMAKE_INSTALL_PREFIX})
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

include(${BASE_DIR}/cmake/build_prameter.cmake)
include(cmake/dependency/gtest.cmake)
include(cmake/dependency/libxml2.cmake)
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(CTest)
enable_testing()
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --verbose)
add_custom_target(performance)

add_subdirectory(test)
add_subdirectory(src)
add_subdirectory(bin)

install(FILES
        src/interface/music.h
        src/interface/player.h
        DESTINATION ${INSTALL_INCLUDE_DIR})

install(
        TARGETS Player music
        EXPORT MusicPlayer_Targets
        LIBRARY DESTINATION ${INSTALL_LIBRARY_DIR}
        ARCHIVE DESTINATION ${INSTALL_ARCHIVE_DIR}
        OBJECTS DESTINATION ${INSTALL_OBJECT_DIR}
        RUNTIME DESTINATION ${INSTALL_RUNTIME_DIR}
        INCLUDES DESTINATION ${INSTALL_INCLUDE_DIR}
)

#install(
#        EXPORT MusicPlayerTargets
#        FILE MusicPlayerTargets.cmake
#        NAMESPACE jaysheng::
#        DESTINATION ${INSTALL_CONFIG_DIR}
#)

include(CMakePackageConfigHelpers)
configure_package_config_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/cmake/MusicPlayerConfig.cmake.in
        ${CMAKE_CURRENT_BINARY_DIR}/MusicPlayerConfig.cmake
        INSTALL_DESTINATION ${INSTALL_CONFIG_DIR}
        PATH_VARS INSTALL_BASE_DIR
        INSTALL_INCLUDE_DIR
        INSTALL_LIBRARY_DIR
        INSTALL_ARCHIVE_DIR
        INSTALL_OBJECT_DIR
        INSTALL_RUNTIME_DIR
        INSTALL_CONFIG_DIR
        INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX}
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/MusicPlayerConfig.cmake
        DESTINATION ${INSTALL_CONFIG_DIR})