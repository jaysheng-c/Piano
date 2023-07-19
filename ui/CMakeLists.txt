#add_subdirectory(item)


add_executable(Piano)

set(SOURCE
        ${CMAKE_CURRENT_SOURCE_DIR}/item/pianokey.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/item/keyboardGroup.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/piano.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/piano.ui
        )
target_sources(Piano PRIVATE ${SOURCE} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(Piano PRIVATE Qt${QT_VERSION_MAJOR}::Widgets music)
target_include_directories(Piano PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/item>)
target_include_directories(Piano PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_include_directories(Piano PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../MusicPlayer>)
target_compile_definitions(Piano PRIVATE JAYSHENG_LIBRARY)

set_target_properties(Piano PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
#        MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
#        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#        MACOSX_BUNDLE TRUE
        #    WIN32_EXECUTABLE TRUE
        )

install(TARGETS Piano
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )