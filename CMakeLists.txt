cmake_minimum_required(VERSION 3.28)
project(keiko-kodo)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(keiko-kodo
    src/main.cpp
    src/project-euler.cpp
    src/project-euler-0001-0100.cpp
)
target_include_directories(keiko-kodo PRIVATE ${PROJECT_SOURCE_DIR}/src)