cmake_minimum_required(VERSION 3.22.1)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/DAZZLE2415/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

# 变量设置，添加子目录后，可以传递到子目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(PNC_MAP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/pnc_map)
set(PROCESS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/process)
set(SHOW_RESULT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/show_result)

# 添加三方库
set(EIGEN3_INCLUDE_DIR "/usr/local/include/eigen-3.4.0")
list(APPEND CMAKE_MODULE_PATH "${EIGEN3_INCLUDE_DIR}/cmake")
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)
message(STATUS "****************eigen-3.4.0 founf in ${EIGEN3_INCLUDE_DIR}*****************")
endif()


# 添加子目录
add_subdirectory(src)
add_subdirectory(test/map_test)