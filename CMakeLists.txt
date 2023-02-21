cmake_minimum_required(VERSION 3.24)
project(pong)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        src/main.cpp
        src/engine/graphics/window.cpp
        src/engine/graphics/window.h
        src/engine/engine.h src/engine/engine.cpp)

add_executable(pong ${SOURCES})

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE
        ${SDL2_LIBRARIES}
        GLEW::GLEW
        OpenGL::GL)

target_include_directories(${PROJECT_NAME} PRIVATE
        ${SDL2_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/deps/imgui
        ${GLEW_INCLUDE_DIRS})

