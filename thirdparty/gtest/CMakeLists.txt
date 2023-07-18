include(ExternalProject)

# Download and install GoogleTest
ExternalProject_Add(
    gtest
    INSTALL_DIR ${CMAKE_SOURCE_DIR}/output/gtest
    # URL https://github.com/google/googletest/archive/release-1.8.0.zip
    GIT_REPOSITORY https://gitee.com/loveinfinity/googletest.git
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
    CMAKE_ARGS
    -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
    -DCMAKE_BUILD_TYPE=Release
    -DCMAKE_MAKE_PROGRAM=${CMAKE_MAKE_PROGRAM}
    -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
    -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
    -DCMAKE_VERBOSE_MAKEFILE=${CMAKE_VERBOSE_MAKEFILE}
    INSTALL_COMMAND ${CMAKE_MAKE_PROGRAM} install
)

ExternalProject_Get_Property(gtest source_dir binary_dir)

# set(gtest_INCLUDE "${INSTALL_DIR}/include")
# set(gtest_LIB "${INSTALL_DIR}/src/lib64")
# include_directories(${gtest_INCLUDE})
# link_directories(${gtest_LIB})

message("gtest source_dir: " ${source_dir})
message("gtest binary_dir: " ${binary_dir})

#create a libgtest target to be used as a dependency by test programs
add_library(libgtest IMPORTED STATIC GLOBAL)
target_link_libraries(libgtest INTERFACE pthread)
add_dependencies(libgtest gtest)

# set libgtest properties
set_target_properties(libgtest PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/lib64/libgtest.a"
    "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
    )

# create a libgmock target to be used as a dependency by test programs
add_library(libgmock IMPORTED STATIC GLOBAL)
add_dependencies(libgmock gtest)

# set libgtest properties
set_target_properties(libgmock PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/lib64/libgmock.a"
    "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
    )

# 自定义make check命令运行gtest测试用例，解决make test命令不输出gtest测试信息的问题
# add_custom_command(check COMMAND ${CAMKE_CTEST_COMMAND} --verbose)    

