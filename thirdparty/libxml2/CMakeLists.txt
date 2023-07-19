include(ExternalProject)

# Download and install GoogleTest
#ExternalProject_Add(
#        libxml2
#        INSTALL_DIR ${CMAKE_SOURCE_DIR}/output/libxml2
#        # URL https://github.com/google/googletest/archive/release-1.8.0.zip
#        GIT_REPOSITORY https://gitee.com/rzkn/libxml2.git
#        CONFIGURE_COMMAND ./autogen.sh && make
#        PREFIX ${CMAKE_CURRENT_BINARY_DIR}/libxml2
#        CMAKE_ARGS
#        -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
#        -DCMAKE_BUILD_TYPE=Release
#        -DCMAKE_MAKE_PROGRAM=${CMAKE_MAKE_PROGRAM}
#        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
#        -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
#        -DCMAKE_VERBOSE_MAKEFILE=${CMAKE_VERBOSE_MAKEFILE}
#        INSTALL_COMMAND ${CMAKE_MAKE_PROGRAM} install
#)

set(libxml2_down ${CMAKE_SOURCE_DIR}/output/down/libxml2)
set(libxml2_src ${CMAKE_SOURCE_DIR}/output/src/libxml2)

ExternalProject_Add(
        libxml2
        INSTALL_DIR ${CMAKE_SOURCE_DIR}/output/libxml2
        #        GIT_REPOSITORY https://gitee.com/rzkn/libxml2.git
        URL https://github.com/GNOME/libxml2/releases/tag/v2.9.12/libxml2-2.9.12.tar.gz
#        DOWNLOAD_DIR ${libxml2_down}
#        SOURCE_DIR ${libxml2_src}
#        CONFIGURE_COMMAND ./autoge  n.sh && make ${libxml2_dir}
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}/libxml2
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
        -DCMAKE_BUILD_TYPE=Release
        -DCMAKE_MAKE_PROGRAM=${CMAKE_MAKE_PROGRAM}
        -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
        -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
        -DCMAKE_VERBOSE_MAKEFILE=${CMAKE_VERBOSE_MAKEFILE}
        INSTALL_COMMAND ${CMAKE_MAKE_PROGRAM} install
)