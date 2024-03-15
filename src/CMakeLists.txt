add_library(diff_eq
   SHARED
   diff_eq.cpp)

target_include_directories(diff_eq
    PUBLIC ${PROJECT_SOURCE_DIR}/src)

add_executable(a.out main.cpp)
target_link_libraries(a.out diff_eq)
