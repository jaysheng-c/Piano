if (NOT GTEST_ROOT)
    get_filename_component(GTEST_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/../output/gtest ABSOLUTE)
endif()

include(CMakePrintHelpers)

message("GTEST_ROOT: " ${GTEST_ROOT})
message("GTEST_INCLUDE_DIR: " ${GTEST_INCLUDE_DIR})
# cmake_print_component(GTESTSOURCE)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIR})

function(link_gtest TARGET)
    target_link_directories(${TARGET} PUBLIC ${GTEST_INCLUDE_DIR})
    target_link_libraries(${TARGET} PRIVATE ${GTEST_LIBRARIES} pthread)
#    target_link_libraries(${TARGET} PRIVATE ${GTEST_LIBRARIES} pthread build_prameter)
endfunction()