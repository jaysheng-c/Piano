
set_and_check(MusicPlayer_DIR "${PACKAGE_PREFIX_DIR}/")
set_and_check(MusicPlayer_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")
set_and_check(MusicPlayer_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib")
set_and_check(MusicPlayer_ARCHIVE_DIR "${PACKAGE_PREFIX_DIR}/lib")
set_and_check(MusicPlayer_OBJECT_DIR "${PACKAGE_PREFIX_DIR}/lib")
set_and_check(MusicPlayer_RUNTIME_DIR "${PACKAGE_PREFIX_DIR}/bin")
set_and_check(MusicPlayer_CONFIG_DIR "${PACKAGE_PREFIX_DIR}/lib/cmake")

include(${CMAKE_CURRENT_LIST_DIR}/MusicPlayerTargets.cmake)
cmake_required_components("MusicPlayer")
