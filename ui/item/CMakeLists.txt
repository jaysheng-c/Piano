set(SOURCE
        ${CMAKE_CURRENT_SOURCE_DIR}/pianokey.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/keyboardGroup.cpp
        )
set(UI
        ${CMAKE_CURRENT_SOURCE_DIR}/keyboardGroup.ui
        )


add_library(item SHARED)
set_target_properties(item PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
target_sources(item PRIVATE ${SOURCE} ${UI})
target_link_libraries(item PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_include_directories(item INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_include_directories(item PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../>)
target_compile_definitions(item PRIVATE JAYSHENG_LIBRARY)
