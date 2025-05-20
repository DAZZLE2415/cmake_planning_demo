project(show_result)

add_library(${PROJECT_NAME}
SHARED
show_result.cpp
)


# 查找并链接 SDL2
find_package(SDL2 REQUIRED)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
${SDL2_INCLUDE_DIRS}
)

target_link_libraries(
${PROJECT_NAME} 
PUBLIC 
${SDL2_LIBRARIES}
)

target_include_directories(${PROJECT_NAME}
PUBLIC
${PROCESS_DIR}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
${SDL_LIBRARIES}
)
