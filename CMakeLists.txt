cmake_minimum_required(VERSION 3.25)

project(
    ppm-image-tools 
    VERSION 1.0.0 
    LANGUAGES CXX
)

add_executable(${PROJECT_NAME} ./src/main.cpp)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

