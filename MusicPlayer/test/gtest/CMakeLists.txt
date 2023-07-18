set(MAIN gtest_main.cpp)

set(LOG_TEST
        ${MAIN}
        )

add_executable(MyTest test_gtest.cpp)
target_sources(MyTest PRIVATE ${LOG_TEST})
link_gtest(MyTest)