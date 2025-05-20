cmake_minimum_required(VERSION 3.22.1)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/DAZZLE2415/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 变量设置，添加子目录后，可以传递到子目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(PNC_MAP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/pnc_map)
set(PROCESS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/process)

# 添加子目录
add_subdirectory(src)