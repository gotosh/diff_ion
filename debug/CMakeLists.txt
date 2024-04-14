add_library(file_debug
    SHARED
    file_debug.cpp)

target_include_directories(diff_eq
    PUBLIC ${PROJECT_SOURCE_DIR}/debug)

target_link_libraries(a.out file_debug)