# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src/libxml2"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src/libxml2-build"
  "E:/IDE/_ProgramFile/QtProject/Piano/output/libxml2"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/tmp"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src/libxml2-stamp"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src/libxml2-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src/libxml2-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/thirdparty/libxml2/libxml2/src/libxml2-stamp${cfgdir}") # cfgdir has leading slash
endif()
