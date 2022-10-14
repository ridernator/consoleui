cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(consoleui VERSION 1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB SRC_FILES src/*.cpp)
add_executable(consoleui ${SRC_FILES})

target_include_directories(consoleui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)                                                   

target_link_libraries(consoleui PUBLIC ncurses)
