set(MAIN gtest_main.cpp)


include_directories(
        ${LIBXML2_ROOT}/include
        ${BASE_DIR}/src
)
message("gtest {LIBXML2_ROOT} " ${LIBXML2_ROOT})

set(LOG_TEST
        ${MAIN}
        ${BASE_DIR}/src/music.cpp
        ${BASE_DIR}/src/xml_writer.cpp
        ${BASE_DIR}/src/xml_reader.cpp
        )

add_executable(MyTest test_gtest.cpp)
target_sources(MyTest PRIVATE ${LOG_TEST})
#target_link_directories(MyTest INTERFACE $<BUILD_INTERFACE:${BASE_DIR}/src>)
link_gtest(MyTest)
link_libxml2(MyTest)