add_library(build_prameter INTERFACE)

message("1111111111 " ${BASE_DIR})
# 项目头文件引入
target_include_directories(
        build_prameter INTERFACE
        $<BUILD_INTERFACE:${BASE_DIR}/src>
        $<INSTALL_INTERFACE:include>
)

# 编译选项
target_compile_options(build_prameter INTERFACE -Wall
        $<$<COMPILE_LANGUAGE:CXX>:-std=c++11>
        $<$<CONFIG:Release>:-O2>
        $<$<CONFIG:Debug>:-O0 -g -fsanitize=address>
#        $<$<BOOL:${ENABLE_GCOV}>:-fprofile-arcs -ftest-coverage>
#        $<$<BOOL:${ENABLE_GPROF}>:-pg>
        )

#target_compile_definitions(build_prameter INTERFACE
#        $<$<CONFIG:Release>:-CFG_BUILD_NDEBUG>
#        $<$<CONFIG:Debug>:-CFG_BUILD_DEBUG>
#        )

target_link_options(build_prameter INTERFACE
#        -Wl,-z,relro
        $<$<CONFIG:Release>:> #-Wl,-build-id=none
        $<$<CONFIG:Debug>:-O0 -g -fsanitize=address>
#        $<$<BOOL:${ENABLE_GCOV}>:-fprofile-arcs -ftest-coverage>
#        $<$<BOOL:${ENABLE_GPROF}>:-pg>
        )

target_link_directories(build_prameter INTERFACE)
target_link_libraries(build_prameter INTERFACE
        -lpthread
        $<$<CONFIG:Debug>:-static-libasan>
#        $<$<BOOL:${ENABLE_GCOV}>:-lgcov>
        )