# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "E:/IDE/_ProgramFile/QtProject/Piano/MusicPlayer"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/src/MusicPlayer-build"
  "E:/IDE/_ProgramFile/QtProject/Piano/output/MusicPlayer"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/tmp"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/src/MusicPlayer-stamp"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/src"
  "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/src/MusicPlayer-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/src/MusicPlayer-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/IDE/_ProgramFile/QtProject/Piano/cmake-build-debug/MusicPlayer/cmake/superbuild/MusicPlayer-prefix/src/MusicPlayer-stamp${cfgdir}") # cfgdir has leading slash
endif()
