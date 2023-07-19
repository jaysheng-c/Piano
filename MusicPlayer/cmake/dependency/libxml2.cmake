if (NOT LIBXML2_ROOT)
    get_filename_component(LIBXML2_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../output/libxml2 ABSOLUTE)
endif()

include(CMakePrintHelpers)

#find_package(LIBXML2 REQUIRED ${CMAKE_CURRENT_SOURCE_DIR}/../output/libxml2)
#
include_directories(${LIBXML2_ROOT}/include)

function(link_libxml2 TARGET)
    target_link_directories(${TARGET} PUBLIC ${LIBXML2_ROOT}/include)
    target_link_libraries(${TARGET} PRIVATE ${LIBXML2_ROOT}/lib/libxml2.dll)
endfunction()